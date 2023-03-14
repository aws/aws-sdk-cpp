/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class UpdateKeyResult
  {
  public:
    AWS_LOCATIONSERVICE_API UpdateKeyResult();
    AWS_LOCATIONSERVICE_API UpdateKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API UpdateKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateKeyResult& WithKeyArn(const Aws::String& value) { SetKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the API key resource. Used when you need
     * to specify a resource across all Amazon Web Services.</p> <ul> <li> <p>Format
     * example: <code>arn:aws:geo:region:account-id:key/ExampleKey</code> </p> </li>
     * </ul>
     */
    inline UpdateKeyResult& WithKeyArn(Aws::String&& value) { SetKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the API key resource. Used when you need
     * to specify a resource across all Amazon Web Services.</p> <ul> <li> <p>Format
     * example: <code>arn:aws:geo:region:account-id:key/ExampleKey</code> </p> </li>
     * </ul>
     */
    inline UpdateKeyResult& WithKeyArn(const char* value) { SetKeyArn(value); return *this;}


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
    inline UpdateKeyResult& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>The name of the API key resource.</p>
     */
    inline UpdateKeyResult& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>The name of the API key resource.</p>
     */
    inline UpdateKeyResult& WithKeyName(const char* value) { SetKeyName(value); return *this;}


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
    inline UpdateKeyResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The timestamp for when the API key resource was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline UpdateKeyResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_keyArn;

    Aws::String m_keyName;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
