/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RehydrationType.h>
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
   * <p>Enable persistent chats. For more information about enabling persistent chat,
   * and for example use cases and how to configure for them, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/chat-persistence.html">Enable
   * persistent chat</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PersistentChat">AWS
   * API Reference</a></p>
   */
  class PersistentChat
  {
  public:
    AWS_CONNECT_API PersistentChat();
    AWS_CONNECT_API PersistentChat(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PersistentChat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The contactId that is used for rehydration depends on the rehydration type.
     * RehydrationType is required for persistent chat. </p> <ul> <li> <p>
     * <code>ENTIRE_PAST_SESSION</code>: Rehydrates a chat from the most recently
     * terminated past chat contact of the specified past ended chat session. To use
     * this type, provide the <code>initialContactId</code> of the past ended chat
     * session in the <code>sourceContactId</code> field. In this type, Amazon Connect
     * determines the most recent chat contact on the specified chat session that has
     * ended, and uses it to start a persistent chat. </p> </li> <li> <p>
     * <code>FROM_SEGMENT</code>: Rehydrates a chat from the past chat contact that is
     * specified in the <code>sourceContactId</code> field. </p> </li> </ul> <p>The
     * actual contactId used for rehydration is provided in the response of this API.
     * </p>
     */
    inline const RehydrationType& GetRehydrationType() const{ return m_rehydrationType; }

    /**
     * <p>The contactId that is used for rehydration depends on the rehydration type.
     * RehydrationType is required for persistent chat. </p> <ul> <li> <p>
     * <code>ENTIRE_PAST_SESSION</code>: Rehydrates a chat from the most recently
     * terminated past chat contact of the specified past ended chat session. To use
     * this type, provide the <code>initialContactId</code> of the past ended chat
     * session in the <code>sourceContactId</code> field. In this type, Amazon Connect
     * determines the most recent chat contact on the specified chat session that has
     * ended, and uses it to start a persistent chat. </p> </li> <li> <p>
     * <code>FROM_SEGMENT</code>: Rehydrates a chat from the past chat contact that is
     * specified in the <code>sourceContactId</code> field. </p> </li> </ul> <p>The
     * actual contactId used for rehydration is provided in the response of this API.
     * </p>
     */
    inline bool RehydrationTypeHasBeenSet() const { return m_rehydrationTypeHasBeenSet; }

    /**
     * <p>The contactId that is used for rehydration depends on the rehydration type.
     * RehydrationType is required for persistent chat. </p> <ul> <li> <p>
     * <code>ENTIRE_PAST_SESSION</code>: Rehydrates a chat from the most recently
     * terminated past chat contact of the specified past ended chat session. To use
     * this type, provide the <code>initialContactId</code> of the past ended chat
     * session in the <code>sourceContactId</code> field. In this type, Amazon Connect
     * determines the most recent chat contact on the specified chat session that has
     * ended, and uses it to start a persistent chat. </p> </li> <li> <p>
     * <code>FROM_SEGMENT</code>: Rehydrates a chat from the past chat contact that is
     * specified in the <code>sourceContactId</code> field. </p> </li> </ul> <p>The
     * actual contactId used for rehydration is provided in the response of this API.
     * </p>
     */
    inline void SetRehydrationType(const RehydrationType& value) { m_rehydrationTypeHasBeenSet = true; m_rehydrationType = value; }

    /**
     * <p>The contactId that is used for rehydration depends on the rehydration type.
     * RehydrationType is required for persistent chat. </p> <ul> <li> <p>
     * <code>ENTIRE_PAST_SESSION</code>: Rehydrates a chat from the most recently
     * terminated past chat contact of the specified past ended chat session. To use
     * this type, provide the <code>initialContactId</code> of the past ended chat
     * session in the <code>sourceContactId</code> field. In this type, Amazon Connect
     * determines the most recent chat contact on the specified chat session that has
     * ended, and uses it to start a persistent chat. </p> </li> <li> <p>
     * <code>FROM_SEGMENT</code>: Rehydrates a chat from the past chat contact that is
     * specified in the <code>sourceContactId</code> field. </p> </li> </ul> <p>The
     * actual contactId used for rehydration is provided in the response of this API.
     * </p>
     */
    inline void SetRehydrationType(RehydrationType&& value) { m_rehydrationTypeHasBeenSet = true; m_rehydrationType = std::move(value); }

    /**
     * <p>The contactId that is used for rehydration depends on the rehydration type.
     * RehydrationType is required for persistent chat. </p> <ul> <li> <p>
     * <code>ENTIRE_PAST_SESSION</code>: Rehydrates a chat from the most recently
     * terminated past chat contact of the specified past ended chat session. To use
     * this type, provide the <code>initialContactId</code> of the past ended chat
     * session in the <code>sourceContactId</code> field. In this type, Amazon Connect
     * determines the most recent chat contact on the specified chat session that has
     * ended, and uses it to start a persistent chat. </p> </li> <li> <p>
     * <code>FROM_SEGMENT</code>: Rehydrates a chat from the past chat contact that is
     * specified in the <code>sourceContactId</code> field. </p> </li> </ul> <p>The
     * actual contactId used for rehydration is provided in the response of this API.
     * </p>
     */
    inline PersistentChat& WithRehydrationType(const RehydrationType& value) { SetRehydrationType(value); return *this;}

    /**
     * <p>The contactId that is used for rehydration depends on the rehydration type.
     * RehydrationType is required for persistent chat. </p> <ul> <li> <p>
     * <code>ENTIRE_PAST_SESSION</code>: Rehydrates a chat from the most recently
     * terminated past chat contact of the specified past ended chat session. To use
     * this type, provide the <code>initialContactId</code> of the past ended chat
     * session in the <code>sourceContactId</code> field. In this type, Amazon Connect
     * determines the most recent chat contact on the specified chat session that has
     * ended, and uses it to start a persistent chat. </p> </li> <li> <p>
     * <code>FROM_SEGMENT</code>: Rehydrates a chat from the past chat contact that is
     * specified in the <code>sourceContactId</code> field. </p> </li> </ul> <p>The
     * actual contactId used for rehydration is provided in the response of this API.
     * </p>
     */
    inline PersistentChat& WithRehydrationType(RehydrationType&& value) { SetRehydrationType(std::move(value)); return *this;}


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
    inline PersistentChat& WithSourceContactId(const Aws::String& value) { SetSourceContactId(value); return *this;}

    /**
     * <p>The contactId from which a persistent chat session must be started.</p>
     */
    inline PersistentChat& WithSourceContactId(Aws::String&& value) { SetSourceContactId(std::move(value)); return *this;}

    /**
     * <p>The contactId from which a persistent chat session must be started.</p>
     */
    inline PersistentChat& WithSourceContactId(const char* value) { SetSourceContactId(value); return *this;}

  private:

    RehydrationType m_rehydrationType;
    bool m_rehydrationTypeHasBeenSet = false;

    Aws::String m_sourceContactId;
    bool m_sourceContactIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
