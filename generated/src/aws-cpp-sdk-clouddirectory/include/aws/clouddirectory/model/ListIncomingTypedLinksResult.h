/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/TypedLinkSpecifier.h>
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
  class ListIncomingTypedLinksResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListIncomingTypedLinksResult() = default;
    AWS_CLOUDDIRECTORY_API ListIncomingTypedLinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListIncomingTypedLinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns one or more typed link specifiers as output.</p>
     */
    inline const Aws::Vector<TypedLinkSpecifier>& GetLinkSpecifiers() const { return m_linkSpecifiers; }
    template<typename LinkSpecifiersT = Aws::Vector<TypedLinkSpecifier>>
    void SetLinkSpecifiers(LinkSpecifiersT&& value) { m_linkSpecifiersHasBeenSet = true; m_linkSpecifiers = std::forward<LinkSpecifiersT>(value); }
    template<typename LinkSpecifiersT = Aws::Vector<TypedLinkSpecifier>>
    ListIncomingTypedLinksResult& WithLinkSpecifiers(LinkSpecifiersT&& value) { SetLinkSpecifiers(std::forward<LinkSpecifiersT>(value)); return *this;}
    template<typename LinkSpecifiersT = TypedLinkSpecifier>
    ListIncomingTypedLinksResult& AddLinkSpecifiers(LinkSpecifiersT&& value) { m_linkSpecifiersHasBeenSet = true; m_linkSpecifiers.emplace_back(std::forward<LinkSpecifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIncomingTypedLinksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIncomingTypedLinksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TypedLinkSpecifier> m_linkSpecifiers;
    bool m_linkSpecifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
