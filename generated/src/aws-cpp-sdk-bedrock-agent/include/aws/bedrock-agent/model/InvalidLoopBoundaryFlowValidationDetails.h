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
   * <p>Details about a flow that contains connections that violate loop boundary
   * rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/InvalidLoopBoundaryFlowValidationDetails">AWS
   * API Reference</a></p>
   */
  class InvalidLoopBoundaryFlowValidationDetails
  {
  public:
    AWS_BEDROCKAGENT_API InvalidLoopBoundaryFlowValidationDetails() = default;
    AWS_BEDROCKAGENT_API InvalidLoopBoundaryFlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API InvalidLoopBoundaryFlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the connection that violates loop boundary rules.</p>
     */
    inline const Aws::String& GetConnection() const { return m_connection; }
    inline bool ConnectionHasBeenSet() const { return m_connectionHasBeenSet; }
    template<typename ConnectionT = Aws::String>
    void SetConnection(ConnectionT&& value) { m_connectionHasBeenSet = true; m_connection = std::forward<ConnectionT>(value); }
    template<typename ConnectionT = Aws::String>
    InvalidLoopBoundaryFlowValidationDetails& WithConnection(ConnectionT&& value) { SetConnection(std::forward<ConnectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source node of the connection that violates DoWhile loop boundary
     * rules.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    InvalidLoopBoundaryFlowValidationDetails& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target node of the connection that violates DoWhile loop boundary
     * rules.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    InvalidLoopBoundaryFlowValidationDetails& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connection;
    bool m_connectionHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
