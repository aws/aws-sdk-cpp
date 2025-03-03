/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/PreTokenGenerationLambdaVersionType.h>
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
   * <p>The properties of a pre token generation Lambda trigger.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/PreTokenGenerationVersionConfigType">AWS
   * API Reference</a></p>
   */
  class PreTokenGenerationVersionConfigType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API PreTokenGenerationVersionConfigType();
    AWS_COGNITOIDENTITYPROVIDER_API PreTokenGenerationVersionConfigType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API PreTokenGenerationVersionConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user pool trigger version of the request that Amazon Cognito sends to
     * your Lambda function. Higher-numbered versions add fields that support new
     * features.</p>
     */
    inline const PreTokenGenerationLambdaVersionType& GetLambdaVersion() const{ return m_lambdaVersion; }
    inline bool LambdaVersionHasBeenSet() const { return m_lambdaVersionHasBeenSet; }
    inline void SetLambdaVersion(const PreTokenGenerationLambdaVersionType& value) { m_lambdaVersionHasBeenSet = true; m_lambdaVersion = value; }
    inline void SetLambdaVersion(PreTokenGenerationLambdaVersionType&& value) { m_lambdaVersionHasBeenSet = true; m_lambdaVersion = std::move(value); }
    inline PreTokenGenerationVersionConfigType& WithLambdaVersion(const PreTokenGenerationLambdaVersionType& value) { SetLambdaVersion(value); return *this;}
    inline PreTokenGenerationVersionConfigType& WithLambdaVersion(PreTokenGenerationLambdaVersionType&& value) { SetLambdaVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the function that you want to assign to
     * your Lambda trigger.</p> <p>This parameter and the
     * <code>PreTokenGeneration</code> property of <code>LambdaConfig</code> have the
     * same value. For new instances of pre token generation triggers, set
     * <code>LambdaArn</code>.</p>
     */
    inline const Aws::String& GetLambdaArn() const{ return m_lambdaArn; }
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }
    inline void SetLambdaArn(const Aws::String& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = value; }
    inline void SetLambdaArn(Aws::String&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::move(value); }
    inline void SetLambdaArn(const char* value) { m_lambdaArnHasBeenSet = true; m_lambdaArn.assign(value); }
    inline PreTokenGenerationVersionConfigType& WithLambdaArn(const Aws::String& value) { SetLambdaArn(value); return *this;}
    inline PreTokenGenerationVersionConfigType& WithLambdaArn(Aws::String&& value) { SetLambdaArn(std::move(value)); return *this;}
    inline PreTokenGenerationVersionConfigType& WithLambdaArn(const char* value) { SetLambdaArn(value); return *this;}
    ///@}
  private:

    PreTokenGenerationLambdaVersionType m_lambdaVersion;
    bool m_lambdaVersionHasBeenSet = false;

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
