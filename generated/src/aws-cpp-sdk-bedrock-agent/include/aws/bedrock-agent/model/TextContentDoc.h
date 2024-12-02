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
   * <p>Contains information about content defined inline in text.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/TextContentDoc">AWS
   * API Reference</a></p>
   */
  class TextContentDoc
  {
  public:
    AWS_BEDROCKAGENT_API TextContentDoc();
    AWS_BEDROCKAGENT_API TextContentDoc(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API TextContentDoc& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text of the content.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }
    inline TextContentDoc& WithData(const Aws::String& value) { SetData(value); return *this;}
    inline TextContentDoc& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}
    inline TextContentDoc& WithData(const char* value) { SetData(value); return *this;}
    ///@}
  private:

    Aws::String m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
