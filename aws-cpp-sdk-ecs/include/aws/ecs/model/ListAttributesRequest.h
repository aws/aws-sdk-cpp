/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListAttributesRequest : public ECSRequest
  {
  public:
    AWS_ECS_API ListAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAttributes"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>The type of the target to list attributes with.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The type of the target to list attributes with.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The type of the target to list attributes with.</p>
     */
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The type of the target to list attributes with.</p>
     */
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The type of the target to list attributes with.</p>
     */
    inline ListAttributesRequest& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The type of the target to list attributes with.</p>
     */
    inline ListAttributesRequest& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}


    /**
     * <p>The name of the attribute to filter the results with. </p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the attribute to filter the results with. </p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the attribute to filter the results with. </p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the attribute to filter the results with. </p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the attribute to filter the results with. </p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the attribute to filter the results with. </p>
     */
    inline ListAttributesRequest& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the attribute to filter the results with. </p>
     */
    inline ListAttributesRequest& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute to filter the results with. </p>
     */
    inline ListAttributesRequest& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The value of the attribute to filter results with. You must also specify an
     * attribute name to use this parameter.</p>
     */
    inline const Aws::String& GetAttributeValue() const{ return m_attributeValue; }

    /**
     * <p>The value of the attribute to filter results with. You must also specify an
     * attribute name to use this parameter.</p>
     */
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }

    /**
     * <p>The value of the attribute to filter results with. You must also specify an
     * attribute name to use this parameter.</p>
     */
    inline void SetAttributeValue(const Aws::String& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>The value of the attribute to filter results with. You must also specify an
     * attribute name to use this parameter.</p>
     */
    inline void SetAttributeValue(Aws::String&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::move(value); }

    /**
     * <p>The value of the attribute to filter results with. You must also specify an
     * attribute name to use this parameter.</p>
     */
    inline void SetAttributeValue(const char* value) { m_attributeValueHasBeenSet = true; m_attributeValue.assign(value); }

    /**
     * <p>The value of the attribute to filter results with. You must also specify an
     * attribute name to use this parameter.</p>
     */
    inline ListAttributesRequest& WithAttributeValue(const Aws::String& value) { SetAttributeValue(value); return *this;}

    /**
     * <p>The value of the attribute to filter results with. You must also specify an
     * attribute name to use this parameter.</p>
     */
    inline ListAttributesRequest& WithAttributeValue(Aws::String&& value) { SetAttributeValue(std::move(value)); return *this;}

    /**
     * <p>The value of the attribute to filter results with. You must also specify an
     * attribute name to use this parameter.</p>
     */
    inline ListAttributesRequest& WithAttributeValue(const char* value) { SetAttributeValue(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListAttributes</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListAttributes</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListAttributes</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListAttributes</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListAttributes</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListAttributes</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline ListAttributesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListAttributes</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline ListAttributesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListAttributes</code>
     * request indicating that more results are available to fulfill the request and
     * further calls are needed. If <code>maxResults</code> was provided, it's possible
     * the number of results to be fewer than <code>maxResults</code>.</p> 
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * 
     */
    inline ListAttributesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of cluster results that <code>ListAttributes</code>
     * returned in paginated output. When this parameter is used,
     * <code>ListAttributes</code> only returns <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>ListAttributes</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 100. If this parameter isn't used, then
     * <code>ListAttributes</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of cluster results that <code>ListAttributes</code>
     * returned in paginated output. When this parameter is used,
     * <code>ListAttributes</code> only returns <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>ListAttributes</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 100. If this parameter isn't used, then
     * <code>ListAttributes</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of cluster results that <code>ListAttributes</code>
     * returned in paginated output. When this parameter is used,
     * <code>ListAttributes</code> only returns <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>ListAttributes</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 100. If this parameter isn't used, then
     * <code>ListAttributes</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of cluster results that <code>ListAttributes</code>
     * returned in paginated output. When this parameter is used,
     * <code>ListAttributes</code> only returns <code>maxResults</code> results in a
     * single page along with a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>ListAttributes</code> request with the returned <code>nextToken</code>
     * value. This value can be between 1 and 100. If this parameter isn't used, then
     * <code>ListAttributes</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline ListAttributesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    TargetType m_targetType;
    bool m_targetTypeHasBeenSet = false;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
