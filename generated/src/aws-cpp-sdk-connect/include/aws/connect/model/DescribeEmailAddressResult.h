/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Connect
{
namespace Model
{
  class DescribeEmailAddressResult
  {
  public:
    AWS_CONNECT_API DescribeEmailAddressResult();
    AWS_CONNECT_API DescribeEmailAddressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeEmailAddressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the email address.</p>
     */
    inline const Aws::String& GetEmailAddressId() const{ return m_emailAddressId; }
    inline void SetEmailAddressId(const Aws::String& value) { m_emailAddressId = value; }
    inline void SetEmailAddressId(Aws::String&& value) { m_emailAddressId = std::move(value); }
    inline void SetEmailAddressId(const char* value) { m_emailAddressId.assign(value); }
    inline DescribeEmailAddressResult& WithEmailAddressId(const Aws::String& value) { SetEmailAddressId(value); return *this;}
    inline DescribeEmailAddressResult& WithEmailAddressId(Aws::String&& value) { SetEmailAddressId(std::move(value)); return *this;}
    inline DescribeEmailAddressResult& WithEmailAddressId(const char* value) { SetEmailAddressId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the email address.</p>
     */
    inline const Aws::String& GetEmailAddressArn() const{ return m_emailAddressArn; }
    inline void SetEmailAddressArn(const Aws::String& value) { m_emailAddressArn = value; }
    inline void SetEmailAddressArn(Aws::String&& value) { m_emailAddressArn = std::move(value); }
    inline void SetEmailAddressArn(const char* value) { m_emailAddressArn.assign(value); }
    inline DescribeEmailAddressResult& WithEmailAddressArn(const Aws::String& value) { SetEmailAddressArn(value); return *this;}
    inline DescribeEmailAddressResult& WithEmailAddressArn(Aws::String&& value) { SetEmailAddressArn(std::move(value)); return *this;}
    inline DescribeEmailAddressResult& WithEmailAddressArn(const char* value) { SetEmailAddressArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address with the instance, in [^\s@]+@[^\s@]+\.[^\s@]+ format.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddress.assign(value); }
    inline DescribeEmailAddressResult& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline DescribeEmailAddressResult& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline DescribeEmailAddressResult& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of email address</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline DescribeEmailAddressResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline DescribeEmailAddressResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline DescribeEmailAddressResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the email address.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeEmailAddressResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeEmailAddressResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeEmailAddressResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address creation timestamp in ISO 8601 Datetime.</p>
     */
    inline const Aws::String& GetCreateTimestamp() const{ return m_createTimestamp; }
    inline void SetCreateTimestamp(const Aws::String& value) { m_createTimestamp = value; }
    inline void SetCreateTimestamp(Aws::String&& value) { m_createTimestamp = std::move(value); }
    inline void SetCreateTimestamp(const char* value) { m_createTimestamp.assign(value); }
    inline DescribeEmailAddressResult& WithCreateTimestamp(const Aws::String& value) { SetCreateTimestamp(value); return *this;}
    inline DescribeEmailAddressResult& WithCreateTimestamp(Aws::String&& value) { SetCreateTimestamp(std::move(value)); return *this;}
    inline DescribeEmailAddressResult& WithCreateTimestamp(const char* value) { SetCreateTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address last modification timestamp in ISO 8601 Datetime.</p>
     */
    inline const Aws::String& GetModifiedTimestamp() const{ return m_modifiedTimestamp; }
    inline void SetModifiedTimestamp(const Aws::String& value) { m_modifiedTimestamp = value; }
    inline void SetModifiedTimestamp(Aws::String&& value) { m_modifiedTimestamp = std::move(value); }
    inline void SetModifiedTimestamp(const char* value) { m_modifiedTimestamp.assign(value); }
    inline DescribeEmailAddressResult& WithModifiedTimestamp(const Aws::String& value) { SetModifiedTimestamp(value); return *this;}
    inline DescribeEmailAddressResult& WithModifiedTimestamp(Aws::String&& value) { SetModifiedTimestamp(std::move(value)); return *this;}
    inline DescribeEmailAddressResult& WithModifiedTimestamp(const char* value) { SetModifiedTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeEmailAddressResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeEmailAddressResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeEmailAddressResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeEmailAddressResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeEmailAddressResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeEmailAddressResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeEmailAddressResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeEmailAddressResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeEmailAddressResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeEmailAddressResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeEmailAddressResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeEmailAddressResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_emailAddressId;

    Aws::String m_emailAddressArn;

    Aws::String m_emailAddress;

    Aws::String m_displayName;

    Aws::String m_description;

    Aws::String m_createTimestamp;

    Aws::String m_modifiedTimestamp;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
