/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/GroupType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  class UpdateGroupResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UpdateGroupResult();
    AWS_COGNITOIDENTITYPROVIDER_API UpdateGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API UpdateGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The group object for the group.</p>
     */
    inline const GroupType& GetGroup() const{ return m_group; }

    /**
     * <p>The group object for the group.</p>
     */
    inline void SetGroup(const GroupType& value) { m_group = value; }

    /**
     * <p>The group object for the group.</p>
     */
    inline void SetGroup(GroupType&& value) { m_group = std::move(value); }

    /**
     * <p>The group object for the group.</p>
     */
    inline UpdateGroupResult& WithGroup(const GroupType& value) { SetGroup(value); return *this;}

    /**
     * <p>The group object for the group.</p>
     */
    inline UpdateGroupResult& WithGroup(GroupType&& value) { SetGroup(std::move(value)); return *this;}

  private:

    GroupType m_group;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
