/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceTopology.h>
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
namespace EC2
{
namespace Model
{
  class DescribeInstanceTopologyResponse
  {
  public:
    AWS_EC2_API DescribeInstanceTopologyResponse();
    AWS_EC2_API DescribeInstanceTopologyResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeInstanceTopologyResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the topology of each instance.</p>
     */
    inline const Aws::Vector<InstanceTopology>& GetInstances() const{ return m_instances; }

    /**
     * <p>Information about the topology of each instance.</p>
     */
    inline void SetInstances(const Aws::Vector<InstanceTopology>& value) { m_instances = value; }

    /**
     * <p>Information about the topology of each instance.</p>
     */
    inline void SetInstances(Aws::Vector<InstanceTopology>&& value) { m_instances = std::move(value); }

    /**
     * <p>Information about the topology of each instance.</p>
     */
    inline DescribeInstanceTopologyResponse& WithInstances(const Aws::Vector<InstanceTopology>& value) { SetInstances(value); return *this;}

    /**
     * <p>Information about the topology of each instance.</p>
     */
    inline DescribeInstanceTopologyResponse& WithInstances(Aws::Vector<InstanceTopology>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>Information about the topology of each instance.</p>
     */
    inline DescribeInstanceTopologyResponse& AddInstances(const InstanceTopology& value) { m_instances.push_back(value); return *this; }

    /**
     * <p>Information about the topology of each instance.</p>
     */
    inline DescribeInstanceTopologyResponse& AddInstances(InstanceTopology&& value) { m_instances.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline DescribeInstanceTopologyResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline DescribeInstanceTopologyResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline DescribeInstanceTopologyResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeInstanceTopologyResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeInstanceTopologyResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<InstanceTopology> m_instances;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
