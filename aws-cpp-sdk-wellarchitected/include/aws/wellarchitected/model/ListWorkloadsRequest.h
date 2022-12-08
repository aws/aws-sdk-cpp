/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input to list all workloads.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListWorkloadsInput">AWS
   * API Reference</a></p>
   */
  class ListWorkloadsRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API ListWorkloadsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkloads"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetWorkloadNamePrefix() const{ return m_workloadNamePrefix; }

    
    inline bool WorkloadNamePrefixHasBeenSet() const { return m_workloadNamePrefixHasBeenSet; }

    
    inline void SetWorkloadNamePrefix(const Aws::String& value) { m_workloadNamePrefixHasBeenSet = true; m_workloadNamePrefix = value; }

    
    inline void SetWorkloadNamePrefix(Aws::String&& value) { m_workloadNamePrefixHasBeenSet = true; m_workloadNamePrefix = std::move(value); }

    
    inline void SetWorkloadNamePrefix(const char* value) { m_workloadNamePrefixHasBeenSet = true; m_workloadNamePrefix.assign(value); }

    
    inline ListWorkloadsRequest& WithWorkloadNamePrefix(const Aws::String& value) { SetWorkloadNamePrefix(value); return *this;}

    
    inline ListWorkloadsRequest& WithWorkloadNamePrefix(Aws::String&& value) { SetWorkloadNamePrefix(std::move(value)); return *this;}

    
    inline ListWorkloadsRequest& WithWorkloadNamePrefix(const char* value) { SetWorkloadNamePrefix(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListWorkloadsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListWorkloadsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListWorkloadsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListWorkloadsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_workloadNamePrefix;
    bool m_workloadNamePrefixHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
