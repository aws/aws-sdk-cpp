/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p> Specifies the performance metrics to use for the server that is used for
   * recommendations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/UsageMetricBasis">AWS
   * API Reference</a></p>
   */
  class UsageMetricBasis
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API UsageMetricBasis();
    AWS_APPLICATIONDISCOVERYSERVICE_API UsageMetricBasis(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API UsageMetricBasis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A utilization metric that is used by the recommendations. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> A utilization metric that is used by the recommendations. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> A utilization metric that is used by the recommendations. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> A utilization metric that is used by the recommendations. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> A utilization metric that is used by the recommendations. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> A utilization metric that is used by the recommendations. </p>
     */
    inline UsageMetricBasis& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> A utilization metric that is used by the recommendations. </p>
     */
    inline UsageMetricBasis& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> A utilization metric that is used by the recommendations. </p>
     */
    inline UsageMetricBasis& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Specifies the percentage of the specified utilization metric that is used by
     * the recommendations. </p>
     */
    inline double GetPercentageAdjust() const{ return m_percentageAdjust; }

    /**
     * <p> Specifies the percentage of the specified utilization metric that is used by
     * the recommendations. </p>
     */
    inline bool PercentageAdjustHasBeenSet() const { return m_percentageAdjustHasBeenSet; }

    /**
     * <p> Specifies the percentage of the specified utilization metric that is used by
     * the recommendations. </p>
     */
    inline void SetPercentageAdjust(double value) { m_percentageAdjustHasBeenSet = true; m_percentageAdjust = value; }

    /**
     * <p> Specifies the percentage of the specified utilization metric that is used by
     * the recommendations. </p>
     */
    inline UsageMetricBasis& WithPercentageAdjust(double value) { SetPercentageAdjust(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_percentageAdjust;
    bool m_percentageAdjustHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
