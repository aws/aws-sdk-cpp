/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLUE_API CreateWorkflowRequest : public GlueRequest
  {
  public:
    CreateWorkflowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkflow"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name to be assigned to the workflow. It should be unique within your
     * account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name to be assigned to the workflow. It should be unique within your
     * account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name to be assigned to the workflow. It should be unique within your
     * account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name to be assigned to the workflow. It should be unique within your
     * account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name to be assigned to the workflow. It should be unique within your
     * account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name to be assigned to the workflow. It should be unique within your
     * account.</p>
     */
    inline CreateWorkflowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name to be assigned to the workflow. It should be unique within your
     * account.</p>
     */
    inline CreateWorkflowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name to be assigned to the workflow. It should be unique within your
     * account.</p>
     */
    inline CreateWorkflowRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the workflow.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the workflow.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the workflow.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the workflow.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the workflow.</p>
     */
    inline CreateWorkflowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the workflow.</p>
     */
    inline CreateWorkflowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the workflow.</p>
     */
    inline CreateWorkflowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDefaultRunProperties() const{ return m_defaultRunProperties; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline bool DefaultRunPropertiesHasBeenSet() const { return m_defaultRunPropertiesHasBeenSet; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline void SetDefaultRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties = value; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline void SetDefaultRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties = std::move(value); }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline CreateWorkflowRequest& WithDefaultRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetDefaultRunProperties(value); return *this;}

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline CreateWorkflowRequest& WithDefaultRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetDefaultRunProperties(std::move(value)); return *this;}

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline CreateWorkflowRequest& AddDefaultRunProperties(const Aws::String& key, const Aws::String& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, value); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline CreateWorkflowRequest& AddDefaultRunProperties(Aws::String&& key, const Aws::String& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline CreateWorkflowRequest& AddDefaultRunProperties(const Aws::String& key, Aws::String&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline CreateWorkflowRequest& AddDefaultRunProperties(Aws::String&& key, Aws::String&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline CreateWorkflowRequest& AddDefaultRunProperties(const char* key, Aws::String&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline CreateWorkflowRequest& AddDefaultRunProperties(Aws::String&& key, const char* value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline CreateWorkflowRequest& AddDefaultRunProperties(const char* key, const char* value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, value); return *this; }


    /**
     * <p>The tags to be used with this workflow.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be used with this workflow.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be used with this workflow.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be used with this workflow.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be used with this workflow.</p>
     */
    inline CreateWorkflowRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be used with this workflow.</p>
     */
    inline CreateWorkflowRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be used with this workflow.</p>
     */
    inline CreateWorkflowRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to be used with this workflow.</p>
     */
    inline CreateWorkflowRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be used with this workflow.</p>
     */
    inline CreateWorkflowRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be used with this workflow.</p>
     */
    inline CreateWorkflowRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to be used with this workflow.</p>
     */
    inline CreateWorkflowRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be used with this workflow.</p>
     */
    inline CreateWorkflowRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be used with this workflow.</p>
     */
    inline CreateWorkflowRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_defaultRunProperties;
    bool m_defaultRunPropertiesHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
