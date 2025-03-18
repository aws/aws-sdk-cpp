/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CostAllocationTagBackfillStatus.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p> The cost allocation tag backfill request structure that contains metadata
   * and details of a certain backfill.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostAllocationTagBackfillRequest">AWS
   * API Reference</a></p>
   */
  class CostAllocationTagBackfillRequest
  {
  public:
    AWS_COSTEXPLORER_API CostAllocationTagBackfillRequest() = default;
    AWS_COSTEXPLORER_API CostAllocationTagBackfillRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostAllocationTagBackfillRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The date the backfill starts from. </p>
     */
    inline const Aws::String& GetBackfillFrom() const { return m_backfillFrom; }
    inline bool BackfillFromHasBeenSet() const { return m_backfillFromHasBeenSet; }
    template<typename BackfillFromT = Aws::String>
    void SetBackfillFrom(BackfillFromT&& value) { m_backfillFromHasBeenSet = true; m_backfillFrom = std::forward<BackfillFromT>(value); }
    template<typename BackfillFromT = Aws::String>
    CostAllocationTagBackfillRequest& WithBackfillFrom(BackfillFromT&& value) { SetBackfillFrom(std::forward<BackfillFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the backfill was requested. </p>
     */
    inline const Aws::String& GetRequestedAt() const { return m_requestedAt; }
    inline bool RequestedAtHasBeenSet() const { return m_requestedAtHasBeenSet; }
    template<typename RequestedAtT = Aws::String>
    void SetRequestedAt(RequestedAtT&& value) { m_requestedAtHasBeenSet = true; m_requestedAt = std::forward<RequestedAtT>(value); }
    template<typename RequestedAtT = Aws::String>
    CostAllocationTagBackfillRequest& WithRequestedAt(RequestedAtT&& value) { SetRequestedAt(std::forward<RequestedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The backfill completion time. </p>
     */
    inline const Aws::String& GetCompletedAt() const { return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    template<typename CompletedAtT = Aws::String>
    void SetCompletedAt(CompletedAtT&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::forward<CompletedAtT>(value); }
    template<typename CompletedAtT = Aws::String>
    CostAllocationTagBackfillRequest& WithCompletedAt(CompletedAtT&& value) { SetCompletedAt(std::forward<CompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the cost allocation tag backfill request. </p>
     */
    inline CostAllocationTagBackfillStatus GetBackfillStatus() const { return m_backfillStatus; }
    inline bool BackfillStatusHasBeenSet() const { return m_backfillStatusHasBeenSet; }
    inline void SetBackfillStatus(CostAllocationTagBackfillStatus value) { m_backfillStatusHasBeenSet = true; m_backfillStatus = value; }
    inline CostAllocationTagBackfillRequest& WithBackfillStatus(CostAllocationTagBackfillStatus value) { SetBackfillStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the backfill status was last updated. </p>
     */
    inline const Aws::String& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::String>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::String>
    CostAllocationTagBackfillRequest& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backfillFrom;
    bool m_backfillFromHasBeenSet = false;

    Aws::String m_requestedAt;
    bool m_requestedAtHasBeenSet = false;

    Aws::String m_completedAt;
    bool m_completedAtHasBeenSet = false;

    CostAllocationTagBackfillStatus m_backfillStatus{CostAllocationTagBackfillStatus::NOT_SET};
    bool m_backfillStatusHasBeenSet = false;

    Aws::String m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
