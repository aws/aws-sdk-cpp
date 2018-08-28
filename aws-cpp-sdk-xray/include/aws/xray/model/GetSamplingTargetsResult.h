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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/SamplingTargetDocument.h>
#include <aws/xray/model/UnprocessedStatistics.h>
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
namespace XRay
{
namespace Model
{
  class AWS_XRAY_API GetSamplingTargetsResult
  {
  public:
    GetSamplingTargetsResult();
    GetSamplingTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSamplingTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Updated rules that the service should use to sample requests.</p>
     */
    inline const Aws::Vector<SamplingTargetDocument>& GetSamplingTargetDocuments() const{ return m_samplingTargetDocuments; }

    /**
     * <p>Updated rules that the service should use to sample requests.</p>
     */
    inline void SetSamplingTargetDocuments(const Aws::Vector<SamplingTargetDocument>& value) { m_samplingTargetDocuments = value; }

    /**
     * <p>Updated rules that the service should use to sample requests.</p>
     */
    inline void SetSamplingTargetDocuments(Aws::Vector<SamplingTargetDocument>&& value) { m_samplingTargetDocuments = std::move(value); }

    /**
     * <p>Updated rules that the service should use to sample requests.</p>
     */
    inline GetSamplingTargetsResult& WithSamplingTargetDocuments(const Aws::Vector<SamplingTargetDocument>& value) { SetSamplingTargetDocuments(value); return *this;}

    /**
     * <p>Updated rules that the service should use to sample requests.</p>
     */
    inline GetSamplingTargetsResult& WithSamplingTargetDocuments(Aws::Vector<SamplingTargetDocument>&& value) { SetSamplingTargetDocuments(std::move(value)); return *this;}

    /**
     * <p>Updated rules that the service should use to sample requests.</p>
     */
    inline GetSamplingTargetsResult& AddSamplingTargetDocuments(const SamplingTargetDocument& value) { m_samplingTargetDocuments.push_back(value); return *this; }

    /**
     * <p>Updated rules that the service should use to sample requests.</p>
     */
    inline GetSamplingTargetsResult& AddSamplingTargetDocuments(SamplingTargetDocument&& value) { m_samplingTargetDocuments.push_back(std::move(value)); return *this; }


    /**
     * <p>The last time a user changed the sampling rule configuration. If the sampling
     * rule configuration changed since the service last retrieved it, the service
     * should call <a>GetSamplingRules</a> to get the latest version.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRuleModification() const{ return m_lastRuleModification; }

    /**
     * <p>The last time a user changed the sampling rule configuration. If the sampling
     * rule configuration changed since the service last retrieved it, the service
     * should call <a>GetSamplingRules</a> to get the latest version.</p>
     */
    inline void SetLastRuleModification(const Aws::Utils::DateTime& value) { m_lastRuleModification = value; }

    /**
     * <p>The last time a user changed the sampling rule configuration. If the sampling
     * rule configuration changed since the service last retrieved it, the service
     * should call <a>GetSamplingRules</a> to get the latest version.</p>
     */
    inline void SetLastRuleModification(Aws::Utils::DateTime&& value) { m_lastRuleModification = std::move(value); }

    /**
     * <p>The last time a user changed the sampling rule configuration. If the sampling
     * rule configuration changed since the service last retrieved it, the service
     * should call <a>GetSamplingRules</a> to get the latest version.</p>
     */
    inline GetSamplingTargetsResult& WithLastRuleModification(const Aws::Utils::DateTime& value) { SetLastRuleModification(value); return *this;}

    /**
     * <p>The last time a user changed the sampling rule configuration. If the sampling
     * rule configuration changed since the service last retrieved it, the service
     * should call <a>GetSamplingRules</a> to get the latest version.</p>
     */
    inline GetSamplingTargetsResult& WithLastRuleModification(Aws::Utils::DateTime&& value) { SetLastRuleModification(std::move(value)); return *this;}


    /**
     * <p>Information about <a>SamplingStatisticsDocument</a> that X-Ray could not
     * process.</p>
     */
    inline const Aws::Vector<UnprocessedStatistics>& GetUnprocessedStatistics() const{ return m_unprocessedStatistics; }

    /**
     * <p>Information about <a>SamplingStatisticsDocument</a> that X-Ray could not
     * process.</p>
     */
    inline void SetUnprocessedStatistics(const Aws::Vector<UnprocessedStatistics>& value) { m_unprocessedStatistics = value; }

    /**
     * <p>Information about <a>SamplingStatisticsDocument</a> that X-Ray could not
     * process.</p>
     */
    inline void SetUnprocessedStatistics(Aws::Vector<UnprocessedStatistics>&& value) { m_unprocessedStatistics = std::move(value); }

    /**
     * <p>Information about <a>SamplingStatisticsDocument</a> that X-Ray could not
     * process.</p>
     */
    inline GetSamplingTargetsResult& WithUnprocessedStatistics(const Aws::Vector<UnprocessedStatistics>& value) { SetUnprocessedStatistics(value); return *this;}

    /**
     * <p>Information about <a>SamplingStatisticsDocument</a> that X-Ray could not
     * process.</p>
     */
    inline GetSamplingTargetsResult& WithUnprocessedStatistics(Aws::Vector<UnprocessedStatistics>&& value) { SetUnprocessedStatistics(std::move(value)); return *this;}

    /**
     * <p>Information about <a>SamplingStatisticsDocument</a> that X-Ray could not
     * process.</p>
     */
    inline GetSamplingTargetsResult& AddUnprocessedStatistics(const UnprocessedStatistics& value) { m_unprocessedStatistics.push_back(value); return *this; }

    /**
     * <p>Information about <a>SamplingStatisticsDocument</a> that X-Ray could not
     * process.</p>
     */
    inline GetSamplingTargetsResult& AddUnprocessedStatistics(UnprocessedStatistics&& value) { m_unprocessedStatistics.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SamplingTargetDocument> m_samplingTargetDocuments;

    Aws::Utils::DateTime m_lastRuleModification;

    Aws::Vector<UnprocessedStatistics> m_unprocessedStatistics;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
