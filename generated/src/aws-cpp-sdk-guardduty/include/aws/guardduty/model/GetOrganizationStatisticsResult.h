/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrganizationDetails.h>
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
namespace GuardDuty
{
namespace Model
{
  class GetOrganizationStatisticsResult
  {
  public:
    AWS_GUARDDUTY_API GetOrganizationStatisticsResult();
    AWS_GUARDDUTY_API GetOrganizationStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetOrganizationStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the statistics report for your organization.</p>
     */
    inline const OrganizationDetails& GetOrganizationDetails() const{ return m_organizationDetails; }

    /**
     * <p>Information about the statistics report for your organization.</p>
     */
    inline void SetOrganizationDetails(const OrganizationDetails& value) { m_organizationDetails = value; }

    /**
     * <p>Information about the statistics report for your organization.</p>
     */
    inline void SetOrganizationDetails(OrganizationDetails&& value) { m_organizationDetails = std::move(value); }

    /**
     * <p>Information about the statistics report for your organization.</p>
     */
    inline GetOrganizationStatisticsResult& WithOrganizationDetails(const OrganizationDetails& value) { SetOrganizationDetails(value); return *this;}

    /**
     * <p>Information about the statistics report for your organization.</p>
     */
    inline GetOrganizationStatisticsResult& WithOrganizationDetails(OrganizationDetails&& value) { SetOrganizationDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetOrganizationStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetOrganizationStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetOrganizationStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    OrganizationDetails m_organizationDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
