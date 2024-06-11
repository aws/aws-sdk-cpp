/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ResourceIdentifier.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class ListAuditFindingsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListAuditFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAuditFindings"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A filter to limit results to the audit with the specified ID. You must
     * specify either the taskId or the startTime and endTime, but not both.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }
    inline ListAuditFindingsRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}
    inline ListAuditFindingsRequest& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}
    inline ListAuditFindingsRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to limit results to the findings for the specified audit check.</p>
     */
    inline const Aws::String& GetCheckName() const{ return m_checkName; }
    inline bool CheckNameHasBeenSet() const { return m_checkNameHasBeenSet; }
    inline void SetCheckName(const Aws::String& value) { m_checkNameHasBeenSet = true; m_checkName = value; }
    inline void SetCheckName(Aws::String&& value) { m_checkNameHasBeenSet = true; m_checkName = std::move(value); }
    inline void SetCheckName(const char* value) { m_checkNameHasBeenSet = true; m_checkName.assign(value); }
    inline ListAuditFindingsRequest& WithCheckName(const Aws::String& value) { SetCheckName(value); return *this;}
    inline ListAuditFindingsRequest& WithCheckName(Aws::String&& value) { SetCheckName(std::move(value)); return *this;}
    inline ListAuditFindingsRequest& WithCheckName(const char* value) { SetCheckName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information identifying the noncompliant resource.</p>
     */
    inline const ResourceIdentifier& GetResourceIdentifier() const{ return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    inline void SetResourceIdentifier(const ResourceIdentifier& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }
    inline void SetResourceIdentifier(ResourceIdentifier&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }
    inline ListAuditFindingsRequest& WithResourceIdentifier(const ResourceIdentifier& value) { SetResourceIdentifier(value); return *this;}
    inline ListAuditFindingsRequest& WithResourceIdentifier(ResourceIdentifier&& value) { SetResourceIdentifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAuditFindingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAuditFindingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAuditFindingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAuditFindingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to limit results to those found after the specified time. You must
     * specify either the startTime and endTime or the taskId, but not both.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ListAuditFindingsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ListAuditFindingsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to limit results to those found before the specified time. You must
     * specify either the startTime and endTime or the taskId, but not both.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ListAuditFindingsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ListAuditFindingsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Boolean flag indicating whether only the suppressed findings or the
     * unsuppressed findings should be listed. If this parameter isn't provided, the
     * response will list both suppressed and unsuppressed findings. </p>
     */
    inline bool GetListSuppressedFindings() const{ return m_listSuppressedFindings; }
    inline bool ListSuppressedFindingsHasBeenSet() const { return m_listSuppressedFindingsHasBeenSet; }
    inline void SetListSuppressedFindings(bool value) { m_listSuppressedFindingsHasBeenSet = true; m_listSuppressedFindings = value; }
    inline ListAuditFindingsRequest& WithListSuppressedFindings(bool value) { SetListSuppressedFindings(value); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    Aws::String m_checkName;
    bool m_checkNameHasBeenSet = false;

    ResourceIdentifier m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    bool m_listSuppressedFindings;
    bool m_listSuppressedFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
