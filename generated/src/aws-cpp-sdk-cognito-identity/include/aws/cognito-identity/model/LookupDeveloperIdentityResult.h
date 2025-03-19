/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CognitoIdentity
{
namespace Model
{
  /**
   * <p>Returned in response to a successful <code>LookupDeveloperIdentity</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/LookupDeveloperIdentityResponse">AWS
   * API Reference</a></p>
   */
  class LookupDeveloperIdentityResult
  {
  public:
    AWS_COGNITOIDENTITY_API LookupDeveloperIdentityResult() = default;
    AWS_COGNITOIDENTITY_API LookupDeveloperIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITY_API LookupDeveloperIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityId() const { return m_identityId; }
    template<typename IdentityIdT = Aws::String>
    void SetIdentityId(IdentityIdT&& value) { m_identityIdHasBeenSet = true; m_identityId = std::forward<IdentityIdT>(value); }
    template<typename IdentityIdT = Aws::String>
    LookupDeveloperIdentityResult& WithIdentityId(IdentityIdT&& value) { SetIdentityId(std::forward<IdentityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the list of developer user identifiers associated with an identity
     * ID. Cognito supports the association of multiple developer user identifiers with
     * an identity ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeveloperUserIdentifierList() const { return m_developerUserIdentifierList; }
    template<typename DeveloperUserIdentifierListT = Aws::Vector<Aws::String>>
    void SetDeveloperUserIdentifierList(DeveloperUserIdentifierListT&& value) { m_developerUserIdentifierListHasBeenSet = true; m_developerUserIdentifierList = std::forward<DeveloperUserIdentifierListT>(value); }
    template<typename DeveloperUserIdentifierListT = Aws::Vector<Aws::String>>
    LookupDeveloperIdentityResult& WithDeveloperUserIdentifierList(DeveloperUserIdentifierListT&& value) { SetDeveloperUserIdentifierList(std::forward<DeveloperUserIdentifierListT>(value)); return *this;}
    template<typename DeveloperUserIdentifierListT = Aws::String>
    LookupDeveloperIdentityResult& AddDeveloperUserIdentifierList(DeveloperUserIdentifierListT&& value) { m_developerUserIdentifierListHasBeenSet = true; m_developerUserIdentifierList.emplace_back(std::forward<DeveloperUserIdentifierListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token. The first call you make will have <code>NextToken</code>
     * set to null. After that the service will return <code>NextToken</code> values as
     * needed. For example, let's say you make a request with <code>MaxResults</code>
     * set to 10, and there are 20 matches in the database. The service will return a
     * pagination token as a part of the response. This token can be used to call the
     * API again and get results starting from the 11th match.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    LookupDeveloperIdentityResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    LookupDeveloperIdentityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_developerUserIdentifierList;
    bool m_developerUserIdentifierListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
