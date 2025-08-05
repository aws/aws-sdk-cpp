/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>

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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Represents the planning phase of policy build workflow, where the system
   * analyzes source content and determines what operations to perform.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyPlanning">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyPlanning
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyPlanning() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyPlanning(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyPlanning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
