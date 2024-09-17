/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/FlowConnectionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/FlowConnectionType.h>
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
    AWS_BEDROCKAGENT_API FlowConnection();
    AWS_BEDROCKAGENT_API FlowConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API FlowConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of the connection.</p>
     */
    inline const FlowConnectionConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const FlowConnectionConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(FlowConnectionConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline FlowConnection& WithConfiguration(const FlowConnectionConfiguration& value) { SetConfiguration(value); return *this;}
    inline FlowConnection& WithConfiguration(FlowConnectionConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the connection that you can reference.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FlowConnection& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FlowConnection& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FlowConnection& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node that the connection starts at.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline FlowConnection& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline FlowConnection& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline FlowConnection& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node that the connection ends at.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline FlowConnection& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline FlowConnection& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline FlowConnection& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the source node that the connection begins from is a condition node
     * (<code>Conditional</code>) or not (<code>Data</code>).</p>
     */
    inline const FlowConnectionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FlowConnectionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FlowConnectionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline FlowConnection& WithType(const FlowConnectionType& value) { SetType(value); return *this;}
    inline FlowConnection& WithType(FlowConnectionType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    FlowConnectionConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    FlowConnectionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
