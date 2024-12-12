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
  class PutWorkflowRunPropertiesRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API PutWorkflowRunPropertiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutWorkflowRunProperties"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of the workflow which was run.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PutWorkflowRunPropertiesRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutWorkflowRunPropertiesRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutWorkflowRunPropertiesRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workflow run for which the run properties should be
     * updated.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }
    inline PutWorkflowRunPropertiesRequest& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline PutWorkflowRunPropertiesRequest& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline PutWorkflowRunPropertiesRequest& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties to put for the specified run.</p> <p>Run properties may be
     * logged. Do not pass plaintext secrets as properties. Retrieve secrets from a
     * Glue Connection, Amazon Web Services Secrets Manager or other secret management
     * mechanism if you intend to use them within the workflow run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRunProperties() const{ return m_runProperties; }
    inline bool RunPropertiesHasBeenSet() const { return m_runPropertiesHasBeenSet; }
    inline void SetRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_runPropertiesHasBeenSet = true; m_runProperties = value; }
    inline void SetRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_runPropertiesHasBeenSet = true; m_runProperties = std::move(value); }
    inline PutWorkflowRunPropertiesRequest& WithRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetRunProperties(value); return *this;}
    inline PutWorkflowRunPropertiesRequest& WithRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetRunProperties(std::move(value)); return *this;}
    inline PutWorkflowRunPropertiesRequest& AddRunProperties(const Aws::String& key, const Aws::String& value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(key, value); return *this; }
    inline PutWorkflowRunPropertiesRequest& AddRunProperties(Aws::String&& key, const Aws::String& value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(std::move(key), value); return *this; }
    inline PutWorkflowRunPropertiesRequest& AddRunProperties(const Aws::String& key, Aws::String&& value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(key, std::move(value)); return *this; }
    inline PutWorkflowRunPropertiesRequest& AddRunProperties(Aws::String&& key, Aws::String&& value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline PutWorkflowRunPropertiesRequest& AddRunProperties(const char* key, Aws::String&& value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(key, std::move(value)); return *this; }
    inline PutWorkflowRunPropertiesRequest& AddRunProperties(Aws::String&& key, const char* value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(std::move(key), value); return *this; }
    inline PutWorkflowRunPropertiesRequest& AddRunProperties(const char* key, const char* value) { m_runPropertiesHasBeenSet = true; m_runProperties.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_runProperties;
    bool m_runPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
