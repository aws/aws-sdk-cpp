/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
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
namespace CostandUsageReportService
{
namespace Model
{
  /**
   * <p>If the action is successful, the service sends back an HTTP 200
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DeleteReportDefinitionResponse">AWS
   * API Reference</a></p>
   */
  class DeleteReportDefinitionResult
  {
  public:
    AWS_COSTANDUSAGEREPORTSERVICE_API DeleteReportDefinitionResult() = default;
    AWS_COSTANDUSAGEREPORTSERVICE_API DeleteReportDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTANDUSAGEREPORTSERVICE_API DeleteReportDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetResponseMessage() const { return m_responseMessage; }
    template<typename ResponseMessageT = Aws::String>
    void SetResponseMessage(ResponseMessageT&& value) { m_responseMessageHasBeenSet = true; m_responseMessage = std::forward<ResponseMessageT>(value); }
    template<typename ResponseMessageT = Aws::String>
    DeleteReportDefinitionResult& WithResponseMessage(ResponseMessageT&& value) { SetResponseMessage(std::forward<ResponseMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteReportDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_responseMessage;
    bool m_responseMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
