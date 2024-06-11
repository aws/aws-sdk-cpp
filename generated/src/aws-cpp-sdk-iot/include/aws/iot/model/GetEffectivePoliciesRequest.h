/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class GetEffectivePoliciesRequest : public IoTRequest
  {
  public:
    AWS_IOT_API GetEffectivePoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEffectivePolicies"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The principal. Valid principals are CertificateArn
     * (arn:aws:iot:<i>region</i>:<i>accountId</i>:cert/<i>certificateId</i>),
     * thingGroupArn
     * (arn:aws:iot:<i>region</i>:<i>accountId</i>:thinggroup/<i>groupName</i>) and
     * CognitoId (<i>region</i>:<i>id</i>).</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }
    inline GetEffectivePoliciesRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}
    inline GetEffectivePoliciesRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}
    inline GetEffectivePoliciesRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Cognito identity pool ID.</p>
     */
    inline const Aws::String& GetCognitoIdentityPoolId() const{ return m_cognitoIdentityPoolId; }
    inline bool CognitoIdentityPoolIdHasBeenSet() const { return m_cognitoIdentityPoolIdHasBeenSet; }
    inline void SetCognitoIdentityPoolId(const Aws::String& value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId = value; }
    inline void SetCognitoIdentityPoolId(Aws::String&& value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId = std::move(value); }
    inline void SetCognitoIdentityPoolId(const char* value) { m_cognitoIdentityPoolIdHasBeenSet = true; m_cognitoIdentityPoolId.assign(value); }
    inline GetEffectivePoliciesRequest& WithCognitoIdentityPoolId(const Aws::String& value) { SetCognitoIdentityPoolId(value); return *this;}
    inline GetEffectivePoliciesRequest& WithCognitoIdentityPoolId(Aws::String&& value) { SetCognitoIdentityPoolId(std::move(value)); return *this;}
    inline GetEffectivePoliciesRequest& WithCognitoIdentityPoolId(const char* value) { SetCognitoIdentityPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing name.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }
    inline GetEffectivePoliciesRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}
    inline GetEffectivePoliciesRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}
    inline GetEffectivePoliciesRequest& WithThingName(const char* value) { SetThingName(value); return *this;}
    ///@}
  private:

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_cognitoIdentityPoolId;
    bool m_cognitoIdentityPoolIdHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
