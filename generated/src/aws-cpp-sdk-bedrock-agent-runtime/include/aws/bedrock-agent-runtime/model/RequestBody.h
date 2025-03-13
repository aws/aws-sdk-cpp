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
   * <p>The parameters in the API request body.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/RequestBody">AWS
   * API Reference</a></p>
   */
  class RequestBody
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API RequestBody() = default;
    AWS_BEDROCKAGENTRUNTIME_API RequestBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API RequestBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content in the request body.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Parameter>>& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::Map<Aws::String, Aws::Vector<Parameter>>>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::Map<Aws::String, Aws::Vector<Parameter>>>
    RequestBody& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    template<typename ContentKeyT = Aws::String, typename ContentValueT = Aws::Vector<Parameter>>
    RequestBody& AddContent(ContentKeyT&& key, ContentValueT&& value) {
      m_contentHasBeenSet = true; m_content.emplace(std::forward<ContentKeyT>(key), std::forward<ContentValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<Parameter>> m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
