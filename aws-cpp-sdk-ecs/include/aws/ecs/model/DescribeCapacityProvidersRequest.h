/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/CapacityProviderField.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class DescribeCapacityProvidersRequest : public ECSRequest
  {
  public:
    AWS_ECS_API DescribeCapacityProvidersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCapacityProviders"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of one or more capacity
     * providers. Up to <code>100</code> capacity providers can be described in an
     * action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityProviders() const{ return m_capacityProviders; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of one or more capacity
     * providers. Up to <code>100</code> capacity providers can be described in an
     * action.</p>
     */
    inline bool CapacityProvidersHasBeenSet() const { return m_capacityProvidersHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of one or more capacity
     * providers. Up to <code>100</code> capacity providers can be described in an
     * action.</p>
     */
    inline void SetCapacityProviders(const Aws::Vector<Aws::String>& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of one or more capacity
     * providers. Up to <code>100</code> capacity providers can be described in an
     * action.</p>
     */
    inline void SetCapacityProviders(Aws::Vector<Aws::String>&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of one or more capacity
     * providers. Up to <code>100</code> capacity providers can be described in an
     * action.</p>
     */
    inline DescribeCapacityProvidersRequest& WithCapacityProviders(const Aws::Vector<Aws::String>& value) { SetCapacityProviders(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of one or more capacity
     * providers. Up to <code>100</code> capacity providers can be described in an
     * action.</p>
     */
    inline DescribeCapacityProvidersRequest& WithCapacityProviders(Aws::Vector<Aws::String>&& value) { SetCapacityProviders(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of one or more capacity
     * providers. Up to <code>100</code> capacity providers can be described in an
     * action.</p>
     */
    inline DescribeCapacityProvidersRequest& AddCapacityProviders(const Aws::String& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.push_back(value); return *this; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of one or more capacity
     * providers. Up to <code>100</code> capacity providers can be described in an
     * action.</p>
     */
    inline DescribeCapacityProvidersRequest& AddCapacityProviders(Aws::String&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.push_back(std::move(value)); return *this; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of one or more capacity
     * providers. Up to <code>100</code> capacity providers can be described in an
     * action.</p>
     */
    inline DescribeCapacityProvidersRequest& AddCapacityProviders(const char* value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.push_back(value); return *this; }


    /**
     * <p>Specifies whether or not you want to see the resource tags for the capacity
     * provider. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags aren't included in the response.</p>
     */
    inline const Aws::Vector<CapacityProviderField>& GetInclude() const{ return m_include; }

    /**
     * <p>Specifies whether or not you want to see the resource tags for the capacity
     * provider. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags aren't included in the response.</p>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p>Specifies whether or not you want to see the resource tags for the capacity
     * provider. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags aren't included in the response.</p>
     */
    inline void SetInclude(const Aws::Vector<CapacityProviderField>& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p>Specifies whether or not you want to see the resource tags for the capacity
     * provider. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags aren't included in the response.</p>
     */
    inline void SetInclude(Aws::Vector<CapacityProviderField>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p>Specifies whether or not you want to see the resource tags for the capacity
     * provider. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags aren't included in the response.</p>
     */
    inline DescribeCapacityProvidersRequest& WithInclude(const Aws::Vector<CapacityProviderField>& value) { SetInclude(value); return *this;}

    /**
     * <p>Specifies whether or not you want to see the resource tags for the capacity
     * provider. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags aren't included in the response.</p>
     */
    inline DescribeCapacityProvidersRequest& WithInclude(Aws::Vector<CapacityProviderField>&& value) { SetInclude(std::move(value)); return *this;}

    /**
     * <p>Specifies whether or not you want to see the resource tags for the capacity
     * provider. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags aren't included in the response.</p>
     */
    inline DescribeCapacityProvidersRequest& AddInclude(const CapacityProviderField& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }

    /**
     * <p>Specifies whether or not you want to see the resource tags for the capacity
     * provider. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags aren't included in the response.</p>
     */
    inline DescribeCapacityProvidersRequest& AddInclude(CapacityProviderField&& value) { m_includeHasBeenSet = true; m_include.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of account setting results returned by
     * <code>DescribeCapacityProviders</code> in paginated output. When this parameter
     * is used, <code>DescribeCapacityProviders</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeCapacityProviders</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 10. If this parameter is not used, then
     * <code>DescribeCapacityProviders</code> returns up to 10 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of account setting results returned by
     * <code>DescribeCapacityProviders</code> in paginated output. When this parameter
     * is used, <code>DescribeCapacityProviders</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeCapacityProviders</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 10. If this parameter is not used, then
     * <code>DescribeCapacityProviders</code> returns up to 10 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of account setting results returned by
     * <code>DescribeCapacityProviders</code> in paginated output. When this parameter
     * is used, <code>DescribeCapacityProviders</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeCapacityProviders</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 10. If this parameter is not used, then
     * <code>DescribeCapacityProviders</code> returns up to 10 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of account setting results returned by
     * <code>DescribeCapacityProviders</code> in paginated output. When this parameter
     * is used, <code>DescribeCapacityProviders</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeCapacityProviders</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 10. If this parameter is not used, then
     * <code>DescribeCapacityProviders</code> returns up to 10 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline DescribeCapacityProvidersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeCapacityProviders</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeCapacityProviders</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeCapacityProviders</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeCapacityProviders</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeCapacityProviders</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeCapacityProviders</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline DescribeCapacityProvidersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeCapacityProviders</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline DescribeCapacityProvidersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeCapacityProviders</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value.</p>  <p>This token should be treated as an opaque identifier that
     * is only used to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline DescribeCapacityProvidersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_capacityProviders;
    bool m_capacityProvidersHasBeenSet = false;

    Aws::Vector<CapacityProviderField> m_include;
    bool m_includeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
