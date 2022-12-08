/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/signer/model/SigningProfileStatus.h>
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
  class ListSigningProfilesRequest : public SignerRequest
  {
  public:
    AWS_SIGNER_API ListSigningProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSigningProfiles"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;

    AWS_SIGNER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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


    /**
     * <p>Filters results to return only signing jobs initiated for a specified signing
     * platform.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }

    /**
     * <p>Filters results to return only signing jobs initiated for a specified signing
     * platform.</p>
     */
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }

    /**
     * <p>Filters results to return only signing jobs initiated for a specified signing
     * platform.</p>
     */
    inline void SetPlatformId(const Aws::String& value) { m_platformIdHasBeenSet = true; m_platformId = value; }

    /**
     * <p>Filters results to return only signing jobs initiated for a specified signing
     * platform.</p>
     */
    inline void SetPlatformId(Aws::String&& value) { m_platformIdHasBeenSet = true; m_platformId = std::move(value); }

    /**
     * <p>Filters results to return only signing jobs initiated for a specified signing
     * platform.</p>
     */
    inline void SetPlatformId(const char* value) { m_platformIdHasBeenSet = true; m_platformId.assign(value); }

    /**
     * <p>Filters results to return only signing jobs initiated for a specified signing
     * platform.</p>
     */
    inline ListSigningProfilesRequest& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}

    /**
     * <p>Filters results to return only signing jobs initiated for a specified signing
     * platform.</p>
     */
    inline ListSigningProfilesRequest& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}

    /**
     * <p>Filters results to return only signing jobs initiated for a specified signing
     * platform.</p>
     */
    inline ListSigningProfilesRequest& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}


    /**
     * <p>Filters results to return only signing jobs with statuses in the specified
     * list.</p>
     */
    inline const Aws::Vector<SigningProfileStatus>& GetStatuses() const{ return m_statuses; }

    /**
     * <p>Filters results to return only signing jobs with statuses in the specified
     * list.</p>
     */
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }

    /**
     * <p>Filters results to return only signing jobs with statuses in the specified
     * list.</p>
     */
    inline void SetStatuses(const Aws::Vector<SigningProfileStatus>& value) { m_statusesHasBeenSet = true; m_statuses = value; }

    /**
     * <p>Filters results to return only signing jobs with statuses in the specified
     * list.</p>
     */
    inline void SetStatuses(Aws::Vector<SigningProfileStatus>&& value) { m_statusesHasBeenSet = true; m_statuses = std::move(value); }

    /**
     * <p>Filters results to return only signing jobs with statuses in the specified
     * list.</p>
     */
    inline ListSigningProfilesRequest& WithStatuses(const Aws::Vector<SigningProfileStatus>& value) { SetStatuses(value); return *this;}

    /**
     * <p>Filters results to return only signing jobs with statuses in the specified
     * list.</p>
     */
    inline ListSigningProfilesRequest& WithStatuses(Aws::Vector<SigningProfileStatus>&& value) { SetStatuses(std::move(value)); return *this;}

    /**
     * <p>Filters results to return only signing jobs with statuses in the specified
     * list.</p>
     */
    inline ListSigningProfilesRequest& AddStatuses(const SigningProfileStatus& value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }

    /**
     * <p>Filters results to return only signing jobs with statuses in the specified
     * list.</p>
     */
    inline ListSigningProfilesRequest& AddStatuses(SigningProfileStatus&& value) { m_statusesHasBeenSet = true; m_statuses.push_back(std::move(value)); return *this; }

  private:

    bool m_includeCanceled;
    bool m_includeCanceledHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet = false;

    Aws::Vector<SigningProfileStatus> m_statuses;
    bool m_statusesHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
