/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/Invitation.h>
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
namespace Macie2
{
namespace Model
{
  class GetAdministratorAccountResult
  {
  public:
    AWS_MACIE2_API GetAdministratorAccountResult() = default;
    AWS_MACIE2_API GetAdministratorAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetAdministratorAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Web Services account ID for the administrator account. If the
     * accounts are associated by an Amazon Macie membership invitation, this object
     * also provides details about the invitation that was sent to establish the
     * relationship between the accounts.</p>
     */
    inline const Invitation& GetAdministrator() const { return m_administrator; }
    template<typename AdministratorT = Invitation>
    void SetAdministrator(AdministratorT&& value) { m_administratorHasBeenSet = true; m_administrator = std::forward<AdministratorT>(value); }
    template<typename AdministratorT = Invitation>
    GetAdministratorAccountResult& WithAdministrator(AdministratorT&& value) { SetAdministrator(std::forward<AdministratorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAdministratorAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Invitation m_administrator;
    bool m_administratorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
