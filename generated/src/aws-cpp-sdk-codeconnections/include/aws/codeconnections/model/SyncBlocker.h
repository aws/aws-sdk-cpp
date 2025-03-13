/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/BlockerType.h>
#include <aws/codeconnections/model/BlockerStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeconnections/model/SyncBlockerContext.h>
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
namespace CodeConnections
{
namespace Model
{

  /**
   * <p>Information about a blocker for a sync event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/SyncBlocker">AWS
   * API Reference</a></p>
   */
  class SyncBlocker
  {
  public:
    AWS_CODECONNECTIONS_API SyncBlocker() = default;
    AWS_CODECONNECTIONS_API SyncBlocker(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API SyncBlocker& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for a specific sync blocker.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SyncBlocker& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync blocker type.</p>
     */
    inline BlockerType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(BlockerType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SyncBlocker& WithType(BlockerType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for a specific sync blocker.</p>
     */
    inline BlockerStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(BlockerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SyncBlocker& WithStatus(BlockerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provided reason for a specific sync blocker.</p>
     */
    inline const Aws::String& GetCreatedReason() const { return m_createdReason; }
    inline bool CreatedReasonHasBeenSet() const { return m_createdReasonHasBeenSet; }
    template<typename CreatedReasonT = Aws::String>
    void SetCreatedReason(CreatedReasonT&& value) { m_createdReasonHasBeenSet = true; m_createdReason = std::forward<CreatedReasonT>(value); }
    template<typename CreatedReasonT = Aws::String>
    SyncBlocker& WithCreatedReason(CreatedReasonT&& value) { SetCreatedReason(std::forward<CreatedReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time for a specific sync blocker.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    SyncBlocker& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contexts for a specific sync blocker.</p>
     */
    inline const Aws::Vector<SyncBlockerContext>& GetContexts() const { return m_contexts; }
    inline bool ContextsHasBeenSet() const { return m_contextsHasBeenSet; }
    template<typename ContextsT = Aws::Vector<SyncBlockerContext>>
    void SetContexts(ContextsT&& value) { m_contextsHasBeenSet = true; m_contexts = std::forward<ContextsT>(value); }
    template<typename ContextsT = Aws::Vector<SyncBlockerContext>>
    SyncBlocker& WithContexts(ContextsT&& value) { SetContexts(std::forward<ContextsT>(value)); return *this;}
    template<typename ContextsT = SyncBlockerContext>
    SyncBlocker& AddContexts(ContextsT&& value) { m_contextsHasBeenSet = true; m_contexts.emplace_back(std::forward<ContextsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resolved reason for a specific sync blocker.</p>
     */
    inline const Aws::String& GetResolvedReason() const { return m_resolvedReason; }
    inline bool ResolvedReasonHasBeenSet() const { return m_resolvedReasonHasBeenSet; }
    template<typename ResolvedReasonT = Aws::String>
    void SetResolvedReason(ResolvedReasonT&& value) { m_resolvedReasonHasBeenSet = true; m_resolvedReason = std::forward<ResolvedReasonT>(value); }
    template<typename ResolvedReasonT = Aws::String>
    SyncBlocker& WithResolvedReason(ResolvedReasonT&& value) { SetResolvedReason(std::forward<ResolvedReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that a specific sync blocker was resolved.</p>
     */
    inline const Aws::Utils::DateTime& GetResolvedAt() const { return m_resolvedAt; }
    inline bool ResolvedAtHasBeenSet() const { return m_resolvedAtHasBeenSet; }
    template<typename ResolvedAtT = Aws::Utils::DateTime>
    void SetResolvedAt(ResolvedAtT&& value) { m_resolvedAtHasBeenSet = true; m_resolvedAt = std::forward<ResolvedAtT>(value); }
    template<typename ResolvedAtT = Aws::Utils::DateTime>
    SyncBlocker& WithResolvedAt(ResolvedAtT&& value) { SetResolvedAt(std::forward<ResolvedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    BlockerType m_type{BlockerType::NOT_SET};
    bool m_typeHasBeenSet = false;

    BlockerStatus m_status{BlockerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_createdReason;
    bool m_createdReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<SyncBlockerContext> m_contexts;
    bool m_contextsHasBeenSet = false;

    Aws::String m_resolvedReason;
    bool m_resolvedReasonHasBeenSet = false;

    Aws::Utils::DateTime m_resolvedAt{};
    bool m_resolvedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
