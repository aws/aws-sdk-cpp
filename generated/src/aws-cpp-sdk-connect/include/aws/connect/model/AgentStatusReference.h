﻿/**
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
    AWS_CONNECT_API AgentStatusReference();
    AWS_CONNECT_API AgentStatusReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentStatusReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start timestamp of the agent's status.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusStartTimestamp() const{ return m_statusStartTimestamp; }
    inline bool StatusStartTimestampHasBeenSet() const { return m_statusStartTimestampHasBeenSet; }
    inline void SetStatusStartTimestamp(const Aws::Utils::DateTime& value) { m_statusStartTimestampHasBeenSet = true; m_statusStartTimestamp = value; }
    inline void SetStatusStartTimestamp(Aws::Utils::DateTime&& value) { m_statusStartTimestampHasBeenSet = true; m_statusStartTimestamp = std::move(value); }
    inline AgentStatusReference& WithStatusStartTimestamp(const Aws::Utils::DateTime& value) { SetStatusStartTimestamp(value); return *this;}
    inline AgentStatusReference& WithStatusStartTimestamp(Aws::Utils::DateTime&& value) { SetStatusStartTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the agent's status.</p>
     */
    inline const Aws::String& GetStatusArn() const{ return m_statusArn; }
    inline bool StatusArnHasBeenSet() const { return m_statusArnHasBeenSet; }
    inline void SetStatusArn(const Aws::String& value) { m_statusArnHasBeenSet = true; m_statusArn = value; }
    inline void SetStatusArn(Aws::String&& value) { m_statusArnHasBeenSet = true; m_statusArn = std::move(value); }
    inline void SetStatusArn(const char* value) { m_statusArnHasBeenSet = true; m_statusArn.assign(value); }
    inline AgentStatusReference& WithStatusArn(const Aws::String& value) { SetStatusArn(value); return *this;}
    inline AgentStatusReference& WithStatusArn(Aws::String&& value) { SetStatusArn(std::move(value)); return *this;}
    inline AgentStatusReference& WithStatusArn(const char* value) { SetStatusArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the agent status.</p>
     */
    inline const Aws::String& GetStatusName() const{ return m_statusName; }
    inline bool StatusNameHasBeenSet() const { return m_statusNameHasBeenSet; }
    inline void SetStatusName(const Aws::String& value) { m_statusNameHasBeenSet = true; m_statusName = value; }
    inline void SetStatusName(Aws::String&& value) { m_statusNameHasBeenSet = true; m_statusName = std::move(value); }
    inline void SetStatusName(const char* value) { m_statusNameHasBeenSet = true; m_statusName.assign(value); }
    inline AgentStatusReference& WithStatusName(const Aws::String& value) { SetStatusName(value); return *this;}
    inline AgentStatusReference& WithStatusName(Aws::String&& value) { SetStatusName(std::move(value)); return *this;}
    inline AgentStatusReference& WithStatusName(const char* value) { SetStatusName(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_statusStartTimestamp;
    bool m_statusStartTimestampHasBeenSet = false;

    Aws::String m_statusArn;
    bool m_statusArnHasBeenSet = false;

    Aws::String m_statusName;
    bool m_statusNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
