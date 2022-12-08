/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetAppsResult
  {
  public:
    AWS_PINPOINT_API GetAppsResult();
    AWS_PINPOINT_API GetAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
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
