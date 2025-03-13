/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/CustomEmailSenderLambdaVersionType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The properties of a custom email sender Lambda trigger.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CustomEmailLambdaVersionConfigType">AWS
   * API Reference</a></p>
   */
  class CustomEmailLambdaVersionConfigType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CustomEmailLambdaVersionConfigType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API CustomEmailLambdaVersionConfigType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API CustomEmailLambdaVersionConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user pool trigger version of the request that Amazon Cognito sends to
     * your Lambda function. Higher-numbered versions add fields that support new
     * features.</p> <p>You must use a <code>LambdaVersion</code> of <code>V1_0</code>
     * with a custom sender function.</p>
     */
    inline CustomEmailSenderLambdaVersionType GetLambdaVersion() const { return m_lambdaVersion; }
    inline bool LambdaVersionHasBeenSet() const { return m_lambdaVersionHasBeenSet; }
    inline void SetLambdaVersion(CustomEmailSenderLambdaVersionType value) { m_lambdaVersionHasBeenSet = true; m_lambdaVersion = value; }
    inline CustomEmailLambdaVersionConfigType& WithLambdaVersion(CustomEmailSenderLambdaVersionType value) { SetLambdaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the function that you want to assign to
     * your Lambda trigger.</p>
     */
    inline const Aws::String& GetLambdaArn() const { return m_lambdaArn; }
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }
    template<typename LambdaArnT = Aws::String>
    void SetLambdaArn(LambdaArnT&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::forward<LambdaArnT>(value); }
    template<typename LambdaArnT = Aws::String>
    CustomEmailLambdaVersionConfigType& WithLambdaArn(LambdaArnT&& value) { SetLambdaArn(std::forward<LambdaArnT>(value)); return *this;}
    ///@}
  private:

    CustomEmailSenderLambdaVersionType m_lambdaVersion{CustomEmailSenderLambdaVersionType::NOT_SET};
    bool m_lambdaVersionHasBeenSet = false;

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
