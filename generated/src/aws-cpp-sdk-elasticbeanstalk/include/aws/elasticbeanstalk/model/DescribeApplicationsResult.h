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
    AWS_ELASTICBEANSTALK_API DescribeApplicationsResult() = default;
    AWS_ELASTICBEANSTALK_API DescribeApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>This parameter contains a list of <a>ApplicationDescription</a>.</p>
     */
    inline const Aws::Vector<ApplicationDescription>& GetApplications() const { return m_applications; }
    template<typename ApplicationsT = Aws::Vector<ApplicationDescription>>
    void SetApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications = std::forward<ApplicationsT>(value); }
    template<typename ApplicationsT = Aws::Vector<ApplicationDescription>>
    DescribeApplicationsResult& WithApplications(ApplicationsT&& value) { SetApplications(std::forward<ApplicationsT>(value)); return *this;}
    template<typename ApplicationsT = ApplicationDescription>
    DescribeApplicationsResult& AddApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications.emplace_back(std::forward<ApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeApplicationsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationDescription> m_applications;
    bool m_applicationsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
