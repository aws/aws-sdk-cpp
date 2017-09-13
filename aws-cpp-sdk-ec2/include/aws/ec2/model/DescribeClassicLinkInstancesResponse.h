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
  /**
   * <p>Contains the output of DescribeClassicLinkInstances.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeClassicLinkInstancesResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeClassicLinkInstancesResponse
  {
  public:
    DescribeClassicLinkInstancesResponse();
    DescribeClassicLinkInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeClassicLinkInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about one or more linked EC2-Classic instances.</p>
     */
    inline const Aws::Vector<ClassicLinkInstance>& GetInstances() const{ return m_instances; }

    /**
     * <p>Information about one or more linked EC2-Classic instances.</p>
     */
    inline void SetInstances(const Aws::Vector<ClassicLinkInstance>& value) { m_instances = value; }

    /**
     * <p>Information about one or more linked EC2-Classic instances.</p>
     */
    inline void SetInstances(Aws::Vector<ClassicLinkInstance>&& value) { m_instances = std::move(value); }

    /**
     * <p>Information about one or more linked EC2-Classic instances.</p>
     */
    inline DescribeClassicLinkInstancesResponse& WithInstances(const Aws::Vector<ClassicLinkInstance>& value) { SetInstances(value); return *this;}

    /**
     * <p>Information about one or more linked EC2-Classic instances.</p>
     */
    inline DescribeClassicLinkInstancesResponse& WithInstances(Aws::Vector<ClassicLinkInstance>&& value) { SetInstances(std::move(value)); return *this;}

    /**
     * <p>Information about one or more linked EC2-Classic instances.</p>
     */
    inline DescribeClassicLinkInstancesResponse& AddInstances(const ClassicLinkInstance& value) { m_instances.push_back(value); return *this; }

    /**
     * <p>Information about one or more linked EC2-Classic instances.</p>
     */
    inline DescribeClassicLinkInstancesResponse& AddInstances(ClassicLinkInstance&& value) { m_instances.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeClassicLinkInstancesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeClassicLinkInstancesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeClassicLinkInstancesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeClassicLinkInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeClassicLinkInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ClassicLinkInstance> m_instances;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
