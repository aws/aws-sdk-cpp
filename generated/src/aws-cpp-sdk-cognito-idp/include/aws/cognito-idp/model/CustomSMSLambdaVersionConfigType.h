/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/CustomSMSSenderLambdaVersionType.h>
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
   * <p>The properties of a custom SMS sender Lambda trigger.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CustomSMSLambdaVersionConfigType">AWS
   * API Reference</a></p>
   */
  class CustomSMSLambdaVersionConfigType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CustomSMSLambdaVersionConfigType();
    AWS_COGNITOIDENTITYPROVIDER_API CustomSMSLambdaVersionConfigType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API CustomSMSLambdaVersionConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user pool trigger version of the request that Amazon Cognito sends to
     * your Lambda function. Higher-numbered versions add fields that support new
     * features.</p> <p>You must use a <code>LambdaVersion</code> of <code>V1_0</code>
     * with a custom sender function.</p>
     */
    inline const CustomSMSSenderLambdaVersionType& GetLambdaVersion() const{ return m_lambdaVersion; }
    inline bool LambdaVersionHasBeenSet() const { return m_lambdaVersionHasBeenSet; }
    inline void SetLambdaVersion(const CustomSMSSenderLambdaVersionType& value) { m_lambdaVersionHasBeenSet = true; m_lambdaVersion = value; }
    inline void SetLambdaVersion(CustomSMSSenderLambdaVersionType&& value) { m_lambdaVersionHasBeenSet = true; m_lambdaVersion = std::move(value); }
    inline CustomSMSLambdaVersionConfigType& WithLambdaVersion(const CustomSMSSenderLambdaVersionType& value) { SetLambdaVersion(value); return *this;}
    inline CustomSMSLambdaVersionConfigType& WithLambdaVersion(CustomSMSSenderLambdaVersionType&& value) { SetLambdaVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the function that you want to assign to
     * your Lambda trigger.</p>
     */
    inline const Aws::String& GetLambdaArn() const{ return m_lambdaArn; }
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }
    inline void SetLambdaArn(const Aws::String& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = value; }
    inline void SetLambdaArn(Aws::String&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::move(value); }
    inline void SetLambdaArn(const char* value) { m_lambdaArnHasBeenSet = true; m_lambdaArn.assign(value); }
    inline CustomSMSLambdaVersionConfigType& WithLambdaArn(const Aws::String& value) { SetLambdaArn(value); return *this;}
    inline CustomSMSLambdaVersionConfigType& WithLambdaArn(Aws::String&& value) { SetLambdaArn(std::move(value)); return *this;}
    inline CustomSMSLambdaVersionConfigType& WithLambdaArn(const char* value) { SetLambdaArn(value); return *this;}
    ///@}
  private:

    CustomSMSSenderLambdaVersionType m_lambdaVersion;
    bool m_lambdaVersionHasBeenSet = false;

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
