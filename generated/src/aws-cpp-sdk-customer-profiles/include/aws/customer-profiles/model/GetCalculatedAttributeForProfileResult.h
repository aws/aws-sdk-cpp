/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class GetCalculatedAttributeForProfileResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetCalculatedAttributeForProfileResult();
    AWS_CUSTOMERPROFILES_API GetCalculatedAttributeForProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetCalculatedAttributeForProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline const Aws::String& GetCalculatedAttributeName() const{ return m_calculatedAttributeName; }

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline void SetCalculatedAttributeName(const Aws::String& value) { m_calculatedAttributeName = value; }

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline void SetCalculatedAttributeName(Aws::String&& value) { m_calculatedAttributeName = std::move(value); }

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline void SetCalculatedAttributeName(const char* value) { m_calculatedAttributeName.assign(value); }

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline GetCalculatedAttributeForProfileResult& WithCalculatedAttributeName(const Aws::String& value) { SetCalculatedAttributeName(value); return *this;}

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline GetCalculatedAttributeForProfileResult& WithCalculatedAttributeName(Aws::String&& value) { SetCalculatedAttributeName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the calculated attribute.</p>
     */
    inline GetCalculatedAttributeForProfileResult& WithCalculatedAttributeName(const char* value) { SetCalculatedAttributeName(value); return *this;}


    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline GetCalculatedAttributeForProfileResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline GetCalculatedAttributeForProfileResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the calculated attribute.</p>
     */
    inline GetCalculatedAttributeForProfileResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>Indicates whether the calculated attribute’s value is based on partial data.
     * If data is partial, it is set to true.</p>
     */
    inline const Aws::String& GetIsDataPartial() const{ return m_isDataPartial; }

    /**
     * <p>Indicates whether the calculated attribute’s value is based on partial data.
     * If data is partial, it is set to true.</p>
     */
    inline void SetIsDataPartial(const Aws::String& value) { m_isDataPartial = value; }

    /**
     * <p>Indicates whether the calculated attribute’s value is based on partial data.
     * If data is partial, it is set to true.</p>
     */
    inline void SetIsDataPartial(Aws::String&& value) { m_isDataPartial = std::move(value); }

    /**
     * <p>Indicates whether the calculated attribute’s value is based on partial data.
     * If data is partial, it is set to true.</p>
     */
    inline void SetIsDataPartial(const char* value) { m_isDataPartial.assign(value); }

    /**
     * <p>Indicates whether the calculated attribute’s value is based on partial data.
     * If data is partial, it is set to true.</p>
     */
    inline GetCalculatedAttributeForProfileResult& WithIsDataPartial(const Aws::String& value) { SetIsDataPartial(value); return *this;}

    /**
     * <p>Indicates whether the calculated attribute’s value is based on partial data.
     * If data is partial, it is set to true.</p>
     */
    inline GetCalculatedAttributeForProfileResult& WithIsDataPartial(Aws::String&& value) { SetIsDataPartial(std::move(value)); return *this;}

    /**
     * <p>Indicates whether the calculated attribute’s value is based on partial data.
     * If data is partial, it is set to true.</p>
     */
    inline GetCalculatedAttributeForProfileResult& WithIsDataPartial(const char* value) { SetIsDataPartial(value); return *this;}


    /**
     * <p>The value of the calculated attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the calculated attribute.</p>
     */
    inline void SetValue(const Aws::String& value) { m_value = value; }

    /**
     * <p>The value of the calculated attribute.</p>
     */
    inline void SetValue(Aws::String&& value) { m_value = std::move(value); }

    /**
     * <p>The value of the calculated attribute.</p>
     */
    inline void SetValue(const char* value) { m_value.assign(value); }

    /**
     * <p>The value of the calculated attribute.</p>
     */
    inline GetCalculatedAttributeForProfileResult& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the calculated attribute.</p>
     */
    inline GetCalculatedAttributeForProfileResult& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the calculated attribute.</p>
     */
    inline GetCalculatedAttributeForProfileResult& WithValue(const char* value) { SetValue(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCalculatedAttributeForProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCalculatedAttributeForProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCalculatedAttributeForProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_calculatedAttributeName;

    Aws::String m_displayName;

    Aws::String m_isDataPartial;

    Aws::String m_value;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
