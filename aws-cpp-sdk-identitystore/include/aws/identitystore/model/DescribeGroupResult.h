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
  class AWS_IDENTITYSTORE_API DescribeGroupResult
  {
  public:
    DescribeGroupResult();
    DescribeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * <p>Contains the group’s display name value. The length limit is 1024 characters.
     * This value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space and non breaking space in
     * this attribute. The characters “&lt;&gt;;:%” are excluded. This value is
     * specified at the time the group is created and stored as an attribute of the
     * group object in the identity store.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>Contains the group’s display name value. The length limit is 1024 characters.
     * This value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space and non breaking space in
     * this attribute. The characters “&lt;&gt;;:%” are excluded. This value is
     * specified at the time the group is created and stored as an attribute of the
     * group object in the identity store.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>Contains the group’s display name value. The length limit is 1024 characters.
     * This value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space and non breaking space in
     * this attribute. The characters “&lt;&gt;;:%” are excluded. This value is
     * specified at the time the group is created and stored as an attribute of the
     * group object in the identity store.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>Contains the group’s display name value. The length limit is 1024 characters.
     * This value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space and non breaking space in
     * this attribute. The characters “&lt;&gt;;:%” are excluded. This value is
     * specified at the time the group is created and stored as an attribute of the
     * group object in the identity store.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>Contains the group’s display name value. The length limit is 1024 characters.
     * This value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space and non breaking space in
     * this attribute. The characters “&lt;&gt;;:%” are excluded. This value is
     * specified at the time the group is created and stored as an attribute of the
     * group object in the identity store.</p>
     */
    inline DescribeGroupResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>Contains the group’s display name value. The length limit is 1024 characters.
     * This value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space and non breaking space in
     * this attribute. The characters “&lt;&gt;;:%” are excluded. This value is
     * specified at the time the group is created and stored as an attribute of the
     * group object in the identity store.</p>
     */
    inline DescribeGroupResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>Contains the group’s display name value. The length limit is 1024 characters.
     * This value can consist of letters, accented characters, symbols, numbers,
     * punctuation, tab, new line, carriage return, space and non breaking space in
     * this attribute. The characters “&lt;&gt;;:%” are excluded. This value is
     * specified at the time the group is created and stored as an attribute of the
     * group object in the identity store.</p>
     */
    inline DescribeGroupResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

  private:

    Aws::String m_groupId;

    Aws::String m_displayName;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
