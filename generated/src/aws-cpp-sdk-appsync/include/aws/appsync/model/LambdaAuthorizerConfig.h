/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>A <code>LambdaAuthorizerConfig</code> specifies how to authorize AppSync API
   * access when using the <code>AWS_LAMBDA</code> authorizer mode. Be aware that an
   * AppSync API can have only one Lambda authorizer configured at a
   * time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/LambdaAuthorizerConfig">AWS
   * API Reference</a></p>
   */
  class LambdaAuthorizerConfig
  {
  public:
    AWS_APPSYNC_API LambdaAuthorizerConfig();
    AWS_APPSYNC_API LambdaAuthorizerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API LambdaAuthorizerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of seconds a response should be cached for. The default is 5
     * minutes (300 seconds). The Lambda function can override this by returning a
     * <code>ttlOverride</code> key in its response. A value of 0 disables caching of
     * responses.</p>
     */
    inline int GetAuthorizerResultTtlInSeconds() const{ return m_authorizerResultTtlInSeconds; }

    /**
     * <p>The number of seconds a response should be cached for. The default is 5
     * minutes (300 seconds). The Lambda function can override this by returning a
     * <code>ttlOverride</code> key in its response. A value of 0 disables caching of
     * responses.</p>
     */
    inline bool AuthorizerResultTtlInSecondsHasBeenSet() const { return m_authorizerResultTtlInSecondsHasBeenSet; }

    /**
     * <p>The number of seconds a response should be cached for. The default is 5
     * minutes (300 seconds). The Lambda function can override this by returning a
     * <code>ttlOverride</code> key in its response. A value of 0 disables caching of
     * responses.</p>
     */
    inline void SetAuthorizerResultTtlInSeconds(int value) { m_authorizerResultTtlInSecondsHasBeenSet = true; m_authorizerResultTtlInSeconds = value; }

    /**
     * <p>The number of seconds a response should be cached for. The default is 5
     * minutes (300 seconds). The Lambda function can override this by returning a
     * <code>ttlOverride</code> key in its response. A value of 0 disables caching of
     * responses.</p>
     */
    inline LambdaAuthorizerConfig& WithAuthorizerResultTtlInSeconds(int value) { SetAuthorizerResultTtlInSeconds(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function to be called for
     * authorization. This can be a standard Lambda ARN, a version ARN
     * (<code>.../v3</code>), or an alias ARN. </p> <p> <b>Note</b>: This Lambda
     * function must have the following resource-based policy assigned to it. When
     * configuring Lambda authorizers in the console, this is done for you. To use the
     * Command Line Interface (CLI), run the following:</p> <p> <code>aws lambda
     * add-permission --function-name
     * "arn:aws:lambda:us-east-2:111122223333:function:my-function" --statement-id
     * "appsync" --principal appsync.amazonaws.com --action
     * lambda:InvokeFunction</code> </p>
     */
    inline const Aws::String& GetAuthorizerUri() const{ return m_authorizerUri; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function to be called for
     * authorization. This can be a standard Lambda ARN, a version ARN
     * (<code>.../v3</code>), or an alias ARN. </p> <p> <b>Note</b>: This Lambda
     * function must have the following resource-based policy assigned to it. When
     * configuring Lambda authorizers in the console, this is done for you. To use the
     * Command Line Interface (CLI), run the following:</p> <p> <code>aws lambda
     * add-permission --function-name
     * "arn:aws:lambda:us-east-2:111122223333:function:my-function" --statement-id
     * "appsync" --principal appsync.amazonaws.com --action
     * lambda:InvokeFunction</code> </p>
     */
    inline bool AuthorizerUriHasBeenSet() const { return m_authorizerUriHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function to be called for
     * authorization. This can be a standard Lambda ARN, a version ARN
     * (<code>.../v3</code>), or an alias ARN. </p> <p> <b>Note</b>: This Lambda
     * function must have the following resource-based policy assigned to it. When
     * configuring Lambda authorizers in the console, this is done for you. To use the
     * Command Line Interface (CLI), run the following:</p> <p> <code>aws lambda
     * add-permission --function-name
     * "arn:aws:lambda:us-east-2:111122223333:function:my-function" --statement-id
     * "appsync" --principal appsync.amazonaws.com --action
     * lambda:InvokeFunction</code> </p>
     */
    inline void SetAuthorizerUri(const Aws::String& value) { m_authorizerUriHasBeenSet = true; m_authorizerUri = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function to be called for
     * authorization. This can be a standard Lambda ARN, a version ARN
     * (<code>.../v3</code>), or an alias ARN. </p> <p> <b>Note</b>: This Lambda
     * function must have the following resource-based policy assigned to it. When
     * configuring Lambda authorizers in the console, this is done for you. To use the
     * Command Line Interface (CLI), run the following:</p> <p> <code>aws lambda
     * add-permission --function-name
     * "arn:aws:lambda:us-east-2:111122223333:function:my-function" --statement-id
     * "appsync" --principal appsync.amazonaws.com --action
     * lambda:InvokeFunction</code> </p>
     */
    inline void SetAuthorizerUri(Aws::String&& value) { m_authorizerUriHasBeenSet = true; m_authorizerUri = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function to be called for
     * authorization. This can be a standard Lambda ARN, a version ARN
     * (<code>.../v3</code>), or an alias ARN. </p> <p> <b>Note</b>: This Lambda
     * function must have the following resource-based policy assigned to it. When
     * configuring Lambda authorizers in the console, this is done for you. To use the
     * Command Line Interface (CLI), run the following:</p> <p> <code>aws lambda
     * add-permission --function-name
     * "arn:aws:lambda:us-east-2:111122223333:function:my-function" --statement-id
     * "appsync" --principal appsync.amazonaws.com --action
     * lambda:InvokeFunction</code> </p>
     */
    inline void SetAuthorizerUri(const char* value) { m_authorizerUriHasBeenSet = true; m_authorizerUri.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function to be called for
     * authorization. This can be a standard Lambda ARN, a version ARN
     * (<code>.../v3</code>), or an alias ARN. </p> <p> <b>Note</b>: This Lambda
     * function must have the following resource-based policy assigned to it. When
     * configuring Lambda authorizers in the console, this is done for you. To use the
     * Command Line Interface (CLI), run the following:</p> <p> <code>aws lambda
     * add-permission --function-name
     * "arn:aws:lambda:us-east-2:111122223333:function:my-function" --statement-id
     * "appsync" --principal appsync.amazonaws.com --action
     * lambda:InvokeFunction</code> </p>
     */
    inline LambdaAuthorizerConfig& WithAuthorizerUri(const Aws::String& value) { SetAuthorizerUri(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function to be called for
     * authorization. This can be a standard Lambda ARN, a version ARN
     * (<code>.../v3</code>), or an alias ARN. </p> <p> <b>Note</b>: This Lambda
     * function must have the following resource-based policy assigned to it. When
     * configuring Lambda authorizers in the console, this is done for you. To use the
     * Command Line Interface (CLI), run the following:</p> <p> <code>aws lambda
     * add-permission --function-name
     * "arn:aws:lambda:us-east-2:111122223333:function:my-function" --statement-id
     * "appsync" --principal appsync.amazonaws.com --action
     * lambda:InvokeFunction</code> </p>
     */
    inline LambdaAuthorizerConfig& WithAuthorizerUri(Aws::String&& value) { SetAuthorizerUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function to be called for
     * authorization. This can be a standard Lambda ARN, a version ARN
     * (<code>.../v3</code>), or an alias ARN. </p> <p> <b>Note</b>: This Lambda
     * function must have the following resource-based policy assigned to it. When
     * configuring Lambda authorizers in the console, this is done for you. To use the
     * Command Line Interface (CLI), run the following:</p> <p> <code>aws lambda
     * add-permission --function-name
     * "arn:aws:lambda:us-east-2:111122223333:function:my-function" --statement-id
     * "appsync" --principal appsync.amazonaws.com --action
     * lambda:InvokeFunction</code> </p>
     */
    inline LambdaAuthorizerConfig& WithAuthorizerUri(const char* value) { SetAuthorizerUri(value); return *this;}


    /**
     * <p>A regular expression for validation of tokens before the Lambda function is
     * called.</p>
     */
    inline const Aws::String& GetIdentityValidationExpression() const{ return m_identityValidationExpression; }

    /**
     * <p>A regular expression for validation of tokens before the Lambda function is
     * called.</p>
     */
    inline bool IdentityValidationExpressionHasBeenSet() const { return m_identityValidationExpressionHasBeenSet; }

    /**
     * <p>A regular expression for validation of tokens before the Lambda function is
     * called.</p>
     */
    inline void SetIdentityValidationExpression(const Aws::String& value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression = value; }

    /**
     * <p>A regular expression for validation of tokens before the Lambda function is
     * called.</p>
     */
    inline void SetIdentityValidationExpression(Aws::String&& value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression = std::move(value); }

    /**
     * <p>A regular expression for validation of tokens before the Lambda function is
     * called.</p>
     */
    inline void SetIdentityValidationExpression(const char* value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression.assign(value); }

    /**
     * <p>A regular expression for validation of tokens before the Lambda function is
     * called.</p>
     */
    inline LambdaAuthorizerConfig& WithIdentityValidationExpression(const Aws::String& value) { SetIdentityValidationExpression(value); return *this;}

    /**
     * <p>A regular expression for validation of tokens before the Lambda function is
     * called.</p>
     */
    inline LambdaAuthorizerConfig& WithIdentityValidationExpression(Aws::String&& value) { SetIdentityValidationExpression(std::move(value)); return *this;}

    /**
     * <p>A regular expression for validation of tokens before the Lambda function is
     * called.</p>
     */
    inline LambdaAuthorizerConfig& WithIdentityValidationExpression(const char* value) { SetIdentityValidationExpression(value); return *this;}

  private:

    int m_authorizerResultTtlInSeconds;
    bool m_authorizerResultTtlInSecondsHasBeenSet = false;

    Aws::String m_authorizerUri;
    bool m_authorizerUriHasBeenSet = false;

    Aws::String m_identityValidationExpression;
    bool m_identityValidationExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
