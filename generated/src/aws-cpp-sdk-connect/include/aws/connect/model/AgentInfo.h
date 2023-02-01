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
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AgentInfo">AWS
   * API Reference</a></p>
   */
  class AgentInfo
  {
  public:
    AWS_CONNECT_API AgentInfo();
    AWS_CONNECT_API AgentInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline AgentInfo& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline AgentInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the agent who accepted the contact.</p>
     */
    inline AgentInfo& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The timestamp when the contact was connected to the agent.</p>
     */
    inline const Aws::Utils::DateTime& GetConnectedToAgentTimestamp() const{ return m_connectedToAgentTimestamp; }

    /**
     * <p>The timestamp when the contact was connected to the agent.</p>
     */
    inline bool ConnectedToAgentTimestampHasBeenSet() const { return m_connectedToAgentTimestampHasBeenSet; }

    /**
     * <p>The timestamp when the contact was connected to the agent.</p>
     */
    inline void SetConnectedToAgentTimestamp(const Aws::Utils::DateTime& value) { m_connectedToAgentTimestampHasBeenSet = true; m_connectedToAgentTimestamp = value; }

    /**
     * <p>The timestamp when the contact was connected to the agent.</p>
     */
    inline void SetConnectedToAgentTimestamp(Aws::Utils::DateTime&& value) { m_connectedToAgentTimestampHasBeenSet = true; m_connectedToAgentTimestamp = std::move(value); }

    /**
     * <p>The timestamp when the contact was connected to the agent.</p>
     */
    inline AgentInfo& WithConnectedToAgentTimestamp(const Aws::Utils::DateTime& value) { SetConnectedToAgentTimestamp(value); return *this;}

    /**
     * <p>The timestamp when the contact was connected to the agent.</p>
     */
    inline AgentInfo& WithConnectedToAgentTimestamp(Aws::Utils::DateTime&& value) { SetConnectedToAgentTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_connectedToAgentTimestamp;
    bool m_connectedToAgentTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
