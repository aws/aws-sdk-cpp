/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearchdomain/model/Bucket.h>
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
namespace CloudSearchDomain
{
namespace Model
{

  /**
   * <p>A container for the calculated facet values and counts.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/BucketInfo">AWS
   * API Reference</a></p>
   */
  class BucketInfo
  {
  public:
    AWS_CLOUDSEARCHDOMAIN_API BucketInfo() = default;
    AWS_CLOUDSEARCHDOMAIN_API BucketInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API BucketInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of the calculated facet values and counts.</p>
     */
    inline const Aws::Vector<Bucket>& GetBuckets() const { return m_buckets; }
    inline bool BucketsHasBeenSet() const { return m_bucketsHasBeenSet; }
    template<typename BucketsT = Aws::Vector<Bucket>>
    void SetBuckets(BucketsT&& value) { m_bucketsHasBeenSet = true; m_buckets = std::forward<BucketsT>(value); }
    template<typename BucketsT = Aws::Vector<Bucket>>
    BucketInfo& WithBuckets(BucketsT&& value) { SetBuckets(std::forward<BucketsT>(value)); return *this;}
    template<typename BucketsT = Bucket>
    BucketInfo& AddBuckets(BucketsT&& value) { m_bucketsHasBeenSet = true; m_buckets.emplace_back(std::forward<BucketsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Bucket> m_buckets;
    bool m_bucketsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
