/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/InstanceRefresh.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{
  class DescribeInstanceRefreshesResult
  {
  public:
    AWS_AUTOSCALING_API DescribeInstanceRefreshesResult();
    AWS_AUTOSCALING_API DescribeInstanceRefreshesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeInstanceRefreshesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The instance refreshes for the specified group, sorted by creation timestamp
     * in descending order.</p>
     */
    inline const Aws::Vector<InstanceRefresh>& GetInstanceRefreshes() const{ return m_instanceRefreshes; }

    /**
     * <p>The instance refreshes for the specified group, sorted by creation timestamp
     * in descending order.</p>
     */
    inline void SetInstanceRefreshes(const Aws::Vector<InstanceRefresh>& value) { m_instanceRefreshes = value; }

    /**
     * <p>The instance refreshes for the specified group, sorted by creation timestamp
     * in descending order.</p>
     */
    inline void SetInstanceRefreshes(Aws::Vector<InstanceRefresh>&& value) { m_instanceRefreshes = std::move(value); }

    /**
     * <p>The instance refreshes for the specified group, sorted by creation timestamp
     * in descending order.</p>
     */
    inline DescribeInstanceRefreshesResult& WithInstanceRefreshes(const Aws::Vector<InstanceRefresh>& value) { SetInstanceRefreshes(value); return *this;}

    /**
     * <p>The instance refreshes for the specified group, sorted by creation timestamp
     * in descending order.</p>
     */
    inline DescribeInstanceRefreshesResult& WithInstanceRefreshes(Aws::Vector<InstanceRefresh>&& value) { SetInstanceRefreshes(std::move(value)); return *this;}

    /**
     * <p>The instance refreshes for the specified group, sorted by creation timestamp
     * in descending order.</p>
     */
    inline DescribeInstanceRefreshesResult& AddInstanceRefreshes(const InstanceRefresh& value) { m_instanceRefreshes.push_back(value); return *this; }

    /**
     * <p>The instance refreshes for the specified group, sorted by creation timestamp
     * in descending order.</p>
     */
    inline DescribeInstanceRefreshesResult& AddInstanceRefreshes(InstanceRefresh&& value) { m_instanceRefreshes.push_back(std::move(value)); return *this; }


    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline DescribeInstanceRefreshesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline DescribeInstanceRefreshesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline DescribeInstanceRefreshesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeInstanceRefreshesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeInstanceRefreshesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<InstanceRefresh> m_instanceRefreshes;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
