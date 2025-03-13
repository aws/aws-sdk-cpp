/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/model/AlternateContact.h>
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
  class GetAlternateContactResult
  {
  public:
    AWS_ACCOUNT_API GetAlternateContactResult() = default;
    AWS_ACCOUNT_API GetAlternateContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCOUNT_API GetAlternateContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that contains the details for the specified alternate
     * contact.</p>
     */
    inline const AlternateContact& GetAlternateContact() const { return m_alternateContact; }
    template<typename AlternateContactT = AlternateContact>
    void SetAlternateContact(AlternateContactT&& value) { m_alternateContactHasBeenSet = true; m_alternateContact = std::forward<AlternateContactT>(value); }
    template<typename AlternateContactT = AlternateContact>
    GetAlternateContactResult& WithAlternateContact(AlternateContactT&& value) { SetAlternateContact(std::forward<AlternateContactT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAlternateContactResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AlternateContact m_alternateContact;
    bool m_alternateContactHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
