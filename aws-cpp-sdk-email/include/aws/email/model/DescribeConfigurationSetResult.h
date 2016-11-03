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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/model/ConfigurationSet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/email/model/EventDestination.h>

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
namespace SES
{
namespace Model
{
  /**
   * <p>Represents the details of a configuration set. Configuration sets enable you
   * to publish email sending events. For information about using configuration sets,
   * see the <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p>
   */
  class AWS_SES_API DescribeConfigurationSetResult
  {
  public:
    DescribeConfigurationSetResult();
    DescribeConfigurationSetResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeConfigurationSetResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The configuration set object associated with the specified configuration
     * set.</p>
     */
    inline const ConfigurationSet& GetConfigurationSet() const{ return m_configurationSet; }

    /**
     * <p>The configuration set object associated with the specified configuration
     * set.</p>
     */
    inline void SetConfigurationSet(const ConfigurationSet& value) { m_configurationSet = value; }

    /**
     * <p>The configuration set object associated with the specified configuration
     * set.</p>
     */
    inline void SetConfigurationSet(ConfigurationSet&& value) { m_configurationSet = value; }

    /**
     * <p>The configuration set object associated with the specified configuration
     * set.</p>
     */
    inline DescribeConfigurationSetResult& WithConfigurationSet(const ConfigurationSet& value) { SetConfigurationSet(value); return *this;}

    /**
     * <p>The configuration set object associated with the specified configuration
     * set.</p>
     */
    inline DescribeConfigurationSetResult& WithConfigurationSet(ConfigurationSet&& value) { SetConfigurationSet(value); return *this;}

    /**
     * <p>A list of event destinations associated with the configuration set. </p>
     */
    inline const Aws::Vector<EventDestination>& GetEventDestinations() const{ return m_eventDestinations; }

    /**
     * <p>A list of event destinations associated with the configuration set. </p>
     */
    inline void SetEventDestinations(const Aws::Vector<EventDestination>& value) { m_eventDestinations = value; }

    /**
     * <p>A list of event destinations associated with the configuration set. </p>
     */
    inline void SetEventDestinations(Aws::Vector<EventDestination>&& value) { m_eventDestinations = value; }

    /**
     * <p>A list of event destinations associated with the configuration set. </p>
     */
    inline DescribeConfigurationSetResult& WithEventDestinations(const Aws::Vector<EventDestination>& value) { SetEventDestinations(value); return *this;}

    /**
     * <p>A list of event destinations associated with the configuration set. </p>
     */
    inline DescribeConfigurationSetResult& WithEventDestinations(Aws::Vector<EventDestination>&& value) { SetEventDestinations(value); return *this;}

    /**
     * <p>A list of event destinations associated with the configuration set. </p>
     */
    inline DescribeConfigurationSetResult& AddEventDestinations(const EventDestination& value) { m_eventDestinations.push_back(value); return *this; }

    /**
     * <p>A list of event destinations associated with the configuration set. </p>
     */
    inline DescribeConfigurationSetResult& AddEventDestinations(EventDestination&& value) { m_eventDestinations.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeConfigurationSetResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeConfigurationSetResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    ConfigurationSet m_configurationSet;
    Aws::Vector<EventDestination> m_eventDestinations;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws