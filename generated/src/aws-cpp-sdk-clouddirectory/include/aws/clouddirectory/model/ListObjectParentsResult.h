/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectIdentifierAndLinkNameTuple.h>
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
namespace CloudDirectory
{
namespace Model
{
  class ListObjectParentsResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListObjectParentsResult() = default;
    AWS_CLOUDDIRECTORY_API ListObjectParentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListObjectParentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParents() const { return m_parents; }
    template<typename ParentsT = Aws::Map<Aws::String, Aws::String>>
    void SetParents(ParentsT&& value) { m_parentsHasBeenSet = true; m_parents = std::forward<ParentsT>(value); }
    template<typename ParentsT = Aws::Map<Aws::String, Aws::String>>
    ListObjectParentsResult& WithParents(ParentsT&& value) { SetParents(std::forward<ParentsT>(value)); return *this;}
    template<typename ParentsKeyT = Aws::String, typename ParentsValueT = Aws::String>
    ListObjectParentsResult& AddParents(ParentsKeyT&& key, ParentsValueT&& value) {
      m_parentsHasBeenSet = true; m_parents.emplace(std::forward<ParentsKeyT>(key), std::forward<ParentsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListObjectParentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline const Aws::Vector<ObjectIdentifierAndLinkNameTuple>& GetParentLinks() const { return m_parentLinks; }
    template<typename ParentLinksT = Aws::Vector<ObjectIdentifierAndLinkNameTuple>>
    void SetParentLinks(ParentLinksT&& value) { m_parentLinksHasBeenSet = true; m_parentLinks = std::forward<ParentLinksT>(value); }
    template<typename ParentLinksT = Aws::Vector<ObjectIdentifierAndLinkNameTuple>>
    ListObjectParentsResult& WithParentLinks(ParentLinksT&& value) { SetParentLinks(std::forward<ParentLinksT>(value)); return *this;}
    template<typename ParentLinksT = ObjectIdentifierAndLinkNameTuple>
    ListObjectParentsResult& AddParentLinks(ParentLinksT&& value) { m_parentLinksHasBeenSet = true; m_parentLinks.emplace_back(std::forward<ParentLinksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListObjectParentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_parents;
    bool m_parentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ObjectIdentifierAndLinkNameTuple> m_parentLinks;
    bool m_parentLinksHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
