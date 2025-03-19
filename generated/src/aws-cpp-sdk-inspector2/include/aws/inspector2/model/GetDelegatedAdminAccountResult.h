/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/DelegatedAdmin.h>
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
  class GetDelegatedAdminAccountResult
  {
  public:
    AWS_INSPECTOR2_API GetDelegatedAdminAccountResult() = default;
    AWS_INSPECTOR2_API GetDelegatedAdminAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API GetDelegatedAdminAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the Amazon Inspector delegated
     * administrator.</p>
     */
    inline const DelegatedAdmin& GetDelegatedAdmin() const { return m_delegatedAdmin; }
    template<typename DelegatedAdminT = DelegatedAdmin>
    void SetDelegatedAdmin(DelegatedAdminT&& value) { m_delegatedAdminHasBeenSet = true; m_delegatedAdmin = std::forward<DelegatedAdminT>(value); }
    template<typename DelegatedAdminT = DelegatedAdmin>
    GetDelegatedAdminAccountResult& WithDelegatedAdmin(DelegatedAdminT&& value) { SetDelegatedAdmin(std::forward<DelegatedAdminT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDelegatedAdminAccountResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DelegatedAdmin m_delegatedAdmin;
    bool m_delegatedAdminHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
