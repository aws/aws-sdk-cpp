/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/InvocationType.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>Stores metadata about a Lambda processor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/LambdaConfiguration">AWS
   * API Reference</a></p>
   */
  class LambdaConfiguration
  {
  public:
    AWS_CHIMESDKMESSAGING_API LambdaConfiguration();
    AWS_CHIMESDKMESSAGING_API LambdaConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API LambdaConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Lambda message processing function.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the Lambda message processing function.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the Lambda message processing function.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the Lambda message processing function.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the Lambda message processing function.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the Lambda message processing function.</p>
     */
    inline LambdaConfiguration& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the Lambda message processing function.</p>
     */
    inline LambdaConfiguration& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda message processing function.</p>
     */
    inline LambdaConfiguration& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Controls how the Lambda function is invoked.</p>
     */
    inline const InvocationType& GetInvocationType() const{ return m_invocationType; }

    /**
     * <p>Controls how the Lambda function is invoked.</p>
     */
    inline bool InvocationTypeHasBeenSet() const { return m_invocationTypeHasBeenSet; }

    /**
     * <p>Controls how the Lambda function is invoked.</p>
     */
    inline void SetInvocationType(const InvocationType& value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }

    /**
     * <p>Controls how the Lambda function is invoked.</p>
     */
    inline void SetInvocationType(InvocationType&& value) { m_invocationTypeHasBeenSet = true; m_invocationType = std::move(value); }

    /**
     * <p>Controls how the Lambda function is invoked.</p>
     */
    inline LambdaConfiguration& WithInvocationType(const InvocationType& value) { SetInvocationType(value); return *this;}

    /**
     * <p>Controls how the Lambda function is invoked.</p>
     */
    inline LambdaConfiguration& WithInvocationType(InvocationType&& value) { SetInvocationType(std::move(value)); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    InvocationType m_invocationType;
    bool m_invocationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
