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
    AWS_COSTANDUSAGEREPORTSERVICE_API DeleteReportDefinitionResult();
    AWS_COSTANDUSAGEREPORTSERVICE_API DeleteReportDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTANDUSAGEREPORTSERVICE_API DeleteReportDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetResponseMessage() const{ return m_responseMessage; }

    
    inline void SetResponseMessage(const Aws::String& value) { m_responseMessage = value; }

    
    inline void SetResponseMessage(Aws::String&& value) { m_responseMessage = std::move(value); }

    
    inline void SetResponseMessage(const char* value) { m_responseMessage.assign(value); }

    
    inline DeleteReportDefinitionResult& WithResponseMessage(const Aws::String& value) { SetResponseMessage(value); return *this;}

    
    inline DeleteReportDefinitionResult& WithResponseMessage(Aws::String&& value) { SetResponseMessage(std::move(value)); return *this;}

    
    inline DeleteReportDefinitionResult& WithResponseMessage(const char* value) { SetResponseMessage(value); return *this;}

  private:

    Aws::String m_responseMessage;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
