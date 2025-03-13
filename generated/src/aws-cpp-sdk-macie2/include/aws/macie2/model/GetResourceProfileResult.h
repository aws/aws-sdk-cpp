/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/macie2/model/ResourceStatistics.h>
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
namespace Macie2
{
namespace Model
{
  class GetResourceProfileResult
  {
  public:
    AWS_MACIE2_API GetResourceProfileResult() = default;
    AWS_MACIE2_API GetResourceProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetResourceProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently recalculated sensitive data discovery statistics and details for
     * the bucket. If the bucket's sensitivity score is calculated automatically, this
     * includes the score.</p>
     */
    inline const Aws::Utils::DateTime& GetProfileUpdatedAt() const { return m_profileUpdatedAt; }
    template<typename ProfileUpdatedAtT = Aws::Utils::DateTime>
    void SetProfileUpdatedAt(ProfileUpdatedAtT&& value) { m_profileUpdatedAtHasBeenSet = true; m_profileUpdatedAt = std::forward<ProfileUpdatedAtT>(value); }
    template<typename ProfileUpdatedAtT = Aws::Utils::DateTime>
    GetResourceProfileResult& WithProfileUpdatedAt(ProfileUpdatedAtT&& value) { SetProfileUpdatedAt(std::forward<ProfileUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current sensitivity score for the bucket, ranging from -1 (classification
     * error) to 100 (sensitive). By default, this score is calculated automatically
     * based on the amount of data that Amazon Macie has analyzed in the bucket and the
     * amount of sensitive data that Macie has found in the bucket.</p>
     */
    inline int GetSensitivityScore() const { return m_sensitivityScore; }
    inline void SetSensitivityScore(int value) { m_sensitivityScoreHasBeenSet = true; m_sensitivityScore = value; }
    inline GetResourceProfileResult& WithSensitivityScore(int value) { SetSensitivityScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the bucket's current sensitivity score was set manually. If
     * this value is true, the score was manually changed to 100. If this value is
     * false, the score was calculated automatically by Amazon Macie.</p>
     */
    inline bool GetSensitivityScoreOverridden() const { return m_sensitivityScoreOverridden; }
    inline void SetSensitivityScoreOverridden(bool value) { m_sensitivityScoreOverriddenHasBeenSet = true; m_sensitivityScoreOverridden = value; }
    inline GetResourceProfileResult& WithSensitivityScoreOverridden(bool value) { SetSensitivityScoreOverridden(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitive data discovery statistics for the bucket. The statistics
     * capture the results of automated sensitive data discovery activities that Amazon
     * Macie has performed for the bucket.</p>
     */
    inline const ResourceStatistics& GetStatistics() const { return m_statistics; }
    template<typename StatisticsT = ResourceStatistics>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = ResourceStatistics>
    GetResourceProfileResult& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourceProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_profileUpdatedAt{};
    bool m_profileUpdatedAtHasBeenSet = false;

    int m_sensitivityScore{0};
    bool m_sensitivityScoreHasBeenSet = false;

    bool m_sensitivityScoreOverridden{false};
    bool m_sensitivityScoreOverriddenHasBeenSet = false;

    ResourceStatistics m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
