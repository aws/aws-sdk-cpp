/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/BucketBundle.h>
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
namespace Lightsail
{
namespace Model
{
  class GetBucketBundlesResult
  {
  public:
    AWS_LIGHTSAIL_API GetBucketBundlesResult();
    AWS_LIGHTSAIL_API GetBucketBundlesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetBucketBundlesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes bucket bundles.</p>
     */
    inline const Aws::Vector<BucketBundle>& GetBundles() const{ return m_bundles; }

    /**
     * <p>An object that describes bucket bundles.</p>
     */
    inline void SetBundles(const Aws::Vector<BucketBundle>& value) { m_bundles = value; }

    /**
     * <p>An object that describes bucket bundles.</p>
     */
    inline void SetBundles(Aws::Vector<BucketBundle>&& value) { m_bundles = std::move(value); }

    /**
     * <p>An object that describes bucket bundles.</p>
     */
    inline GetBucketBundlesResult& WithBundles(const Aws::Vector<BucketBundle>& value) { SetBundles(value); return *this;}

    /**
     * <p>An object that describes bucket bundles.</p>
     */
    inline GetBucketBundlesResult& WithBundles(Aws::Vector<BucketBundle>&& value) { SetBundles(std::move(value)); return *this;}

    /**
     * <p>An object that describes bucket bundles.</p>
     */
    inline GetBucketBundlesResult& AddBundles(const BucketBundle& value) { m_bundles.push_back(value); return *this; }

    /**
     * <p>An object that describes bucket bundles.</p>
     */
    inline GetBucketBundlesResult& AddBundles(BucketBundle&& value) { m_bundles.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BucketBundle> m_bundles;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
