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
  class AWS_GLUE_API UpdateWorkflowRequest : public GlueRequest
  {
  public:
    UpdateWorkflowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkflow"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the workflow to be updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the workflow to be updated.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the workflow to be updated.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the workflow to be updated.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the workflow to be updated.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the workflow to be updated.</p>
     */
    inline UpdateWorkflowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the workflow to be updated.</p>
     */
    inline UpdateWorkflowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the workflow to be updated.</p>
     */
    inline UpdateWorkflowRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the workflow.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the workflow.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the workflow.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the workflow.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the workflow.</p>
     */
    inline UpdateWorkflowRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the workflow.</p>
     */
    inline UpdateWorkflowRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the workflow.</p>
     */
    inline UpdateWorkflowRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline UpdateWorkflowRequest& WithDefaultRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetDefaultRunProperties(value); return *this;}

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline UpdateWorkflowRequest& WithDefaultRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetDefaultRunProperties(std::move(value)); return *this;}

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline UpdateWorkflowRequest& AddDefaultRunProperties(const Aws::String& key, const Aws::String& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, value); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline UpdateWorkflowRequest& AddDefaultRunProperties(Aws::String&& key, const Aws::String& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline UpdateWorkflowRequest& AddDefaultRunProperties(const Aws::String& key, Aws::String&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline UpdateWorkflowRequest& AddDefaultRunProperties(Aws::String&& key, Aws::String&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline UpdateWorkflowRequest& AddDefaultRunProperties(const char* key, Aws::String&& value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline UpdateWorkflowRequest& AddDefaultRunProperties(Aws::String&& key, const char* value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of properties to be used as part of each execution of the
     * workflow.</p>
     */
    inline UpdateWorkflowRequest& AddDefaultRunProperties(const char* key, const char* value) { m_defaultRunPropertiesHasBeenSet = true; m_defaultRunProperties.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_defaultRunProperties;
    bool m_defaultRunPropertiesHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
