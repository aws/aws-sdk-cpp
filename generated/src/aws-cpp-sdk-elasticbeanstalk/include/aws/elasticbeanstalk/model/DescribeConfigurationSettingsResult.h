/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
#include <aws/elasticbeanstalk/model/ConfigurationSettingsDescription.h>
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
   * <p>The results from a request to change the configuration settings of an
   * environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ConfigurationSettingsDescriptions">AWS
   * API Reference</a></p>
   */
  class DescribeConfigurationSettingsResult
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeConfigurationSettingsResult() = default;
    AWS_ELASTICBEANSTALK_API DescribeConfigurationSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API DescribeConfigurationSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> A list of <a>ConfigurationSettingsDescription</a>. </p>
     */
    inline const Aws::Vector<ConfigurationSettingsDescription>& GetConfigurationSettings() const { return m_configurationSettings; }
    template<typename ConfigurationSettingsT = Aws::Vector<ConfigurationSettingsDescription>>
    void SetConfigurationSettings(ConfigurationSettingsT&& value) { m_configurationSettingsHasBeenSet = true; m_configurationSettings = std::forward<ConfigurationSettingsT>(value); }
    template<typename ConfigurationSettingsT = Aws::Vector<ConfigurationSettingsDescription>>
    DescribeConfigurationSettingsResult& WithConfigurationSettings(ConfigurationSettingsT&& value) { SetConfigurationSettings(std::forward<ConfigurationSettingsT>(value)); return *this;}
    template<typename ConfigurationSettingsT = ConfigurationSettingsDescription>
    DescribeConfigurationSettingsResult& AddConfigurationSettings(ConfigurationSettingsT&& value) { m_configurationSettingsHasBeenSet = true; m_configurationSettings.emplace_back(std::forward<ConfigurationSettingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeConfigurationSettingsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationSettingsDescription> m_configurationSettings;
    bool m_configurationSettingsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
