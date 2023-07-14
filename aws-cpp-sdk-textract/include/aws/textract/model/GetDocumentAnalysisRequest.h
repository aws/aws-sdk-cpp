﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class AWS_TEXTRACT_API GetDocumentAnalysisRequest : public TextractRequest
  {
  public:
    GetDocumentAnalysisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDocumentAnalysis"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the text-detection job. The <code>JobId</code> is
     * returned from <code>StartDocumentAnalysis</code>. A <code>JobId</code> value is
     * only valid for 7 days.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>A unique identifier for the text-detection job. The <code>JobId</code> is
     * returned from <code>StartDocumentAnalysis</code>. A <code>JobId</code> value is
     * only valid for 7 days.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>A unique identifier for the text-detection job. The <code>JobId</code> is
     * returned from <code>StartDocumentAnalysis</code>. A <code>JobId</code> value is
     * only valid for 7 days.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>A unique identifier for the text-detection job. The <code>JobId</code> is
     * returned from <code>StartDocumentAnalysis</code>. A <code>JobId</code> value is
     * only valid for 7 days.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>A unique identifier for the text-detection job. The <code>JobId</code> is
     * returned from <code>StartDocumentAnalysis</code>. A <code>JobId</code> value is
     * only valid for 7 days.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>A unique identifier for the text-detection job. The <code>JobId</code> is
     * returned from <code>StartDocumentAnalysis</code>. A <code>JobId</code> value is
     * only valid for 7 days.</p>
     */
    inline GetDocumentAnalysisRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>A unique identifier for the text-detection job. The <code>JobId</code> is
     * returned from <code>StartDocumentAnalysis</code>. A <code>JobId</code> value is
     * only valid for 7 days.</p>
     */
    inline GetDocumentAnalysisRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the text-detection job. The <code>JobId</code> is
     * returned from <code>StartDocumentAnalysis</code>. A <code>JobId</code> value is
     * only valid for 7 days.</p>
     */
    inline GetDocumentAnalysisRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * that you can specify is 1,000. If you specify a value greater than 1,000, a
     * maximum of 1,000 results is returned. The default value is 1,000.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * that you can specify is 1,000. If you specify a value greater than 1,000, a
     * maximum of 1,000 results is returned. The default value is 1,000.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * that you can specify is 1,000. If you specify a value greater than 1,000, a
     * maximum of 1,000 results is returned. The default value is 1,000.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * that you can specify is 1,000. If you specify a value greater than 1,000, a
     * maximum of 1,000 results is returned. The default value is 1,000.</p>
     */
    inline GetDocumentAnalysisRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the previous response was incomplete (because there are more blocks to
     * retrieve), Amazon Textract returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of blocks.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was incomplete (because there are more blocks to
     * retrieve), Amazon Textract returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of blocks.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous response was incomplete (because there are more blocks to
     * retrieve), Amazon Textract returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of blocks.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous response was incomplete (because there are more blocks to
     * retrieve), Amazon Textract returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of blocks.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was incomplete (because there are more blocks to
     * retrieve), Amazon Textract returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of blocks.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous response was incomplete (because there are more blocks to
     * retrieve), Amazon Textract returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of blocks.</p>
     */
    inline GetDocumentAnalysisRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was incomplete (because there are more blocks to
     * retrieve), Amazon Textract returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of blocks.</p>
     */
    inline GetDocumentAnalysisRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was incomplete (because there are more blocks to
     * retrieve), Amazon Textract returns a pagination token in the response. You can
     * use this pagination token to retrieve the next set of blocks.</p>
     */
    inline GetDocumentAnalysisRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
