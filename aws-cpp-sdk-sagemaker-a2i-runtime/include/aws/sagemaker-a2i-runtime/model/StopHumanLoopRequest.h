/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AugmentedAIRuntime
{
namespace Model
{

  /**
   */
  class StopHumanLoopRequest : public AugmentedAIRuntimeRequest
  {
  public:
    AWS_AUGMENTEDAIRUNTIME_API StopHumanLoopRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopHumanLoop"; }

    AWS_AUGMENTEDAIRUNTIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the human loop that you want to stop.</p>
     */
    inline const Aws::String& GetHumanLoopName() const{ return m_humanLoopName; }

    /**
     * <p>The name of the human loop that you want to stop.</p>
     */
    inline bool HumanLoopNameHasBeenSet() const { return m_humanLoopNameHasBeenSet; }

    /**
     * <p>The name of the human loop that you want to stop.</p>
     */
    inline void SetHumanLoopName(const Aws::String& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = value; }

    /**
     * <p>The name of the human loop that you want to stop.</p>
     */
    inline void SetHumanLoopName(Aws::String&& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = std::move(value); }

    /**
     * <p>The name of the human loop that you want to stop.</p>
     */
    inline void SetHumanLoopName(const char* value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName.assign(value); }

    /**
     * <p>The name of the human loop that you want to stop.</p>
     */
    inline StopHumanLoopRequest& WithHumanLoopName(const Aws::String& value) { SetHumanLoopName(value); return *this;}

    /**
     * <p>The name of the human loop that you want to stop.</p>
     */
    inline StopHumanLoopRequest& WithHumanLoopName(Aws::String&& value) { SetHumanLoopName(std::move(value)); return *this;}

    /**
     * <p>The name of the human loop that you want to stop.</p>
     */
    inline StopHumanLoopRequest& WithHumanLoopName(const char* value) { SetHumanLoopName(value); return *this;}

  private:

    Aws::String m_humanLoopName;
    bool m_humanLoopNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
