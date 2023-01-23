/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_LIGHTSAIL_API GetBucketAccessKeysResult();
    AWS_LIGHTSAIL_API GetBucketAccessKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetBucketAccessKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the access keys for the specified bucket.</p>
     */
    inline const Aws::Vector<AccessKey>& GetAccessKeys() const{ return m_accessKeys; }

    /**
     * <p>An object that describes the access keys for the specified bucket.</p>
     */
    inline void SetAccessKeys(const Aws::Vector<AccessKey>& value) { m_accessKeys = value; }

    /**
     * <p>An object that describes the access keys for the specified bucket.</p>
     */
    inline void SetAccessKeys(Aws::Vector<AccessKey>&& value) { m_accessKeys = std::move(value); }

    /**
     * <p>An object that describes the access keys for the specified bucket.</p>
     */
    inline GetBucketAccessKeysResult& WithAccessKeys(const Aws::Vector<AccessKey>& value) { SetAccessKeys(value); return *this;}

    /**
     * <p>An object that describes the access keys for the specified bucket.</p>
     */
    inline GetBucketAccessKeysResult& WithAccessKeys(Aws::Vector<AccessKey>&& value) { SetAccessKeys(std::move(value)); return *this;}

    /**
     * <p>An object that describes the access keys for the specified bucket.</p>
     */
    inline GetBucketAccessKeysResult& AddAccessKeys(const AccessKey& value) { m_accessKeys.push_back(value); return *this; }

    /**
     * <p>An object that describes the access keys for the specified bucket.</p>
     */
    inline GetBucketAccessKeysResult& AddAccessKeys(AccessKey&& value) { m_accessKeys.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AccessKey> m_accessKeys;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
