/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
   * <p>Specifies the name that the metadata attribute must match and the value to
   * which to compare the value of the metadata attribute. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-test-config.html">Query
   * configurations</a>.</p> <p>This data type is used in the following API
   * operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_RetrieveAndGenerate.html#API_agent-runtime_RetrieveAndGenerate_RequestSyntax">RetrieveAndGenerate
   * request</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FilterAttribute">AWS
   * API Reference</a></p>
   */
  class FilterAttribute
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FilterAttribute();
    AWS_BEDROCKAGENTRUNTIME_API FilterAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FilterAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name that the metadata attribute must match.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name that the metadata attribute must match.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name that the metadata attribute must match.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name that the metadata attribute must match.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name that the metadata attribute must match.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name that the metadata attribute must match.</p>
     */
    inline FilterAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name that the metadata attribute must match.</p>
     */
    inline FilterAttribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name that the metadata attribute must match.</p>
     */
    inline FilterAttribute& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value to whcih to compare the value of the metadata attribute.</p>
     */
    inline Aws::Utils::DocumentView GetValue() const{ return m_value; }

    /**
     * <p>The value to whcih to compare the value of the metadata attribute.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value to whcih to compare the value of the metadata attribute.</p>
     */
    inline void SetValue(const Aws::Utils::Document& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value to whcih to compare the value of the metadata attribute.</p>
     */
    inline void SetValue(Aws::Utils::Document&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value to whcih to compare the value of the metadata attribute.</p>
     */
    inline FilterAttribute& WithValue(const Aws::Utils::Document& value) { SetValue(value); return *this;}

    /**
     * <p>The value to whcih to compare the value of the metadata attribute.</p>
     */
    inline FilterAttribute& WithValue(Aws::Utils::Document&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::Utils::Document m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
