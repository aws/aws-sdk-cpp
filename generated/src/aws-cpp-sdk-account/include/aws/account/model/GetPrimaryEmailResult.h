/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
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
  class GetPrimaryEmailResult
  {
  public:
    AWS_ACCOUNT_API GetPrimaryEmailResult() = default;
    AWS_ACCOUNT_API GetPrimaryEmailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCOUNT_API GetPrimaryEmailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Retrieves the primary email address associated with the specified
     * account.</p>
     */
    inline const Aws::String& GetPrimaryEmail() const { return m_primaryEmail; }
    template<typename PrimaryEmailT = Aws::String>
    void SetPrimaryEmail(PrimaryEmailT&& value) { m_primaryEmailHasBeenSet = true; m_primaryEmail = std::forward<PrimaryEmailT>(value); }
    template<typename PrimaryEmailT = Aws::String>
    GetPrimaryEmailResult& WithPrimaryEmail(PrimaryEmailT&& value) { SetPrimaryEmail(std::forward<PrimaryEmailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPrimaryEmailResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_primaryEmail;
    bool m_primaryEmailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Account
} // namespace Aws
