/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/ApplicationDescription.h>
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
   * <p>Result message containing a list of application descriptions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplicationDescriptionsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeApplicationsResult
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeApplicationsResult();
    AWS_ELASTICBEANSTALK_API DescribeApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetApplications(Aws::Vector<ApplicationDescription>&& value) { m_applications = std::move(value); }

    /**
     * <p>This parameter contains a list of <a>ApplicationDescription</a>.</p>
     */
    inline DescribeApplicationsResult& WithApplications(const Aws::Vector<ApplicationDescription>& value) { SetApplications(value); return *this;}

    /**
     * <p>This parameter contains a list of <a>ApplicationDescription</a>.</p>
     */
    inline DescribeApplicationsResult& WithApplications(Aws::Vector<ApplicationDescription>&& value) { SetApplications(std::move(value)); return *this;}

    /**
     * <p>This parameter contains a list of <a>ApplicationDescription</a>.</p>
     */
    inline DescribeApplicationsResult& AddApplications(const ApplicationDescription& value) { m_applications.push_back(value); return *this; }

    /**
     * <p>This parameter contains a list of <a>ApplicationDescription</a>.</p>
     */
    inline DescribeApplicationsResult& AddApplications(ApplicationDescription&& value) { m_applications.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeApplicationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeApplicationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ApplicationDescription> m_applications;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
