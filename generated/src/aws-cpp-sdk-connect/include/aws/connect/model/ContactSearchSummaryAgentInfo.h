/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Information about the agent who accepted the contact.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactSearchSummaryAgentInfo">AWS
   * API Reference</a></p>
   */
  class ContactSearchSummaryAgentInfo
  {
  public:
    AWS_CONNECT_API ContactSearchSummaryAgentInfo() = default;
    AWS_CONNECT_API ContactSearchSummaryAgentInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactSearchSummaryAgentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ContactSearchSummaryAgentInfo& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the contact was connected to the agent.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectedToAgentTimestamp() const { return m_connectedToAgentTimestamp; }
    inline bool ConnectedToAgentTimestampHasBeenSet() const { return m_connectedToAgentTimestampHasBeenSet; }
    template<typename ConnectedToAgentTimestampT = Aws::Utils::DateTime>
    void SetConnectedToAgentTimestamp(ConnectedToAgentTimestampT&& value) { m_connectedToAgentTimestampHasBeenSet = true; m_connectedToAgentTimestamp = std::forward<ConnectedToAgentTimestampT>(value); }
    template<typename ConnectedToAgentTimestampT = Aws::Utils::DateTime>
    ContactSearchSummaryAgentInfo& WithConnectedToAgentTimestamp(ConnectedToAgentTimestampT&& value) { SetConnectedToAgentTimestamp(std::forward<ConnectedToAgentTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_connectedToAgentTimestamp{};
    bool m_connectedToAgentTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
