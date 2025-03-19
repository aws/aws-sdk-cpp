/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes a granularity of a metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/MetricGranularityType">AWS
   * API Reference</a></p>
   */
  class MetricGranularityType
  {
  public:
    AWS_AUTOSCALING_API MetricGranularityType() = default;
    AWS_AUTOSCALING_API MetricGranularityType(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API MetricGranularityType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The granularity. The only valid value is <code>1Minute</code>.</p>
     */
    inline const Aws::String& GetGranularity() const { return m_granularity; }
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
    template<typename GranularityT = Aws::String>
    void SetGranularity(GranularityT&& value) { m_granularityHasBeenSet = true; m_granularity = std::forward<GranularityT>(value); }
    template<typename GranularityT = Aws::String>
    MetricGranularityType& WithGranularity(GranularityT&& value) { SetGranularity(std::forward<GranularityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_granularity;
    bool m_granularityHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
