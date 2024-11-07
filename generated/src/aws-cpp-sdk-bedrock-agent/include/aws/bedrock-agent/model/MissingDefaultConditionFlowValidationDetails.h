/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Details about a missing default condition in a conditional
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/MissingDefaultConditionFlowValidationDetails">AWS
   * API Reference</a></p>
   */
  class MissingDefaultConditionFlowValidationDetails
  {
  public:
    AWS_BEDROCKAGENT_API MissingDefaultConditionFlowValidationDetails();
    AWS_BEDROCKAGENT_API MissingDefaultConditionFlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API MissingDefaultConditionFlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the node missing the default condition.</p>
     */
    inline const Aws::String& GetNode() const{ return m_node; }
    inline bool NodeHasBeenSet() const { return m_nodeHasBeenSet; }
    inline void SetNode(const Aws::String& value) { m_nodeHasBeenSet = true; m_node = value; }
    inline void SetNode(Aws::String&& value) { m_nodeHasBeenSet = true; m_node = std::move(value); }
    inline void SetNode(const char* value) { m_nodeHasBeenSet = true; m_node.assign(value); }
    inline MissingDefaultConditionFlowValidationDetails& WithNode(const Aws::String& value) { SetNode(value); return *this;}
    inline MissingDefaultConditionFlowValidationDetails& WithNode(Aws::String&& value) { SetNode(std::move(value)); return *this;}
    inline MissingDefaultConditionFlowValidationDetails& WithNode(const char* value) { SetNode(value); return *this;}
    ///@}
  private:

    Aws::String m_node;
    bool m_nodeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
