/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ApplicationResourceLifecycleConfig.h>
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
  class UpdateApplicationResourceLifecycleResult
  {
  public:
    AWS_ELASTICBEANSTALK_API UpdateApplicationResourceLifecycleResult() = default;
    AWS_ELASTICBEANSTALK_API UpdateApplicationResourceLifecycleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API UpdateApplicationResourceLifecycleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    UpdateApplicationResourceLifecycleResult& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle configuration.</p>
     */
    inline const ApplicationResourceLifecycleConfig& GetResourceLifecycleConfig() const { return m_resourceLifecycleConfig; }
    template<typename ResourceLifecycleConfigT = ApplicationResourceLifecycleConfig>
    void SetResourceLifecycleConfig(ResourceLifecycleConfigT&& value) { m_resourceLifecycleConfigHasBeenSet = true; m_resourceLifecycleConfig = std::forward<ResourceLifecycleConfigT>(value); }
    template<typename ResourceLifecycleConfigT = ApplicationResourceLifecycleConfig>
    UpdateApplicationResourceLifecycleResult& WithResourceLifecycleConfig(ResourceLifecycleConfigT&& value) { SetResourceLifecycleConfig(std::forward<ResourceLifecycleConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    UpdateApplicationResourceLifecycleResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    ApplicationResourceLifecycleConfig m_resourceLifecycleConfig;
    bool m_resourceLifecycleConfigHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
