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
  class AWS_SIGNER_API ListSigningProfilesRequest : public SignerRequest
  {
  public:
    ListSigningProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSigningProfiles"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Designates whether to include profiles with the status of
     * <code>CANCELED</code>.</p>
     */
    inline bool GetIncludeCanceled() const{ return m_includeCanceled; }

    /**
     * <p>Designates whether to include profiles with the status of
     * <code>CANCELED</code>.</p>
     */
    inline bool IncludeCanceledHasBeenSet() const { return m_includeCanceledHasBeenSet; }

    /**
     * <p>Designates whether to include profiles with the status of
     * <code>CANCELED</code>.</p>
     */
    inline void SetIncludeCanceled(bool value) { m_includeCanceledHasBeenSet = true; m_includeCanceled = value; }

    /**
     * <p>Designates whether to include profiles with the status of
     * <code>CANCELED</code>.</p>
     */
    inline ListSigningProfilesRequest& WithIncludeCanceled(bool value) { SetIncludeCanceled(value); return *this;}


    /**
     * <p>The maximum number of profiles to be returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of profiles to be returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of profiles to be returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of profiles to be returned.</p>
     */
    inline ListSigningProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Value for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Value for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Value for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Value for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Value for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Value for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline ListSigningProfilesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Value for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline ListSigningProfilesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Value for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline ListSigningProfilesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_includeCanceled;
    bool m_includeCanceledHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
