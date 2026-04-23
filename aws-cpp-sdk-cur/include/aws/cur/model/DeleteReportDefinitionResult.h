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
  class AWS_COSTANDUSAGEREPORTSERVICE_API DeleteReportDefinitionResult
  {
  public:
    DeleteReportDefinitionResult();
    DeleteReportDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteReportDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
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
