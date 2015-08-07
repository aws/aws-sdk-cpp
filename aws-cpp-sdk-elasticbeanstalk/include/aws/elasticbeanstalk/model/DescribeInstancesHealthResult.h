/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/SingleInstanceHealth.h>

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
  /*
    $shape.documentation
  */
  class AWS_ELASTICBEANSTALK_API DescribeInstancesHealthResult
  {
  public:
    DescribeInstancesHealthResult();
    DescribeInstancesHealthResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeInstancesHealthResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const Aws::Vector<SingleInstanceHealth>& GetInstanceHealthList() const{ return m_instanceHealthList; }
    
    inline void SetInstanceHealthList(const Aws::Vector<SingleInstanceHealth>& value) { m_instanceHealthList = value; }

    
    inline DescribeInstancesHealthResult&  WithInstanceHealthList(const Aws::Vector<SingleInstanceHealth>& value) { SetInstanceHealthList(value); return *this;}

    
    inline DescribeInstancesHealthResult& AddInstanceHealthList(const SingleInstanceHealth& value) { m_instanceHealthList.push_back(value); return *this; }

    
    inline double GetRefreshedAt() const{ return m_refreshedAt; }
    
    inline void SetRefreshedAt(double value) { m_refreshedAt = value; }

    
    inline DescribeInstancesHealthResult&  WithRefreshedAt(double value) { SetRefreshedAt(value); return *this;}

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeInstancesHealthResult&  WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeInstancesHealthResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline DescribeInstancesHealthResult&  WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<SingleInstanceHealth> m_instanceHealthList;
    double m_refreshedAt;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws