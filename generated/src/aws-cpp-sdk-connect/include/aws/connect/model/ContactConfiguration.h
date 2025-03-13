/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ParticipantRole.h>
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
   * <p>The contact configuration for push notification registration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactConfiguration">AWS
   * API Reference</a></p>
   */
  class ContactConfiguration
  {
  public:
    AWS_CONNECT_API ContactConfiguration() = default;
    AWS_CONNECT_API ContactConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the contact within the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetContactId() const { return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    ContactConfiguration& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the participant in the chat conversation.</p>  <p>Only
     * <code>CUSTOMER</code> is currently supported. Any other values other than
     * <code>CUSTOMER</code> will result in an exception (4xx error).</p> 
     */
    inline ParticipantRole GetParticipantRole() const { return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    inline void SetParticipantRole(ParticipantRole value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }
    inline ContactConfiguration& WithParticipantRole(ParticipantRole value) { SetParticipantRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to include raw connect message in the push notification payload.
     * Default is <code>False</code>.</p>
     */
    inline bool GetIncludeRawMessage() const { return m_includeRawMessage; }
    inline bool IncludeRawMessageHasBeenSet() const { return m_includeRawMessageHasBeenSet; }
    inline void SetIncludeRawMessage(bool value) { m_includeRawMessageHasBeenSet = true; m_includeRawMessage = value; }
    inline ContactConfiguration& WithIncludeRawMessage(bool value) { SetIncludeRawMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    ParticipantRole m_participantRole{ParticipantRole::NOT_SET};
    bool m_participantRoleHasBeenSet = false;

    bool m_includeRawMessage{false};
    bool m_includeRawMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
