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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/TargetType.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API ListAttributesRequest : public ECSRequest
  {
  public:
    ListAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAttributes"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to list
     * attributes. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to list
     * attributes. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to list
     * attributes. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to list
     * attributes. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to list
     * attributes. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to list
     * attributes. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline ListAttributesRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to list
     * attributes. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline ListAttributesRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to list
     * attributes. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline ListAttributesRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The type of the target with which to list attributes.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The type of the target with which to list attributes.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The type of the target with which to list attributes.</p>
     */
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The type of the target with which to list attributes.</p>
     */
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The type of the target with which to list attributes.</p>
     */
    inline ListAttributesRequest& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The type of the target with which to list attributes.</p>
     */
    inline ListAttributesRequest& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}


    /**
     * <p>The name of the attribute with which to filter the results. </p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the attribute with which to filter the results. </p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the attribute with which to filter the results. </p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the attribute with which to filter the results. </p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the attribute with which to filter the results. </p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the attribute with which to filter the results. </p>
     */
    inline ListAttributesRequest& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the attribute with which to filter the results. </p>
     */
    inline ListAttributesRequest& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute with which to filter the results. </p>
     */
    inline ListAttributesRequest& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The value of the attribute with which to filter results. You must also
     * specify an attribute name to use this parameter.</p>
     */
    inline const Aws::String& GetAttributeValue() const{ return m_attributeValue; }

    /**
     * <p>The value of the attribute with which to filter results. You must also
     * specify an attribute name to use this parameter.</p>
     */
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }

    /**
     * <p>The value of the attribute with which to filter results. You must also
     * specify an attribute name to use this parameter.</p>
     */
    inline void SetAttributeValue(const Aws::String& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>The value of the attribute with which to filter results. You must also
     * specify an attribute name to use this parameter.</p>
     */
    inline void SetAttributeValue(Aws::String&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::move(value); }

    /**
     * <p>The value of the attribute with which to filter results. You must also
     * specify an attribute name to use this parameter.</p>
     */
    inline void SetAttributeValue(const char* value) { m_attributeValueHasBeenSet = true; m_attributeValue.assign(value); }

    /**
     * <p>The value of the attribute with which to filter results. You must also
     * specify an attribute name to use this parameter.</p>
     */
    inline ListAttributesRequest& WithAttributeValue(const Aws::String& value) { SetAttributeValue(value); return *this;}

    /**
     * <p>The value of the attribute with which to filter results. You must also
     * specify an attribute name to use this parameter.</p>
     */
    inline ListAttributesRequest& WithAttributeValue(Aws::String&& value) { SetAttributeValue(std::move(value)); return *this;}

    /**
     * <p>The value of the attribute with which to filter results. You must also
     * specify an attribute name to use this parameter.</p>
     */
    inline ListAttributesRequest& WithAttributeValue(const char* value) { SetAttributeValue(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAttributes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAttributes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAttributes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAttributes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAttributes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAttributes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListAttributesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAttributes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListAttributesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListAttributes</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListAttributesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of cluster results returned by <code>ListAttributes</code>
     * in paginated output. When this parameter is used, <code>ListAttributes</code>
     * only returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListAttributes</code> request with
     * the returned <code>nextToken</code> value. This value can be between 1 and 100.
     * If this parameter is not used, then <code>ListAttributes</code> returns up to
     * 100 results and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of cluster results returned by <code>ListAttributes</code>
     * in paginated output. When this parameter is used, <code>ListAttributes</code>
     * only returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListAttributes</code> request with
     * the returned <code>nextToken</code> value. This value can be between 1 and 100.
     * If this parameter is not used, then <code>ListAttributes</code> returns up to
     * 100 results and a <code>nextToken</code> value if applicable.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of cluster results returned by <code>ListAttributes</code>
     * in paginated output. When this parameter is used, <code>ListAttributes</code>
     * only returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListAttributes</code> request with
     * the returned <code>nextToken</code> value. This value can be between 1 and 100.
     * If this parameter is not used, then <code>ListAttributes</code> returns up to
     * 100 results and a <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of cluster results returned by <code>ListAttributes</code>
     * in paginated output. When this parameter is used, <code>ListAttributes</code>
     * only returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListAttributes</code> request with
     * the returned <code>nextToken</code> value. This value can be between 1 and 100.
     * If this parameter is not used, then <code>ListAttributes</code> returns up to
     * 100 results and a <code>nextToken</code> value if applicable.</p>
     */
    inline ListAttributesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet;

    TargetType m_targetType;
    bool m_targetTypeHasBeenSet;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
