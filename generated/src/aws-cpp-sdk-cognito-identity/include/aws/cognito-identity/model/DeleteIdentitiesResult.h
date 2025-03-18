/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-identity/model/UnprocessedIdentityId.h>
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
   * <p>Returned in response to a successful <code>DeleteIdentities</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/DeleteIdentitiesResponse">AWS
   * API Reference</a></p>
   */
  class DeleteIdentitiesResult
  {
  public:
    AWS_COGNITOIDENTITY_API DeleteIdentitiesResult() = default;
    AWS_COGNITOIDENTITY_API DeleteIdentitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITY_API DeleteIdentitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of UnprocessedIdentityId objects, each of which contains an
     * ErrorCode and IdentityId.</p>
     */
    inline const Aws::Vector<UnprocessedIdentityId>& GetUnprocessedIdentityIds() const { return m_unprocessedIdentityIds; }
    template<typename UnprocessedIdentityIdsT = Aws::Vector<UnprocessedIdentityId>>
    void SetUnprocessedIdentityIds(UnprocessedIdentityIdsT&& value) { m_unprocessedIdentityIdsHasBeenSet = true; m_unprocessedIdentityIds = std::forward<UnprocessedIdentityIdsT>(value); }
    template<typename UnprocessedIdentityIdsT = Aws::Vector<UnprocessedIdentityId>>
    DeleteIdentitiesResult& WithUnprocessedIdentityIds(UnprocessedIdentityIdsT&& value) { SetUnprocessedIdentityIds(std::forward<UnprocessedIdentityIdsT>(value)); return *this;}
    template<typename UnprocessedIdentityIdsT = UnprocessedIdentityId>
    DeleteIdentitiesResult& AddUnprocessedIdentityIds(UnprocessedIdentityIdsT&& value) { m_unprocessedIdentityIdsHasBeenSet = true; m_unprocessedIdentityIds.emplace_back(std::forward<UnprocessedIdentityIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteIdentitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UnprocessedIdentityId> m_unprocessedIdentityIds;
    bool m_unprocessedIdentityIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
