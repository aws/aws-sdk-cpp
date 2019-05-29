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
  class AWS_SECURITYHUB_API ListProductSubscribersRequest : public SecurityHubRequest
  {
  public:
    ListProductSubscribersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProductSubscribers"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ARN of the product.</p>
     */
    inline const Aws::String& GetProductArn() const{ return m_productArn; }

    /**
     * <p>The ARN of the product.</p>
     */
    inline bool ProductArnHasBeenSet() const { return m_productArnHasBeenSet; }

    /**
     * <p>The ARN of the product.</p>
     */
    inline void SetProductArn(const Aws::String& value) { m_productArnHasBeenSet = true; m_productArn = value; }

    /**
     * <p>The ARN of the product.</p>
     */
    inline void SetProductArn(Aws::String&& value) { m_productArnHasBeenSet = true; m_productArn = std::move(value); }

    /**
     * <p>The ARN of the product.</p>
     */
    inline void SetProductArn(const char* value) { m_productArnHasBeenSet = true; m_productArn.assign(value); }

    /**
     * <p>The ARN of the product.</p>
     */
    inline ListProductSubscribersRequest& WithProductArn(const Aws::String& value) { SetProductArn(value); return *this;}

    /**
     * <p>The ARN of the product.</p>
     */
    inline ListProductSubscribersRequest& WithProductArn(Aws::String&& value) { SetProductArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the product.</p>
     */
    inline ListProductSubscribersRequest& WithProductArn(const char* value) { SetProductArn(value); return *this;}


    /**
     * <p>The token that is required for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline ListProductSubscribersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline ListProductSubscribersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that is required for pagination.</p>
     */
    inline ListProductSubscribersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline ListProductSubscribersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_productArn;
    bool m_productArnHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
