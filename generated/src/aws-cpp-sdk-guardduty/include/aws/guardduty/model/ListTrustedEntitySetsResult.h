/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GuardDuty
{
namespace Model
{
  class ListTrustedEntitySetsResult
  {
  public:
    AWS_GUARDDUTY_API ListTrustedEntitySetsResult() = default;
    AWS_GUARDDUTY_API ListTrustedEntitySetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API ListTrustedEntitySetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The IDs of the trusted entity set resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTrustedEntitySetIds() const { return m_trustedEntitySetIds; }
    template<typename TrustedEntitySetIdsT = Aws::Vector<Aws::String>>
    void SetTrustedEntitySetIds(TrustedEntitySetIdsT&& value) { m_trustedEntitySetIdsHasBeenSet = true; m_trustedEntitySetIds = std::forward<TrustedEntitySetIdsT>(value); }
    template<typename TrustedEntitySetIdsT = Aws::Vector<Aws::String>>
    ListTrustedEntitySetsResult& WithTrustedEntitySetIds(TrustedEntitySetIdsT&& value) { SetTrustedEntitySetIds(std::forward<TrustedEntitySetIdsT>(value)); return *this;}
    template<typename TrustedEntitySetIdsT = Aws::String>
    ListTrustedEntitySetsResult& AddTrustedEntitySetIds(TrustedEntitySetIdsT&& value) { m_trustedEntitySetIdsHasBeenSet = true; m_trustedEntitySetIds.emplace_back(std::forward<TrustedEntitySetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTrustedEntitySetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTrustedEntitySetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_trustedEntitySetIds;
    bool m_trustedEntitySetIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
