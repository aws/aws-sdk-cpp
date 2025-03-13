/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/DomainAssociation.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p> The result structure for the get domain association request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetDomainAssociationResult">AWS
   * API Reference</a></p>
   */
  class GetDomainAssociationResult
  {
  public:
    AWS_AMPLIFY_API GetDomainAssociationResult() = default;
    AWS_AMPLIFY_API GetDomainAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API GetDomainAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Describes the structure of a domain association, which associates a custom
     * domain with an Amplify app. </p>
     */
    inline const DomainAssociation& GetDomainAssociation() const { return m_domainAssociation; }
    template<typename DomainAssociationT = DomainAssociation>
    void SetDomainAssociation(DomainAssociationT&& value) { m_domainAssociationHasBeenSet = true; m_domainAssociation = std::forward<DomainAssociationT>(value); }
    template<typename DomainAssociationT = DomainAssociation>
    GetDomainAssociationResult& WithDomainAssociation(DomainAssociationT&& value) { SetDomainAssociation(std::forward<DomainAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDomainAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DomainAssociation m_domainAssociation;
    bool m_domainAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
