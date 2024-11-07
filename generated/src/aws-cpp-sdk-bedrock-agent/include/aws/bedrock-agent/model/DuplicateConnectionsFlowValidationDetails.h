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
   * <p>Details about duplicate connections found between two nodes in the
   * flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DuplicateConnectionsFlowValidationDetails">AWS
   * API Reference</a></p>
   */
  class DuplicateConnectionsFlowValidationDetails
  {
  public:
    AWS_BEDROCKAGENT_API DuplicateConnectionsFlowValidationDetails();
    AWS_BEDROCKAGENT_API DuplicateConnectionsFlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API DuplicateConnectionsFlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the source node where the duplicate connection starts.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline DuplicateConnectionsFlowValidationDetails& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline DuplicateConnectionsFlowValidationDetails& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline DuplicateConnectionsFlowValidationDetails& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target node where the duplicate connection ends.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline DuplicateConnectionsFlowValidationDetails& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline DuplicateConnectionsFlowValidationDetails& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline DuplicateConnectionsFlowValidationDetails& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
