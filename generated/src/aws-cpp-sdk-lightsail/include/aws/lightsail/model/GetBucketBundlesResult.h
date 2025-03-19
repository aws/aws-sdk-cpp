/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_LIGHTSAIL_API GetBucketBundlesResult() = default;
    AWS_LIGHTSAIL_API GetBucketBundlesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetBucketBundlesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes bucket bundles.</p>
     */
    inline const Aws::Vector<BucketBundle>& GetBundles() const { return m_bundles; }
    template<typename BundlesT = Aws::Vector<BucketBundle>>
    void SetBundles(BundlesT&& value) { m_bundlesHasBeenSet = true; m_bundles = std::forward<BundlesT>(value); }
    template<typename BundlesT = Aws::Vector<BucketBundle>>
    GetBucketBundlesResult& WithBundles(BundlesT&& value) { SetBundles(std::forward<BundlesT>(value)); return *this;}
    template<typename BundlesT = BucketBundle>
    GetBucketBundlesResult& AddBundles(BundlesT&& value) { m_bundlesHasBeenSet = true; m_bundles.emplace_back(std::forward<BundlesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketBundlesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BucketBundle> m_bundles;
    bool m_bundlesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
