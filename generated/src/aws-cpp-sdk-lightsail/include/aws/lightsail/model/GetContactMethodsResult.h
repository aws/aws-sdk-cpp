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
    AWS_LIGHTSAIL_API GetContactMethodsResult() = default;
    AWS_LIGHTSAIL_API GetContactMethodsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetContactMethodsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe the contact methods.</p>
     */
    inline const Aws::Vector<ContactMethod>& GetContactMethods() const { return m_contactMethods; }
    template<typename ContactMethodsT = Aws::Vector<ContactMethod>>
    void SetContactMethods(ContactMethodsT&& value) { m_contactMethodsHasBeenSet = true; m_contactMethods = std::forward<ContactMethodsT>(value); }
    template<typename ContactMethodsT = Aws::Vector<ContactMethod>>
    GetContactMethodsResult& WithContactMethods(ContactMethodsT&& value) { SetContactMethods(std::forward<ContactMethodsT>(value)); return *this;}
    template<typename ContactMethodsT = ContactMethod>
    GetContactMethodsResult& AddContactMethods(ContactMethodsT&& value) { m_contactMethodsHasBeenSet = true; m_contactMethods.emplace_back(std::forward<ContactMethodsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetContactMethodsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContactMethod> m_contactMethods;
    bool m_contactMethodsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
