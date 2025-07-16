/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/CodeInterpreterStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>Contains summary information about a code interpreter. A code interpreter
   * enables Amazon Bedrock Agent to execute code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CodeInterpreterSummary">AWS
   * API Reference</a></p>
   */
  class CodeInterpreterSummary
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CodeInterpreterSummary() = default;
    AWS_BEDROCKAGENTCORECONTROL_API CodeInterpreterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API CodeInterpreterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the code interpreter.</p>
     */
    inline const Aws::String& GetCodeInterpreterId() const { return m_codeInterpreterId; }
    inline bool CodeInterpreterIdHasBeenSet() const { return m_codeInterpreterIdHasBeenSet; }
    template<typename CodeInterpreterIdT = Aws::String>
    void SetCodeInterpreterId(CodeInterpreterIdT&& value) { m_codeInterpreterIdHasBeenSet = true; m_codeInterpreterId = std::forward<CodeInterpreterIdT>(value); }
    template<typename CodeInterpreterIdT = Aws::String>
    CodeInterpreterSummary& WithCodeInterpreterId(CodeInterpreterIdT&& value) { SetCodeInterpreterId(std::forward<CodeInterpreterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the code interpreter.</p>
     */
    inline const Aws::String& GetCodeInterpreterArn() const { return m_codeInterpreterArn; }
    inline bool CodeInterpreterArnHasBeenSet() const { return m_codeInterpreterArnHasBeenSet; }
    template<typename CodeInterpreterArnT = Aws::String>
    void SetCodeInterpreterArn(CodeInterpreterArnT&& value) { m_codeInterpreterArnHasBeenSet = true; m_codeInterpreterArn = std::forward<CodeInterpreterArnT>(value); }
    template<typename CodeInterpreterArnT = Aws::String>
    CodeInterpreterSummary& WithCodeInterpreterArn(CodeInterpreterArnT&& value) { SetCodeInterpreterArn(std::forward<CodeInterpreterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the code interpreter.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CodeInterpreterSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the code interpreter.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CodeInterpreterSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the code interpreter.</p>
     */
    inline CodeInterpreterStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CodeInterpreterStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CodeInterpreterSummary& WithStatus(CodeInterpreterStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the code interpreter was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CodeInterpreterSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the code interpreter was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    CodeInterpreterSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeInterpreterId;
    bool m_codeInterpreterIdHasBeenSet = false;

    Aws::String m_codeInterpreterArn;
    bool m_codeInterpreterArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CodeInterpreterStatus m_status{CodeInterpreterStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
