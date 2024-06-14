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
    AWS_MACIE2_API BatchUpdateAutomatedDiscoveryAccountsResult();
    AWS_MACIE2_API BatchUpdateAutomatedDiscoveryAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API BatchUpdateAutomatedDiscoveryAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects, one for each account whose status wasn’t changed. Each
     * object identifies the account and explains why the status of automated sensitive
     * data discovery wasn’t changed for the account. This value is null if the request
     * succeeded for all specified accounts.</p>
     */
    inline const Aws::Vector<AutomatedDiscoveryAccountUpdateError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<AutomatedDiscoveryAccountUpdateError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<AutomatedDiscoveryAccountUpdateError>&& value) { m_errors = std::move(value); }
    inline BatchUpdateAutomatedDiscoveryAccountsResult& WithErrors(const Aws::Vector<AutomatedDiscoveryAccountUpdateError>& value) { SetErrors(value); return *this;}
    inline BatchUpdateAutomatedDiscoveryAccountsResult& WithErrors(Aws::Vector<AutomatedDiscoveryAccountUpdateError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchUpdateAutomatedDiscoveryAccountsResult& AddErrors(const AutomatedDiscoveryAccountUpdateError& value) { m_errors.push_back(value); return *this; }
    inline BatchUpdateAutomatedDiscoveryAccountsResult& AddErrors(AutomatedDiscoveryAccountUpdateError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchUpdateAutomatedDiscoveryAccountsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchUpdateAutomatedDiscoveryAccountsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchUpdateAutomatedDiscoveryAccountsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AutomatedDiscoveryAccountUpdateError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
