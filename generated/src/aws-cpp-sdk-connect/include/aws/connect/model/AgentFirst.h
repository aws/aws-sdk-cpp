/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Preview.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about agent-first outbound strategy configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AgentFirst">AWS
   * API Reference</a></p>
   */
  class AgentFirst
  {
  public:
    AWS_CONNECT_API AgentFirst() = default;
    AWS_CONNECT_API AgentFirst(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentFirst& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about preview configuration of agent first outbound strategy</p>
     */
    inline const Preview& GetPreview() const { return m_preview; }
    inline bool PreviewHasBeenSet() const { return m_previewHasBeenSet; }
    template<typename PreviewT = Preview>
    void SetPreview(PreviewT&& value) { m_previewHasBeenSet = true; m_preview = std::forward<PreviewT>(value); }
    template<typename PreviewT = Preview>
    AgentFirst& WithPreview(PreviewT&& value) { SetPreview(std::forward<PreviewT>(value)); return *this;}
    ///@}
  private:

    Preview m_preview;
    bool m_previewHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
