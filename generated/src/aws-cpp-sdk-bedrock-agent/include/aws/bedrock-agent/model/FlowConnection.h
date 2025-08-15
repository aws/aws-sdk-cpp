/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/FlowConnectionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/FlowConnectionConfiguration.h>
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
   * <p>Contains information about a connection between two nodes in the
   * flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/FlowConnection">AWS
   * API Reference</a></p>
   */
  class FlowConnection
  {
  public:
    AWS_BEDROCKAGENT_API FlowConnection() = default;
    AWS_BEDROCKAGENT_API FlowConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the source node that the connection begins from is a condition node
     * (<code>Conditional</code>) or not (<code>Data</code>).</p>
     */
    inline FlowConnectionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FlowConnectionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline FlowConnection& WithType(FlowConnectionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the connection that you can reference.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    FlowConnection& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node that the connection starts at.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    FlowConnection& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node that the connection ends at.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    FlowConnection& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the connection.</p>
     */
    inline const FlowConnectionConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = FlowConnectionConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = FlowConnectionConfiguration>
    FlowConnection& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}
  private:

    FlowConnectionType m_type{FlowConnectionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    FlowConnectionConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
