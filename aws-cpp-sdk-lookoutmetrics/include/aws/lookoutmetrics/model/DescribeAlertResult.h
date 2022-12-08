/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/Alert.h>
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
  class DescribeAlertResult
  {
  public:
    AWS_LOOKOUTMETRICS_API DescribeAlertResult();
    AWS_LOOKOUTMETRICS_API DescribeAlertResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API DescribeAlertResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains information about an alert.</p>
     */
    inline const Alert& GetAlert() const{ return m_alert; }

    /**
     * <p>Contains information about an alert.</p>
     */
    inline void SetAlert(const Alert& value) { m_alert = value; }

    /**
     * <p>Contains information about an alert.</p>
     */
    inline void SetAlert(Alert&& value) { m_alert = std::move(value); }

    /**
     * <p>Contains information about an alert.</p>
     */
    inline DescribeAlertResult& WithAlert(const Alert& value) { SetAlert(value); return *this;}

    /**
     * <p>Contains information about an alert.</p>
     */
    inline DescribeAlertResult& WithAlert(Alert&& value) { SetAlert(std::move(value)); return *this;}

  private:

    Alert m_alert;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
