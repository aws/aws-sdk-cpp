/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
    AWS_MAILMANAGER_API Relay();
    AWS_MAILMANAGER_API Relay(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Relay& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when the relay was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }
    inline bool LastModifiedTimestampHasBeenSet() const { return m_lastModifiedTimestampHasBeenSet; }
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = value; }
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::move(value); }
    inline Relay& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}
    inline Relay& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique relay identifier.</p>
     */
    inline const Aws::String& GetRelayId() const{ return m_relayId; }
    inline bool RelayIdHasBeenSet() const { return m_relayIdHasBeenSet; }
    inline void SetRelayId(const Aws::String& value) { m_relayIdHasBeenSet = true; m_relayId = value; }
    inline void SetRelayId(Aws::String&& value) { m_relayIdHasBeenSet = true; m_relayId = std::move(value); }
    inline void SetRelayId(const char* value) { m_relayIdHasBeenSet = true; m_relayId.assign(value); }
    inline Relay& WithRelayId(const Aws::String& value) { SetRelayId(value); return *this;}
    inline Relay& WithRelayId(Aws::String&& value) { SetRelayId(std::move(value)); return *this;}
    inline Relay& WithRelayId(const char* value) { SetRelayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique relay name.</p>
     */
    inline const Aws::String& GetRelayName() const{ return m_relayName; }
    inline bool RelayNameHasBeenSet() const { return m_relayNameHasBeenSet; }
    inline void SetRelayName(const Aws::String& value) { m_relayNameHasBeenSet = true; m_relayName = value; }
    inline void SetRelayName(Aws::String&& value) { m_relayNameHasBeenSet = true; m_relayName = std::move(value); }
    inline void SetRelayName(const char* value) { m_relayNameHasBeenSet = true; m_relayName.assign(value); }
    inline Relay& WithRelayName(const Aws::String& value) { SetRelayName(value); return *this;}
    inline Relay& WithRelayName(Aws::String&& value) { SetRelayName(std::move(value)); return *this;}
    inline Relay& WithRelayName(const char* value) { SetRelayName(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastModifiedTimestamp;
    bool m_lastModifiedTimestampHasBeenSet = false;

    Aws::String m_relayId;
    bool m_relayIdHasBeenSet = false;

    Aws::String m_relayName;
    bool m_relayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
