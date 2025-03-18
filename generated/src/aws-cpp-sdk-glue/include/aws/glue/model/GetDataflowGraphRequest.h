/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetDataflowGraphRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetDataflowGraphRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataflowGraph"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Python script to transform.</p>
     */
    inline const Aws::String& GetPythonScript() const { return m_pythonScript; }
    inline bool PythonScriptHasBeenSet() const { return m_pythonScriptHasBeenSet; }
    template<typename PythonScriptT = Aws::String>
    void SetPythonScript(PythonScriptT&& value) { m_pythonScriptHasBeenSet = true; m_pythonScript = std::forward<PythonScriptT>(value); }
    template<typename PythonScriptT = Aws::String>
    GetDataflowGraphRequest& WithPythonScript(PythonScriptT&& value) { SetPythonScript(std::forward<PythonScriptT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pythonScript;
    bool m_pythonScriptHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
