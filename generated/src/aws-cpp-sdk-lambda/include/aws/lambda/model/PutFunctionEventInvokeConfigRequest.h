/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/DestinationConfig.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Lambda
{
namespace Model
{

  /**
   */
  class PutFunctionEventInvokeConfigRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API PutFunctionEventInvokeConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutFunctionEventInvokeConfig"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;

    AWS_LAMBDA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name or ARN of the Lambda function, version, or alias.</p> <p
     * class="title"> <b>Name formats</b> </p> <ul> <li> <p> <b>Function name</b> -
     * <code>my-function</code> (name-only), <code>my-function:v1</code> (with
     * alias).</p> </li> <li> <p> <b>Function ARN</b> -
     * <code>arn:aws:lambda:us-west-2:123456789012:function:my-function</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> -
     * <code>123456789012:function:my-function</code>.</p> </li> </ul> <p>You can
     * append a version number or alias to any of the formats. The length constraint
     * applies only to the full ARN. If you specify only the function name, it is
     * limited to 64 characters in length.</p>
     */
    inline const Aws::String& GetFunctionName() const { return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    template<typename FunctionNameT = Aws::String>
    void SetFunctionName(FunctionNameT&& value) { m_functionNameHasBeenSet = true; m_functionName = std::forward<FunctionNameT>(value); }
    template<typename FunctionNameT = Aws::String>
    PutFunctionEventInvokeConfigRequest& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A version number or alias name.</p>
     */
    inline const Aws::String& GetQualifier() const { return m_qualifier; }
    inline bool QualifierHasBeenSet() const { return m_qualifierHasBeenSet; }
    template<typename QualifierT = Aws::String>
    void SetQualifier(QualifierT&& value) { m_qualifierHasBeenSet = true; m_qualifier = std::forward<QualifierT>(value); }
    template<typename QualifierT = Aws::String>
    PutFunctionEventInvokeConfigRequest& WithQualifier(QualifierT&& value) { SetQualifier(std::forward<QualifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of times to retry when the function returns an error.</p>
     */
    inline int GetMaximumRetryAttempts() const { return m_maximumRetryAttempts; }
    inline bool MaximumRetryAttemptsHasBeenSet() const { return m_maximumRetryAttemptsHasBeenSet; }
    inline void SetMaximumRetryAttempts(int value) { m_maximumRetryAttemptsHasBeenSet = true; m_maximumRetryAttempts = value; }
    inline PutFunctionEventInvokeConfigRequest& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum age of a request that Lambda sends to a function for
     * processing.</p>
     */
    inline int GetMaximumEventAgeInSeconds() const { return m_maximumEventAgeInSeconds; }
    inline bool MaximumEventAgeInSecondsHasBeenSet() const { return m_maximumEventAgeInSecondsHasBeenSet; }
    inline void SetMaximumEventAgeInSeconds(int value) { m_maximumEventAgeInSecondsHasBeenSet = true; m_maximumEventAgeInSeconds = value; }
    inline PutFunctionEventInvokeConfigRequest& WithMaximumEventAgeInSeconds(int value) { SetMaximumEventAgeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A destination for events after they have been sent to a function for
     * processing.</p> <p class="title"> <b>Destinations</b> </p> <ul> <li> <p>
     * <b>Function</b> - The Amazon Resource Name (ARN) of a Lambda function.</p> </li>
     * <li> <p> <b>Queue</b> - The ARN of a standard SQS queue.</p> </li> <li> <p>
     * <b>Bucket</b> - The ARN of an Amazon S3 bucket.</p> </li> <li> <p> <b>Topic</b>
     * - The ARN of a standard SNS topic.</p> </li> <li> <p> <b>Event Bus</b> - The ARN
     * of an Amazon EventBridge event bus.</p> </li> </ul>  <p>S3 buckets are
     * supported only for on-failure destinations. To retain records of successful
     * invocations, use another destination type.</p> 
     */
    inline const DestinationConfig& GetDestinationConfig() const { return m_destinationConfig; }
    inline bool DestinationConfigHasBeenSet() const { return m_destinationConfigHasBeenSet; }
    template<typename DestinationConfigT = DestinationConfig>
    void SetDestinationConfig(DestinationConfigT&& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = std::forward<DestinationConfigT>(value); }
    template<typename DestinationConfigT = DestinationConfig>
    PutFunctionEventInvokeConfigRequest& WithDestinationConfig(DestinationConfigT&& value) { SetDestinationConfig(std::forward<DestinationConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_qualifier;
    bool m_qualifierHasBeenSet = false;

    int m_maximumRetryAttempts{0};
    bool m_maximumRetryAttemptsHasBeenSet = false;

    int m_maximumEventAgeInSeconds{0};
    bool m_maximumEventAgeInSecondsHasBeenSet = false;

    DestinationConfig m_destinationConfig;
    bool m_destinationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
