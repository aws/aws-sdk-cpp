﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/TrustedAdvisorCheckRefreshStatus.h>

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
namespace Support
{
namespace Model
{
  /**
   * <p>The statuses of the Trusted Advisor checks returned by the
   * <a>DescribeTrustedAdvisorCheckRefreshStatuses</a> operation.</p>
   */
  class AWS_SUPPORT_API DescribeTrustedAdvisorCheckRefreshStatusesResult
  {
  public:
    DescribeTrustedAdvisorCheckRefreshStatusesResult();
    DescribeTrustedAdvisorCheckRefreshStatusesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTrustedAdvisorCheckRefreshStatusesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The refresh status of the specified Trusted Advisor checks.</p>
     */
    inline const Aws::Vector<TrustedAdvisorCheckRefreshStatus>& GetStatuses() const{ return m_statuses; }

    /**
     * <p>The refresh status of the specified Trusted Advisor checks.</p>
     */
    inline void SetStatuses(const Aws::Vector<TrustedAdvisorCheckRefreshStatus>& value) { m_statuses = value; }

    /**
     * <p>The refresh status of the specified Trusted Advisor checks.</p>
     */
    inline void SetStatuses(Aws::Vector<TrustedAdvisorCheckRefreshStatus>&& value) { m_statuses = value; }

    /**
     * <p>The refresh status of the specified Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorCheckRefreshStatusesResult& WithStatuses(const Aws::Vector<TrustedAdvisorCheckRefreshStatus>& value) { SetStatuses(value); return *this;}

    /**
     * <p>The refresh status of the specified Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorCheckRefreshStatusesResult& WithStatuses(Aws::Vector<TrustedAdvisorCheckRefreshStatus>&& value) { SetStatuses(value); return *this;}

    /**
     * <p>The refresh status of the specified Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorCheckRefreshStatusesResult& AddStatuses(const TrustedAdvisorCheckRefreshStatus& value) { m_statuses.push_back(value); return *this; }

    /**
     * <p>The refresh status of the specified Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorCheckRefreshStatusesResult& AddStatuses(TrustedAdvisorCheckRefreshStatus&& value) { m_statuses.push_back(value); return *this; }

  private:
    Aws::Vector<TrustedAdvisorCheckRefreshStatus> m_statuses;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
