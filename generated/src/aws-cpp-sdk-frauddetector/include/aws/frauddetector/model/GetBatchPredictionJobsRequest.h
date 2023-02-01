/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class GetBatchPredictionJobsRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API GetBatchPredictionJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBatchPredictionJobs"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The batch prediction job for which to get the details.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The batch prediction job for which to get the details.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The batch prediction job for which to get the details.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The batch prediction job for which to get the details.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The batch prediction job for which to get the details.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The batch prediction job for which to get the details.</p>
     */
    inline GetBatchPredictionJobsRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The batch prediction job for which to get the details.</p>
     */
    inline GetBatchPredictionJobsRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The batch prediction job for which to get the details.</p>
     */
    inline GetBatchPredictionJobsRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The maximum number of objects to return for the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of objects to return for the request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of objects to return for the request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of objects to return for the request.</p>
     */
    inline GetBatchPredictionJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The next token from the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next token from the previous request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The next token from the previous request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The next token from the previous request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The next token from the previous request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The next token from the previous request.</p>
     */
    inline GetBatchPredictionJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next token from the previous request.</p>
     */
    inline GetBatchPredictionJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next token from the previous request.</p>
     */
    inline GetBatchPredictionJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
