/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/FlowNodeIODataType.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains configurations for an output from a node.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowNodeOutput">AWS
   * API Reference</a></p>
   */
  class FlowNodeOutput
  {
  public:
    AWS_BEDROCKAGENT_API FlowNodeOutput();
    AWS_BEDROCKAGENT_API FlowNodeOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowNodeOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A name for the output that you can reference.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FlowNodeOutput& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FlowNodeOutput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FlowNodeOutput& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the output. If the output doesn't match this type at
     * runtime, a validation error will be thrown.</p>
     */
    inline const FlowNodeIODataType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FlowNodeIODataType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FlowNodeIODataType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline FlowNodeOutput& WithType(const FlowNodeIODataType& value) { SetType(value); return *this;}
    inline FlowNodeOutput& WithType(FlowNodeIODataType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    FlowNodeIODataType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
