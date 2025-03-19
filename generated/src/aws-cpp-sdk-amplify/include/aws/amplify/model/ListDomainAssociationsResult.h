/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/DomainAssociation.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p> The result structure for the list domain association request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListDomainAssociationsResult">AWS
   * API Reference</a></p>
   */
  class ListDomainAssociationsResult
  {
  public:
    AWS_AMPLIFY_API ListDomainAssociationsResult() = default;
    AWS_AMPLIFY_API ListDomainAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API ListDomainAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of domain associations. </p>
     */
    inline const Aws::Vector<DomainAssociation>& GetDomainAssociations() const { return m_domainAssociations; }
    template<typename DomainAssociationsT = Aws::Vector<DomainAssociation>>
    void SetDomainAssociations(DomainAssociationsT&& value) { m_domainAssociationsHasBeenSet = true; m_domainAssociations = std::forward<DomainAssociationsT>(value); }
    template<typename DomainAssociationsT = Aws::Vector<DomainAssociation>>
    ListDomainAssociationsResult& WithDomainAssociations(DomainAssociationsT&& value) { SetDomainAssociations(std::forward<DomainAssociationsT>(value)); return *this;}
    template<typename DomainAssociationsT = DomainAssociation>
    ListDomainAssociationsResult& AddDomainAssociations(DomainAssociationsT&& value) { m_domainAssociationsHasBeenSet = true; m_domainAssociations.emplace_back(std::forward<DomainAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A pagination token. If non-null, a pagination token is returned in a result.
     * Pass its value in another request to retrieve more entries. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDomainAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDomainAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainAssociation> m_domainAssociations;
    bool m_domainAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
