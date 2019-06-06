/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/CloudWatchDimensionConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>Contains information associated with an Amazon CloudWatch event destination
   * to which email sending events are published.</p> <p>Event destinations, such as
   * Amazon CloudWatch, are associated with configuration sets, which enable you to
   * publish email sending events. For information about using configuration sets,
   * see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CloudWatchDestination">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API CloudWatchDestination
  {
  public:
    CloudWatchDestination();
    CloudWatchDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    CloudWatchDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A list of dimensions upon which to categorize your emails when you publish
     * email sending events to Amazon CloudWatch.</p>
     */
    inline const Aws::Vector<CloudWatchDimensionConfiguration>& GetDimensionConfigurations() const{ return m_dimensionConfigurations; }

    /**
     * <p>A list of dimensions upon which to categorize your emails when you publish
     * email sending events to Amazon CloudWatch.</p>
     */
    inline bool DimensionConfigurationsHasBeenSet() const { return m_dimensionConfigurationsHasBeenSet; }

    /**
     * <p>A list of dimensions upon which to categorize your emails when you publish
     * email sending events to Amazon CloudWatch.</p>
     */
    inline void SetDimensionConfigurations(const Aws::Vector<CloudWatchDimensionConfiguration>& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations = value; }

    /**
     * <p>A list of dimensions upon which to categorize your emails when you publish
     * email sending events to Amazon CloudWatch.</p>
     */
    inline void SetDimensionConfigurations(Aws::Vector<CloudWatchDimensionConfiguration>&& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations = std::move(value); }

    /**
     * <p>A list of dimensions upon which to categorize your emails when you publish
     * email sending events to Amazon CloudWatch.</p>
     */
    inline CloudWatchDestination& WithDimensionConfigurations(const Aws::Vector<CloudWatchDimensionConfiguration>& value) { SetDimensionConfigurations(value); return *this;}

    /**
     * <p>A list of dimensions upon which to categorize your emails when you publish
     * email sending events to Amazon CloudWatch.</p>
     */
    inline CloudWatchDestination& WithDimensionConfigurations(Aws::Vector<CloudWatchDimensionConfiguration>&& value) { SetDimensionConfigurations(std::move(value)); return *this;}

    /**
     * <p>A list of dimensions upon which to categorize your emails when you publish
     * email sending events to Amazon CloudWatch.</p>
     */
    inline CloudWatchDestination& AddDimensionConfigurations(const CloudWatchDimensionConfiguration& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations.push_back(value); return *this; }

    /**
     * <p>A list of dimensions upon which to categorize your emails when you publish
     * email sending events to Amazon CloudWatch.</p>
     */
    inline CloudWatchDestination& AddDimensionConfigurations(CloudWatchDimensionConfiguration&& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CloudWatchDimensionConfiguration> m_dimensionConfigurations;
    bool m_dimensionConfigurationsHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
