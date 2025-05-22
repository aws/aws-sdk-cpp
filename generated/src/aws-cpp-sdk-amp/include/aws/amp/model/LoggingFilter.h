/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Filtering criteria that determine which queries are logged.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/LoggingFilter">AWS
   * API Reference</a></p>
   */
  class LoggingFilter
  {
  public:
    AWS_PROMETHEUSSERVICE_API LoggingFilter() = default;
    AWS_PROMETHEUSSERVICE_API LoggingFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API LoggingFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Query Samples Processed (QSP) threshold above which queries will be
     * logged. Queries processing more samples than this threshold will be captured in
     * logs.</p>
     */
    inline long long GetQspThreshold() const { return m_qspThreshold; }
    inline bool QspThresholdHasBeenSet() const { return m_qspThresholdHasBeenSet; }
    inline void SetQspThreshold(long long value) { m_qspThresholdHasBeenSet = true; m_qspThreshold = value; }
    inline LoggingFilter& WithQspThreshold(long long value) { SetQspThreshold(value); return *this;}
    ///@}
  private:

    long long m_qspThreshold{0};
    bool m_qspThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
