/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>Configuration for HTTP request headers that will be passed through to the
   * runtime.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/RequestHeaderConfiguration">AWS
   * API Reference</a></p>
   */
  class RequestHeaderConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API RequestHeaderConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API RequestHeaderConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API RequestHeaderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of HTTP request headers that are allowed to be passed through to the
     * runtime.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRequestHeaderAllowlist() const { return m_requestHeaderAllowlist; }
    inline bool RequestHeaderAllowlistHasBeenSet() const { return m_requestHeaderAllowlistHasBeenSet; }
    template<typename RequestHeaderAllowlistT = Aws::Vector<Aws::String>>
    void SetRequestHeaderAllowlist(RequestHeaderAllowlistT&& value) { m_requestHeaderAllowlistHasBeenSet = true; m_requestHeaderAllowlist = std::forward<RequestHeaderAllowlistT>(value); }
    template<typename RequestHeaderAllowlistT = Aws::Vector<Aws::String>>
    RequestHeaderConfiguration& WithRequestHeaderAllowlist(RequestHeaderAllowlistT&& value) { SetRequestHeaderAllowlist(std::forward<RequestHeaderAllowlistT>(value)); return *this;}
    template<typename RequestHeaderAllowlistT = Aws::String>
    RequestHeaderConfiguration& AddRequestHeaderAllowlist(RequestHeaderAllowlistT&& value) { m_requestHeaderAllowlistHasBeenSet = true; m_requestHeaderAllowlist.emplace_back(std::forward<RequestHeaderAllowlistT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_requestHeaderAllowlist;
    bool m_requestHeaderAllowlistHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
