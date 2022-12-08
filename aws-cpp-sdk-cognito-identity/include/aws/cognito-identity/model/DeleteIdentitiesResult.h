/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_COGNITOIDENTITY_API DeleteIdentitiesResult();
    AWS_COGNITOIDENTITY_API DeleteIdentitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITY_API DeleteIdentitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of UnprocessedIdentityId objects, each of which contains an
     * ErrorCode and IdentityId.</p>
     */
    inline const Aws::Vector<UnprocessedIdentityId>& GetUnprocessedIdentityIds() const{ return m_unprocessedIdentityIds; }

    /**
     * <p>An array of UnprocessedIdentityId objects, each of which contains an
     * ErrorCode and IdentityId.</p>
     */
    inline void SetUnprocessedIdentityIds(const Aws::Vector<UnprocessedIdentityId>& value) { m_unprocessedIdentityIds = value; }

    /**
     * <p>An array of UnprocessedIdentityId objects, each of which contains an
     * ErrorCode and IdentityId.</p>
     */
    inline void SetUnprocessedIdentityIds(Aws::Vector<UnprocessedIdentityId>&& value) { m_unprocessedIdentityIds = std::move(value); }

    /**
     * <p>An array of UnprocessedIdentityId objects, each of which contains an
     * ErrorCode and IdentityId.</p>
     */
    inline DeleteIdentitiesResult& WithUnprocessedIdentityIds(const Aws::Vector<UnprocessedIdentityId>& value) { SetUnprocessedIdentityIds(value); return *this;}

    /**
     * <p>An array of UnprocessedIdentityId objects, each of which contains an
     * ErrorCode and IdentityId.</p>
     */
    inline DeleteIdentitiesResult& WithUnprocessedIdentityIds(Aws::Vector<UnprocessedIdentityId>&& value) { SetUnprocessedIdentityIds(std::move(value)); return *this;}

    /**
     * <p>An array of UnprocessedIdentityId objects, each of which contains an
     * ErrorCode and IdentityId.</p>
     */
    inline DeleteIdentitiesResult& AddUnprocessedIdentityIds(const UnprocessedIdentityId& value) { m_unprocessedIdentityIds.push_back(value); return *this; }

    /**
     * <p>An array of UnprocessedIdentityId objects, each of which contains an
     * ErrorCode and IdentityId.</p>
     */
    inline DeleteIdentitiesResult& AddUnprocessedIdentityIds(UnprocessedIdentityId&& value) { m_unprocessedIdentityIds.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UnprocessedIdentityId> m_unprocessedIdentityIds;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
