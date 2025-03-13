/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/model/ContactInformation.h>
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
namespace Account
{
namespace Model
{
  class GetContactInformationResult
  {
  public:
    AWS_ACCOUNT_API GetContactInformationResult() = default;
    AWS_ACCOUNT_API GetContactInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCOUNT_API GetContactInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the details of the primary contact information associated with an
     * Amazon Web Services account.</p>
     */
    inline const ContactInformation& GetContactInformation() const { return m_contactInformation; }
    template<typename ContactInformationT = ContactInformation>
    void SetContactInformation(ContactInformationT&& value) { m_contactInformationHasBeenSet = true; m_contactInformation = std::forward<ContactInformationT>(value); }
    template<typename ContactInformationT = ContactInformation>
    GetContactInformationResult& WithContactInformation(ContactInformationT&& value) { SetContactInformation(std::forward<ContactInformationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetContactInformationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContactInformation m_contactInformation;
    bool m_contactInformationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
