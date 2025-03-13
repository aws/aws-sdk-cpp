/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditSuppression.h>
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
namespace IoT
{
namespace Model
{
  class ListAuditSuppressionsResult
  {
  public:
    AWS_IOT_API ListAuditSuppressionsResult() = default;
    AWS_IOT_API ListAuditSuppressionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListAuditSuppressionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> List of audit suppressions. </p>
     */
    inline const Aws::Vector<AuditSuppression>& GetSuppressions() const { return m_suppressions; }
    template<typename SuppressionsT = Aws::Vector<AuditSuppression>>
    void SetSuppressions(SuppressionsT&& value) { m_suppressionsHasBeenSet = true; m_suppressions = std::forward<SuppressionsT>(value); }
    template<typename SuppressionsT = Aws::Vector<AuditSuppression>>
    ListAuditSuppressionsResult& WithSuppressions(SuppressionsT&& value) { SetSuppressions(std::forward<SuppressionsT>(value)); return *this;}
    template<typename SuppressionsT = AuditSuppression>
    ListAuditSuppressionsResult& AddSuppressions(SuppressionsT&& value) { m_suppressionsHasBeenSet = true; m_suppressions.emplace_back(std::forward<SuppressionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAuditSuppressionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAuditSuppressionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuditSuppression> m_suppressions;
    bool m_suppressionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
