/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ContactMethod.h>
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
  class GetContactMethodsResult
  {
  public:
    AWS_LIGHTSAIL_API GetContactMethodsResult();
    AWS_LIGHTSAIL_API GetContactMethodsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetContactMethodsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that describe the contact methods.</p>
     */
    inline const Aws::Vector<ContactMethod>& GetContactMethods() const{ return m_contactMethods; }

    /**
     * <p>An array of objects that describe the contact methods.</p>
     */
    inline void SetContactMethods(const Aws::Vector<ContactMethod>& value) { m_contactMethods = value; }

    /**
     * <p>An array of objects that describe the contact methods.</p>
     */
    inline void SetContactMethods(Aws::Vector<ContactMethod>&& value) { m_contactMethods = std::move(value); }

    /**
     * <p>An array of objects that describe the contact methods.</p>
     */
    inline GetContactMethodsResult& WithContactMethods(const Aws::Vector<ContactMethod>& value) { SetContactMethods(value); return *this;}

    /**
     * <p>An array of objects that describe the contact methods.</p>
     */
    inline GetContactMethodsResult& WithContactMethods(Aws::Vector<ContactMethod>&& value) { SetContactMethods(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the contact methods.</p>
     */
    inline GetContactMethodsResult& AddContactMethods(const ContactMethod& value) { m_contactMethods.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the contact methods.</p>
     */
    inline GetContactMethodsResult& AddContactMethods(ContactMethod&& value) { m_contactMethods.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetContactMethodsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetContactMethodsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetContactMethodsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ContactMethod> m_contactMethods;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
