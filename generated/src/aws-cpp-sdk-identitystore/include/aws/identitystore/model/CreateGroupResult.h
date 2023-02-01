/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IdentityStore
{
namespace Model
{
  class CreateGroupResult
  {
  public:
    AWS_IDENTITYSTORE_API CreateGroupResult();
    AWS_IDENTITYSTORE_API CreateGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IDENTITYSTORE_API CreateGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the newly created group in the identity store.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The identifier of the newly created group in the identity store.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupId = value; }

    /**
     * <p>The identifier of the newly created group in the identity store.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupId = std::move(value); }

    /**
     * <p>The identifier of the newly created group in the identity store.</p>
     */
    inline void SetGroupId(const char* value) { m_groupId.assign(value); }

    /**
     * <p>The identifier of the newly created group in the identity store.</p>
     */
    inline CreateGroupResult& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The identifier of the newly created group in the identity store.</p>
     */
    inline CreateGroupResult& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the newly created group in the identity store.</p>
     */
    inline CreateGroupResult& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreId = value; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreId = std::move(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const char* value) { m_identityStoreId.assign(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline CreateGroupResult& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline CreateGroupResult& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline CreateGroupResult& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}

  private:

    Aws::String m_groupId;

    Aws::String m_identityStoreId;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
