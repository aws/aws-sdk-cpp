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
    AWS_AMPLIFYBACKEND_API LoginAuthConfigReqObj() = default;
    AWS_AMPLIFYBACKEND_API LoginAuthConfigReqObj(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API LoginAuthConfigReqObj& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Cognito identity pool ID used for the Amplify Admin UI login
     * authorization.</p>
     */
    inline const Aws::String& GetAwsCognitoIdentityPoolId() const { return m_awsCognitoIdentityPoolId; }
    inline bool AwsCognitoIdentityPoolIdHasBeenSet() const { return m_awsCognitoIdentityPoolIdHasBeenSet; }
    template<typename AwsCognitoIdentityPoolIdT = Aws::String>
    void SetAwsCognitoIdentityPoolId(AwsCognitoIdentityPoolIdT&& value) { m_awsCognitoIdentityPoolIdHasBeenSet = true; m_awsCognitoIdentityPoolId = std::forward<AwsCognitoIdentityPoolIdT>(value); }
    template<typename AwsCognitoIdentityPoolIdT = Aws::String>
    LoginAuthConfigReqObj& WithAwsCognitoIdentityPoolId(AwsCognitoIdentityPoolIdT&& value) { SetAwsCognitoIdentityPoolId(std::forward<AwsCognitoIdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region for the Amplify Admin UI login.</p>
     */
    inline const Aws::String& GetAwsCognitoRegion() const { return m_awsCognitoRegion; }
    inline bool AwsCognitoRegionHasBeenSet() const { return m_awsCognitoRegionHasBeenSet; }
    template<typename AwsCognitoRegionT = Aws::String>
    void SetAwsCognitoRegion(AwsCognitoRegionT&& value) { m_awsCognitoRegionHasBeenSet = true; m_awsCognitoRegion = std::forward<AwsCognitoRegionT>(value); }
    template<typename AwsCognitoRegionT = Aws::String>
    LoginAuthConfigReqObj& WithAwsCognitoRegion(AwsCognitoRegionT&& value) { SetAwsCognitoRegion(std::forward<AwsCognitoRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Cognito user pool ID used for Amplify Admin UI login
     * authentication.</p>
     */
    inline const Aws::String& GetAwsUserPoolsId() const { return m_awsUserPoolsId; }
    inline bool AwsUserPoolsIdHasBeenSet() const { return m_awsUserPoolsIdHasBeenSet; }
    template<typename AwsUserPoolsIdT = Aws::String>
    void SetAwsUserPoolsId(AwsUserPoolsIdT&& value) { m_awsUserPoolsIdHasBeenSet = true; m_awsUserPoolsId = std::forward<AwsUserPoolsIdT>(value); }
    template<typename AwsUserPoolsIdT = Aws::String>
    LoginAuthConfigReqObj& WithAwsUserPoolsId(AwsUserPoolsIdT&& value) { SetAwsUserPoolsId(std::forward<AwsUserPoolsIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The web client ID for the Amazon Cognito user pools.</p>
     */
    inline const Aws::String& GetAwsUserPoolsWebClientId() const { return m_awsUserPoolsWebClientId; }
    inline bool AwsUserPoolsWebClientIdHasBeenSet() const { return m_awsUserPoolsWebClientIdHasBeenSet; }
    template<typename AwsUserPoolsWebClientIdT = Aws::String>
    void SetAwsUserPoolsWebClientId(AwsUserPoolsWebClientIdT&& value) { m_awsUserPoolsWebClientIdHasBeenSet = true; m_awsUserPoolsWebClientId = std::forward<AwsUserPoolsWebClientIdT>(value); }
    template<typename AwsUserPoolsWebClientIdT = Aws::String>
    LoginAuthConfigReqObj& WithAwsUserPoolsWebClientId(AwsUserPoolsWebClientIdT&& value) { SetAwsUserPoolsWebClientId(std::forward<AwsUserPoolsWebClientIdT>(value)); return *this;}
    ///@}
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
