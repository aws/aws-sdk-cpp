/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/model/ApplicationVersionDescription.h>
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
   * <p>Result message wrapping a single description of an application
   * version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplicationVersionDescriptionMessage">AWS
   * API Reference</a></p>
   */
  class UpdateApplicationVersionResult
  {
  public:
    AWS_ELASTICBEANSTALK_API UpdateApplicationVersionResult() = default;
    AWS_ELASTICBEANSTALK_API UpdateApplicationVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API UpdateApplicationVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> The <a>ApplicationVersionDescription</a> of the application version. </p>
     */
    inline const ApplicationVersionDescription& GetApplicationVersion() const { return m_applicationVersion; }
    template<typename ApplicationVersionT = ApplicationVersionDescription>
    void SetApplicationVersion(ApplicationVersionT&& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = std::forward<ApplicationVersionT>(value); }
    template<typename ApplicationVersionT = ApplicationVersionDescription>
    UpdateApplicationVersionResult& WithApplicationVersion(ApplicationVersionT&& value) { SetApplicationVersion(std::forward<ApplicationVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    UpdateApplicationVersionResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ApplicationVersionDescription m_applicationVersion;
    bool m_applicationVersionHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
