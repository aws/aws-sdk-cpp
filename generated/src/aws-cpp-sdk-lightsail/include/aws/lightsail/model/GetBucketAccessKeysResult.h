/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/AccessKey.h>
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
  class GetBucketAccessKeysResult
  {
  public:
    AWS_LIGHTSAIL_API GetBucketAccessKeysResult() = default;
    AWS_LIGHTSAIL_API GetBucketAccessKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetBucketAccessKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes the access keys for the specified bucket.</p>
     */
    inline const Aws::Vector<AccessKey>& GetAccessKeys() const { return m_accessKeys; }
    template<typename AccessKeysT = Aws::Vector<AccessKey>>
    void SetAccessKeys(AccessKeysT&& value) { m_accessKeysHasBeenSet = true; m_accessKeys = std::forward<AccessKeysT>(value); }
    template<typename AccessKeysT = Aws::Vector<AccessKey>>
    GetBucketAccessKeysResult& WithAccessKeys(AccessKeysT&& value) { SetAccessKeys(std::forward<AccessKeysT>(value)); return *this;}
    template<typename AccessKeysT = AccessKey>
    GetBucketAccessKeysResult& AddAccessKeys(AccessKeysT&& value) { m_accessKeysHasBeenSet = true; m_accessKeys.emplace_back(std::forward<AccessKeysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketAccessKeysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccessKey> m_accessKeys;
    bool m_accessKeysHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
