/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestGridSessionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   */
  class ListTestGridSessionsRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API ListTestGridSessionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTestGridSessions"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>ARN of a <a>TestGridProject</a>.</p>
     */
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    ListTestGridSessionsRequest& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return only sessions in this state.</p>
     */
    inline TestGridSessionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TestGridSessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListTestGridSessionsRequest& WithStatus(TestGridSessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return only sessions created after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    ListTestGridSessionsRequest& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return only sessions created before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    ListTestGridSessionsRequest& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return only sessions that ended after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimeAfter() const { return m_endTimeAfter; }
    inline bool EndTimeAfterHasBeenSet() const { return m_endTimeAfterHasBeenSet; }
    template<typename EndTimeAfterT = Aws::Utils::DateTime>
    void SetEndTimeAfter(EndTimeAfterT&& value) { m_endTimeAfterHasBeenSet = true; m_endTimeAfter = std::forward<EndTimeAfterT>(value); }
    template<typename EndTimeAfterT = Aws::Utils::DateTime>
    ListTestGridSessionsRequest& WithEndTimeAfter(EndTimeAfterT&& value) { SetEndTimeAfter(std::forward<EndTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return only sessions that ended before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimeBefore() const { return m_endTimeBefore; }
    inline bool EndTimeBeforeHasBeenSet() const { return m_endTimeBeforeHasBeenSet; }
    template<typename EndTimeBeforeT = Aws::Utils::DateTime>
    void SetEndTimeBefore(EndTimeBeforeT&& value) { m_endTimeBeforeHasBeenSet = true; m_endTimeBefore = std::forward<EndTimeBeforeT>(value); }
    template<typename EndTimeBeforeT = Aws::Utils::DateTime>
    ListTestGridSessionsRequest& WithEndTimeBefore(EndTimeBeforeT&& value) { SetEndTimeBefore(std::forward<EndTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return only this many results at a time.</p>
     */
    inline int GetMaxResult() const { return m_maxResult; }
    inline bool MaxResultHasBeenSet() const { return m_maxResultHasBeenSet; }
    inline void SetMaxResult(int value) { m_maxResultHasBeenSet = true; m_maxResult = value; }
    inline ListTestGridSessionsRequest& WithMaxResult(int value) { SetMaxResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestGridSessionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    TestGridSessionStatus m_status{TestGridSessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_endTimeAfter{};
    bool m_endTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_endTimeBefore{};
    bool m_endTimeBeforeHasBeenSet = false;

    int m_maxResult{0};
    bool m_maxResultHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
