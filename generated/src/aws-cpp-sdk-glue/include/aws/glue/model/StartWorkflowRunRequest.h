/**
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
  class StartWorkflowRunRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API StartWorkflowRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartWorkflowRun"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the workflow to start.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StartWorkflowRunRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartWorkflowRunRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartWorkflowRunRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow run properties for the new workflow run.</p> <p>Run properties
     * may be logged. Do not pass plaintext secrets as properties. Retrieve secrets
     * from a Glue Connection, Amazon Web Services Secrets Manager or other secret
     * management mechanism if you intend to use them within the workflow run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRunProperties() const{ return m_runProperties; }
    inline bool RunPropertiesHasBeenSet() const { return m_runPropertiesHasBeenSet; }
    inline void SetRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_runPropertiesHasBeenSet = true; m_runProperties = value; }
    inline void SetRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_runPropertiesHasBeenSet = true; m_runProperties = std::move(value); }
    inline StartWorkflowRunRequest& WithRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetRunProperties(value); return *this;}
    inline StartWorkflowRunRequest& WithRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetRunProperties(std::move(value)); return *this;}
    inline StartWorkflowRunRequest& AddRunProperties(const Aws::String& key, const Aws::String& value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(key, value); return *this; }
    inline StartWorkflowRunRequest& AddRunProperties(Aws::String&& key, const Aws::String& value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(std::move(key), value); return *this; }
    inline StartWorkflowRunRequest& AddRunProperties(const Aws::String& key, Aws::String&& value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(key, std::move(value)); return *this; }
    inline StartWorkflowRunRequest& AddRunProperties(Aws::String&& key, Aws::String&& value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline StartWorkflowRunRequest& AddRunProperties(const char* key, Aws::String&& value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(key, std::move(value)); return *this; }
    inline StartWorkflowRunRequest& AddRunProperties(Aws::String&& key, const char* value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(std::move(key), value); return *this; }
    inline StartWorkflowRunRequest& AddRunProperties(const char* key, const char* value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_runProperties;
    bool m_runPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
