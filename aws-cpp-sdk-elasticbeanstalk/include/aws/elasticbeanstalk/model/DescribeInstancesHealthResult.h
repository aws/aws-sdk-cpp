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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/SingleInstanceHealth.h>
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
namespace ElasticBeanstalk
{
namespace Model
{
  /**
   * <p>Detailed health information about the Amazon EC2 instances in an AWS Elastic
   * Beanstalk environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeInstancesHealthResult">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeInstancesHealthResult
  {
  public:
    DescribeInstancesHealthResult();
    DescribeInstancesHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeInstancesHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Detailed health information about each instance.</p> <p>The output differs
     * slightly between Linux and Windows environments. There is a difference in the
     * members that are supported under the <code>&lt;CPUUtilization&gt;</code>
     * type.</p>
     */
    inline const Aws::Vector<SingleInstanceHealth>& GetInstanceHealthList() const{ return m_instanceHealthList; }

    /**
     * <p>Detailed health information about each instance.</p> <p>The output differs
     * slightly between Linux and Windows environments. There is a difference in the
     * members that are supported under the <code>&lt;CPUUtilization&gt;</code>
     * type.</p>
     */
    inline void SetInstanceHealthList(const Aws::Vector<SingleInstanceHealth>& value) { m_instanceHealthList = value; }

    /**
     * <p>Detailed health information about each instance.</p> <p>The output differs
     * slightly between Linux and Windows environments. There is a difference in the
     * members that are supported under the <code>&lt;CPUUtilization&gt;</code>
     * type.</p>
     */
    inline void SetInstanceHealthList(Aws::Vector<SingleInstanceHealth>&& value) { m_instanceHealthList = std::move(value); }

    /**
     * <p>Detailed health information about each instance.</p> <p>The output differs
     * slightly between Linux and Windows environments. There is a difference in the
     * members that are supported under the <code>&lt;CPUUtilization&gt;</code>
     * type.</p>
     */
    inline DescribeInstancesHealthResult& WithInstanceHealthList(const Aws::Vector<SingleInstanceHealth>& value) { SetInstanceHealthList(value); return *this;}

    /**
     * <p>Detailed health information about each instance.</p> <p>The output differs
     * slightly between Linux and Windows environments. There is a difference in the
     * members that are supported under the <code>&lt;CPUUtilization&gt;</code>
     * type.</p>
     */
    inline DescribeInstancesHealthResult& WithInstanceHealthList(Aws::Vector<SingleInstanceHealth>&& value) { SetInstanceHealthList(std::move(value)); return *this;}

    /**
     * <p>Detailed health information about each instance.</p> <p>The output differs
     * slightly between Linux and Windows environments. There is a difference in the
     * members that are supported under the <code>&lt;CPUUtilization&gt;</code>
     * type.</p>
     */
    inline DescribeInstancesHealthResult& AddInstanceHealthList(const SingleInstanceHealth& value) { m_instanceHealthList.push_back(value); return *this; }

    /**
     * <p>Detailed health information about each instance.</p> <p>The output differs
     * slightly between Linux and Windows environments. There is a difference in the
     * members that are supported under the <code>&lt;CPUUtilization&gt;</code>
     * type.</p>
     */
    inline DescribeInstancesHealthResult& AddInstanceHealthList(SingleInstanceHealth&& value) { m_instanceHealthList.push_back(std::move(value)); return *this; }


    /**
     * <p>The date and time that the health information was retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetRefreshedAt() const{ return m_refreshedAt; }

    /**
     * <p>The date and time that the health information was retrieved.</p>
     */
    inline void SetRefreshedAt(const Aws::Utils::DateTime& value) { m_refreshedAt = value; }

    /**
     * <p>The date and time that the health information was retrieved.</p>
     */
    inline void SetRefreshedAt(Aws::Utils::DateTime&& value) { m_refreshedAt = std::move(value); }

    /**
     * <p>The date and time that the health information was retrieved.</p>
     */
    inline DescribeInstancesHealthResult& WithRefreshedAt(const Aws::Utils::DateTime& value) { SetRefreshedAt(value); return *this;}

    /**
     * <p>The date and time that the health information was retrieved.</p>
     */
    inline DescribeInstancesHealthResult& WithRefreshedAt(Aws::Utils::DateTime&& value) { SetRefreshedAt(std::move(value)); return *this;}


    /**
     * <p>Pagination token for the next page of results, if available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token for the next page of results, if available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token for the next page of results, if available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token for the next page of results, if available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token for the next page of results, if available.</p>
     */
    inline DescribeInstancesHealthResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token for the next page of results, if available.</p>
     */
    inline DescribeInstancesHealthResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token for the next page of results, if available.</p>
     */
    inline DescribeInstancesHealthResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeInstancesHealthResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeInstancesHealthResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<SingleInstanceHealth> m_instanceHealthList;

    Aws::Utils::DateTime m_refreshedAt;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
