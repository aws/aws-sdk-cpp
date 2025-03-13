/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/AutomatedDiscoveryAccountUpdateError.h>
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
  class BatchUpdateAutomatedDiscoveryAccountsResult
  {
  public:
    AWS_MACIE2_API BatchUpdateAutomatedDiscoveryAccountsResult() = default;
    AWS_MACIE2_API BatchUpdateAutomatedDiscoveryAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API BatchUpdateAutomatedDiscoveryAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each account whose status wasn’t changed. Each
     * object identifies the account and explains why the status of automated sensitive
     * data discovery wasn’t changed for the account. This value is null if the request
     * succeeded for all specified accounts.</p>
     */
    inline const Aws::Vector<AutomatedDiscoveryAccountUpdateError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<AutomatedDiscoveryAccountUpdateError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<AutomatedDiscoveryAccountUpdateError>>
    BatchUpdateAutomatedDiscoveryAccountsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = AutomatedDiscoveryAccountUpdateError>
    BatchUpdateAutomatedDiscoveryAccountsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchUpdateAutomatedDiscoveryAccountsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutomatedDiscoveryAccountUpdateError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
