/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/model/EnvironmentResourceDescription.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
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
   * <p>Result message containing a list of environment resource
   * descriptions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/EnvironmentResourceDescriptionsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeEnvironmentResourcesResult
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentResourcesResult() = default;
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> A list of <a>EnvironmentResourceDescription</a>. </p>
     */
    inline const EnvironmentResourceDescription& GetEnvironmentResources() const { return m_environmentResources; }
    template<typename EnvironmentResourcesT = EnvironmentResourceDescription>
    void SetEnvironmentResources(EnvironmentResourcesT&& value) { m_environmentResourcesHasBeenSet = true; m_environmentResources = std::forward<EnvironmentResourcesT>(value); }
    template<typename EnvironmentResourcesT = EnvironmentResourceDescription>
    DescribeEnvironmentResourcesResult& WithEnvironmentResources(EnvironmentResourcesT&& value) { SetEnvironmentResources(std::forward<EnvironmentResourcesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeEnvironmentResourcesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    EnvironmentResourceDescription m_environmentResources;
    bool m_environmentResourcesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
