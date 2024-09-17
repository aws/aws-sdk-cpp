/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The details on the Bedrock guardrail configuration.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BedrockGuardrailConfiguration">AWS
   * API Reference</a></p>
   */
  class BedrockGuardrailConfiguration
  {
  public:
    AWS_LEXMODELSV2_API BedrockGuardrailConfiguration();
    AWS_LEXMODELSV2_API BedrockGuardrailConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BedrockGuardrailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique guardrail id for the Bedrock guardrail configuration.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline BedrockGuardrailConfiguration& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline BedrockGuardrailConfiguration& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline BedrockGuardrailConfiguration& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The guardrail version for the Bedrock guardrail configuration.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline BedrockGuardrailConfiguration& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline BedrockGuardrailConfiguration& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline BedrockGuardrailConfiguration& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
