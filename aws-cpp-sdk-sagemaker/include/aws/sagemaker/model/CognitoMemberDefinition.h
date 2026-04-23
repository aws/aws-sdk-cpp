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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Identifies a Amazon Cognito user group. A user group can be used in on or
   * more work teams.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CognitoMemberDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API CognitoMemberDefinition
  {
  public:
    CognitoMemberDefinition();
    CognitoMemberDefinition(Aws::Utils::Json::JsonView jsonValue);
    CognitoMemberDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier for a user pool. The user pool must be in the same region as
     * the service that you are calling.</p>
     */
    inline const Aws::String& GetUserPool() const{ return m_userPool; }

    /**
     * <p>An identifier for a user pool. The user pool must be in the same region as
     * the service that you are calling.</p>
     */
    inline bool UserPoolHasBeenSet() const { return m_userPoolHasBeenSet; }

    /**
     * <p>An identifier for a user pool. The user pool must be in the same region as
     * the service that you are calling.</p>
     */
    inline void SetUserPool(const Aws::String& value) { m_userPoolHasBeenSet = true; m_userPool = value; }

    /**
     * <p>An identifier for a user pool. The user pool must be in the same region as
     * the service that you are calling.</p>
     */
    inline void SetUserPool(Aws::String&& value) { m_userPoolHasBeenSet = true; m_userPool = std::move(value); }

    /**
     * <p>An identifier for a user pool. The user pool must be in the same region as
     * the service that you are calling.</p>
     */
    inline void SetUserPool(const char* value) { m_userPoolHasBeenSet = true; m_userPool.assign(value); }

    /**
     * <p>An identifier for a user pool. The user pool must be in the same region as
     * the service that you are calling.</p>
     */
    inline CognitoMemberDefinition& WithUserPool(const Aws::String& value) { SetUserPool(value); return *this;}

    /**
     * <p>An identifier for a user pool. The user pool must be in the same region as
     * the service that you are calling.</p>
     */
    inline CognitoMemberDefinition& WithUserPool(Aws::String&& value) { SetUserPool(std::move(value)); return *this;}

    /**
     * <p>An identifier for a user pool. The user pool must be in the same region as
     * the service that you are calling.</p>
     */
    inline CognitoMemberDefinition& WithUserPool(const char* value) { SetUserPool(value); return *this;}


    /**
     * <p>An identifier for a user group.</p>
     */
    inline const Aws::String& GetUserGroup() const{ return m_userGroup; }

    /**
     * <p>An identifier for a user group.</p>
     */
    inline bool UserGroupHasBeenSet() const { return m_userGroupHasBeenSet; }

    /**
     * <p>An identifier for a user group.</p>
     */
    inline void SetUserGroup(const Aws::String& value) { m_userGroupHasBeenSet = true; m_userGroup = value; }

    /**
     * <p>An identifier for a user group.</p>
     */
    inline void SetUserGroup(Aws::String&& value) { m_userGroupHasBeenSet = true; m_userGroup = std::move(value); }

    /**
     * <p>An identifier for a user group.</p>
     */
    inline void SetUserGroup(const char* value) { m_userGroupHasBeenSet = true; m_userGroup.assign(value); }

    /**
     * <p>An identifier for a user group.</p>
     */
    inline CognitoMemberDefinition& WithUserGroup(const Aws::String& value) { SetUserGroup(value); return *this;}

    /**
     * <p>An identifier for a user group.</p>
     */
    inline CognitoMemberDefinition& WithUserGroup(Aws::String&& value) { SetUserGroup(std::move(value)); return *this;}

    /**
     * <p>An identifier for a user group.</p>
     */
    inline CognitoMemberDefinition& WithUserGroup(const char* value) { SetUserGroup(value); return *this;}


    /**
     * <p>An identifier for an application client. You must create the app client ID
     * using Amazon Cognito.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>An identifier for an application client. You must create the app client ID
     * using Amazon Cognito.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>An identifier for an application client. You must create the app client ID
     * using Amazon Cognito.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>An identifier for an application client. You must create the app client ID
     * using Amazon Cognito.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>An identifier for an application client. You must create the app client ID
     * using Amazon Cognito.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>An identifier for an application client. You must create the app client ID
     * using Amazon Cognito.</p>
     */
    inline CognitoMemberDefinition& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>An identifier for an application client. You must create the app client ID
     * using Amazon Cognito.</p>
     */
    inline CognitoMemberDefinition& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>An identifier for an application client. You must create the app client ID
     * using Amazon Cognito.</p>
     */
    inline CognitoMemberDefinition& WithClientId(const char* value) { SetClientId(value); return *this;}

  private:

    Aws::String m_userPool;
    bool m_userPoolHasBeenSet;

    Aws::String m_userGroup;
    bool m_userGroupHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
