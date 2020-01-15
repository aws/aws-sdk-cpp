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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AWS_SECURITYHUB_API DescribeStandardsControlsRequest : public SecurityHubRequest
  {
  public:
    DescribeStandardsControlsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStandardsControls"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline const Aws::String& GetStandardsSubscriptionArn() const{ return m_standardsSubscriptionArn; }

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline bool StandardsSubscriptionArnHasBeenSet() const { return m_standardsSubscriptionArnHasBeenSet; }

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline void SetStandardsSubscriptionArn(const Aws::String& value) { m_standardsSubscriptionArnHasBeenSet = true; m_standardsSubscriptionArn = value; }

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline void SetStandardsSubscriptionArn(Aws::String&& value) { m_standardsSubscriptionArnHasBeenSet = true; m_standardsSubscriptionArn = std::move(value); }

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline void SetStandardsSubscriptionArn(const char* value) { m_standardsSubscriptionArnHasBeenSet = true; m_standardsSubscriptionArn.assign(value); }

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline DescribeStandardsControlsRequest& WithStandardsSubscriptionArn(const Aws::String& value) { SetStandardsSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline DescribeStandardsControlsRequest& WithStandardsSubscriptionArn(Aws::String&& value) { SetStandardsSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a resource that represents your subscription to a supported
     * standard.</p>
     */
    inline DescribeStandardsControlsRequest& WithStandardsSubscriptionArn(const char* value) { SetStandardsSubscriptionArn(value); return *this;}


    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline DescribeStandardsControlsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline DescribeStandardsControlsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For requests to get the next page of results, the pagination token that was
     * returned with the previous set of results. The initial request does not include
     * a pagination token.</p>
     */
    inline DescribeStandardsControlsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of compliance standard controls to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of compliance standard controls to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of compliance standard controls to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of compliance standard controls to return.</p>
     */
    inline DescribeStandardsControlsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_standardsSubscriptionArn;
    bool m_standardsSubscriptionArnHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
