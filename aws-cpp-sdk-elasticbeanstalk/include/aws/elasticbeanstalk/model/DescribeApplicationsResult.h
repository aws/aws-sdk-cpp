/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/ApplicationDescription.h>

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
   * <p>Result message containing a list of application descriptions.</p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeApplicationsResult
  {
  public:
    DescribeApplicationsResult();
    DescribeApplicationsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeApplicationsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>This parameter contains a list of <a>ApplicationDescription</a>.</p>
     */
    inline const Aws::Vector<ApplicationDescription>& GetApplications() const{ return m_applications; }

    /**
     * <p>This parameter contains a list of <a>ApplicationDescription</a>.</p>
     */
    inline void SetApplications(const Aws::Vector<ApplicationDescription>& value) { m_applications = value; }

    /**
     * <p>This parameter contains a list of <a>ApplicationDescription</a>.</p>
     */
    inline void SetApplications(Aws::Vector<ApplicationDescription>&& value) { m_applications = value; }

    /**
     * <p>This parameter contains a list of <a>ApplicationDescription</a>.</p>
     */
    inline DescribeApplicationsResult& WithApplications(const Aws::Vector<ApplicationDescription>& value) { SetApplications(value); return *this;}

    /**
     * <p>This parameter contains a list of <a>ApplicationDescription</a>.</p>
     */
    inline DescribeApplicationsResult& WithApplications(Aws::Vector<ApplicationDescription>&& value) { SetApplications(value); return *this;}

    /**
     * <p>This parameter contains a list of <a>ApplicationDescription</a>.</p>
     */
    inline DescribeApplicationsResult& AddApplications(const ApplicationDescription& value) { m_applications.push_back(value); return *this; }

    /**
     * <p>This parameter contains a list of <a>ApplicationDescription</a>.</p>
     */
    inline DescribeApplicationsResult& AddApplications(ApplicationDescription&& value) { m_applications.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeApplicationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeApplicationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<ApplicationDescription> m_applications;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws