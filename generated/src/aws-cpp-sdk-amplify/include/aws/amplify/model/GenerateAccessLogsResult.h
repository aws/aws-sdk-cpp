/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p>The result structure for the generate access logs request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GenerateAccessLogsResult">AWS
   * API Reference</a></p>
   */
  class GenerateAccessLogsResult
  {
  public:
    AWS_AMPLIFY_API GenerateAccessLogsResult() = default;
    AWS_AMPLIFY_API GenerateAccessLogsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API GenerateAccessLogsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pre-signed URL for the requested access logs. </p>
     */
    inline const Aws::String& GetLogUrl() const { return m_logUrl; }
    template<typename LogUrlT = Aws::String>
    void SetLogUrl(LogUrlT&& value) { m_logUrlHasBeenSet = true; m_logUrl = std::forward<LogUrlT>(value); }
    template<typename LogUrlT = Aws::String>
    GenerateAccessLogsResult& WithLogUrl(LogUrlT&& value) { SetLogUrl(std::forward<LogUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GenerateAccessLogsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logUrl;
    bool m_logUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
