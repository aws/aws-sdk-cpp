/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ConcurrencyType.h>
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
   * <p>Determines how multiple nodes in a flow can run in parallel. Running nodes
   * concurrently can improve your flow's performance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowAliasConcurrencyConfiguration">AWS
   * API Reference</a></p>
   */
  class FlowAliasConcurrencyConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API FlowAliasConcurrencyConfiguration() = default;
    AWS_BEDROCKAGENT_API FlowAliasConcurrencyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowAliasConcurrencyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of concurrency to use for parallel node execution. Specify one of
     * the following options:</p> <ul> <li> <p> <code>Automatic</code> - Amazon Bedrock
     * determines which nodes can be executed in parallel based on the flow definition
     * and its dependencies.</p> </li> <li> <p> <code>Manual</code> - You specify which
     * nodes can be executed in parallel.</p> </li> </ul>
     */
    inline ConcurrencyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ConcurrencyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FlowAliasConcurrencyConfiguration& WithType(ConcurrencyType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of nodes that can be executed concurrently in the
     * flow.</p>
     */
    inline int GetMaxConcurrency() const { return m_maxConcurrency; }
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
    inline void SetMaxConcurrency(int value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }
    inline FlowAliasConcurrencyConfiguration& WithMaxConcurrency(int value) { SetMaxConcurrency(value); return *this;}
    ///@}
  private:

    ConcurrencyType m_type{ConcurrencyType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_maxConcurrency{0};
    bool m_maxConcurrencyHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
