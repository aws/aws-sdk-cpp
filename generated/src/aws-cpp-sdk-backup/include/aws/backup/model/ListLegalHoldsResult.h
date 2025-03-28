﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/LegalHold.h>
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
namespace Backup
{
namespace Model
{
  class ListLegalHoldsResult
  {
  public:
    AWS_BACKUP_API ListLegalHoldsResult() = default;
    AWS_BACKUP_API ListLegalHoldsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListLegalHoldsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The next item following a partial list of returned resources. For example, if
     * a request is made to return <code>MaxResults</code> number of resources,
     * <code>NextToken</code> allows you to return more items in your list starting at
     * the location pointed to by the next token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLegalHoldsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an array of returned legal holds, both active and previous.</p>
     */
    inline const Aws::Vector<LegalHold>& GetLegalHolds() const { return m_legalHolds; }
    template<typename LegalHoldsT = Aws::Vector<LegalHold>>
    void SetLegalHolds(LegalHoldsT&& value) { m_legalHoldsHasBeenSet = true; m_legalHolds = std::forward<LegalHoldsT>(value); }
    template<typename LegalHoldsT = Aws::Vector<LegalHold>>
    ListLegalHoldsResult& WithLegalHolds(LegalHoldsT&& value) { SetLegalHolds(std::forward<LegalHoldsT>(value)); return *this;}
    template<typename LegalHoldsT = LegalHold>
    ListLegalHoldsResult& AddLegalHolds(LegalHoldsT&& value) { m_legalHoldsHasBeenSet = true; m_legalHolds.emplace_back(std::forward<LegalHoldsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLegalHoldsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<LegalHold> m_legalHolds;
    bool m_legalHoldsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
