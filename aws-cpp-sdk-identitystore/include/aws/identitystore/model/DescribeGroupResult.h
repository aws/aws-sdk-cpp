/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/identitystore/model/ExternalId.h>
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
  class DescribeGroupResult
  {
  public:
    AWS_IDENTITYSTORE_API DescribeGroupResult();
    AWS_IDENTITYSTORE_API DescribeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IDENTITYSTORE_API DescribeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupId = value; }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupId = std::move(value); }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline void SetGroupId(const char* value) { m_groupId.assign(value); }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline DescribeGroupResult& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline DescribeGroupResult& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline DescribeGroupResult& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The group’s display name value. The length limit is 1,024 characters. This
     * value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time that the group is created
     * and stored as an attribute of the group object in the identity store.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The group’s display name value. The length limit is 1,024 characters. This
     * value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time that the group is created
     * and stored as an attribute of the group object in the identity store.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The group’s display name value. The length limit is 1,024 characters. This
     * value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time that the group is created
     * and stored as an attribute of the group object in the identity store.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The group’s display name value. The length limit is 1,024 characters. This
     * value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time that the group is created
     * and stored as an attribute of the group object in the identity store.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The group’s display name value. The length limit is 1,024 characters. This
     * value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time that the group is created
     * and stored as an attribute of the group object in the identity store.</p>
     */
    inline DescribeGroupResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The group’s display name value. The length limit is 1,024 characters. This
     * value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time that the group is created
     * and stored as an attribute of the group object in the identity store.</p>
     */
    inline DescribeGroupResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The group’s display name value. The length limit is 1,024 characters. This
     * value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space, and nonbreaking space in
     * this attribute. This value is specified at the time that the group is created
     * and stored as an attribute of the group object in the identity store.</p>
     */
    inline DescribeGroupResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline const Aws::Vector<ExternalId>& GetExternalIds() const{ return m_externalIds; }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline void SetExternalIds(const Aws::Vector<ExternalId>& value) { m_externalIds = value; }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline void SetExternalIds(Aws::Vector<ExternalId>&& value) { m_externalIds = std::move(value); }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline DescribeGroupResult& WithExternalIds(const Aws::Vector<ExternalId>& value) { SetExternalIds(value); return *this;}

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline DescribeGroupResult& WithExternalIds(Aws::Vector<ExternalId>&& value) { SetExternalIds(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline DescribeGroupResult& AddExternalIds(const ExternalId& value) { m_externalIds.push_back(value); return *this; }

    /**
     * <p>A list of <code>ExternalId</code> objects that contains the identifiers
     * issued to this resource by an external identity provider.</p>
     */
    inline DescribeGroupResult& AddExternalIds(ExternalId&& value) { m_externalIds.push_back(std::move(value)); return *this; }


    /**
     * <p>A string containing a description of the group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A string containing a description of the group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A string containing a description of the group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A string containing a description of the group.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A string containing a description of the group.</p>
     */
    inline DescribeGroupResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A string containing a description of the group.</p>
     */
    inline DescribeGroupResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A string containing a description of the group.</p>
     */
    inline DescribeGroupResult& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline DescribeGroupResult& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline DescribeGroupResult& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline DescribeGroupResult& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}

  private:

    Aws::String m_groupId;

    Aws::String m_displayName;

    Aws::Vector<ExternalId> m_externalIds;

    Aws::String m_description;

    Aws::String m_identityStoreId;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
