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
  class AWS_GLUE_API PutWorkflowRunPropertiesRequest : public GlueRequest
  {
  public:
    PutWorkflowRunPropertiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutWorkflowRunProperties"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the workflow which was run.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the workflow which was run.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the workflow which was run.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the workflow which was run.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the workflow which was run.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the workflow which was run.</p>
     */
    inline PutWorkflowRunPropertiesRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the workflow which was run.</p>
     */
    inline PutWorkflowRunPropertiesRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the workflow which was run.</p>
     */
    inline PutWorkflowRunPropertiesRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the workflow run for which the run properties should be
     * updated.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The ID of the workflow run for which the run properties should be
     * updated.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>The ID of the workflow run for which the run properties should be
     * updated.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The ID of the workflow run for which the run properties should be
     * updated.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>The ID of the workflow run for which the run properties should be
     * updated.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The ID of the workflow run for which the run properties should be
     * updated.</p>
     */
    inline PutWorkflowRunPropertiesRequest& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The ID of the workflow run for which the run properties should be
     * updated.</p>
     */
    inline PutWorkflowRunPropertiesRequest& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workflow run for which the run properties should be
     * updated.</p>
     */
    inline PutWorkflowRunPropertiesRequest& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>The properties to put for the specified run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRunProperties() const{ return m_runProperties; }

    /**
     * <p>The properties to put for the specified run.</p>
     */
    inline bool RunPropertiesHasBeenSet() const { return m_runPropertiesHasBeenSet; }

    /**
     * <p>The properties to put for the specified run.</p>
     */
    inline void SetRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_runPropertiesHasBeenSet = true; m_runProperties = value; }

    /**
     * <p>The properties to put for the specified run.</p>
     */
    inline void SetRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_runPropertiesHasBeenSet = true; m_runProperties = std::move(value); }

    /**
     * <p>The properties to put for the specified run.</p>
     */
    inline PutWorkflowRunPropertiesRequest& WithRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetRunProperties(value); return *this;}

    /**
     * <p>The properties to put for the specified run.</p>
     */
    inline PutWorkflowRunPropertiesRequest& WithRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetRunProperties(std::move(value)); return *this;}

    /**
     * <p>The properties to put for the specified run.</p>
     */
    inline PutWorkflowRunPropertiesRequest& AddRunProperties(const Aws::String& key, const Aws::String& value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(key, value); return *this; }

    /**
     * <p>The properties to put for the specified run.</p>
     */
    inline PutWorkflowRunPropertiesRequest& AddRunProperties(Aws::String&& key, const Aws::String& value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The properties to put for the specified run.</p>
     */
    inline PutWorkflowRunPropertiesRequest& AddRunProperties(const Aws::String& key, Aws::String&& value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The properties to put for the specified run.</p>
     */
    inline PutWorkflowRunPropertiesRequest& AddRunProperties(Aws::String&& key, Aws::String&& value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The properties to put for the specified run.</p>
     */
    inline PutWorkflowRunPropertiesRequest& AddRunProperties(const char* key, Aws::String&& value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The properties to put for the specified run.</p>
     */
    inline PutWorkflowRunPropertiesRequest& AddRunProperties(Aws::String&& key, const char* value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The properties to put for the specified run.</p>
     */
    inline PutWorkflowRunPropertiesRequest& AddRunProperties(const char* key, const char* value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_runId;
    bool m_runIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_runProperties;
    bool m_runPropertiesHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
