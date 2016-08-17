/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudsearchdomain/model/Bucket.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudSearchDomain
{
namespace Model
{

  /**
   * <p>A container for the calculated facet values and counts.</p>
   */
  class AWS_CLOUDSEARCHDOMAIN_API BucketInfo
  {
  public:
    BucketInfo();
    BucketInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    BucketInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A list of the calculated facet values and counts.</p>
     */
    inline const Aws::Vector<Bucket>& GetBuckets() const{ return m_buckets; }

    /**
     * <p>A list of the calculated facet values and counts.</p>
     */
    inline void SetBuckets(const Aws::Vector<Bucket>& value) { m_bucketsHasBeenSet = true; m_buckets = value; }

    /**
     * <p>A list of the calculated facet values and counts.</p>
     */
    inline void SetBuckets(Aws::Vector<Bucket>&& value) { m_bucketsHasBeenSet = true; m_buckets = value; }

    /**
     * <p>A list of the calculated facet values and counts.</p>
     */
    inline BucketInfo& WithBuckets(const Aws::Vector<Bucket>& value) { SetBuckets(value); return *this;}

    /**
     * <p>A list of the calculated facet values and counts.</p>
     */
    inline BucketInfo& WithBuckets(Aws::Vector<Bucket>&& value) { SetBuckets(value); return *this;}

    /**
     * <p>A list of the calculated facet values and counts.</p>
     */
    inline BucketInfo& AddBuckets(const Bucket& value) { m_bucketsHasBeenSet = true; m_buckets.push_back(value); return *this; }

    /**
     * <p>A list of the calculated facet values and counts.</p>
     */
    inline BucketInfo& AddBuckets(Bucket&& value) { m_bucketsHasBeenSet = true; m_buckets.push_back(value); return *this; }

  private:
    Aws::Vector<Bucket> m_buckets;
    bool m_bucketsHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
