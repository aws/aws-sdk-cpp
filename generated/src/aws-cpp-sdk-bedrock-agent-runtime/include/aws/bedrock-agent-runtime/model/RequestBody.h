/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/Parameter.h>
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
   * <p>The parameters in the request body for the Lambda input event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RequestBody">AWS
   * API Reference</a></p>
   */
  class RequestBody
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RequestBody();
    AWS_BEDROCKAGENTRUNTIME_API RequestBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RequestBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The content in the request body.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Parameter>>& GetContent() const{ return m_content; }

    /**
     * <p>The content in the request body.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content in the request body.</p>
     */
    inline void SetContent(const Aws::Map<Aws::String, Aws::Vector<Parameter>>& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content in the request body.</p>
     */
    inline void SetContent(Aws::Map<Aws::String, Aws::Vector<Parameter>>&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content in the request body.</p>
     */
    inline RequestBody& WithContent(const Aws::Map<Aws::String, Aws::Vector<Parameter>>& value) { SetContent(value); return *this;}

    /**
     * <p>The content in the request body.</p>
     */
    inline RequestBody& WithContent(Aws::Map<Aws::String, Aws::Vector<Parameter>>&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content in the request body.</p>
     */
    inline RequestBody& AddContent(const Aws::String& key, const Aws::Vector<Parameter>& value) { m_contentHasBeenSet = true; m_content.emplace(key, value); return *this; }

    /**
     * <p>The content in the request body.</p>
     */
    inline RequestBody& AddContent(Aws::String&& key, const Aws::Vector<Parameter>& value) { m_contentHasBeenSet = true; m_content.emplace(std::move(key), value); return *this; }

    /**
     * <p>The content in the request body.</p>
     */
    inline RequestBody& AddContent(const Aws::String& key, Aws::Vector<Parameter>&& value) { m_contentHasBeenSet = true; m_content.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The content in the request body.</p>
     */
    inline RequestBody& AddContent(Aws::String&& key, Aws::Vector<Parameter>&& value) { m_contentHasBeenSet = true; m_content.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The content in the request body.</p>
     */
    inline RequestBody& AddContent(const char* key, Aws::Vector<Parameter>&& value) { m_contentHasBeenSet = true; m_content.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The content in the request body.</p>
     */
    inline RequestBody& AddContent(const char* key, const Aws::Vector<Parameter>& value) { m_contentHasBeenSet = true; m_content.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::Vector<Parameter>> m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
