/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>

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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Configuration settings for enabling and controlling document citations in
   * Converse API responses. When enabled, the model can include citation information
   * that links generated content back to specific source documents.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/CitationsConfig">AWS
   * API Reference</a></p>
   */
  class CitationsConfig
  {
  public:
    AWS_BEDROCKRUNTIME_API CitationsConfig() = default;
    AWS_BEDROCKRUNTIME_API CitationsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API CitationsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether document citations should be included in the model's
     * response. When set to true, the model can generate citations that reference the
     * source documents used to inform the response.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CitationsConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
