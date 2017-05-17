/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COGNITOIDENTITY_API DeleteIdentitiesResult
  {
  public:
    DeleteIdentitiesResult();
    DeleteIdentitiesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteIdentitiesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
