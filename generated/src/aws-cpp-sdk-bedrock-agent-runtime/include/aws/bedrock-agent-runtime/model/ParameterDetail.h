/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/ParameterType.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p> Contains details about a parameter in a function for an action group.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ParameterDetail">AWS
   * API Reference</a></p>
   */
  class ParameterDetail
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ParameterDetail();
    AWS_BEDROCKAGENTRUNTIME_API ParameterDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ParameterDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A description of the parameter. Helps the foundation model determine how to
     * elicit the parameters from the user. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ParameterDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ParameterDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ParameterDetail& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether the parameter is required for the agent to complete the function for
     * action group invocation. </p>
     */
    inline bool GetRequired() const{ return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline ParameterDetail& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The data type of the parameter. </p>
     */
    inline const ParameterType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ParameterType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ParameterDetail& WithType(const ParameterType& value) { SetType(value); return *this;}
    inline ParameterDetail& WithType(ParameterType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_required;
    bool m_requiredHasBeenSet = false;

    ParameterType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
