/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the agent's status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AgentStatusReference">AWS
   * API Reference</a></p>
   */
  class AgentStatusReference
  {
  public:
    AWS_CONNECT_API AgentStatusReference() = default;
    AWS_CONNECT_API AgentStatusReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentStatusReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start timestamp of the agent's status.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusStartTimestamp() const { return m_statusStartTimestamp; }
    inline bool StatusStartTimestampHasBeenSet() const { return m_statusStartTimestampHasBeenSet; }
    template<typename StatusStartTimestampT = Aws::Utils::DateTime>
    void SetStatusStartTimestamp(StatusStartTimestampT&& value) { m_statusStartTimestampHasBeenSet = true; m_statusStartTimestamp = std::forward<StatusStartTimestampT>(value); }
    template<typename StatusStartTimestampT = Aws::Utils::DateTime>
    AgentStatusReference& WithStatusStartTimestamp(StatusStartTimestampT&& value) { SetStatusStartTimestamp(std::forward<StatusStartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the agent's status.</p>
     */
    inline const Aws::String& GetStatusArn() const { return m_statusArn; }
    inline bool StatusArnHasBeenSet() const { return m_statusArnHasBeenSet; }
    template<typename StatusArnT = Aws::String>
    void SetStatusArn(StatusArnT&& value) { m_statusArnHasBeenSet = true; m_statusArn = std::forward<StatusArnT>(value); }
    template<typename StatusArnT = Aws::String>
    AgentStatusReference& WithStatusArn(StatusArnT&& value) { SetStatusArn(std::forward<StatusArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the agent status.</p>
     */
    inline const Aws::String& GetStatusName() const { return m_statusName; }
    inline bool StatusNameHasBeenSet() const { return m_statusNameHasBeenSet; }
    template<typename StatusNameT = Aws::String>
    void SetStatusName(StatusNameT&& value) { m_statusNameHasBeenSet = true; m_statusName = std::forward<StatusNameT>(value); }
    template<typename StatusNameT = Aws::String>
    AgentStatusReference& WithStatusName(StatusNameT&& value) { SetStatusName(std::forward<StatusNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_statusStartTimestamp{};
    bool m_statusStartTimestampHasBeenSet = false;

    Aws::String m_statusArn;
    bool m_statusArnHasBeenSet = false;

    Aws::String m_statusName;
    bool m_statusNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
