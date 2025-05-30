﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CloudWatchDestination">AWS
   * API Reference</a></p>
   */
  class CloudWatchDestination
  {
  public:
    AWS_SES_API CloudWatchDestination() = default;
    AWS_SES_API CloudWatchDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API CloudWatchDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A list of dimensions upon which to categorize your emails when you publish
     * email sending events to Amazon CloudWatch.</p>
     */
    inline const Aws::Vector<CloudWatchDimensionConfiguration>& GetDimensionConfigurations() const { return m_dimensionConfigurations; }
    inline bool DimensionConfigurationsHasBeenSet() const { return m_dimensionConfigurationsHasBeenSet; }
    template<typename DimensionConfigurationsT = Aws::Vector<CloudWatchDimensionConfiguration>>
    void SetDimensionConfigurations(DimensionConfigurationsT&& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations = std::forward<DimensionConfigurationsT>(value); }
    template<typename DimensionConfigurationsT = Aws::Vector<CloudWatchDimensionConfiguration>>
    CloudWatchDestination& WithDimensionConfigurations(DimensionConfigurationsT&& value) { SetDimensionConfigurations(std::forward<DimensionConfigurationsT>(value)); return *this;}
    template<typename DimensionConfigurationsT = CloudWatchDimensionConfiguration>
    CloudWatchDestination& AddDimensionConfigurations(DimensionConfigurationsT&& value) { m_dimensionConfigurationsHasBeenSet = true; m_dimensionConfigurations.emplace_back(std::forward<DimensionConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CloudWatchDimensionConfiguration> m_dimensionConfigurations;
    bool m_dimensionConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
