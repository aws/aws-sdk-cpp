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
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   * <p>The request object for <code>ListTagsForResource</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ListTagsForResourceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API ListTagsForResourceRequest : public FSxRequest
  {
  public:
    ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the Amazon FSx resource that will have its tags listed.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The ARN of the Amazon FSx resource that will have its tags listed.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The ARN of the Amazon FSx resource that will have its tags listed.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The ARN of the Amazon FSx resource that will have its tags listed.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The ARN of the Amazon FSx resource that will have its tags listed.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The ARN of the Amazon FSx resource that will have its tags listed.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The ARN of the Amazon FSx resource that will have its tags listed.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon FSx resource that will have its tags listed.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>(Optional) Maximum number of tags to return in the response (integer). This
     * parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>(Optional) Maximum number of tags to return in the response (integer). This
     * parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>(Optional) Maximum number of tags to return in the response (integer). This
     * parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>(Optional) Maximum number of tags to return in the response (integer). This
     * parameter value must be greater than 0. The number of items that Amazon FSx
     * returns is the minimum of the <code>MaxResults</code> parameter specified in the
     * request and the service's internal maximum number of items per page.</p>
     */
    inline ListTagsForResourceRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>ListTagsForResource</code> operation (String). If a token present, the
     * action continues the list from where the returning call left off.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>ListTagsForResource</code> operation (String). If a token present, the
     * action continues the list from where the returning call left off.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>ListTagsForResource</code> operation (String). If a token present, the
     * action continues the list from where the returning call left off.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>ListTagsForResource</code> operation (String). If a token present, the
     * action continues the list from where the returning call left off.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>ListTagsForResource</code> operation (String). If a token present, the
     * action continues the list from where the returning call left off.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>ListTagsForResource</code> operation (String). If a token present, the
     * action continues the list from where the returning call left off.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>ListTagsForResource</code> operation (String). If a token present, the
     * action continues the list from where the returning call left off.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) Opaque pagination token returned from a previous
     * <code>ListTagsForResource</code> operation (String). If a token present, the
     * action continues the list from where the returning call left off.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
