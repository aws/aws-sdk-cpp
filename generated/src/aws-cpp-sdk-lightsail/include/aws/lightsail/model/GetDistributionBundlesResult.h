/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/DistributionBundle.h>
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
  class GetDistributionBundlesResult
  {
  public:
    AWS_LIGHTSAIL_API GetDistributionBundlesResult();
    AWS_LIGHTSAIL_API GetDistributionBundlesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetDistributionBundlesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes a distribution bundle.</p>
     */
    inline const Aws::Vector<DistributionBundle>& GetBundles() const{ return m_bundles; }

    /**
     * <p>An object that describes a distribution bundle.</p>
     */
    inline void SetBundles(const Aws::Vector<DistributionBundle>& value) { m_bundles = value; }

    /**
     * <p>An object that describes a distribution bundle.</p>
     */
    inline void SetBundles(Aws::Vector<DistributionBundle>&& value) { m_bundles = std::move(value); }

    /**
     * <p>An object that describes a distribution bundle.</p>
     */
    inline GetDistributionBundlesResult& WithBundles(const Aws::Vector<DistributionBundle>& value) { SetBundles(value); return *this;}

    /**
     * <p>An object that describes a distribution bundle.</p>
     */
    inline GetDistributionBundlesResult& WithBundles(Aws::Vector<DistributionBundle>&& value) { SetBundles(std::move(value)); return *this;}

    /**
     * <p>An object that describes a distribution bundle.</p>
     */
    inline GetDistributionBundlesResult& AddBundles(const DistributionBundle& value) { m_bundles.push_back(value); return *this; }

    /**
     * <p>An object that describes a distribution bundle.</p>
     */
    inline GetDistributionBundlesResult& AddBundles(DistributionBundle&& value) { m_bundles.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DistributionBundle> m_bundles;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
