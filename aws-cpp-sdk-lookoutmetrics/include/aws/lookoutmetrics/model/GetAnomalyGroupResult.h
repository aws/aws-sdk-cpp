/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/AnomalyGroup.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class AWS_LOOKOUTMETRICS_API GetAnomalyGroupResult
  {
  public:
    GetAnomalyGroupResult();
    GetAnomalyGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAnomalyGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the anomaly group.</p>
     */
    inline const AnomalyGroup& GetAnomalyGroup() const{ return m_anomalyGroup; }

    /**
     * <p>Details about the anomaly group.</p>
     */
    inline void SetAnomalyGroup(const AnomalyGroup& value) { m_anomalyGroup = value; }

    /**
     * <p>Details about the anomaly group.</p>
     */
    inline void SetAnomalyGroup(AnomalyGroup&& value) { m_anomalyGroup = std::move(value); }

    /**
     * <p>Details about the anomaly group.</p>
     */
    inline GetAnomalyGroupResult& WithAnomalyGroup(const AnomalyGroup& value) { SetAnomalyGroup(value); return *this;}

    /**
     * <p>Details about the anomaly group.</p>
     */
    inline GetAnomalyGroupResult& WithAnomalyGroup(AnomalyGroup&& value) { SetAnomalyGroup(std::move(value)); return *this;}

  private:

    AnomalyGroup m_anomalyGroup;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
