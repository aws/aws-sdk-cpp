/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Trace Part which contains information if preprocessing was
   * successful</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/PreProcessingParsedResponse">AWS
   * API Reference</a></p>
   */
  class PreProcessingParsedResponse
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API PreProcessingParsedResponse();
    AWS_BEDROCKAGENTRUNTIME_API PreProcessingParsedResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API PreProcessingParsedResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetRationale() const{ return m_rationale; }

    
    inline bool RationaleHasBeenSet() const { return m_rationaleHasBeenSet; }

    
    inline void SetRationale(const Aws::String& value) { m_rationaleHasBeenSet = true; m_rationale = value; }

    
    inline void SetRationale(Aws::String&& value) { m_rationaleHasBeenSet = true; m_rationale = std::move(value); }

    
    inline void SetRationale(const char* value) { m_rationaleHasBeenSet = true; m_rationale.assign(value); }

    
    inline PreProcessingParsedResponse& WithRationale(const Aws::String& value) { SetRationale(value); return *this;}

    
    inline PreProcessingParsedResponse& WithRationale(Aws::String&& value) { SetRationale(std::move(value)); return *this;}

    
    inline PreProcessingParsedResponse& WithRationale(const char* value) { SetRationale(value); return *this;}


    /**
     * <p>Boolean value</p>
     */
    inline bool GetIsValid() const{ return m_isValid; }

    /**
     * <p>Boolean value</p>
     */
    inline bool IsValidHasBeenSet() const { return m_isValidHasBeenSet; }

    /**
     * <p>Boolean value</p>
     */
    inline void SetIsValid(bool value) { m_isValidHasBeenSet = true; m_isValid = value; }

    /**
     * <p>Boolean value</p>
     */
    inline PreProcessingParsedResponse& WithIsValid(bool value) { SetIsValid(value); return *this;}

  private:

    Aws::String m_rationale;
    bool m_rationaleHasBeenSet = false;

    bool m_isValid;
    bool m_isValidHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
