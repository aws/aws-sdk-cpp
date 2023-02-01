/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/macie2/model/ResourceStatistics.h>
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
namespace Macie2
{
namespace Model
{
  class GetResourceProfileResult
  {
  public:
    AWS_MACIE2_API GetResourceProfileResult();
    AWS_MACIE2_API GetResourceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetResourceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently recalculated sensitive data discovery statistics and details for
     * the bucket. If the bucket's sensitivity score is calculated automatically, this
     * includes the score.</p>
     */
    inline const Aws::Utils::DateTime& GetProfileUpdatedAt() const{ return m_profileUpdatedAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently recalculated sensitive data discovery statistics and details for
     * the bucket. If the bucket's sensitivity score is calculated automatically, this
     * includes the score.</p>
     */
    inline void SetProfileUpdatedAt(const Aws::Utils::DateTime& value) { m_profileUpdatedAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently recalculated sensitive data discovery statistics and details for
     * the bucket. If the bucket's sensitivity score is calculated automatically, this
     * includes the score.</p>
     */
    inline void SetProfileUpdatedAt(Aws::Utils::DateTime&& value) { m_profileUpdatedAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently recalculated sensitive data discovery statistics and details for
     * the bucket. If the bucket's sensitivity score is calculated automatically, this
     * includes the score.</p>
     */
    inline GetResourceProfileResult& WithProfileUpdatedAt(const Aws::Utils::DateTime& value) { SetProfileUpdatedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently recalculated sensitive data discovery statistics and details for
     * the bucket. If the bucket's sensitivity score is calculated automatically, this
     * includes the score.</p>
     */
    inline GetResourceProfileResult& WithProfileUpdatedAt(Aws::Utils::DateTime&& value) { SetProfileUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The current sensitivity score for the bucket, ranging from -1 (no analysis
     * due to an error) to 100 (sensitive). By default, this score is calculated
     * automatically based on the amount of data that Amazon Macie has analyzed in the
     * bucket and the amount of sensitive data that Macie has found in the bucket.</p>
     */
    inline int GetSensitivityScore() const{ return m_sensitivityScore; }

    /**
     * <p>The current sensitivity score for the bucket, ranging from -1 (no analysis
     * due to an error) to 100 (sensitive). By default, this score is calculated
     * automatically based on the amount of data that Amazon Macie has analyzed in the
     * bucket and the amount of sensitive data that Macie has found in the bucket.</p>
     */
    inline void SetSensitivityScore(int value) { m_sensitivityScore = value; }

    /**
     * <p>The current sensitivity score for the bucket, ranging from -1 (no analysis
     * due to an error) to 100 (sensitive). By default, this score is calculated
     * automatically based on the amount of data that Amazon Macie has analyzed in the
     * bucket and the amount of sensitive data that Macie has found in the bucket.</p>
     */
    inline GetResourceProfileResult& WithSensitivityScore(int value) { SetSensitivityScore(value); return *this;}


    /**
     * <p>Specifies whether the bucket's current sensitivity score was set manually. If
     * this value is true, the score was manually changed to 100. If this value is
     * false, the score was calculated automatically by Amazon Macie.</p>
     */
    inline bool GetSensitivityScoreOverridden() const{ return m_sensitivityScoreOverridden; }

    /**
     * <p>Specifies whether the bucket's current sensitivity score was set manually. If
     * this value is true, the score was manually changed to 100. If this value is
     * false, the score was calculated automatically by Amazon Macie.</p>
     */
    inline void SetSensitivityScoreOverridden(bool value) { m_sensitivityScoreOverridden = value; }

    /**
     * <p>Specifies whether the bucket's current sensitivity score was set manually. If
     * this value is true, the score was manually changed to 100. If this value is
     * false, the score was calculated automatically by Amazon Macie.</p>
     */
    inline GetResourceProfileResult& WithSensitivityScoreOverridden(bool value) { SetSensitivityScoreOverridden(value); return *this;}


    /**
     * <p>The sensitive data discovery statistics for the bucket. The statistics
     * capture the results of automated sensitive data discovery activities that Amazon
     * Macie has performed for the bucket.</p>
     */
    inline const ResourceStatistics& GetStatistics() const{ return m_statistics; }

    /**
     * <p>The sensitive data discovery statistics for the bucket. The statistics
     * capture the results of automated sensitive data discovery activities that Amazon
     * Macie has performed for the bucket.</p>
     */
    inline void SetStatistics(const ResourceStatistics& value) { m_statistics = value; }

    /**
     * <p>The sensitive data discovery statistics for the bucket. The statistics
     * capture the results of automated sensitive data discovery activities that Amazon
     * Macie has performed for the bucket.</p>
     */
    inline void SetStatistics(ResourceStatistics&& value) { m_statistics = std::move(value); }

    /**
     * <p>The sensitive data discovery statistics for the bucket. The statistics
     * capture the results of automated sensitive data discovery activities that Amazon
     * Macie has performed for the bucket.</p>
     */
    inline GetResourceProfileResult& WithStatistics(const ResourceStatistics& value) { SetStatistics(value); return *this;}

    /**
     * <p>The sensitive data discovery statistics for the bucket. The statistics
     * capture the results of automated sensitive data discovery activities that Amazon
     * Macie has performed for the bucket.</p>
     */
    inline GetResourceProfileResult& WithStatistics(ResourceStatistics&& value) { SetStatistics(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_profileUpdatedAt;

    int m_sensitivityScore;

    bool m_sensitivityScoreOverridden;

    ResourceStatistics m_statistics;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
