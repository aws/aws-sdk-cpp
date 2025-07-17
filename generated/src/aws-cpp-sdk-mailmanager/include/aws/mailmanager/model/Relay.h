/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The relay resource that can be used as a rule to relay receiving emails to
   * the destination relay server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/Relay">AWS
   * API Reference</a></p>
   */
  class Relay
  {
  public:
    AWS_MAILMANAGER_API Relay() = default;
    AWS_MAILMANAGER_API Relay(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Relay& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique relay identifier.</p>
     */
    inline const Aws::String& GetRelayId() const { return m_relayId; }
    inline bool RelayIdHasBeenSet() const { return m_relayIdHasBeenSet; }
    template<typename RelayIdT = Aws::String>
    void SetRelayId(RelayIdT&& value) { m_relayIdHasBeenSet = true; m_relayId = std::forward<RelayIdT>(value); }
    template<typename RelayIdT = Aws::String>
    Relay& WithRelayId(RelayIdT&& value) { SetRelayId(std::forward<RelayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique relay name.</p>
     */
    inline const Aws::String& GetRelayName() const { return m_relayName; }
    inline bool RelayNameHasBeenSet() const { return m_relayNameHasBeenSet; }
    template<typename RelayNameT = Aws::String>
    void SetRelayName(RelayNameT&& value) { m_relayNameHasBeenSet = true; m_relayName = std::forward<RelayNameT>(value); }
    template<typename RelayNameT = Aws::String>
    Relay& WithRelayName(RelayNameT&& value) { SetRelayName(std::forward<RelayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the relay was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const { return m_lastModifiedTimestamp; }
    inline bool LastModifiedTimestampHasBeenSet() const { return m_lastModifiedTimestampHasBeenSet; }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    void SetLastModifiedTimestamp(LastModifiedTimestampT&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::forward<LastModifiedTimestampT>(value); }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    Relay& WithLastModifiedTimestamp(LastModifiedTimestampT&& value) { SetLastModifiedTimestamp(std::forward<LastModifiedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_relayId;
    bool m_relayIdHasBeenSet = false;

    Aws::String m_relayName;
    bool m_relayNameHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp{};
    bool m_lastModifiedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
