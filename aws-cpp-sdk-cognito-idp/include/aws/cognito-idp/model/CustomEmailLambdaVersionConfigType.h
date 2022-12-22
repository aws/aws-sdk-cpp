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
   * <p>A custom email sender Lambda configuration type.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CustomEmailLambdaVersionConfigType">AWS
   * API Reference</a></p>
   */
  class CustomEmailLambdaVersionConfigType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CustomEmailLambdaVersionConfigType();
    AWS_COGNITOIDENTITYPROVIDER_API CustomEmailLambdaVersionConfigType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API CustomEmailLambdaVersionConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Signature of the "request" attribute in the "event" information Amazon
     * Cognito passes to your custom email Lambda function. The only supported value is
     * <code>V1_0</code>.</p>
     */
    inline const CustomEmailSenderLambdaVersionType& GetLambdaVersion() const{ return m_lambdaVersion; }

    /**
     * <p>Signature of the "request" attribute in the "event" information Amazon
     * Cognito passes to your custom email Lambda function. The only supported value is
     * <code>V1_0</code>.</p>
     */
    inline bool LambdaVersionHasBeenSet() const { return m_lambdaVersionHasBeenSet; }

    /**
     * <p>Signature of the "request" attribute in the "event" information Amazon
     * Cognito passes to your custom email Lambda function. The only supported value is
     * <code>V1_0</code>.</p>
     */
    inline void SetLambdaVersion(const CustomEmailSenderLambdaVersionType& value) { m_lambdaVersionHasBeenSet = true; m_lambdaVersion = value; }

    /**
     * <p>Signature of the "request" attribute in the "event" information Amazon
     * Cognito passes to your custom email Lambda function. The only supported value is
     * <code>V1_0</code>.</p>
     */
    inline void SetLambdaVersion(CustomEmailSenderLambdaVersionType&& value) { m_lambdaVersionHasBeenSet = true; m_lambdaVersion = std::move(value); }

    /**
     * <p>Signature of the "request" attribute in the "event" information Amazon
     * Cognito passes to your custom email Lambda function. The only supported value is
     * <code>V1_0</code>.</p>
     */
    inline CustomEmailLambdaVersionConfigType& WithLambdaVersion(const CustomEmailSenderLambdaVersionType& value) { SetLambdaVersion(value); return *this;}

    /**
     * <p>Signature of the "request" attribute in the "event" information Amazon
     * Cognito passes to your custom email Lambda function. The only supported value is
     * <code>V1_0</code>.</p>
     */
    inline CustomEmailLambdaVersionConfigType& WithLambdaVersion(CustomEmailSenderLambdaVersionType&& value) { SetLambdaVersion(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that Amazon Cognito
     * activates to send email notifications to users.</p>
     */
    inline const Aws::String& GetLambdaArn() const{ return m_lambdaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that Amazon Cognito
     * activates to send email notifications to users.</p>
     */
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that Amazon Cognito
     * activates to send email notifications to users.</p>
     */
    inline void SetLambdaArn(const Aws::String& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that Amazon Cognito
     * activates to send email notifications to users.</p>
     */
    inline void SetLambdaArn(Aws::String&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that Amazon Cognito
     * activates to send email notifications to users.</p>
     */
    inline void SetLambdaArn(const char* value) { m_lambdaArnHasBeenSet = true; m_lambdaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that Amazon Cognito
     * activates to send email notifications to users.</p>
     */
    inline CustomEmailLambdaVersionConfigType& WithLambdaArn(const Aws::String& value) { SetLambdaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that Amazon Cognito
     * activates to send email notifications to users.</p>
     */
    inline CustomEmailLambdaVersionConfigType& WithLambdaArn(Aws::String&& value) { SetLambdaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function that Amazon Cognito
     * activates to send email notifications to users.</p>
     */
    inline CustomEmailLambdaVersionConfigType& WithLambdaArn(const char* value) { SetLambdaArn(value); return *this;}

  private:

    CustomEmailSenderLambdaVersionType m_lambdaVersion;
    bool m_lambdaVersionHasBeenSet = false;

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
