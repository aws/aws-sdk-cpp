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
    AWS_DEVICEFARM_API ListTestGridSessionsRequest();

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
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }
    inline ListTestGridSessionsRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline ListTestGridSessionsRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline ListTestGridSessionsRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return only sessions in this state.</p>
     */
    inline const TestGridSessionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TestGridSessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TestGridSessionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListTestGridSessionsRequest& WithStatus(const TestGridSessionStatus& value) { SetStatus(value); return *this;}
    inline ListTestGridSessionsRequest& WithStatus(TestGridSessionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return only sessions created after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }
    inline ListTestGridSessionsRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}
    inline ListTestGridSessionsRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return only sessions created before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }
    inline ListTestGridSessionsRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}
    inline ListTestGridSessionsRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return only sessions that ended after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimeAfter() const{ return m_endTimeAfter; }
    inline bool EndTimeAfterHasBeenSet() const { return m_endTimeAfterHasBeenSet; }
    inline void SetEndTimeAfter(const Aws::Utils::DateTime& value) { m_endTimeAfterHasBeenSet = true; m_endTimeAfter = value; }
    inline void SetEndTimeAfter(Aws::Utils::DateTime&& value) { m_endTimeAfterHasBeenSet = true; m_endTimeAfter = std::move(value); }
    inline ListTestGridSessionsRequest& WithEndTimeAfter(const Aws::Utils::DateTime& value) { SetEndTimeAfter(value); return *this;}
    inline ListTestGridSessionsRequest& WithEndTimeAfter(Aws::Utils::DateTime&& value) { SetEndTimeAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return only sessions that ended before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimeBefore() const{ return m_endTimeBefore; }
    inline bool EndTimeBeforeHasBeenSet() const { return m_endTimeBeforeHasBeenSet; }
    inline void SetEndTimeBefore(const Aws::Utils::DateTime& value) { m_endTimeBeforeHasBeenSet = true; m_endTimeBefore = value; }
    inline void SetEndTimeBefore(Aws::Utils::DateTime&& value) { m_endTimeBeforeHasBeenSet = true; m_endTimeBefore = std::move(value); }
    inline ListTestGridSessionsRequest& WithEndTimeBefore(const Aws::Utils::DateTime& value) { SetEndTimeBefore(value); return *this;}
    inline ListTestGridSessionsRequest& WithEndTimeBefore(Aws::Utils::DateTime&& value) { SetEndTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Return only this many results at a time.</p>
     */
    inline int GetMaxResult() const{ return m_maxResult; }
    inline bool MaxResultHasBeenSet() const { return m_maxResultHasBeenSet; }
    inline void SetMaxResult(int value) { m_maxResultHasBeenSet = true; m_maxResult = value; }
    inline ListTestGridSessionsRequest& WithMaxResult(int value) { SetMaxResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTestGridSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTestGridSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTestGridSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    TestGridSessionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_endTimeAfter;
    bool m_endTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_endTimeBefore;
    bool m_endTimeBeforeHasBeenSet = false;

    int m_maxResult;
    bool m_maxResultHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
