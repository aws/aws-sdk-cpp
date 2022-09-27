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
  class AWS_CONNECT_API AgentStatusReference
  {
  public:
    AgentStatusReference();
    AgentStatusReference(Aws::Utils::Json::JsonView jsonValue);
    AgentStatusReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start timestamp of the agent's status.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusStartTimestamp() const{ return m_statusStartTimestamp; }

    /**
     * <p>The start timestamp of the agent's status.</p>
     */
    inline bool StatusStartTimestampHasBeenSet() const { return m_statusStartTimestampHasBeenSet; }

    /**
     * <p>The start timestamp of the agent's status.</p>
     */
    inline void SetStatusStartTimestamp(const Aws::Utils::DateTime& value) { m_statusStartTimestampHasBeenSet = true; m_statusStartTimestamp = value; }

    /**
     * <p>The start timestamp of the agent's status.</p>
     */
    inline void SetStatusStartTimestamp(Aws::Utils::DateTime&& value) { m_statusStartTimestampHasBeenSet = true; m_statusStartTimestamp = std::move(value); }

    /**
     * <p>The start timestamp of the agent's status.</p>
     */
    inline AgentStatusReference& WithStatusStartTimestamp(const Aws::Utils::DateTime& value) { SetStatusStartTimestamp(value); return *this;}

    /**
     * <p>The start timestamp of the agent's status.</p>
     */
    inline AgentStatusReference& WithStatusStartTimestamp(Aws::Utils::DateTime&& value) { SetStatusStartTimestamp(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the agent's status.</p>
     */
    inline const Aws::String& GetStatusArn() const{ return m_statusArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent's status.</p>
     */
    inline bool StatusArnHasBeenSet() const { return m_statusArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent's status.</p>
     */
    inline void SetStatusArn(const Aws::String& value) { m_statusArnHasBeenSet = true; m_statusArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent's status.</p>
     */
    inline void SetStatusArn(Aws::String&& value) { m_statusArnHasBeenSet = true; m_statusArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent's status.</p>
     */
    inline void SetStatusArn(const char* value) { m_statusArnHasBeenSet = true; m_statusArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent's status.</p>
     */
    inline AgentStatusReference& WithStatusArn(const Aws::String& value) { SetStatusArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent's status.</p>
     */
    inline AgentStatusReference& WithStatusArn(Aws::String&& value) { SetStatusArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent's status.</p>
     */
    inline AgentStatusReference& WithStatusArn(const char* value) { SetStatusArn(value); return *this;}

  private:

    Aws::Utils::DateTime m_statusStartTimestamp;
    bool m_statusStartTimestampHasBeenSet = false;

    Aws::String m_statusArn;
    bool m_statusArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
