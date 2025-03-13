/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  class CreateScriptResult
  {
  public:
    AWS_GLUE_API CreateScriptResult() = default;
    AWS_GLUE_API CreateScriptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CreateScriptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Python script generated from the DAG.</p>
     */
    inline const Aws::String& GetPythonScript() const { return m_pythonScript; }
    template<typename PythonScriptT = Aws::String>
    void SetPythonScript(PythonScriptT&& value) { m_pythonScriptHasBeenSet = true; m_pythonScript = std::forward<PythonScriptT>(value); }
    template<typename PythonScriptT = Aws::String>
    CreateScriptResult& WithPythonScript(PythonScriptT&& value) { SetPythonScript(std::forward<PythonScriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Scala code generated from the DAG.</p>
     */
    inline const Aws::String& GetScalaCode() const { return m_scalaCode; }
    template<typename ScalaCodeT = Aws::String>
    void SetScalaCode(ScalaCodeT&& value) { m_scalaCodeHasBeenSet = true; m_scalaCode = std::forward<ScalaCodeT>(value); }
    template<typename ScalaCodeT = Aws::String>
    CreateScriptResult& WithScalaCode(ScalaCodeT&& value) { SetScalaCode(std::forward<ScalaCodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateScriptResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pythonScript;
    bool m_pythonScriptHasBeenSet = false;

    Aws::String m_scalaCode;
    bool m_scalaCodeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
