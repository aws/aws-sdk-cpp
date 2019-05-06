/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerRequest.h>
#include <aws/signer/model/SigningStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace signer
{
namespace Model
{

  /**
   */
  class AWS_SIGNER_API ListSigningJobsRequest : public SignerRequest
  {
  public:
    ListSigningJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSigningJobs"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A status value with which to filter your results.</p>
     */
    inline const SigningStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A status value with which to filter your results.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A status value with which to filter your results.</p>
     */
    inline void SetStatus(const SigningStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A status value with which to filter your results.</p>
     */
    inline void SetStatus(SigningStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A status value with which to filter your results.</p>
     */
    inline ListSigningJobsRequest& WithStatus(const SigningStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A status value with which to filter your results.</p>
     */
    inline ListSigningJobsRequest& WithStatus(SigningStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }

    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }

    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline void SetPlatformId(const Aws::String& value) { m_platformIdHasBeenSet = true; m_platformId = value; }

    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline void SetPlatformId(Aws::String&& value) { m_platformIdHasBeenSet = true; m_platformId = std::move(value); }

    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline void SetPlatformId(const char* value) { m_platformIdHasBeenSet = true; m_platformId.assign(value); }

    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline ListSigningJobsRequest& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}

    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline ListSigningJobsRequest& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}

    /**
     * <p>The ID of microcontroller platform that you specified for the distribution of
     * your code image.</p>
     */
    inline ListSigningJobsRequest& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}


    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline const Aws::String& GetRequestedBy() const{ return m_requestedBy; }

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline bool RequestedByHasBeenSet() const { return m_requestedByHasBeenSet; }

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline void SetRequestedBy(const Aws::String& value) { m_requestedByHasBeenSet = true; m_requestedBy = value; }

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline void SetRequestedBy(Aws::String&& value) { m_requestedByHasBeenSet = true; m_requestedBy = std::move(value); }

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline void SetRequestedBy(const char* value) { m_requestedByHasBeenSet = true; m_requestedBy.assign(value); }

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline ListSigningJobsRequest& WithRequestedBy(const Aws::String& value) { SetRequestedBy(value); return *this;}

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline ListSigningJobsRequest& WithRequestedBy(Aws::String&& value) { SetRequestedBy(std::move(value)); return *this;}

    /**
     * <p>The IAM principal that requested the signing job.</p>
     */
    inline ListSigningJobsRequest& WithRequestedBy(const char* value) { SetRequestedBy(value); return *this;}


    /**
     * <p>Specifies the maximum number of items to return in the response. Use this
     * parameter when paginating results. If additional items exist beyond the number
     * you specify, the <code>nextToken</code> element is set in the response. Use the
     * <code>nextToken</code> value in a subsequent request to retrieve additional
     * items. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the maximum number of items to return in the response. Use this
     * parameter when paginating results. If additional items exist beyond the number
     * you specify, the <code>nextToken</code> element is set in the response. Use the
     * <code>nextToken</code> value in a subsequent request to retrieve additional
     * items. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the maximum number of items to return in the response. Use this
     * parameter when paginating results. If additional items exist beyond the number
     * you specify, the <code>nextToken</code> element is set in the response. Use the
     * <code>nextToken</code> value in a subsequent request to retrieve additional
     * items. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the maximum number of items to return in the response. Use this
     * parameter when paginating results. If additional items exist beyond the number
     * you specify, the <code>nextToken</code> element is set in the response. Use the
     * <code>nextToken</code> value in a subsequent request to retrieve additional
     * items. </p>
     */
    inline ListSigningJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline ListSigningJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline ListSigningJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>String for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline ListSigningJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    SigningStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet;

    Aws::String m_requestedBy;
    bool m_requestedByHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
