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
  class AWS_SIGNER_API ListSigningPlatformsRequest : public SignerRequest
  {
  public:
    ListSigningPlatformsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSigningPlatforms"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The category type of a signing platform.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p>The category type of a signing platform.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category type of a signing platform.</p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category type of a signing platform.</p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category type of a signing platform.</p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p>The category type of a signing platform.</p>
     */
    inline ListSigningPlatformsRequest& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p>The category type of a signing platform.</p>
     */
    inline ListSigningPlatformsRequest& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>The category type of a signing platform.</p>
     */
    inline ListSigningPlatformsRequest& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * <p>Any partner entities connected to a signing platform.</p>
     */
    inline const Aws::String& GetPartner() const{ return m_partner; }

    /**
     * <p>Any partner entities connected to a signing platform.</p>
     */
    inline bool PartnerHasBeenSet() const { return m_partnerHasBeenSet; }

    /**
     * <p>Any partner entities connected to a signing platform.</p>
     */
    inline void SetPartner(const Aws::String& value) { m_partnerHasBeenSet = true; m_partner = value; }

    /**
     * <p>Any partner entities connected to a signing platform.</p>
     */
    inline void SetPartner(Aws::String&& value) { m_partnerHasBeenSet = true; m_partner = std::move(value); }

    /**
     * <p>Any partner entities connected to a signing platform.</p>
     */
    inline void SetPartner(const char* value) { m_partnerHasBeenSet = true; m_partner.assign(value); }

    /**
     * <p>Any partner entities connected to a signing platform.</p>
     */
    inline ListSigningPlatformsRequest& WithPartner(const Aws::String& value) { SetPartner(value); return *this;}

    /**
     * <p>Any partner entities connected to a signing platform.</p>
     */
    inline ListSigningPlatformsRequest& WithPartner(Aws::String&& value) { SetPartner(std::move(value)); return *this;}

    /**
     * <p>Any partner entities connected to a signing platform.</p>
     */
    inline ListSigningPlatformsRequest& WithPartner(const char* value) { SetPartner(value); return *this;}


    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline ListSigningPlatformsRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline ListSigningPlatformsRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline ListSigningPlatformsRequest& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The maximum number of results to be returned by this operation.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned by this operation.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned by this operation.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned by this operation.</p>
     */
    inline ListSigningPlatformsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListSigningPlatformsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Value for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline ListSigningPlatformsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Value for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline ListSigningPlatformsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_category;
    bool m_categoryHasBeenSet;

    Aws::String m_partner;
    bool m_partnerHasBeenSet;

    Aws::String m_target;
    bool m_targetHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
