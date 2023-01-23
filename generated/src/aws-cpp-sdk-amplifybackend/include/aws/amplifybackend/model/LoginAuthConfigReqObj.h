/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>The request object for this operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/LoginAuthConfigReqObj">AWS
   * API Reference</a></p>
   */
  class LoginAuthConfigReqObj
  {
  public:
    AWS_AMPLIFYBACKEND_API LoginAuthConfigReqObj();
    AWS_AMPLIFYBACKEND_API LoginAuthConfigReqObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API LoginAuthConfigReqObj& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Cognito identity pool ID used for the Amplify Admin UI login
     * authorization.</p>
     */
    inline const Aws::String& GetAwsCognitoIdentityPoolId() const{ return m_awsCognitoIdentityPoolId; }

    /**
     * <p>The Amazon Cognito identity pool ID used for the Amplify Admin UI login
     * authorization.</p>
     */
    inline bool AwsCognitoIdentityPoolIdHasBeenSet() const { return m_awsCognitoIdentityPoolIdHasBeenSet; }

    /**
     * <p>The Amazon Cognito identity pool ID used for the Amplify Admin UI login
     * authorization.</p>
     */
    inline void SetAwsCognitoIdentityPoolId(const Aws::String& value) { m_awsCognitoIdentityPoolIdHasBeenSet = true; m_awsCognitoIdentityPoolId = value; }

    /**
     * <p>The Amazon Cognito identity pool ID used for the Amplify Admin UI login
     * authorization.</p>
     */
    inline void SetAwsCognitoIdentityPoolId(Aws::String&& value) { m_awsCognitoIdentityPoolIdHasBeenSet = true; m_awsCognitoIdentityPoolId = std::move(value); }

    /**
     * <p>The Amazon Cognito identity pool ID used for the Amplify Admin UI login
     * authorization.</p>
     */
    inline void SetAwsCognitoIdentityPoolId(const char* value) { m_awsCognitoIdentityPoolIdHasBeenSet = true; m_awsCognitoIdentityPoolId.assign(value); }

    /**
     * <p>The Amazon Cognito identity pool ID used for the Amplify Admin UI login
     * authorization.</p>
     */
    inline LoginAuthConfigReqObj& WithAwsCognitoIdentityPoolId(const Aws::String& value) { SetAwsCognitoIdentityPoolId(value); return *this;}

    /**
     * <p>The Amazon Cognito identity pool ID used for the Amplify Admin UI login
     * authorization.</p>
     */
    inline LoginAuthConfigReqObj& WithAwsCognitoIdentityPoolId(Aws::String&& value) { SetAwsCognitoIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Cognito identity pool ID used for the Amplify Admin UI login
     * authorization.</p>
     */
    inline LoginAuthConfigReqObj& WithAwsCognitoIdentityPoolId(const char* value) { SetAwsCognitoIdentityPoolId(value); return *this;}


    /**
     * <p>The AWS Region for the Amplify Admin UI login.</p>
     */
    inline const Aws::String& GetAwsCognitoRegion() const{ return m_awsCognitoRegion; }

    /**
     * <p>The AWS Region for the Amplify Admin UI login.</p>
     */
    inline bool AwsCognitoRegionHasBeenSet() const { return m_awsCognitoRegionHasBeenSet; }

    /**
     * <p>The AWS Region for the Amplify Admin UI login.</p>
     */
    inline void SetAwsCognitoRegion(const Aws::String& value) { m_awsCognitoRegionHasBeenSet = true; m_awsCognitoRegion = value; }

    /**
     * <p>The AWS Region for the Amplify Admin UI login.</p>
     */
    inline void SetAwsCognitoRegion(Aws::String&& value) { m_awsCognitoRegionHasBeenSet = true; m_awsCognitoRegion = std::move(value); }

    /**
     * <p>The AWS Region for the Amplify Admin UI login.</p>
     */
    inline void SetAwsCognitoRegion(const char* value) { m_awsCognitoRegionHasBeenSet = true; m_awsCognitoRegion.assign(value); }

    /**
     * <p>The AWS Region for the Amplify Admin UI login.</p>
     */
    inline LoginAuthConfigReqObj& WithAwsCognitoRegion(const Aws::String& value) { SetAwsCognitoRegion(value); return *this;}

    /**
     * <p>The AWS Region for the Amplify Admin UI login.</p>
     */
    inline LoginAuthConfigReqObj& WithAwsCognitoRegion(Aws::String&& value) { SetAwsCognitoRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region for the Amplify Admin UI login.</p>
     */
    inline LoginAuthConfigReqObj& WithAwsCognitoRegion(const char* value) { SetAwsCognitoRegion(value); return *this;}


    /**
     * <p>The Amazon Cognito user pool ID used for Amplify Admin UI login
     * authentication.</p>
     */
    inline const Aws::String& GetAwsUserPoolsId() const{ return m_awsUserPoolsId; }

    /**
     * <p>The Amazon Cognito user pool ID used for Amplify Admin UI login
     * authentication.</p>
     */
    inline bool AwsUserPoolsIdHasBeenSet() const { return m_awsUserPoolsIdHasBeenSet; }

    /**
     * <p>The Amazon Cognito user pool ID used for Amplify Admin UI login
     * authentication.</p>
     */
    inline void SetAwsUserPoolsId(const Aws::String& value) { m_awsUserPoolsIdHasBeenSet = true; m_awsUserPoolsId = value; }

    /**
     * <p>The Amazon Cognito user pool ID used for Amplify Admin UI login
     * authentication.</p>
     */
    inline void SetAwsUserPoolsId(Aws::String&& value) { m_awsUserPoolsIdHasBeenSet = true; m_awsUserPoolsId = std::move(value); }

    /**
     * <p>The Amazon Cognito user pool ID used for Amplify Admin UI login
     * authentication.</p>
     */
    inline void SetAwsUserPoolsId(const char* value) { m_awsUserPoolsIdHasBeenSet = true; m_awsUserPoolsId.assign(value); }

    /**
     * <p>The Amazon Cognito user pool ID used for Amplify Admin UI login
     * authentication.</p>
     */
    inline LoginAuthConfigReqObj& WithAwsUserPoolsId(const Aws::String& value) { SetAwsUserPoolsId(value); return *this;}

    /**
     * <p>The Amazon Cognito user pool ID used for Amplify Admin UI login
     * authentication.</p>
     */
    inline LoginAuthConfigReqObj& WithAwsUserPoolsId(Aws::String&& value) { SetAwsUserPoolsId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Cognito user pool ID used for Amplify Admin UI login
     * authentication.</p>
     */
    inline LoginAuthConfigReqObj& WithAwsUserPoolsId(const char* value) { SetAwsUserPoolsId(value); return *this;}


    /**
     * <p>The web client ID for the Amazon Cognito user pools.</p>
     */
    inline const Aws::String& GetAwsUserPoolsWebClientId() const{ return m_awsUserPoolsWebClientId; }

    /**
     * <p>The web client ID for the Amazon Cognito user pools.</p>
     */
    inline bool AwsUserPoolsWebClientIdHasBeenSet() const { return m_awsUserPoolsWebClientIdHasBeenSet; }

    /**
     * <p>The web client ID for the Amazon Cognito user pools.</p>
     */
    inline void SetAwsUserPoolsWebClientId(const Aws::String& value) { m_awsUserPoolsWebClientIdHasBeenSet = true; m_awsUserPoolsWebClientId = value; }

    /**
     * <p>The web client ID for the Amazon Cognito user pools.</p>
     */
    inline void SetAwsUserPoolsWebClientId(Aws::String&& value) { m_awsUserPoolsWebClientIdHasBeenSet = true; m_awsUserPoolsWebClientId = std::move(value); }

    /**
     * <p>The web client ID for the Amazon Cognito user pools.</p>
     */
    inline void SetAwsUserPoolsWebClientId(const char* value) { m_awsUserPoolsWebClientIdHasBeenSet = true; m_awsUserPoolsWebClientId.assign(value); }

    /**
     * <p>The web client ID for the Amazon Cognito user pools.</p>
     */
    inline LoginAuthConfigReqObj& WithAwsUserPoolsWebClientId(const Aws::String& value) { SetAwsUserPoolsWebClientId(value); return *this;}

    /**
     * <p>The web client ID for the Amazon Cognito user pools.</p>
     */
    inline LoginAuthConfigReqObj& WithAwsUserPoolsWebClientId(Aws::String&& value) { SetAwsUserPoolsWebClientId(std::move(value)); return *this;}

    /**
     * <p>The web client ID for the Amazon Cognito user pools.</p>
     */
    inline LoginAuthConfigReqObj& WithAwsUserPoolsWebClientId(const char* value) { SetAwsUserPoolsWebClientId(value); return *this;}

  private:

    Aws::String m_awsCognitoIdentityPoolId;
    bool m_awsCognitoIdentityPoolIdHasBeenSet = false;

    Aws::String m_awsCognitoRegion;
    bool m_awsCognitoRegionHasBeenSet = false;

    Aws::String m_awsUserPoolsId;
    bool m_awsUserPoolsIdHasBeenSet = false;

    Aws::String m_awsUserPoolsWebClientId;
    bool m_awsUserPoolsWebClientIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
