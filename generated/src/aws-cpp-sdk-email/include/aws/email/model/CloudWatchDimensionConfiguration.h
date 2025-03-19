/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/DimensionValueSource.h>
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
   * <p>Contains the dimension configuration to use when you publish email sending
   * events to Amazon CloudWatch.</p> <p>For information about publishing email
   * sending events to Amazon CloudWatch, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CloudWatchDimensionConfiguration">AWS
   * API Reference</a></p>
   */
  class CloudWatchDimensionConfiguration
  {
  public:
    AWS_SES_API CloudWatchDimensionConfiguration() = default;
    AWS_SES_API CloudWatchDimensionConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API CloudWatchDimensionConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name must meet the following requirements:</p> <ul> <li> <p>Contain
     * only ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), dashes (-), or
     * colons (:).</p> </li> <li> <p>Contain 256 characters or fewer.</p> </li> </ul>
     */
    inline const Aws::String& GetDimensionName() const { return m_dimensionName; }
    inline bool DimensionNameHasBeenSet() const { return m_dimensionNameHasBeenSet; }
    template<typename DimensionNameT = Aws::String>
    void SetDimensionName(DimensionNameT&& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = std::forward<DimensionNameT>(value); }
    template<typename DimensionNameT = Aws::String>
    CloudWatchDimensionConfiguration& WithDimensionName(DimensionNameT&& value) { SetDimensionName(std::forward<DimensionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The place where Amazon SES finds the value of a dimension to publish to
     * Amazon CloudWatch. To use the message tags that you specify using an
     * <code>X-SES-MESSAGE-TAGS</code> header or a parameter to the
     * <code>SendEmail</code>/<code>SendRawEmail</code> API, specify
     * <code>messageTag</code>. To use your own email headers, specify
     * <code>emailHeader</code>. To put a custom tag on any link included in your
     * email, specify <code>linkTag</code>.</p>
     */
    inline DimensionValueSource GetDimensionValueSource() const { return m_dimensionValueSource; }
    inline bool DimensionValueSourceHasBeenSet() const { return m_dimensionValueSourceHasBeenSet; }
    inline void SetDimensionValueSource(DimensionValueSource value) { m_dimensionValueSourceHasBeenSet = true; m_dimensionValueSource = value; }
    inline CloudWatchDimensionConfiguration& WithDimensionValueSource(DimensionValueSource value) { SetDimensionValueSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you do not provide the value of the dimension when you send an email. The
     * default value must meet the following requirements:</p> <ul> <li> <p>Contain
     * only ASCII letters (a-z, A-Z), numbers (0-9), underscores (_), dashes (-), at
     * signs (@), or periods (.).</p> </li> <li> <p>Contain 256 characters or
     * fewer.</p> </li> </ul>
     */
    inline const Aws::String& GetDefaultDimensionValue() const { return m_defaultDimensionValue; }
    inline bool DefaultDimensionValueHasBeenSet() const { return m_defaultDimensionValueHasBeenSet; }
    template<typename DefaultDimensionValueT = Aws::String>
    void SetDefaultDimensionValue(DefaultDimensionValueT&& value) { m_defaultDimensionValueHasBeenSet = true; m_defaultDimensionValue = std::forward<DefaultDimensionValueT>(value); }
    template<typename DefaultDimensionValueT = Aws::String>
    CloudWatchDimensionConfiguration& WithDefaultDimensionValue(DefaultDimensionValueT&& value) { SetDefaultDimensionValue(std::forward<DefaultDimensionValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dimensionName;
    bool m_dimensionNameHasBeenSet = false;

    DimensionValueSource m_dimensionValueSource{DimensionValueSource::NOT_SET};
    bool m_dimensionValueSourceHasBeenSet = false;

    Aws::String m_defaultDimensionValue;
    bool m_defaultDimensionValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
