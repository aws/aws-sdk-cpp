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
    AWS_GLUE_API PutWorkflowRunPropertiesRequest() = default;

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
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutWorkflowRunPropertiesRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workflow run for which the run properties should be
     * updated.</p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    PutWorkflowRunPropertiesRequest& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties to put for the specified run.</p> <p>Run properties may be
     * logged. Do not pass plaintext secrets as properties. Retrieve secrets from a
     * Glue Connection, Amazon Web Services Secrets Manager or other secret management
     * mechanism if you intend to use them within the workflow run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRunProperties() const { return m_runProperties; }
    inline bool RunPropertiesHasBeenSet() const { return m_runPropertiesHasBeenSet; }
    template<typename RunPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetRunProperties(RunPropertiesT&& value) { m_runPropertiesHasBeenSet = true; m_runProperties = std::forward<RunPropertiesT>(value); }
    template<typename RunPropertiesT = Aws::Map<Aws::String, Aws::String>>
    PutWorkflowRunPropertiesRequest& WithRunProperties(RunPropertiesT&& value) { SetRunProperties(std::forward<RunPropertiesT>(value)); return *this;}
    template<typename RunPropertiesKeyT = Aws::String, typename RunPropertiesValueT = Aws::String>
    PutWorkflowRunPropertiesRequest& AddRunProperties(RunPropertiesKeyT&& key, RunPropertiesValueT&& value) {
      m_runPropertiesHasBeenSet = true; m_runProperties.emplace(std::forward<RunPropertiesKeyT>(key), std::forward<RunPropertiesValueT>(value)); return *this;
    }
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
