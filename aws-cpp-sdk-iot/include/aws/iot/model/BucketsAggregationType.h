/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/TermsAggregation.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The type of bucketed aggregation performed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/BucketsAggregationType">AWS
   * API Reference</a></p>
   */
  class BucketsAggregationType
  {
  public:
    AWS_IOT_API BucketsAggregationType();
    AWS_IOT_API BucketsAggregationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API BucketsAggregationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Performs an aggregation that will return a list of buckets. The list of
     * buckets is a ranked list of the number of occurrences of an aggregation field
     * value.</p>
     */
    inline const TermsAggregation& GetTermsAggregation() const{ return m_termsAggregation; }

    /**
     * <p>Performs an aggregation that will return a list of buckets. The list of
     * buckets is a ranked list of the number of occurrences of an aggregation field
     * value.</p>
     */
    inline bool TermsAggregationHasBeenSet() const { return m_termsAggregationHasBeenSet; }

    /**
     * <p>Performs an aggregation that will return a list of buckets. The list of
     * buckets is a ranked list of the number of occurrences of an aggregation field
     * value.</p>
     */
    inline void SetTermsAggregation(const TermsAggregation& value) { m_termsAggregationHasBeenSet = true; m_termsAggregation = value; }

    /**
     * <p>Performs an aggregation that will return a list of buckets. The list of
     * buckets is a ranked list of the number of occurrences of an aggregation field
     * value.</p>
     */
    inline void SetTermsAggregation(TermsAggregation&& value) { m_termsAggregationHasBeenSet = true; m_termsAggregation = std::move(value); }

    /**
     * <p>Performs an aggregation that will return a list of buckets. The list of
     * buckets is a ranked list of the number of occurrences of an aggregation field
     * value.</p>
     */
    inline BucketsAggregationType& WithTermsAggregation(const TermsAggregation& value) { SetTermsAggregation(value); return *this;}

    /**
     * <p>Performs an aggregation that will return a list of buckets. The list of
     * buckets is a ranked list of the number of occurrences of an aggregation field
     * value.</p>
     */
    inline BucketsAggregationType& WithTermsAggregation(TermsAggregation&& value) { SetTermsAggregation(std::move(value)); return *this;}

  private:

    TermsAggregation m_termsAggregation;
    bool m_termsAggregationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
