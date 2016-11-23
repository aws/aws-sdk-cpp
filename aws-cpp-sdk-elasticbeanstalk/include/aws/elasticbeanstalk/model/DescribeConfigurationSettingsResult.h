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
#include <aws/elasticbeanstalk/model/ConfigurationSettingsDescription.h>

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
   * environment.</p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeConfigurationSettingsResult
  {
  public:
    DescribeConfigurationSettingsResult();
    DescribeConfigurationSettingsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeConfigurationSettingsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p> A list of <a>ConfigurationSettingsDescription</a>. </p>
     */
    inline const Aws::Vector<ConfigurationSettingsDescription>& GetConfigurationSettings() const{ return m_configurationSettings; }

    /**
     * <p> A list of <a>ConfigurationSettingsDescription</a>. </p>
     */
    inline void SetConfigurationSettings(const Aws::Vector<ConfigurationSettingsDescription>& value) { m_configurationSettings = value; }

    /**
     * <p> A list of <a>ConfigurationSettingsDescription</a>. </p>
     */
    inline void SetConfigurationSettings(Aws::Vector<ConfigurationSettingsDescription>&& value) { m_configurationSettings = value; }

    /**
     * <p> A list of <a>ConfigurationSettingsDescription</a>. </p>
     */
    inline DescribeConfigurationSettingsResult& WithConfigurationSettings(const Aws::Vector<ConfigurationSettingsDescription>& value) { SetConfigurationSettings(value); return *this;}

    /**
     * <p> A list of <a>ConfigurationSettingsDescription</a>. </p>
     */
    inline DescribeConfigurationSettingsResult& WithConfigurationSettings(Aws::Vector<ConfigurationSettingsDescription>&& value) { SetConfigurationSettings(value); return *this;}

    /**
     * <p> A list of <a>ConfigurationSettingsDescription</a>. </p>
     */
    inline DescribeConfigurationSettingsResult& AddConfigurationSettings(const ConfigurationSettingsDescription& value) { m_configurationSettings.push_back(value); return *this; }

    /**
     * <p> A list of <a>ConfigurationSettingsDescription</a>. </p>
     */
    inline DescribeConfigurationSettingsResult& AddConfigurationSettings(ConfigurationSettingsDescription&& value) { m_configurationSettings.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeConfigurationSettingsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeConfigurationSettingsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<ConfigurationSettingsDescription> m_configurationSettings;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws