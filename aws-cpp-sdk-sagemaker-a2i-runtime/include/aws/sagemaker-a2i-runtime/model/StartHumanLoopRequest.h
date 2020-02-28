/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopInput.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopDataAttributes.h>
#include <utility>

namespace Aws
{
namespace AugmentedAIRuntime
{
namespace Model
{

  /**
   */
  class AWS_AUGMENTEDAIRUNTIME_API StartHumanLoopRequest : public AugmentedAIRuntimeRequest
  {
  public:
    StartHumanLoopRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartHumanLoop"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the human loop.</p>
     */
    inline const Aws::String& GetHumanLoopName() const{ return m_humanLoopName; }

    /**
     * <p>The name of the human loop.</p>
     */
    inline bool HumanLoopNameHasBeenSet() const { return m_humanLoopNameHasBeenSet; }

    /**
     * <p>The name of the human loop.</p>
     */
    inline void SetHumanLoopName(const Aws::String& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = value; }

    /**
     * <p>The name of the human loop.</p>
     */
    inline void SetHumanLoopName(Aws::String&& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = std::move(value); }

    /**
     * <p>The name of the human loop.</p>
     */
    inline void SetHumanLoopName(const char* value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName.assign(value); }

    /**
     * <p>The name of the human loop.</p>
     */
    inline StartHumanLoopRequest& WithHumanLoopName(const Aws::String& value) { SetHumanLoopName(value); return *this;}

    /**
     * <p>The name of the human loop.</p>
     */
    inline StartHumanLoopRequest& WithHumanLoopName(Aws::String&& value) { SetHumanLoopName(std::move(value)); return *this;}

    /**
     * <p>The name of the human loop.</p>
     */
    inline StartHumanLoopRequest& WithHumanLoopName(const char* value) { SetHumanLoopName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const{ return m_flowDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline bool FlowDefinitionArnHasBeenSet() const { return m_flowDefinitionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline void SetFlowDefinitionArn(const Aws::String& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline void SetFlowDefinitionArn(Aws::String&& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline void SetFlowDefinitionArn(const char* value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline StartHumanLoopRequest& WithFlowDefinitionArn(const Aws::String& value) { SetFlowDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline StartHumanLoopRequest& WithFlowDefinitionArn(Aws::String&& value) { SetFlowDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline StartHumanLoopRequest& WithFlowDefinitionArn(const char* value) { SetFlowDefinitionArn(value); return *this;}


    /**
     * <p>An object containing information about the human loop.</p>
     */
    inline const HumanLoopInput& GetHumanLoopInput() const{ return m_humanLoopInput; }

    /**
     * <p>An object containing information about the human loop.</p>
     */
    inline bool HumanLoopInputHasBeenSet() const { return m_humanLoopInputHasBeenSet; }

    /**
     * <p>An object containing information about the human loop.</p>
     */
    inline void SetHumanLoopInput(const HumanLoopInput& value) { m_humanLoopInputHasBeenSet = true; m_humanLoopInput = value; }

    /**
     * <p>An object containing information about the human loop.</p>
     */
    inline void SetHumanLoopInput(HumanLoopInput&& value) { m_humanLoopInputHasBeenSet = true; m_humanLoopInput = std::move(value); }

    /**
     * <p>An object containing information about the human loop.</p>
     */
    inline StartHumanLoopRequest& WithHumanLoopInput(const HumanLoopInput& value) { SetHumanLoopInput(value); return *this;}

    /**
     * <p>An object containing information about the human loop.</p>
     */
    inline StartHumanLoopRequest& WithHumanLoopInput(HumanLoopInput&& value) { SetHumanLoopInput(std::move(value)); return *this;}


    /**
     * <p>Attributes of the data specified by the customer.</p>
     */
    inline const HumanLoopDataAttributes& GetDataAttributes() const{ return m_dataAttributes; }

    /**
     * <p>Attributes of the data specified by the customer.</p>
     */
    inline bool DataAttributesHasBeenSet() const { return m_dataAttributesHasBeenSet; }

    /**
     * <p>Attributes of the data specified by the customer.</p>
     */
    inline void SetDataAttributes(const HumanLoopDataAttributes& value) { m_dataAttributesHasBeenSet = true; m_dataAttributes = value; }

    /**
     * <p>Attributes of the data specified by the customer.</p>
     */
    inline void SetDataAttributes(HumanLoopDataAttributes&& value) { m_dataAttributesHasBeenSet = true; m_dataAttributes = std::move(value); }

    /**
     * <p>Attributes of the data specified by the customer.</p>
     */
    inline StartHumanLoopRequest& WithDataAttributes(const HumanLoopDataAttributes& value) { SetDataAttributes(value); return *this;}

    /**
     * <p>Attributes of the data specified by the customer.</p>
     */
    inline StartHumanLoopRequest& WithDataAttributes(HumanLoopDataAttributes&& value) { SetDataAttributes(std::move(value)); return *this;}

  private:

    Aws::String m_humanLoopName;
    bool m_humanLoopNameHasBeenSet;

    Aws::String m_flowDefinitionArn;
    bool m_flowDefinitionArnHasBeenSet;

    HumanLoopInput m_humanLoopInput;
    bool m_humanLoopInputHasBeenSet;

    HumanLoopDataAttributes m_dataAttributes;
    bool m_dataAttributesHasBeenSet;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
