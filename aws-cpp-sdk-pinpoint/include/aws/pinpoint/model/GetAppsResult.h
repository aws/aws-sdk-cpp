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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ApplicationsResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class AWS_PINPOINT_API GetAppsResult
  {
  public:
    GetAppsResult();
    GetAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ApplicationsResponse& GetApplicationsResponse() const{ return m_applicationsResponse; }

    
    inline void SetApplicationsResponse(const ApplicationsResponse& value) { m_applicationsResponse = value; }

    
    inline void SetApplicationsResponse(ApplicationsResponse&& value) { m_applicationsResponse = std::move(value); }

    
    inline GetAppsResult& WithApplicationsResponse(const ApplicationsResponse& value) { SetApplicationsResponse(value); return *this;}

    
    inline GetAppsResult& WithApplicationsResponse(ApplicationsResponse&& value) { SetApplicationsResponse(std::move(value)); return *this;}

  private:

    ApplicationsResponse m_applicationsResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
