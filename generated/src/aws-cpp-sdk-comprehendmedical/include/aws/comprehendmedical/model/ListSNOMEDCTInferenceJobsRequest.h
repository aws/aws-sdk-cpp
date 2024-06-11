﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/ComprehendMedicalRequest.h>
#include <aws/comprehendmedical/model/ComprehendMedicalAsyncJobFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{

  /**
   */
  class ListSNOMEDCTInferenceJobsRequest : public ComprehendMedicalRequest
  {
  public:
    AWS_COMPREHENDMEDICAL_API ListSNOMEDCTInferenceJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSNOMEDCTInferenceJobs"; }

    AWS_COMPREHENDMEDICAL_API Aws::String SerializePayload() const override;

    AWS_COMPREHENDMEDICAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const ComprehendMedicalAsyncJobFilter& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const ComprehendMedicalAsyncJobFilter& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(ComprehendMedicalAsyncJobFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline ListSNOMEDCTInferenceJobsRequest& WithFilter(const ComprehendMedicalAsyncJobFilter& value) { SetFilter(value); return *this;}
    inline ListSNOMEDCTInferenceJobsRequest& WithFilter(ComprehendMedicalAsyncJobFilter&& value) { SetFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Identifies the next page of InferSNOMEDCT results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListSNOMEDCTInferenceJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSNOMEDCTInferenceJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSNOMEDCTInferenceJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return in each page. The default is 100.
     * </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSNOMEDCTInferenceJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    ComprehendMedicalAsyncJobFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
