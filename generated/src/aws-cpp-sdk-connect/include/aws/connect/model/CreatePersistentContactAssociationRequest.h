/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/RehydrationType.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class CreatePersistentContactAssociationRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreatePersistentContactAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePersistentContactAssociation"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline CreatePersistentContactAssociationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline CreatePersistentContactAssociationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline CreatePersistentContactAssociationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>This is the contactId of the current contact that the
     * <code>CreatePersistentContactAssociation</code> API is being called from.</p>
     */
    inline const Aws::String& GetInitialContactId() const{ return m_initialContactId; }

    /**
     * <p>This is the contactId of the current contact that the
     * <code>CreatePersistentContactAssociation</code> API is being called from.</p>
     */
    inline bool InitialContactIdHasBeenSet() const { return m_initialContactIdHasBeenSet; }

    /**
     * <p>This is the contactId of the current contact that the
     * <code>CreatePersistentContactAssociation</code> API is being called from.</p>
     */
    inline void SetInitialContactId(const Aws::String& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = value; }

    /**
     * <p>This is the contactId of the current contact that the
     * <code>CreatePersistentContactAssociation</code> API is being called from.</p>
     */
    inline void SetInitialContactId(Aws::String&& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = std::move(value); }

    /**
     * <p>This is the contactId of the current contact that the
     * <code>CreatePersistentContactAssociation</code> API is being called from.</p>
     */
    inline void SetInitialContactId(const char* value) { m_initialContactIdHasBeenSet = true; m_initialContactId.assign(value); }

    /**
     * <p>This is the contactId of the current contact that the
     * <code>CreatePersistentContactAssociation</code> API is being called from.</p>
     */
    inline CreatePersistentContactAssociationRequest& WithInitialContactId(const Aws::String& value) { SetInitialContactId(value); return *this;}

    /**
     * <p>This is the contactId of the current contact that the
     * <code>CreatePersistentContactAssociation</code> API is being called from.</p>
     */
    inline CreatePersistentContactAssociationRequest& WithInitialContactId(Aws::String&& value) { SetInitialContactId(std::move(value)); return *this;}

    /**
     * <p>This is the contactId of the current contact that the
     * <code>CreatePersistentContactAssociation</code> API is being called from.</p>
     */
    inline CreatePersistentContactAssociationRequest& WithInitialContactId(const char* value) { SetInitialContactId(value); return *this;}


    /**
     * <p>The contactId chosen for rehydration depends on the type chosen.</p> <ul>
     * <li> <p> <code>ENTIRE_PAST_SESSION</code>: Rehydrates a chat from the most
     * recently terminated past chat contact of the specified past ended chat session.
     * To use this type, provide the <code>initialContactId</code> of the past ended
     * chat session in the <code>sourceContactId</code> field. In this type, Amazon
     * Connect determines what the most recent chat contact on the past ended chat
     * session and uses it to start a persistent chat. </p> </li> <li> <p>
     * <code>FROM_SEGMENT</code>: Rehydrates a chat from the specified past chat
     * contact provided in the <code>sourceContactId</code> field. </p> </li> </ul>
     * <p>The actual contactId used for rehydration is provided in the response of this
     * API.</p> <p>To illustrate how to use rehydration type, consider the following
     * example: A customer starts a chat session. Agent a1 accepts the chat and a
     * conversation starts between the customer and Agent a1. This first contact
     * creates a contact ID <b>C1</b>. Agent a1 then transfers the chat to Agent a2.
     * This creates another contact ID <b>C2</b>. At this point Agent a2 ends the chat.
     * The customer is forwarded to the disconnect flow for a post chat survey that
     * creates another contact ID <b>C3</b>. After the chat survey, the chat session
     * ends. Later, the customer returns and wants to resume their past chat session.
     * At this point, the customer can have following use cases: </p> <ul> <li> <p>
     * <b>Use Case 1</b>: The customer wants to continue the past chat session but they
     * want to hide the post chat survey. For this they will use the following
     * configuration:</p> <ul> <li> <p> <b>Configuration</b> </p> <ul> <li>
     * <p>SourceContactId = "C2"</p> </li> <li> <p>RehydrationType = "FROM_SEGMENT"</p>
     * </li> </ul> </li> <li> <p> <b>Expected behavior</b> </p> <ul> <li> <p>This
     * starts a persistent chat session from the specified past ended contact (C2).
     * Transcripts of past chat sessions C2 and C1 are accessible in the current
     * persistent chat session. Note that chat segment C3 is dropped from the
     * persistent chat session.</p> </li> </ul> </li> </ul> </li> <li> <p> <b>Use Case
     * 2</b>: The customer wants to continue the past chat session and see the
     * transcript of the entire past engagement, including the post chat survey. For
     * this they will use the following configuration:</p> <ul> <li> <p>
     * <b>Configuration</b> </p> <ul> <li> <p>SourceContactId = "C1"</p> </li> <li>
     * <p>RehydrationType = "ENTIRE_PAST_SESSION"</p> </li> </ul> </li> <li> <p>
     * <b>Expected behavior</b> </p> <ul> <li> <p>This starts a persistent chat session
     * from the most recently ended chat contact (C3). Transcripts of past chat
     * sessions C3, C2 and C1 are accessible in the current persistent chat
     * session.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline const RehydrationType& GetRehydrationType() const{ return m_rehydrationType; }

    /**
     * <p>The contactId chosen for rehydration depends on the type chosen.</p> <ul>
     * <li> <p> <code>ENTIRE_PAST_SESSION</code>: Rehydrates a chat from the most
     * recently terminated past chat contact of the specified past ended chat session.
     * To use this type, provide the <code>initialContactId</code> of the past ended
     * chat session in the <code>sourceContactId</code> field. In this type, Amazon
     * Connect determines what the most recent chat contact on the past ended chat
     * session and uses it to start a persistent chat. </p> </li> <li> <p>
     * <code>FROM_SEGMENT</code>: Rehydrates a chat from the specified past chat
     * contact provided in the <code>sourceContactId</code> field. </p> </li> </ul>
     * <p>The actual contactId used for rehydration is provided in the response of this
     * API.</p> <p>To illustrate how to use rehydration type, consider the following
     * example: A customer starts a chat session. Agent a1 accepts the chat and a
     * conversation starts between the customer and Agent a1. This first contact
     * creates a contact ID <b>C1</b>. Agent a1 then transfers the chat to Agent a2.
     * This creates another contact ID <b>C2</b>. At this point Agent a2 ends the chat.
     * The customer is forwarded to the disconnect flow for a post chat survey that
     * creates another contact ID <b>C3</b>. After the chat survey, the chat session
     * ends. Later, the customer returns and wants to resume their past chat session.
     * At this point, the customer can have following use cases: </p> <ul> <li> <p>
     * <b>Use Case 1</b>: The customer wants to continue the past chat session but they
     * want to hide the post chat survey. For this they will use the following
     * configuration:</p> <ul> <li> <p> <b>Configuration</b> </p> <ul> <li>
     * <p>SourceContactId = "C2"</p> </li> <li> <p>RehydrationType = "FROM_SEGMENT"</p>
     * </li> </ul> </li> <li> <p> <b>Expected behavior</b> </p> <ul> <li> <p>This
     * starts a persistent chat session from the specified past ended contact (C2).
     * Transcripts of past chat sessions C2 and C1 are accessible in the current
     * persistent chat session. Note that chat segment C3 is dropped from the
     * persistent chat session.</p> </li> </ul> </li> </ul> </li> <li> <p> <b>Use Case
     * 2</b>: The customer wants to continue the past chat session and see the
     * transcript of the entire past engagement, including the post chat survey. For
     * this they will use the following configuration:</p> <ul> <li> <p>
     * <b>Configuration</b> </p> <ul> <li> <p>SourceContactId = "C1"</p> </li> <li>
     * <p>RehydrationType = "ENTIRE_PAST_SESSION"</p> </li> </ul> </li> <li> <p>
     * <b>Expected behavior</b> </p> <ul> <li> <p>This starts a persistent chat session
     * from the most recently ended chat contact (C3). Transcripts of past chat
     * sessions C3, C2 and C1 are accessible in the current persistent chat
     * session.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline bool RehydrationTypeHasBeenSet() const { return m_rehydrationTypeHasBeenSet; }

    /**
     * <p>The contactId chosen for rehydration depends on the type chosen.</p> <ul>
     * <li> <p> <code>ENTIRE_PAST_SESSION</code>: Rehydrates a chat from the most
     * recently terminated past chat contact of the specified past ended chat session.
     * To use this type, provide the <code>initialContactId</code> of the past ended
     * chat session in the <code>sourceContactId</code> field. In this type, Amazon
     * Connect determines what the most recent chat contact on the past ended chat
     * session and uses it to start a persistent chat. </p> </li> <li> <p>
     * <code>FROM_SEGMENT</code>: Rehydrates a chat from the specified past chat
     * contact provided in the <code>sourceContactId</code> field. </p> </li> </ul>
     * <p>The actual contactId used for rehydration is provided in the response of this
     * API.</p> <p>To illustrate how to use rehydration type, consider the following
     * example: A customer starts a chat session. Agent a1 accepts the chat and a
     * conversation starts between the customer and Agent a1. This first contact
     * creates a contact ID <b>C1</b>. Agent a1 then transfers the chat to Agent a2.
     * This creates another contact ID <b>C2</b>. At this point Agent a2 ends the chat.
     * The customer is forwarded to the disconnect flow for a post chat survey that
     * creates another contact ID <b>C3</b>. After the chat survey, the chat session
     * ends. Later, the customer returns and wants to resume their past chat session.
     * At this point, the customer can have following use cases: </p> <ul> <li> <p>
     * <b>Use Case 1</b>: The customer wants to continue the past chat session but they
     * want to hide the post chat survey. For this they will use the following
     * configuration:</p> <ul> <li> <p> <b>Configuration</b> </p> <ul> <li>
     * <p>SourceContactId = "C2"</p> </li> <li> <p>RehydrationType = "FROM_SEGMENT"</p>
     * </li> </ul> </li> <li> <p> <b>Expected behavior</b> </p> <ul> <li> <p>This
     * starts a persistent chat session from the specified past ended contact (C2).
     * Transcripts of past chat sessions C2 and C1 are accessible in the current
     * persistent chat session. Note that chat segment C3 is dropped from the
     * persistent chat session.</p> </li> </ul> </li> </ul> </li> <li> <p> <b>Use Case
     * 2</b>: The customer wants to continue the past chat session and see the
     * transcript of the entire past engagement, including the post chat survey. For
     * this they will use the following configuration:</p> <ul> <li> <p>
     * <b>Configuration</b> </p> <ul> <li> <p>SourceContactId = "C1"</p> </li> <li>
     * <p>RehydrationType = "ENTIRE_PAST_SESSION"</p> </li> </ul> </li> <li> <p>
     * <b>Expected behavior</b> </p> <ul> <li> <p>This starts a persistent chat session
     * from the most recently ended chat contact (C3). Transcripts of past chat
     * sessions C3, C2 and C1 are accessible in the current persistent chat
     * session.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline void SetRehydrationType(const RehydrationType& value) { m_rehydrationTypeHasBeenSet = true; m_rehydrationType = value; }

    /**
     * <p>The contactId chosen for rehydration depends on the type chosen.</p> <ul>
     * <li> <p> <code>ENTIRE_PAST_SESSION</code>: Rehydrates a chat from the most
     * recently terminated past chat contact of the specified past ended chat session.
     * To use this type, provide the <code>initialContactId</code> of the past ended
     * chat session in the <code>sourceContactId</code> field. In this type, Amazon
     * Connect determines what the most recent chat contact on the past ended chat
     * session and uses it to start a persistent chat. </p> </li> <li> <p>
     * <code>FROM_SEGMENT</code>: Rehydrates a chat from the specified past chat
     * contact provided in the <code>sourceContactId</code> field. </p> </li> </ul>
     * <p>The actual contactId used for rehydration is provided in the response of this
     * API.</p> <p>To illustrate how to use rehydration type, consider the following
     * example: A customer starts a chat session. Agent a1 accepts the chat and a
     * conversation starts between the customer and Agent a1. This first contact
     * creates a contact ID <b>C1</b>. Agent a1 then transfers the chat to Agent a2.
     * This creates another contact ID <b>C2</b>. At this point Agent a2 ends the chat.
     * The customer is forwarded to the disconnect flow for a post chat survey that
     * creates another contact ID <b>C3</b>. After the chat survey, the chat session
     * ends. Later, the customer returns and wants to resume their past chat session.
     * At this point, the customer can have following use cases: </p> <ul> <li> <p>
     * <b>Use Case 1</b>: The customer wants to continue the past chat session but they
     * want to hide the post chat survey. For this they will use the following
     * configuration:</p> <ul> <li> <p> <b>Configuration</b> </p> <ul> <li>
     * <p>SourceContactId = "C2"</p> </li> <li> <p>RehydrationType = "FROM_SEGMENT"</p>
     * </li> </ul> </li> <li> <p> <b>Expected behavior</b> </p> <ul> <li> <p>This
     * starts a persistent chat session from the specified past ended contact (C2).
     * Transcripts of past chat sessions C2 and C1 are accessible in the current
     * persistent chat session. Note that chat segment C3 is dropped from the
     * persistent chat session.</p> </li> </ul> </li> </ul> </li> <li> <p> <b>Use Case
     * 2</b>: The customer wants to continue the past chat session and see the
     * transcript of the entire past engagement, including the post chat survey. For
     * this they will use the following configuration:</p> <ul> <li> <p>
     * <b>Configuration</b> </p> <ul> <li> <p>SourceContactId = "C1"</p> </li> <li>
     * <p>RehydrationType = "ENTIRE_PAST_SESSION"</p> </li> </ul> </li> <li> <p>
     * <b>Expected behavior</b> </p> <ul> <li> <p>This starts a persistent chat session
     * from the most recently ended chat contact (C3). Transcripts of past chat
     * sessions C3, C2 and C1 are accessible in the current persistent chat
     * session.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline void SetRehydrationType(RehydrationType&& value) { m_rehydrationTypeHasBeenSet = true; m_rehydrationType = std::move(value); }

    /**
     * <p>The contactId chosen for rehydration depends on the type chosen.</p> <ul>
     * <li> <p> <code>ENTIRE_PAST_SESSION</code>: Rehydrates a chat from the most
     * recently terminated past chat contact of the specified past ended chat session.
     * To use this type, provide the <code>initialContactId</code> of the past ended
     * chat session in the <code>sourceContactId</code> field. In this type, Amazon
     * Connect determines what the most recent chat contact on the past ended chat
     * session and uses it to start a persistent chat. </p> </li> <li> <p>
     * <code>FROM_SEGMENT</code>: Rehydrates a chat from the specified past chat
     * contact provided in the <code>sourceContactId</code> field. </p> </li> </ul>
     * <p>The actual contactId used for rehydration is provided in the response of this
     * API.</p> <p>To illustrate how to use rehydration type, consider the following
     * example: A customer starts a chat session. Agent a1 accepts the chat and a
     * conversation starts between the customer and Agent a1. This first contact
     * creates a contact ID <b>C1</b>. Agent a1 then transfers the chat to Agent a2.
     * This creates another contact ID <b>C2</b>. At this point Agent a2 ends the chat.
     * The customer is forwarded to the disconnect flow for a post chat survey that
     * creates another contact ID <b>C3</b>. After the chat survey, the chat session
     * ends. Later, the customer returns and wants to resume their past chat session.
     * At this point, the customer can have following use cases: </p> <ul> <li> <p>
     * <b>Use Case 1</b>: The customer wants to continue the past chat session but they
     * want to hide the post chat survey. For this they will use the following
     * configuration:</p> <ul> <li> <p> <b>Configuration</b> </p> <ul> <li>
     * <p>SourceContactId = "C2"</p> </li> <li> <p>RehydrationType = "FROM_SEGMENT"</p>
     * </li> </ul> </li> <li> <p> <b>Expected behavior</b> </p> <ul> <li> <p>This
     * starts a persistent chat session from the specified past ended contact (C2).
     * Transcripts of past chat sessions C2 and C1 are accessible in the current
     * persistent chat session. Note that chat segment C3 is dropped from the
     * persistent chat session.</p> </li> </ul> </li> </ul> </li> <li> <p> <b>Use Case
     * 2</b>: The customer wants to continue the past chat session and see the
     * transcript of the entire past engagement, including the post chat survey. For
     * this they will use the following configuration:</p> <ul> <li> <p>
     * <b>Configuration</b> </p> <ul> <li> <p>SourceContactId = "C1"</p> </li> <li>
     * <p>RehydrationType = "ENTIRE_PAST_SESSION"</p> </li> </ul> </li> <li> <p>
     * <b>Expected behavior</b> </p> <ul> <li> <p>This starts a persistent chat session
     * from the most recently ended chat contact (C3). Transcripts of past chat
     * sessions C3, C2 and C1 are accessible in the current persistent chat
     * session.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline CreatePersistentContactAssociationRequest& WithRehydrationType(const RehydrationType& value) { SetRehydrationType(value); return *this;}

    /**
     * <p>The contactId chosen for rehydration depends on the type chosen.</p> <ul>
     * <li> <p> <code>ENTIRE_PAST_SESSION</code>: Rehydrates a chat from the most
     * recently terminated past chat contact of the specified past ended chat session.
     * To use this type, provide the <code>initialContactId</code> of the past ended
     * chat session in the <code>sourceContactId</code> field. In this type, Amazon
     * Connect determines what the most recent chat contact on the past ended chat
     * session and uses it to start a persistent chat. </p> </li> <li> <p>
     * <code>FROM_SEGMENT</code>: Rehydrates a chat from the specified past chat
     * contact provided in the <code>sourceContactId</code> field. </p> </li> </ul>
     * <p>The actual contactId used for rehydration is provided in the response of this
     * API.</p> <p>To illustrate how to use rehydration type, consider the following
     * example: A customer starts a chat session. Agent a1 accepts the chat and a
     * conversation starts between the customer and Agent a1. This first contact
     * creates a contact ID <b>C1</b>. Agent a1 then transfers the chat to Agent a2.
     * This creates another contact ID <b>C2</b>. At this point Agent a2 ends the chat.
     * The customer is forwarded to the disconnect flow for a post chat survey that
     * creates another contact ID <b>C3</b>. After the chat survey, the chat session
     * ends. Later, the customer returns and wants to resume their past chat session.
     * At this point, the customer can have following use cases: </p> <ul> <li> <p>
     * <b>Use Case 1</b>: The customer wants to continue the past chat session but they
     * want to hide the post chat survey. For this they will use the following
     * configuration:</p> <ul> <li> <p> <b>Configuration</b> </p> <ul> <li>
     * <p>SourceContactId = "C2"</p> </li> <li> <p>RehydrationType = "FROM_SEGMENT"</p>
     * </li> </ul> </li> <li> <p> <b>Expected behavior</b> </p> <ul> <li> <p>This
     * starts a persistent chat session from the specified past ended contact (C2).
     * Transcripts of past chat sessions C2 and C1 are accessible in the current
     * persistent chat session. Note that chat segment C3 is dropped from the
     * persistent chat session.</p> </li> </ul> </li> </ul> </li> <li> <p> <b>Use Case
     * 2</b>: The customer wants to continue the past chat session and see the
     * transcript of the entire past engagement, including the post chat survey. For
     * this they will use the following configuration:</p> <ul> <li> <p>
     * <b>Configuration</b> </p> <ul> <li> <p>SourceContactId = "C1"</p> </li> <li>
     * <p>RehydrationType = "ENTIRE_PAST_SESSION"</p> </li> </ul> </li> <li> <p>
     * <b>Expected behavior</b> </p> <ul> <li> <p>This starts a persistent chat session
     * from the most recently ended chat contact (C3). Transcripts of past chat
     * sessions C3, C2 and C1 are accessible in the current persistent chat
     * session.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline CreatePersistentContactAssociationRequest& WithRehydrationType(RehydrationType&& value) { SetRehydrationType(std::move(value)); return *this;}


    /**
     * <p>The contactId from which a persistent chat session must be started.</p>
     */
    inline const Aws::String& GetSourceContactId() const{ return m_sourceContactId; }

    /**
     * <p>The contactId from which a persistent chat session must be started.</p>
     */
    inline bool SourceContactIdHasBeenSet() const { return m_sourceContactIdHasBeenSet; }

    /**
     * <p>The contactId from which a persistent chat session must be started.</p>
     */
    inline void SetSourceContactId(const Aws::String& value) { m_sourceContactIdHasBeenSet = true; m_sourceContactId = value; }

    /**
     * <p>The contactId from which a persistent chat session must be started.</p>
     */
    inline void SetSourceContactId(Aws::String&& value) { m_sourceContactIdHasBeenSet = true; m_sourceContactId = std::move(value); }

    /**
     * <p>The contactId from which a persistent chat session must be started.</p>
     */
    inline void SetSourceContactId(const char* value) { m_sourceContactIdHasBeenSet = true; m_sourceContactId.assign(value); }

    /**
     * <p>The contactId from which a persistent chat session must be started.</p>
     */
    inline CreatePersistentContactAssociationRequest& WithSourceContactId(const Aws::String& value) { SetSourceContactId(value); return *this;}

    /**
     * <p>The contactId from which a persistent chat session must be started.</p>
     */
    inline CreatePersistentContactAssociationRequest& WithSourceContactId(Aws::String&& value) { SetSourceContactId(std::move(value)); return *this;}

    /**
     * <p>The contactId from which a persistent chat session must be started.</p>
     */
    inline CreatePersistentContactAssociationRequest& WithSourceContactId(const char* value) { SetSourceContactId(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline CreatePersistentContactAssociationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline CreatePersistentContactAssociationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline CreatePersistentContactAssociationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_initialContactId;
    bool m_initialContactIdHasBeenSet = false;

    RehydrationType m_rehydrationType;
    bool m_rehydrationTypeHasBeenSet = false;

    Aws::String m_sourceContactId;
    bool m_sourceContactIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
