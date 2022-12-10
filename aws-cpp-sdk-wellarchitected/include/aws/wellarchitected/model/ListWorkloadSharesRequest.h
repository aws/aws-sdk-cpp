/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ShareStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input for List Workload Share</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListWorkloadSharesInput">AWS
   * API Reference</a></p>
   */
  class ListWorkloadSharesRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API ListWorkloadSharesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkloadShares"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

    AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline ListWorkloadSharesRequest& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline ListWorkloadSharesRequest& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline ListWorkloadSharesRequest& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID, IAM role, organization ID, or
     * organizational unit (OU) ID with which the workload is shared.</p>
     */
    inline const Aws::String& GetSharedWithPrefix() const{ return m_sharedWithPrefix; }

    /**
     * <p>The Amazon Web Services account ID, IAM role, organization ID, or
     * organizational unit (OU) ID with which the workload is shared.</p>
     */
    inline bool SharedWithPrefixHasBeenSet() const { return m_sharedWithPrefixHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID, IAM role, organization ID, or
     * organizational unit (OU) ID with which the workload is shared.</p>
     */
    inline void SetSharedWithPrefix(const Aws::String& value) { m_sharedWithPrefixHasBeenSet = true; m_sharedWithPrefix = value; }

    /**
     * <p>The Amazon Web Services account ID, IAM role, organization ID, or
     * organizational unit (OU) ID with which the workload is shared.</p>
     */
    inline void SetSharedWithPrefix(Aws::String&& value) { m_sharedWithPrefixHasBeenSet = true; m_sharedWithPrefix = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID, IAM role, organization ID, or
     * organizational unit (OU) ID with which the workload is shared.</p>
     */
    inline void SetSharedWithPrefix(const char* value) { m_sharedWithPrefixHasBeenSet = true; m_sharedWithPrefix.assign(value); }

    /**
     * <p>The Amazon Web Services account ID, IAM role, organization ID, or
     * organizational unit (OU) ID with which the workload is shared.</p>
     */
    inline ListWorkloadSharesRequest& WithSharedWithPrefix(const Aws::String& value) { SetSharedWithPrefix(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID, IAM role, organization ID, or
     * organizational unit (OU) ID with which the workload is shared.</p>
     */
    inline ListWorkloadSharesRequest& WithSharedWithPrefix(Aws::String&& value) { SetSharedWithPrefix(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID, IAM role, organization ID, or
     * organizational unit (OU) ID with which the workload is shared.</p>
     */
    inline ListWorkloadSharesRequest& WithSharedWithPrefix(const char* value) { SetSharedWithPrefix(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListWorkloadSharesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListWorkloadSharesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListWorkloadSharesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return for this request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for this request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for this request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for this request.</p>
     */
    inline ListWorkloadSharesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const ShareStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const ShareStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(ShareStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline ListWorkloadSharesRequest& WithStatus(const ShareStatus& value) { SetStatus(value); return *this;}

    
    inline ListWorkloadSharesRequest& WithStatus(ShareStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_sharedWithPrefix;
    bool m_sharedWithPrefixHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ShareStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
