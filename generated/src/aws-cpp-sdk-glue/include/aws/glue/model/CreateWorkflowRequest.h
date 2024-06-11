﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateWorkflowRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateWorkflowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkflow"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name to be assigned to the workflow. It should be unique within your
     * account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateWorkflowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateWorkflowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateWorkflowRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateWorkflowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateWorkflowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateWorkflowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultRunProperties() const{ return m_defaultRunProperties; }
    inline bool DefaultRunPropertiesHasBeenSet() const { return m_defaultRunPropertiesHasBeenSet; }
    inline void SetDefaultRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties = value; }
    inline void SetDefaultRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties = std::move(value); }
    inline CreateWorkflowRequest& WithDefaultRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetDefaultRunProperties(value); return *this;}
    inline CreateWorkflowRequest& WithDefaultRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetDefaultRunProperties(std::move(value)); return *this;}
    inline CreateWorkflowRequest& AddDefaultRunProperties(const Aws::String& key, const Aws::String& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, value); return *this; }
    inline CreateWorkflowRequest& AddDefaultRunProperties(Aws::String&& key, const Aws::String& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(std::move(key), value); return *this; }
    inline CreateWorkflowRequest& AddDefaultRunProperties(const Aws::String& key, Aws::String&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, std::move(value)); return *this; }
    inline CreateWorkflowRequest& AddDefaultRunProperties(Aws::String&& key, Aws::String&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateWorkflowRequest& AddDefaultRunProperties(const char* key, Aws::String&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, std::move(value)); return *this; }
    inline CreateWorkflowRequest& AddDefaultRunProperties(Aws::String&& key, const char* value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(std::move(key), value); return *this; }
    inline CreateWorkflowRequest& AddDefaultRunProperties(const char* key, const char* value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to be used with this workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateWorkflowRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateWorkflowRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateWorkflowRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateWorkflowRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateWorkflowRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateWorkflowRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateWorkflowRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateWorkflowRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateWorkflowRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can use this parameter to prevent unwanted multiple updates to data, to
     * control costs, or in some cases, to prevent exceeding the maximum number of
     * concurrent runs of any of the component jobs. If you leave this parameter blank,
     * there is no limit to the number of concurrent workflow runs.</p>
     */
    inline int GetMaxConcurrentRuns() const{ return m_maxConcurrentRuns; }
    inline bool MaxConcurrentRunsHasBeenSet() const { return m_maxConcurrentRunsHasBeenSet; }
    inline void SetMaxConcurrentRuns(int value) { m_maxConcurrentRunsHasBeenSet = true; m_maxConcurrentRuns = value; }
    inline CreateWorkflowRequest& WithMaxConcurrentRuns(int value) { SetMaxConcurrentRuns(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_defaultRunProperties;
    bool m_defaultRunPropertiesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_maxConcurrentRuns;
    bool m_maxConcurrentRunsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
