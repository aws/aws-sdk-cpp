﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-identity/CognitoIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>Input to the DeleteIdentityPool action.</p>
   */
  class AWS_COGNITOIDENTITY_API DeleteIdentityPoolRequest : public CognitoIdentityRequest
  {
  public:
    DeleteIdentityPoolRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline DeleteIdentityPoolRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline DeleteIdentityPoolRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(value); return *this;}

    /**
     * An identity pool ID in the format REGION:GUID.
     */
    inline DeleteIdentityPoolRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}

  private:
    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
