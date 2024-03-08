/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-connections/model/BlockerType.h>
#include <aws/codestar-connections/model/BlockerStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codestar-connections/model/SyncBlockerContext.h>
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
namespace CodeStarconnections
{
namespace Model
{

  /**
   * <p>Information about a blocker for a sync event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-connections-2019-12-01/SyncBlocker">AWS
   * API Reference</a></p>
   */
  class SyncBlocker
  {
  public:
    AWS_CODESTARCONNECTIONS_API SyncBlocker();
    AWS_CODESTARCONNECTIONS_API SyncBlocker(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API SyncBlocker& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTARCONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for a specific sync blocker.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID for a specific sync blocker.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID for a specific sync blocker.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID for a specific sync blocker.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID for a specific sync blocker.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID for a specific sync blocker.</p>
     */
    inline SyncBlocker& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID for a specific sync blocker.</p>
     */
    inline SyncBlocker& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID for a specific sync blocker.</p>
     */
    inline SyncBlocker& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The sync blocker type.</p>
     */
    inline const BlockerType& GetType() const{ return m_type; }

    /**
     * <p>The sync blocker type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The sync blocker type.</p>
     */
    inline void SetType(const BlockerType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The sync blocker type.</p>
     */
    inline void SetType(BlockerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The sync blocker type.</p>
     */
    inline SyncBlocker& WithType(const BlockerType& value) { SetType(value); return *this;}

    /**
     * <p>The sync blocker type.</p>
     */
    inline SyncBlocker& WithType(BlockerType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The status for a specific sync blocker.</p>
     */
    inline const BlockerStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status for a specific sync blocker.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status for a specific sync blocker.</p>
     */
    inline void SetStatus(const BlockerStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status for a specific sync blocker.</p>
     */
    inline void SetStatus(BlockerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status for a specific sync blocker.</p>
     */
    inline SyncBlocker& WithStatus(const BlockerStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status for a specific sync blocker.</p>
     */
    inline SyncBlocker& WithStatus(BlockerStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The provided reason for a specific sync blocker.</p>
     */
    inline const Aws::String& GetCreatedReason() const{ return m_createdReason; }

    /**
     * <p>The provided reason for a specific sync blocker.</p>
     */
    inline bool CreatedReasonHasBeenSet() const { return m_createdReasonHasBeenSet; }

    /**
     * <p>The provided reason for a specific sync blocker.</p>
     */
    inline void SetCreatedReason(const Aws::String& value) { m_createdReasonHasBeenSet = true; m_createdReason = value; }

    /**
     * <p>The provided reason for a specific sync blocker.</p>
     */
    inline void SetCreatedReason(Aws::String&& value) { m_createdReasonHasBeenSet = true; m_createdReason = std::move(value); }

    /**
     * <p>The provided reason for a specific sync blocker.</p>
     */
    inline void SetCreatedReason(const char* value) { m_createdReasonHasBeenSet = true; m_createdReason.assign(value); }

    /**
     * <p>The provided reason for a specific sync blocker.</p>
     */
    inline SyncBlocker& WithCreatedReason(const Aws::String& value) { SetCreatedReason(value); return *this;}

    /**
     * <p>The provided reason for a specific sync blocker.</p>
     */
    inline SyncBlocker& WithCreatedReason(Aws::String&& value) { SetCreatedReason(std::move(value)); return *this;}

    /**
     * <p>The provided reason for a specific sync blocker.</p>
     */
    inline SyncBlocker& WithCreatedReason(const char* value) { SetCreatedReason(value); return *this;}


    /**
     * <p>The creation time for a specific sync blocker.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The creation time for a specific sync blocker.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The creation time for a specific sync blocker.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The creation time for a specific sync blocker.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The creation time for a specific sync blocker.</p>
     */
    inline SyncBlocker& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The creation time for a specific sync blocker.</p>
     */
    inline SyncBlocker& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The contexts for a specific sync blocker.</p>
     */
    inline const Aws::Vector<SyncBlockerContext>& GetContexts() const{ return m_contexts; }

    /**
     * <p>The contexts for a specific sync blocker.</p>
     */
    inline bool ContextsHasBeenSet() const { return m_contextsHasBeenSet; }

    /**
     * <p>The contexts for a specific sync blocker.</p>
     */
    inline void SetContexts(const Aws::Vector<SyncBlockerContext>& value) { m_contextsHasBeenSet = true; m_contexts = value; }

    /**
     * <p>The contexts for a specific sync blocker.</p>
     */
    inline void SetContexts(Aws::Vector<SyncBlockerContext>&& value) { m_contextsHasBeenSet = true; m_contexts = std::move(value); }

    /**
     * <p>The contexts for a specific sync blocker.</p>
     */
    inline SyncBlocker& WithContexts(const Aws::Vector<SyncBlockerContext>& value) { SetContexts(value); return *this;}

    /**
     * <p>The contexts for a specific sync blocker.</p>
     */
    inline SyncBlocker& WithContexts(Aws::Vector<SyncBlockerContext>&& value) { SetContexts(std::move(value)); return *this;}

    /**
     * <p>The contexts for a specific sync blocker.</p>
     */
    inline SyncBlocker& AddContexts(const SyncBlockerContext& value) { m_contextsHasBeenSet = true; m_contexts.push_back(value); return *this; }

    /**
     * <p>The contexts for a specific sync blocker.</p>
     */
    inline SyncBlocker& AddContexts(SyncBlockerContext&& value) { m_contextsHasBeenSet = true; m_contexts.push_back(std::move(value)); return *this; }


    /**
     * <p>The resolved reason for a specific sync blocker.</p>
     */
    inline const Aws::String& GetResolvedReason() const{ return m_resolvedReason; }

    /**
     * <p>The resolved reason for a specific sync blocker.</p>
     */
    inline bool ResolvedReasonHasBeenSet() const { return m_resolvedReasonHasBeenSet; }

    /**
     * <p>The resolved reason for a specific sync blocker.</p>
     */
    inline void SetResolvedReason(const Aws::String& value) { m_resolvedReasonHasBeenSet = true; m_resolvedReason = value; }

    /**
     * <p>The resolved reason for a specific sync blocker.</p>
     */
    inline void SetResolvedReason(Aws::String&& value) { m_resolvedReasonHasBeenSet = true; m_resolvedReason = std::move(value); }

    /**
     * <p>The resolved reason for a specific sync blocker.</p>
     */
    inline void SetResolvedReason(const char* value) { m_resolvedReasonHasBeenSet = true; m_resolvedReason.assign(value); }

    /**
     * <p>The resolved reason for a specific sync blocker.</p>
     */
    inline SyncBlocker& WithResolvedReason(const Aws::String& value) { SetResolvedReason(value); return *this;}

    /**
     * <p>The resolved reason for a specific sync blocker.</p>
     */
    inline SyncBlocker& WithResolvedReason(Aws::String&& value) { SetResolvedReason(std::move(value)); return *this;}

    /**
     * <p>The resolved reason for a specific sync blocker.</p>
     */
    inline SyncBlocker& WithResolvedReason(const char* value) { SetResolvedReason(value); return *this;}


    /**
     * <p>The time that a specific sync blocker was resolved.</p>
     */
    inline const Aws::Utils::DateTime& GetResolvedAt() const{ return m_resolvedAt; }

    /**
     * <p>The time that a specific sync blocker was resolved.</p>
     */
    inline bool ResolvedAtHasBeenSet() const { return m_resolvedAtHasBeenSet; }

    /**
     * <p>The time that a specific sync blocker was resolved.</p>
     */
    inline void SetResolvedAt(const Aws::Utils::DateTime& value) { m_resolvedAtHasBeenSet = true; m_resolvedAt = value; }

    /**
     * <p>The time that a specific sync blocker was resolved.</p>
     */
    inline void SetResolvedAt(Aws::Utils::DateTime&& value) { m_resolvedAtHasBeenSet = true; m_resolvedAt = std::move(value); }

    /**
     * <p>The time that a specific sync blocker was resolved.</p>
     */
    inline SyncBlocker& WithResolvedAt(const Aws::Utils::DateTime& value) { SetResolvedAt(value); return *this;}

    /**
     * <p>The time that a specific sync blocker was resolved.</p>
     */
    inline SyncBlocker& WithResolvedAt(Aws::Utils::DateTime&& value) { SetResolvedAt(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    BlockerType m_type;
    bool m_typeHasBeenSet = false;

    BlockerStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_createdReason;
    bool m_createdReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<SyncBlockerContext> m_contexts;
    bool m_contextsHasBeenSet = false;

    Aws::String m_resolvedReason;
    bool m_resolvedReasonHasBeenSet = false;

    Aws::Utils::DateTime m_resolvedAt;
    bool m_resolvedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
