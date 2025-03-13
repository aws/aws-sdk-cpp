/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{
  class DisableDelegatedAdminAccountResult
  {
  public:
    AWS_INSPECTOR2_API DisableDelegatedAdminAccountResult() = default;
    AWS_INSPECTOR2_API DisableDelegatedAdminAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API DisableDelegatedAdminAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the successfully disabled delegated
     * administrator.</p>
     */
    inline const Aws::String& GetDelegatedAdminAccountId() const { return m_delegatedAdminAccountId; }
    template<typename DelegatedAdminAccountIdT = Aws::String>
    void SetDelegatedAdminAccountId(DelegatedAdminAccountIdT&& value) { m_delegatedAdminAccountIdHasBeenSet = true; m_delegatedAdminAccountId = std::forward<DelegatedAdminAccountIdT>(value); }
    template<typename DelegatedAdminAccountIdT = Aws::String>
    DisableDelegatedAdminAccountResult& WithDelegatedAdminAccountId(DelegatedAdminAccountIdT&& value) { SetDelegatedAdminAccountId(std::forward<DelegatedAdminAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisableDelegatedAdminAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_delegatedAdminAccountId;
    bool m_delegatedAdminAccountIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
