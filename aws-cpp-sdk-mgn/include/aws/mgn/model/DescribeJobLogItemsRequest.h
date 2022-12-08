/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class DescribeJobLogItemsRequest : public MgnRequest
  {
  public:
    AWS_MGN_API DescribeJobLogItemsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeJobLogItems"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Request to describe Job log job ID.</p>
     */
    inline const Aws::String& GetJobID() const{ return m_jobID; }

    /**
     * <p>Request to describe Job log job ID.</p>
     */
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }

    /**
     * <p>Request to describe Job log job ID.</p>
     */
    inline void SetJobID(const Aws::String& value) { m_jobIDHasBeenSet = true; m_jobID = value; }

    /**
     * <p>Request to describe Job log job ID.</p>
     */
    inline void SetJobID(Aws::String&& value) { m_jobIDHasBeenSet = true; m_jobID = std::move(value); }

    /**
     * <p>Request to describe Job log job ID.</p>
     */
    inline void SetJobID(const char* value) { m_jobIDHasBeenSet = true; m_jobID.assign(value); }

    /**
     * <p>Request to describe Job log job ID.</p>
     */
    inline DescribeJobLogItemsRequest& WithJobID(const Aws::String& value) { SetJobID(value); return *this;}

    /**
     * <p>Request to describe Job log job ID.</p>
     */
    inline DescribeJobLogItemsRequest& WithJobID(Aws::String&& value) { SetJobID(std::move(value)); return *this;}

    /**
     * <p>Request to describe Job log job ID.</p>
     */
    inline DescribeJobLogItemsRequest& WithJobID(const char* value) { SetJobID(value); return *this;}


    /**
     * <p>Request to describe Job log item maximum results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Request to describe Job log item maximum results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Request to describe Job log item maximum results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Request to describe Job log item maximum results.</p>
     */
    inline DescribeJobLogItemsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Request to describe Job log next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Request to describe Job log next token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Request to describe Job log next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Request to describe Job log next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Request to describe Job log next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Request to describe Job log next token.</p>
     */
    inline DescribeJobLogItemsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Request to describe Job log next token.</p>
     */
    inline DescribeJobLogItemsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Request to describe Job log next token.</p>
     */
    inline DescribeJobLogItemsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_jobID;
    bool m_jobIDHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
