/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace LocationService
{
namespace Model
{
  class CreateKeyResult
  {
  public:
    AWS_LOCATIONSERVICE_API CreateKeyResult();
    AWS_LOCATIONSERVICE_API CreateKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API CreateKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateKeyResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp for when the API key resource was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline CreateKeyResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The key value/string of an API key. This value is used when making API calls
     * to authorize the call. For example, see <a
     * href="https://docs.aws.amazon.com/location/latest/APIReference/API_GetMapGlyphs.html">GetMapGlyphs</a>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key value/string of an API key. This value is used when making API calls
     * to authorize the call. For example, see <a
     * href="https://docs.aws.amazon.com/location/latest/APIReference/API_GetMapGlyphs.html">GetMapGlyphs</a>.</p>
     */
    inline void SetKey(const Aws::String& value) { m_key = value; }

    /**
     * <p>The key value/string of an API key. This value is used when making API calls
     * to authorize the call. For example, see <a
     * href="https://docs.aws.amazon.com/location/latest/APIReference/API_GetMapGlyphs.html">GetMapGlyphs</a>.</p>
     */
    inline void SetKey(Aws::String&& value) { m_key = std::move(value); }

    /**
     * <p>The key value/string of an API key. This value is used when making API calls
     * to authorize the call. For example, see <a
     * href="https://docs.aws.amazon.com/location/latest/APIReference/API_GetMapGlyphs.html">GetMapGlyphs</a>.</p>
     */
    inline void SetKey(const char* value) { m_key.assign(value); }

    /**
     * <p>The key value/string of an API key. This value is used when making API calls
     * to authorize the call. For example, see <a
     * href="https://docs.aws.amazon.com/location/latest/APIReference/API_GetMapGlyphs.html">GetMapGlyphs</a>.</p>
     */
    inline CreateKeyResult& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key value/string of an API key. This value is used when making API calls
     * to authorize the call. For example, see <a
     * href="https://docs.aws.amazon.com/location/latest/APIReference/API_GetMapGlyphs.html">GetMapGlyphs</a>.</p>
     */
    inline CreateKeyResult& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key value/string of an API key. This value is used when making API calls
     * to authorize the call. For example, see <a
     * href="https://docs.aws.amazon.com/location/latest/APIReference/API_GetMapGlyphs.html">GetMapGlyphs</a>.</p>
     */
    inline CreateKeyResult& WithKey(const char* value) { SetKey(value); return *this;}


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
    inline CreateKeyResult& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the API key resource. Used when you need
     * to specify a resource across all Amazon Web Services.</p> <ul> <li> <p>Format
     * example: <code>arn:aws:geo:region:account-id:key/ExampleKey</code> </p> </li>
     * </ul>
     */
    inline CreateKeyResult& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the API key resource. Used when you need
     * to specify a resource across all Amazon Web Services.</p> <ul> <li> <p>Format
     * example: <code>arn:aws:geo:region:account-id:key/ExampleKey</code> </p> </li>
     * </ul>
     */
    inline CreateKeyResult& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}


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
    inline CreateKeyResult& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the API key resource.</p>
     */
    inline CreateKeyResult& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the API key resource.</p>
     */
    inline CreateKeyResult& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createTime;

    Aws::String m_key;

    Aws::String m_keyArn;

    Aws::String m_keyName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
