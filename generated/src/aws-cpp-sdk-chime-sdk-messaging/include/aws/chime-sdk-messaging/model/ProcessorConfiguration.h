/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/LambdaConfiguration.h>
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
   * <p>A processor's metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ProcessorConfiguration">AWS
   * API Reference</a></p>
   */
  class ProcessorConfiguration
  {
  public:
    AWS_CHIMESDKMESSAGING_API ProcessorConfiguration();
    AWS_CHIMESDKMESSAGING_API ProcessorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ProcessorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates that the processor is of type Lambda.</p>
     */
    inline const LambdaConfiguration& GetLambda() const{ return m_lambda; }

    /**
     * <p>Indicates that the processor is of type Lambda.</p>
     */
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }

    /**
     * <p>Indicates that the processor is of type Lambda.</p>
     */
    inline void SetLambda(const LambdaConfiguration& value) { m_lambdaHasBeenSet = true; m_lambda = value; }

    /**
     * <p>Indicates that the processor is of type Lambda.</p>
     */
    inline void SetLambda(LambdaConfiguration&& value) { m_lambdaHasBeenSet = true; m_lambda = std::move(value); }

    /**
     * <p>Indicates that the processor is of type Lambda.</p>
     */
    inline ProcessorConfiguration& WithLambda(const LambdaConfiguration& value) { SetLambda(value); return *this;}

    /**
     * <p>Indicates that the processor is of type Lambda.</p>
     */
    inline ProcessorConfiguration& WithLambda(LambdaConfiguration&& value) { SetLambda(std::move(value)); return *this;}

  private:

    LambdaConfiguration m_lambda;
    bool m_lambdaHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
