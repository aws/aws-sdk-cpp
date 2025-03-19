/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/AllowDenyList.h>
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
namespace FraudDetector
{
namespace Model
{
  class GetListsMetadataResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetListsMetadataResult() = default;
    AWS_FRAUDDETECTOR_API GetListsMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetListsMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The metadata of the specified list or all lists under the account. </p>
     */
    inline const Aws::Vector<AllowDenyList>& GetLists() const { return m_lists; }
    template<typename ListsT = Aws::Vector<AllowDenyList>>
    void SetLists(ListsT&& value) { m_listsHasBeenSet = true; m_lists = std::forward<ListsT>(value); }
    template<typename ListsT = Aws::Vector<AllowDenyList>>
    GetListsMetadataResult& WithLists(ListsT&& value) { SetLists(std::forward<ListsT>(value)); return *this;}
    template<typename ListsT = AllowDenyList>
    GetListsMetadataResult& AddLists(ListsT&& value) { m_listsHasBeenSet = true; m_lists.emplace_back(std::forward<ListsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The next page token. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetListsMetadataResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetListsMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AllowDenyList> m_lists;
    bool m_listsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
