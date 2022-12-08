/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/HumanLoopDataAttributes.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Sets up the human review workflow the document will be sent to if one of the
   * conditions is met. You can also set certain attributes of the image before
   * review. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/HumanLoopConfig">AWS
   * API Reference</a></p>
   */
  class HumanLoopConfig
  {
  public:
    AWS_TEXTRACT_API HumanLoopConfig();
    AWS_TEXTRACT_API HumanLoopConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API HumanLoopConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the human workflow used for this image. This should be kept
     * unique within a region.</p>
     */
    inline const Aws::String& GetHumanLoopName() const{ return m_humanLoopName; }

    /**
     * <p>The name of the human workflow used for this image. This should be kept
     * unique within a region.</p>
     */
    inline bool HumanLoopNameHasBeenSet() const { return m_humanLoopNameHasBeenSet; }

    /**
     * <p>The name of the human workflow used for this image. This should be kept
     * unique within a region.</p>
     */
    inline void SetHumanLoopName(const Aws::String& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = value; }

    /**
     * <p>The name of the human workflow used for this image. This should be kept
     * unique within a region.</p>
     */
    inline void SetHumanLoopName(Aws::String&& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = std::move(value); }

    /**
     * <p>The name of the human workflow used for this image. This should be kept
     * unique within a region.</p>
     */
    inline void SetHumanLoopName(const char* value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName.assign(value); }

    /**
     * <p>The name of the human workflow used for this image. This should be kept
     * unique within a region.</p>
     */
    inline HumanLoopConfig& WithHumanLoopName(const Aws::String& value) { SetHumanLoopName(value); return *this;}

    /**
     * <p>The name of the human workflow used for this image. This should be kept
     * unique within a region.</p>
     */
    inline HumanLoopConfig& WithHumanLoopName(Aws::String&& value) { SetHumanLoopName(std::move(value)); return *this;}

    /**
     * <p>The name of the human workflow used for this image. This should be kept
     * unique within a region.</p>
     */
    inline HumanLoopConfig& WithHumanLoopName(const char* value) { SetHumanLoopName(value); return *this;}


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
    inline HumanLoopConfig& WithFlowDefinitionArn(const Aws::String& value) { SetFlowDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline HumanLoopConfig& WithFlowDefinitionArn(Aws::String&& value) { SetFlowDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition.</p>
     */
    inline HumanLoopConfig& WithFlowDefinitionArn(const char* value) { SetFlowDefinitionArn(value); return *this;}


    /**
     * <p>Sets attributes of the input data.</p>
     */
    inline const HumanLoopDataAttributes& GetDataAttributes() const{ return m_dataAttributes; }

    /**
     * <p>Sets attributes of the input data.</p>
     */
    inline bool DataAttributesHasBeenSet() const { return m_dataAttributesHasBeenSet; }

    /**
     * <p>Sets attributes of the input data.</p>
     */
    inline void SetDataAttributes(const HumanLoopDataAttributes& value) { m_dataAttributesHasBeenSet = true; m_dataAttributes = value; }

    /**
     * <p>Sets attributes of the input data.</p>
     */
    inline void SetDataAttributes(HumanLoopDataAttributes&& value) { m_dataAttributesHasBeenSet = true; m_dataAttributes = std::move(value); }

    /**
     * <p>Sets attributes of the input data.</p>
     */
    inline HumanLoopConfig& WithDataAttributes(const HumanLoopDataAttributes& value) { SetDataAttributes(value); return *this;}

    /**
     * <p>Sets attributes of the input data.</p>
     */
    inline HumanLoopConfig& WithDataAttributes(HumanLoopDataAttributes&& value) { SetDataAttributes(std::move(value)); return *this;}

  private:

    Aws::String m_humanLoopName;
    bool m_humanLoopNameHasBeenSet = false;

    Aws::String m_flowDefinitionArn;
    bool m_flowDefinitionArnHasBeenSet = false;

    HumanLoopDataAttributes m_dataAttributes;
    bool m_dataAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
