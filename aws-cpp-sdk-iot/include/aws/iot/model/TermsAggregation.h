/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>

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
   * <p>Performs an aggregation that will return a list of buckets. The list of
   * buckets is a ranked list of the number of occurrences of an aggregation field
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TermsAggregation">AWS
   * API Reference</a></p>
   */
  class TermsAggregation
  {
  public:
    AWS_IOT_API TermsAggregation();
    AWS_IOT_API TermsAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TermsAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of buckets to return in the response. Default to 10.</p>
     */
    inline int GetMaxBuckets() const{ return m_maxBuckets; }

    /**
     * <p>The number of buckets to return in the response. Default to 10.</p>
     */
    inline bool MaxBucketsHasBeenSet() const { return m_maxBucketsHasBeenSet; }

    /**
     * <p>The number of buckets to return in the response. Default to 10.</p>
     */
    inline void SetMaxBuckets(int value) { m_maxBucketsHasBeenSet = true; m_maxBuckets = value; }

    /**
     * <p>The number of buckets to return in the response. Default to 10.</p>
     */
    inline TermsAggregation& WithMaxBuckets(int value) { SetMaxBuckets(value); return *this;}

  private:

    int m_maxBuckets;
    bool m_maxBucketsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
