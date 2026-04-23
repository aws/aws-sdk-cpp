/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/model/HandshakeState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/organizations/model/ActionType.h>
#include <aws/organizations/model/HandshakeParty.h>
#include <aws/organizations/model/HandshakeResource.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains information that must be exchanged to securely establish a
   * relationship between two accounts (an <i>originator</i> and a <i>recipient</i>).
   * For example, when a master account (the originator) invites another account (the
   * recipient) to join its organization, the two accounts exchange information as a
   * series of handshake requests and responses.</p> <p> <b>Note:</b> Handshakes that
   * are CANCELED, ACCEPTED, or DECLINED show up in lists for only 30 days after
   * entering that state After that they are deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/Handshake">AWS
   * API Reference</a></p>
   */
  class AWS_ORGANIZATIONS_API Handshake
  {
  public:
    Handshake();
    Handshake(Aws::Utils::Json::JsonView jsonValue);
    Handshake& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier (ID) of a handshake. The originating account creates
     * the ID when it initiates the handshake.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier (ID) of a handshake. The originating account creates
     * the ID when it initiates the handshake.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of a handshake. The originating account creates
     * the ID when it initiates the handshake.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier (ID) of a handshake. The originating account creates
     * the ID when it initiates the handshake.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier (ID) of a handshake. The originating account creates
     * the ID when it initiates the handshake.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier (ID) of a handshake. The originating account creates
     * the ID when it initiates the handshake.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline Handshake& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of a handshake. The originating account creates
     * the ID when it initiates the handshake.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline Handshake& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of a handshake. The originating account creates
     * the ID when it initiates the handshake.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline Handshake& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a handshake.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a handshake.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a handshake.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a handshake.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a handshake.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a handshake.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline Handshake& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a handshake.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline Handshake& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a handshake.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_permissions.html#orgs-permissions-arns">ARN
     * Formats Supported by Organizations</a> in the <i>AWS Organizations User
     * Guide</i>.</p>
     */
    inline Handshake& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Information about the two accounts that are participating in the
     * handshake.</p>
     */
    inline const Aws::Vector<HandshakeParty>& GetParties() const{ return m_parties; }

    /**
     * <p>Information about the two accounts that are participating in the
     * handshake.</p>
     */
    inline bool PartiesHasBeenSet() const { return m_partiesHasBeenSet; }

    /**
     * <p>Information about the two accounts that are participating in the
     * handshake.</p>
     */
    inline void SetParties(const Aws::Vector<HandshakeParty>& value) { m_partiesHasBeenSet = true; m_parties = value; }

    /**
     * <p>Information about the two accounts that are participating in the
     * handshake.</p>
     */
    inline void SetParties(Aws::Vector<HandshakeParty>&& value) { m_partiesHasBeenSet = true; m_parties = std::move(value); }

    /**
     * <p>Information about the two accounts that are participating in the
     * handshake.</p>
     */
    inline Handshake& WithParties(const Aws::Vector<HandshakeParty>& value) { SetParties(value); return *this;}

    /**
     * <p>Information about the two accounts that are participating in the
     * handshake.</p>
     */
    inline Handshake& WithParties(Aws::Vector<HandshakeParty>&& value) { SetParties(std::move(value)); return *this;}

    /**
     * <p>Information about the two accounts that are participating in the
     * handshake.</p>
     */
    inline Handshake& AddParties(const HandshakeParty& value) { m_partiesHasBeenSet = true; m_parties.push_back(value); return *this; }

    /**
     * <p>Information about the two accounts that are participating in the
     * handshake.</p>
     */
    inline Handshake& AddParties(HandshakeParty&& value) { m_partiesHasBeenSet = true; m_parties.push_back(std::move(value)); return *this; }


    /**
     * <p>The current state of the handshake. Use the state to trace the flow of the
     * handshake through the process from its creation to its acceptance. The meaning
     * of each of the valid values is as follows:</p> <ul> <li> <p> <b>REQUESTED</b>:
     * This handshake was sent to multiple recipients (applicable to only some
     * handshake types) and not all recipients have responded yet. The request stays in
     * this state until all recipients respond.</p> </li> <li> <p> <b>OPEN</b>: This
     * handshake was sent to multiple recipients (applicable to only some policy types)
     * and all recipients have responded, allowing the originator to complete the
     * handshake action.</p> </li> <li> <p> <b>CANCELED</b>: This handshake is no
     * longer active because it was canceled by the originating account.</p> </li> <li>
     * <p> <b>ACCEPTED</b>: This handshake is complete because it has been accepted by
     * the recipient.</p> </li> <li> <p> <b>DECLINED</b>: This handshake is no longer
     * active because it was declined by the recipient account.</p> </li> <li> <p>
     * <b>EXPIRED</b>: This handshake is no longer active because the originator did
     * not receive a response of any kind from the recipient before the expiration time
     * (15 days).</p> </li> </ul>
     */
    inline const HandshakeState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the handshake. Use the state to trace the flow of the
     * handshake through the process from its creation to its acceptance. The meaning
     * of each of the valid values is as follows:</p> <ul> <li> <p> <b>REQUESTED</b>:
     * This handshake was sent to multiple recipients (applicable to only some
     * handshake types) and not all recipients have responded yet. The request stays in
     * this state until all recipients respond.</p> </li> <li> <p> <b>OPEN</b>: This
     * handshake was sent to multiple recipients (applicable to only some policy types)
     * and all recipients have responded, allowing the originator to complete the
     * handshake action.</p> </li> <li> <p> <b>CANCELED</b>: This handshake is no
     * longer active because it was canceled by the originating account.</p> </li> <li>
     * <p> <b>ACCEPTED</b>: This handshake is complete because it has been accepted by
     * the recipient.</p> </li> <li> <p> <b>DECLINED</b>: This handshake is no longer
     * active because it was declined by the recipient account.</p> </li> <li> <p>
     * <b>EXPIRED</b>: This handshake is no longer active because the originator did
     * not receive a response of any kind from the recipient before the expiration time
     * (15 days).</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the handshake. Use the state to trace the flow of the
     * handshake through the process from its creation to its acceptance. The meaning
     * of each of the valid values is as follows:</p> <ul> <li> <p> <b>REQUESTED</b>:
     * This handshake was sent to multiple recipients (applicable to only some
     * handshake types) and not all recipients have responded yet. The request stays in
     * this state until all recipients respond.</p> </li> <li> <p> <b>OPEN</b>: This
     * handshake was sent to multiple recipients (applicable to only some policy types)
     * and all recipients have responded, allowing the originator to complete the
     * handshake action.</p> </li> <li> <p> <b>CANCELED</b>: This handshake is no
     * longer active because it was canceled by the originating account.</p> </li> <li>
     * <p> <b>ACCEPTED</b>: This handshake is complete because it has been accepted by
     * the recipient.</p> </li> <li> <p> <b>DECLINED</b>: This handshake is no longer
     * active because it was declined by the recipient account.</p> </li> <li> <p>
     * <b>EXPIRED</b>: This handshake is no longer active because the originator did
     * not receive a response of any kind from the recipient before the expiration time
     * (15 days).</p> </li> </ul>
     */
    inline void SetState(const HandshakeState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the handshake. Use the state to trace the flow of the
     * handshake through the process from its creation to its acceptance. The meaning
     * of each of the valid values is as follows:</p> <ul> <li> <p> <b>REQUESTED</b>:
     * This handshake was sent to multiple recipients (applicable to only some
     * handshake types) and not all recipients have responded yet. The request stays in
     * this state until all recipients respond.</p> </li> <li> <p> <b>OPEN</b>: This
     * handshake was sent to multiple recipients (applicable to only some policy types)
     * and all recipients have responded, allowing the originator to complete the
     * handshake action.</p> </li> <li> <p> <b>CANCELED</b>: This handshake is no
     * longer active because it was canceled by the originating account.</p> </li> <li>
     * <p> <b>ACCEPTED</b>: This handshake is complete because it has been accepted by
     * the recipient.</p> </li> <li> <p> <b>DECLINED</b>: This handshake is no longer
     * active because it was declined by the recipient account.</p> </li> <li> <p>
     * <b>EXPIRED</b>: This handshake is no longer active because the originator did
     * not receive a response of any kind from the recipient before the expiration time
     * (15 days).</p> </li> </ul>
     */
    inline void SetState(HandshakeState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the handshake. Use the state to trace the flow of the
     * handshake through the process from its creation to its acceptance. The meaning
     * of each of the valid values is as follows:</p> <ul> <li> <p> <b>REQUESTED</b>:
     * This handshake was sent to multiple recipients (applicable to only some
     * handshake types) and not all recipients have responded yet. The request stays in
     * this state until all recipients respond.</p> </li> <li> <p> <b>OPEN</b>: This
     * handshake was sent to multiple recipients (applicable to only some policy types)
     * and all recipients have responded, allowing the originator to complete the
     * handshake action.</p> </li> <li> <p> <b>CANCELED</b>: This handshake is no
     * longer active because it was canceled by the originating account.</p> </li> <li>
     * <p> <b>ACCEPTED</b>: This handshake is complete because it has been accepted by
     * the recipient.</p> </li> <li> <p> <b>DECLINED</b>: This handshake is no longer
     * active because it was declined by the recipient account.</p> </li> <li> <p>
     * <b>EXPIRED</b>: This handshake is no longer active because the originator did
     * not receive a response of any kind from the recipient before the expiration time
     * (15 days).</p> </li> </ul>
     */
    inline Handshake& WithState(const HandshakeState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the handshake. Use the state to trace the flow of the
     * handshake through the process from its creation to its acceptance. The meaning
     * of each of the valid values is as follows:</p> <ul> <li> <p> <b>REQUESTED</b>:
     * This handshake was sent to multiple recipients (applicable to only some
     * handshake types) and not all recipients have responded yet. The request stays in
     * this state until all recipients respond.</p> </li> <li> <p> <b>OPEN</b>: This
     * handshake was sent to multiple recipients (applicable to only some policy types)
     * and all recipients have responded, allowing the originator to complete the
     * handshake action.</p> </li> <li> <p> <b>CANCELED</b>: This handshake is no
     * longer active because it was canceled by the originating account.</p> </li> <li>
     * <p> <b>ACCEPTED</b>: This handshake is complete because it has been accepted by
     * the recipient.</p> </li> <li> <p> <b>DECLINED</b>: This handshake is no longer
     * active because it was declined by the recipient account.</p> </li> <li> <p>
     * <b>EXPIRED</b>: This handshake is no longer active because the originator did
     * not receive a response of any kind from the recipient before the expiration time
     * (15 days).</p> </li> </ul>
     */
    inline Handshake& WithState(HandshakeState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The date and time that the handshake request was made.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedTimestamp() const{ return m_requestedTimestamp; }

    /**
     * <p>The date and time that the handshake request was made.</p>
     */
    inline bool RequestedTimestampHasBeenSet() const { return m_requestedTimestampHasBeenSet; }

    /**
     * <p>The date and time that the handshake request was made.</p>
     */
    inline void SetRequestedTimestamp(const Aws::Utils::DateTime& value) { m_requestedTimestampHasBeenSet = true; m_requestedTimestamp = value; }

    /**
     * <p>The date and time that the handshake request was made.</p>
     */
    inline void SetRequestedTimestamp(Aws::Utils::DateTime&& value) { m_requestedTimestampHasBeenSet = true; m_requestedTimestamp = std::move(value); }

    /**
     * <p>The date and time that the handshake request was made.</p>
     */
    inline Handshake& WithRequestedTimestamp(const Aws::Utils::DateTime& value) { SetRequestedTimestamp(value); return *this;}

    /**
     * <p>The date and time that the handshake request was made.</p>
     */
    inline Handshake& WithRequestedTimestamp(Aws::Utils::DateTime&& value) { SetRequestedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The date and time that the handshake expires. If the recipient of the
     * handshake request fails to respond before the specified date and time, the
     * handshake becomes inactive and is no longer valid.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTimestamp() const{ return m_expirationTimestamp; }

    /**
     * <p>The date and time that the handshake expires. If the recipient of the
     * handshake request fails to respond before the specified date and time, the
     * handshake becomes inactive and is no longer valid.</p>
     */
    inline bool ExpirationTimestampHasBeenSet() const { return m_expirationTimestampHasBeenSet; }

    /**
     * <p>The date and time that the handshake expires. If the recipient of the
     * handshake request fails to respond before the specified date and time, the
     * handshake becomes inactive and is no longer valid.</p>
     */
    inline void SetExpirationTimestamp(const Aws::Utils::DateTime& value) { m_expirationTimestampHasBeenSet = true; m_expirationTimestamp = value; }

    /**
     * <p>The date and time that the handshake expires. If the recipient of the
     * handshake request fails to respond before the specified date and time, the
     * handshake becomes inactive and is no longer valid.</p>
     */
    inline void SetExpirationTimestamp(Aws::Utils::DateTime&& value) { m_expirationTimestampHasBeenSet = true; m_expirationTimestamp = std::move(value); }

    /**
     * <p>The date and time that the handshake expires. If the recipient of the
     * handshake request fails to respond before the specified date and time, the
     * handshake becomes inactive and is no longer valid.</p>
     */
    inline Handshake& WithExpirationTimestamp(const Aws::Utils::DateTime& value) { SetExpirationTimestamp(value); return *this;}

    /**
     * <p>The date and time that the handshake expires. If the recipient of the
     * handshake request fails to respond before the specified date and time, the
     * handshake becomes inactive and is no longer valid.</p>
     */
    inline Handshake& WithExpirationTimestamp(Aws::Utils::DateTime&& value) { SetExpirationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The type of handshake, indicating what action occurs when the recipient
     * accepts the handshake. The following handshake types are supported:</p> <ul>
     * <li> <p> <b>INVITE</b>: This type of handshake represents a request to join an
     * organization. It is always sent from the master account to only non-member
     * accounts.</p> </li> <li> <p> <b>ENABLE_ALL_FEATURES</b>: This type of handshake
     * represents a request to enable all features in an organization. It is always
     * sent from the master account to only <i>invited</i> member accounts. Created
     * accounts do not receive this because those accounts were created by the
     * organization's master account and approval is inferred.</p> </li> <li> <p>
     * <b>APPROVE_ALL_FEATURES</b>: This type of handshake is sent from the
     * Organizations service when all member accounts have approved the
     * <code>ENABLE_ALL_FEATURES</code> invitation. It is sent only to the master
     * account and signals the master that it can finalize the process to enable all
     * features.</p> </li> </ul>
     */
    inline const ActionType& GetAction() const{ return m_action; }

    /**
     * <p>The type of handshake, indicating what action occurs when the recipient
     * accepts the handshake. The following handshake types are supported:</p> <ul>
     * <li> <p> <b>INVITE</b>: This type of handshake represents a request to join an
     * organization. It is always sent from the master account to only non-member
     * accounts.</p> </li> <li> <p> <b>ENABLE_ALL_FEATURES</b>: This type of handshake
     * represents a request to enable all features in an organization. It is always
     * sent from the master account to only <i>invited</i> member accounts. Created
     * accounts do not receive this because those accounts were created by the
     * organization's master account and approval is inferred.</p> </li> <li> <p>
     * <b>APPROVE_ALL_FEATURES</b>: This type of handshake is sent from the
     * Organizations service when all member accounts have approved the
     * <code>ENABLE_ALL_FEATURES</code> invitation. It is sent only to the master
     * account and signals the master that it can finalize the process to enable all
     * features.</p> </li> </ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The type of handshake, indicating what action occurs when the recipient
     * accepts the handshake. The following handshake types are supported:</p> <ul>
     * <li> <p> <b>INVITE</b>: This type of handshake represents a request to join an
     * organization. It is always sent from the master account to only non-member
     * accounts.</p> </li> <li> <p> <b>ENABLE_ALL_FEATURES</b>: This type of handshake
     * represents a request to enable all features in an organization. It is always
     * sent from the master account to only <i>invited</i> member accounts. Created
     * accounts do not receive this because those accounts were created by the
     * organization's master account and approval is inferred.</p> </li> <li> <p>
     * <b>APPROVE_ALL_FEATURES</b>: This type of handshake is sent from the
     * Organizations service when all member accounts have approved the
     * <code>ENABLE_ALL_FEATURES</code> invitation. It is sent only to the master
     * account and signals the master that it can finalize the process to enable all
     * features.</p> </li> </ul>
     */
    inline void SetAction(const ActionType& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The type of handshake, indicating what action occurs when the recipient
     * accepts the handshake. The following handshake types are supported:</p> <ul>
     * <li> <p> <b>INVITE</b>: This type of handshake represents a request to join an
     * organization. It is always sent from the master account to only non-member
     * accounts.</p> </li> <li> <p> <b>ENABLE_ALL_FEATURES</b>: This type of handshake
     * represents a request to enable all features in an organization. It is always
     * sent from the master account to only <i>invited</i> member accounts. Created
     * accounts do not receive this because those accounts were created by the
     * organization's master account and approval is inferred.</p> </li> <li> <p>
     * <b>APPROVE_ALL_FEATURES</b>: This type of handshake is sent from the
     * Organizations service when all member accounts have approved the
     * <code>ENABLE_ALL_FEATURES</code> invitation. It is sent only to the master
     * account and signals the master that it can finalize the process to enable all
     * features.</p> </li> </ul>
     */
    inline void SetAction(ActionType&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The type of handshake, indicating what action occurs when the recipient
     * accepts the handshake. The following handshake types are supported:</p> <ul>
     * <li> <p> <b>INVITE</b>: This type of handshake represents a request to join an
     * organization. It is always sent from the master account to only non-member
     * accounts.</p> </li> <li> <p> <b>ENABLE_ALL_FEATURES</b>: This type of handshake
     * represents a request to enable all features in an organization. It is always
     * sent from the master account to only <i>invited</i> member accounts. Created
     * accounts do not receive this because those accounts were created by the
     * organization's master account and approval is inferred.</p> </li> <li> <p>
     * <b>APPROVE_ALL_FEATURES</b>: This type of handshake is sent from the
     * Organizations service when all member accounts have approved the
     * <code>ENABLE_ALL_FEATURES</code> invitation. It is sent only to the master
     * account and signals the master that it can finalize the process to enable all
     * features.</p> </li> </ul>
     */
    inline Handshake& WithAction(const ActionType& value) { SetAction(value); return *this;}

    /**
     * <p>The type of handshake, indicating what action occurs when the recipient
     * accepts the handshake. The following handshake types are supported:</p> <ul>
     * <li> <p> <b>INVITE</b>: This type of handshake represents a request to join an
     * organization. It is always sent from the master account to only non-member
     * accounts.</p> </li> <li> <p> <b>ENABLE_ALL_FEATURES</b>: This type of handshake
     * represents a request to enable all features in an organization. It is always
     * sent from the master account to only <i>invited</i> member accounts. Created
     * accounts do not receive this because those accounts were created by the
     * organization's master account and approval is inferred.</p> </li> <li> <p>
     * <b>APPROVE_ALL_FEATURES</b>: This type of handshake is sent from the
     * Organizations service when all member accounts have approved the
     * <code>ENABLE_ALL_FEATURES</code> invitation. It is sent only to the master
     * account and signals the master that it can finalize the process to enable all
     * features.</p> </li> </ul>
     */
    inline Handshake& WithAction(ActionType&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Additional information that is needed to process the handshake.</p>
     */
    inline const Aws::Vector<HandshakeResource>& GetResources() const{ return m_resources; }

    /**
     * <p>Additional information that is needed to process the handshake.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>Additional information that is needed to process the handshake.</p>
     */
    inline void SetResources(const Aws::Vector<HandshakeResource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>Additional information that is needed to process the handshake.</p>
     */
    inline void SetResources(Aws::Vector<HandshakeResource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>Additional information that is needed to process the handshake.</p>
     */
    inline Handshake& WithResources(const Aws::Vector<HandshakeResource>& value) { SetResources(value); return *this;}

    /**
     * <p>Additional information that is needed to process the handshake.</p>
     */
    inline Handshake& WithResources(Aws::Vector<HandshakeResource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>Additional information that is needed to process the handshake.</p>
     */
    inline Handshake& AddResources(const HandshakeResource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>Additional information that is needed to process the handshake.</p>
     */
    inline Handshake& AddResources(HandshakeResource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Vector<HandshakeParty> m_parties;
    bool m_partiesHasBeenSet;

    HandshakeState m_state;
    bool m_stateHasBeenSet;

    Aws::Utils::DateTime m_requestedTimestamp;
    bool m_requestedTimestampHasBeenSet;

    Aws::Utils::DateTime m_expirationTimestamp;
    bool m_expirationTimestampHasBeenSet;

    ActionType m_action;
    bool m_actionHasBeenSet;

    Aws::Vector<HandshakeResource> m_resources;
    bool m_resourcesHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
