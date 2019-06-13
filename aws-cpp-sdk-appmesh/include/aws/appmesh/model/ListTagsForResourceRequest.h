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
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppMesh
{
namespace Model
{

  /**
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListTagsForResourceInput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API ListTagsForResourceRequest : public AppMeshRequest
  {
  public:
    ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of tag results returned by
     * <code>ListTagsForResource</code> in
         paginated output. When this
     * parameter is used, <code>ListTagsForResource</code> returns
         only
     * <code>limit</code> results in a single page along with a <code>nextToken</code>

     * response element. You can see the remaining results of the initial request by
     * sending
         another <code>ListTagsForResource</code> request with the
     * returned <code>nextToken</code>
         value. This value can be between 1 and
     * 100. If you don't use
         this parameter, <code>ListTagsForResource</code>
     * returns up to 100
         results and a <code>nextToken</code> value if
     * applicable.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of tag results returned by
     * <code>ListTagsForResource</code> in
         paginated output. When this
     * parameter is used, <code>ListTagsForResource</code> returns
         only
     * <code>limit</code> results in a single page along with a <code>nextToken</code>

     * response element. You can see the remaining results of the initial request by
     * sending
         another <code>ListTagsForResource</code> request with the
     * returned <code>nextToken</code>
         value. This value can be between 1 and
     * 100. If you don't use
         this parameter, <code>ListTagsForResource</code>
     * returns up to 100
         results and a <code>nextToken</code> value if
     * applicable.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of tag results returned by
     * <code>ListTagsForResource</code> in
         paginated output. When this
     * parameter is used, <code>ListTagsForResource</code> returns
         only
     * <code>limit</code> results in a single page along with a <code>nextToken</code>

     * response element. You can see the remaining results of the initial request by
     * sending
         another <code>ListTagsForResource</code> request with the
     * returned <code>nextToken</code>
         value. This value can be between 1 and
     * 100. If you don't use
         this parameter, <code>ListTagsForResource</code>
     * returns up to 100
         results and a <code>nextToken</code> value if
     * applicable.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of tag results returned by
     * <code>ListTagsForResource</code> in
         paginated output. When this
     * parameter is used, <code>ListTagsForResource</code> returns
         only
     * <code>limit</code> results in a single page along with a <code>nextToken</code>

     * response element. You can see the remaining results of the initial request by
     * sending
         another <code>ListTagsForResource</code> request with the
     * returned <code>nextToken</code>
         value. This value can be between 1 and
     * 100. If you don't use
         this parameter, <code>ListTagsForResource</code>
     * returns up to 100
         results and a <code>nextToken</code> value if
     * applicable.</p>
     */
    inline ListTagsForResourceRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
         
     * <code>ListTagsForResource</code> request where <code>limit</code> was used and
     * the
         results exceeded the value of that parameter. Pagination continues
     * from the end of the
         previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
         
     * <code>ListTagsForResource</code> request where <code>limit</code> was used and
     * the
         results exceeded the value of that parameter. Pagination continues
     * from the end of the
         previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
         
     * <code>ListTagsForResource</code> request where <code>limit</code> was used and
     * the
         results exceeded the value of that parameter. Pagination continues
     * from the end of the
         previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
         
     * <code>ListTagsForResource</code> request where <code>limit</code> was used and
     * the
         results exceeded the value of that parameter. Pagination continues
     * from the end of the
         previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
         
     * <code>ListTagsForResource</code> request where <code>limit</code> was used and
     * the
         results exceeded the value of that parameter. Pagination continues
     * from the end of the
         previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
         
     * <code>ListTagsForResource</code> request where <code>limit</code> was used and
     * the
         results exceeded the value of that parameter. Pagination continues
     * from the end of the
         previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
         
     * <code>ListTagsForResource</code> request where <code>limit</code> was used and
     * the
         results exceeded the value of that parameter. Pagination continues
     * from the end of the
         previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
         
     * <code>ListTagsForResource</code> request where <code>limit</code> was used and
     * the
         results exceeded the value of that parameter. Pagination continues
     * from the end of the
         previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline ListTagsForResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource to list the tags
     * for.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource to list the tags
     * for.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource to list the tags
     * for.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource to list the tags
     * for.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource to list the tags
     * for.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource to list the tags
     * for.</p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource to list the tags
     * for.</p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the resource to list the tags
     * for.</p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
