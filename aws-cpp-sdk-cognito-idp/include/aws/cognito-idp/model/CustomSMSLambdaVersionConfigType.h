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
   * <p>A custom SMS sender Lambda configuration type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CustomSMSLambdaVersionConfigType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API CustomSMSLambdaVersionConfigType
  {
  public:
    CustomSMSLambdaVersionConfigType();
    CustomSMSLambdaVersionConfigType(Aws::Utils::Json::JsonView jsonValue);
    CustomSMSLambdaVersionConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Lambda version represents the signature of the "request" attribute in the
     * "event" information Amazon Cognito passes to your custom SMS Lambda function.
     * The only supported value is <code>V1_0</code>.</p>
     */
    inline const CustomSMSSenderLambdaVersionType& GetLambdaVersion() const{ return m_lambdaVersion; }

    /**
     * <p>The Lambda version represents the signature of the "request" attribute in the
     * "event" information Amazon Cognito passes to your custom SMS Lambda function.
     * The only supported value is <code>V1_0</code>.</p>
     */
    inline bool LambdaVersionHasBeenSet() const { return m_lambdaVersionHasBeenSet; }

    /**
     * <p>The Lambda version represents the signature of the "request" attribute in the
     * "event" information Amazon Cognito passes to your custom SMS Lambda function.
     * The only supported value is <code>V1_0</code>.</p>
     */
    inline void SetLambdaVersion(const CustomSMSSenderLambdaVersionType& value) { m_lambdaVersionHasBeenSet = true; m_lambdaVersion = value; }

    /**
     * <p>The Lambda version represents the signature of the "request" attribute in the
     * "event" information Amazon Cognito passes to your custom SMS Lambda function.
     * The only supported value is <code>V1_0</code>.</p>
     */
    inline void SetLambdaVersion(CustomSMSSenderLambdaVersionType&& value) { m_lambdaVersionHasBeenSet = true; m_lambdaVersion = std::move(value); }

    /**
     * <p>The Lambda version represents the signature of the "request" attribute in the
     * "event" information Amazon Cognito passes to your custom SMS Lambda function.
     * The only supported value is <code>V1_0</code>.</p>
     */
    inline CustomSMSLambdaVersionConfigType& WithLambdaVersion(const CustomSMSSenderLambdaVersionType& value) { SetLambdaVersion(value); return *this;}

    /**
     * <p>The Lambda version represents the signature of the "request" attribute in the
     * "event" information Amazon Cognito passes to your custom SMS Lambda function.
     * The only supported value is <code>V1_0</code>.</p>
     */
    inline CustomSMSLambdaVersionConfigType& WithLambdaVersion(CustomSMSSenderLambdaVersionType&& value) { SetLambdaVersion(std::move(value)); return *this;}


    /**
     * <p>The Lambda Amazon Resource Name of the Lambda function that Amazon Cognito
     * triggers to send SMS notifications to users.</p>
     */
    inline const Aws::String& GetLambdaArn() const{ return m_lambdaArn; }

    /**
     * <p>The Lambda Amazon Resource Name of the Lambda function that Amazon Cognito
     * triggers to send SMS notifications to users.</p>
     */
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }

    /**
     * <p>The Lambda Amazon Resource Name of the Lambda function that Amazon Cognito
     * triggers to send SMS notifications to users.</p>
     */
    inline void SetLambdaArn(const Aws::String& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = value; }

    /**
     * <p>The Lambda Amazon Resource Name of the Lambda function that Amazon Cognito
     * triggers to send SMS notifications to users.</p>
     */
    inline void SetLambdaArn(Aws::String&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::move(value); }

    /**
     * <p>The Lambda Amazon Resource Name of the Lambda function that Amazon Cognito
     * triggers to send SMS notifications to users.</p>
     */
    inline void SetLambdaArn(const char* value) { m_lambdaArnHasBeenSet = true; m_lambdaArn.assign(value); }

    /**
     * <p>The Lambda Amazon Resource Name of the Lambda function that Amazon Cognito
     * triggers to send SMS notifications to users.</p>
     */
    inline CustomSMSLambdaVersionConfigType& WithLambdaArn(const Aws::String& value) { SetLambdaArn(value); return *this;}

    /**
     * <p>The Lambda Amazon Resource Name of the Lambda function that Amazon Cognito
     * triggers to send SMS notifications to users.</p>
     */
    inline CustomSMSLambdaVersionConfigType& WithLambdaArn(Aws::String&& value) { SetLambdaArn(std::move(value)); return *this;}

    /**
     * <p>The Lambda Amazon Resource Name of the Lambda function that Amazon Cognito
     * triggers to send SMS notifications to users.</p>
     */
    inline CustomSMSLambdaVersionConfigType& WithLambdaArn(const char* value) { SetLambdaArn(value); return *this;}

  private:

    CustomSMSSenderLambdaVersionType m_lambdaVersion;
    bool m_lambdaVersionHasBeenSet;

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
