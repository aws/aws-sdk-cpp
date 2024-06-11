/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ClassicLinkInstance.h>
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
  class DescribeClassicLinkInstancesResponse
  {
  public:
    AWS_EC2_API DescribeClassicLinkInstancesResponse();
    AWS_EC2_API DescribeClassicLinkInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeClassicLinkInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about one or more linked EC2-Classic instances.</p>
     */
    inline const Aws::Vector<ClassicLinkInstance>& GetInstances() const{ return m_instances; }
    inline void SetInstances(const Aws::Vector<ClassicLinkInstance>& value) { m_instances = value; }
    inline void SetInstances(Aws::Vector<ClassicLinkInstance>&& value) { m_instances = std::move(value); }
    inline DescribeClassicLinkInstancesResponse& WithInstances(const Aws::Vector<ClassicLinkInstance>& value) { SetInstances(value); return *this;}
    inline DescribeClassicLinkInstancesResponse& WithInstances(Aws::Vector<ClassicLinkInstance>&& value) { SetInstances(std::move(value)); return *this;}
    inline DescribeClassicLinkInstancesResponse& AddInstances(const ClassicLinkInstance& value) { m_instances.push_back(value); return *this; }
    inline DescribeClassicLinkInstancesResponse& AddInstances(ClassicLinkInstance&& value) { m_instances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeClassicLinkInstancesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeClassicLinkInstancesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeClassicLinkInstancesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeClassicLinkInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeClassicLinkInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ClassicLinkInstance> m_instances;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
