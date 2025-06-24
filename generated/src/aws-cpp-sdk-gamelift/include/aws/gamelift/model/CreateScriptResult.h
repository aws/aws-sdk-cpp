/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/Script.h>
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
namespace GameLift
{
namespace Model
{
  class CreateScriptResult
  {
  public:
    AWS_GAMELIFT_API CreateScriptResult() = default;
    AWS_GAMELIFT_API CreateScriptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateScriptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The newly created script record with a unique script ID and ARN. The new
     * script's storage location reflects an Amazon S3 location: (1) If the script was
     * uploaded from an S3 bucket under your account, the storage location reflects the
     * information that was provided in the <i>CreateScript</i> request; (2) If the
     * script file was uploaded from a local zip file, the storage location reflects an
     * S3 location controls by the Amazon GameLift Servers service.</p>
     */
    inline const Script& GetScript() const { return m_script; }
    template<typename ScriptT = Script>
    void SetScript(ScriptT&& value) { m_scriptHasBeenSet = true; m_script = std::forward<ScriptT>(value); }
    template<typename ScriptT = Script>
    CreateScriptResult& WithScript(ScriptT&& value) { SetScript(std::forward<ScriptT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateScriptResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Script m_script;
    bool m_scriptHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
