/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/ApiKeyRestrictions.h>
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
namespace LocationService
{
namespace Model
{
  class DescribeKeyResult
  {
  public:
    AWS_LOCATIONSERVICE_API DescribeKeyResult();
    AWS_LOCATIONSERVICE_API DescribeKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API DescribeKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp for when the API key resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp for when the API key resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The timestamp for when the API key resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The timestamp for when the API key resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribeKeyResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp for when the API key resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribeKeyResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The optional description for the API key resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The optional description for the API key resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The optional description for the API key resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The optional description for the API key resource.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The optional description for the API key resource.</p>
     */
    inline DescribeKeyResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The optional description for the API key resource.</p>
     */
    inline DescribeKeyResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The optional description for the API key resource.</p>
     */
    inline DescribeKeyResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The timestamp for when the API key resource will expire in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetExpireTime() const{ return m_expireTime; }

    /**
     * <p>The timestamp for when the API key resource will expire in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetExpireTime(const Aws::Utils::DateTime& value) { m_expireTime = value; }

    /**
     * <p>The timestamp for when the API key resource will expire in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetExpireTime(Aws::Utils::DateTime&& value) { m_expireTime = std::move(value); }

    /**
     * <p>The timestamp for when the API key resource will expire in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribeKeyResult& WithExpireTime(const Aws::Utils::DateTime& value) { SetExpireTime(value); return *this;}

    /**
     * <p>The timestamp for when the API key resource will expire in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribeKeyResult& WithExpireTime(Aws::Utils::DateTime&& value) { SetExpireTime(std::move(value)); return *this;}


    /**
     * <p>The key value/string of an API key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key value/string of an API key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_key = value; }

    /**
     * <p>The key value/string of an API key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_key = std::move(value); }

    /**
     * <p>The key value/string of an API key.</p>
     */
    inline void SetKey(const char* value) { m_key.assign(value); }

    /**
     * <p>The key value/string of an API key.</p>
     */
    inline DescribeKeyResult& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key value/string of an API key.</p>
     */
    inline DescribeKeyResult& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key value/string of an API key.</p>
     */
    inline DescribeKeyResult& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the API key resource. Used when you need
     * to specify a resource across all Amazon Web Services.</p> <ul> <li> <p>Format
     * example: <code>arn:aws:geo:region:account-id:key/ExampleKey</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetKeyArn() const{ return m_keyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the API key resource. Used when you need
     * to specify a resource across all Amazon Web Services.</p> <ul> <li> <p>Format
     * example: <code>arn:aws:geo:region:account-id:key/ExampleKey</code> </p> </li>
     * </ul>
     */
    inline void SetKeyArn(const Aws::String& value) { m_keyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the API key resource. Used when you need
     * to specify a resource across all Amazon Web Services.</p> <ul> <li> <p>Format
     * example: <code>arn:aws:geo:region:account-id:key/ExampleKey</code> </p> </li>
     * </ul>
     */
    inline void SetKeyArn(Aws::String&& value) { m_keyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the API key resource. Used when you need
     * to specify a resource across all Amazon Web Services.</p> <ul> <li> <p>Format
     * example: <code>arn:aws:geo:region:account-id:key/ExampleKey</code> </p> </li>
     * </ul>
     */
    inline void SetKeyArn(const char* value) { m_keyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the API key resource. Used when you need
     * to specify a resource across all Amazon Web Services.</p> <ul> <li> <p>Format
     * example: <code>arn:aws:geo:region:account-id:key/ExampleKey</code> </p> </li>
     * </ul>
     */
    inline DescribeKeyResult& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the API key resource. Used when you need
     * to specify a resource across all Amazon Web Services.</p> <ul> <li> <p>Format
     * example: <code>arn:aws:geo:region:account-id:key/ExampleKey</code> </p> </li>
     * </ul>
     */
    inline DescribeKeyResult& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the API key resource. Used when you need
     * to specify a resource across all Amazon Web Services.</p> <ul> <li> <p>Format
     * example: <code>arn:aws:geo:region:account-id:key/ExampleKey</code> </p> </li>
     * </ul>
     */
    inline DescribeKeyResult& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}


    /**
     * <p>The name of the API key resource.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>The name of the API key resource.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyName = value; }

    /**
     * <p>The name of the API key resource.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyName = std::move(value); }

    /**
     * <p>The name of the API key resource.</p>
     */
    inline void SetKeyName(const char* value) { m_keyName.assign(value); }

    /**
     * <p>The name of the API key resource.</p>
     */
    inline DescribeKeyResult& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the API key resource.</p>
     */
    inline DescribeKeyResult& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the API key resource.</p>
     */
    inline DescribeKeyResult& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    
    inline const ApiKeyRestrictions& GetRestrictions() const{ return m_restrictions; }

    
    inline void SetRestrictions(const ApiKeyRestrictions& value) { m_restrictions = value; }

    
    inline void SetRestrictions(ApiKeyRestrictions&& value) { m_restrictions = std::move(value); }

    
    inline DescribeKeyResult& WithRestrictions(const ApiKeyRestrictions& value) { SetRestrictions(value); return *this;}

    
    inline DescribeKeyResult& WithRestrictions(ApiKeyRestrictions&& value) { SetRestrictions(std::move(value)); return *this;}


    /**
     * <p>Tags associated with the API key resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with the API key resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags associated with the API key resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags associated with the API key resource.</p>
     */
    inline DescribeKeyResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the API key resource.</p>
     */
    inline DescribeKeyResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the API key resource.</p>
     */
    inline DescribeKeyResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags associated with the API key resource.</p>
     */
    inline DescribeKeyResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the API key resource.</p>
     */
    inline DescribeKeyResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the API key resource.</p>
     */
    inline DescribeKeyResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags associated with the API key resource.</p>
     */
    inline DescribeKeyResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the API key resource.</p>
     */
    inline DescribeKeyResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the API key resource.</p>
     */
    inline DescribeKeyResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The timestamp for when the API key resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The timestamp for when the API key resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The timestamp for when the API key resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The timestamp for when the API key resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribeKeyResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The timestamp for when the API key resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline DescribeKeyResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createTime;

    Aws::String m_description;

    Aws::Utils::DateTime m_expireTime;

    Aws::String m_key;

    Aws::String m_keyArn;

    Aws::String m_keyName;

    ApiKeyRestrictions m_restrictions;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
