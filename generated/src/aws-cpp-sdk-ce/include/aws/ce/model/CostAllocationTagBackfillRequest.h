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
    AWS_COSTEXPLORER_API CostAllocationTagBackfillRequest();
    AWS_COSTEXPLORER_API CostAllocationTagBackfillRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostAllocationTagBackfillRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The date the backfill starts from. </p>
     */
    inline const Aws::String& GetBackfillFrom() const{ return m_backfillFrom; }
    inline bool BackfillFromHasBeenSet() const { return m_backfillFromHasBeenSet; }
    inline void SetBackfillFrom(const Aws::String& value) { m_backfillFromHasBeenSet = true; m_backfillFrom = value; }
    inline void SetBackfillFrom(Aws::String&& value) { m_backfillFromHasBeenSet = true; m_backfillFrom = std::move(value); }
    inline void SetBackfillFrom(const char* value) { m_backfillFromHasBeenSet = true; m_backfillFrom.assign(value); }
    inline CostAllocationTagBackfillRequest& WithBackfillFrom(const Aws::String& value) { SetBackfillFrom(value); return *this;}
    inline CostAllocationTagBackfillRequest& WithBackfillFrom(Aws::String&& value) { SetBackfillFrom(std::move(value)); return *this;}
    inline CostAllocationTagBackfillRequest& WithBackfillFrom(const char* value) { SetBackfillFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the backfill was requested. </p>
     */
    inline const Aws::String& GetRequestedAt() const{ return m_requestedAt; }
    inline bool RequestedAtHasBeenSet() const { return m_requestedAtHasBeenSet; }
    inline void SetRequestedAt(const Aws::String& value) { m_requestedAtHasBeenSet = true; m_requestedAt = value; }
    inline void SetRequestedAt(Aws::String&& value) { m_requestedAtHasBeenSet = true; m_requestedAt = std::move(value); }
    inline void SetRequestedAt(const char* value) { m_requestedAtHasBeenSet = true; m_requestedAt.assign(value); }
    inline CostAllocationTagBackfillRequest& WithRequestedAt(const Aws::String& value) { SetRequestedAt(value); return *this;}
    inline CostAllocationTagBackfillRequest& WithRequestedAt(Aws::String&& value) { SetRequestedAt(std::move(value)); return *this;}
    inline CostAllocationTagBackfillRequest& WithRequestedAt(const char* value) { SetRequestedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The backfill completion time. </p>
     */
    inline const Aws::String& GetCompletedAt() const{ return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    inline void SetCompletedAt(const Aws::String& value) { m_completedAtHasBeenSet = true; m_completedAt = value; }
    inline void SetCompletedAt(Aws::String&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::move(value); }
    inline void SetCompletedAt(const char* value) { m_completedAtHasBeenSet = true; m_completedAt.assign(value); }
    inline CostAllocationTagBackfillRequest& WithCompletedAt(const Aws::String& value) { SetCompletedAt(value); return *this;}
    inline CostAllocationTagBackfillRequest& WithCompletedAt(Aws::String&& value) { SetCompletedAt(std::move(value)); return *this;}
    inline CostAllocationTagBackfillRequest& WithCompletedAt(const char* value) { SetCompletedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the cost allocation tag backfill request. </p>
     */
    inline const CostAllocationTagBackfillStatus& GetBackfillStatus() const{ return m_backfillStatus; }
    inline bool BackfillStatusHasBeenSet() const { return m_backfillStatusHasBeenSet; }
    inline void SetBackfillStatus(const CostAllocationTagBackfillStatus& value) { m_backfillStatusHasBeenSet = true; m_backfillStatus = value; }
    inline void SetBackfillStatus(CostAllocationTagBackfillStatus&& value) { m_backfillStatusHasBeenSet = true; m_backfillStatus = std::move(value); }
    inline CostAllocationTagBackfillRequest& WithBackfillStatus(const CostAllocationTagBackfillStatus& value) { SetBackfillStatus(value); return *this;}
    inline CostAllocationTagBackfillRequest& WithBackfillStatus(CostAllocationTagBackfillStatus&& value) { SetBackfillStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when the backfill status was last updated. </p>
     */
    inline const Aws::String& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::String& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::String&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline void SetLastUpdatedAt(const char* value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt.assign(value); }
    inline CostAllocationTagBackfillRequest& WithLastUpdatedAt(const Aws::String& value) { SetLastUpdatedAt(value); return *this;}
    inline CostAllocationTagBackfillRequest& WithLastUpdatedAt(Aws::String&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    inline CostAllocationTagBackfillRequest& WithLastUpdatedAt(const char* value) { SetLastUpdatedAt(value); return *this;}
    ///@}
  private:

    Aws::String m_backfillFrom;
    bool m_backfillFromHasBeenSet = false;

    Aws::String m_requestedAt;
    bool m_requestedAtHasBeenSet = false;

    Aws::String m_completedAt;
    bool m_completedAtHasBeenSet = false;

    CostAllocationTagBackfillStatus m_backfillStatus;
    bool m_backfillStatusHasBeenSet = false;

    Aws::String m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
