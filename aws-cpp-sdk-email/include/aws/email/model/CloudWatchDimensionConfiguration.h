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
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CloudWatchDimensionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API CloudWatchDimensionConfiguration
  {
  public:
    CloudWatchDimensionConfiguration();
    CloudWatchDimensionConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    CloudWatchDimensionConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name must:</p> <ul> <li> <p>This value can only contain ASCII
     * letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li>
     * <li> <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetDimensionName() const{ return m_dimensionName; }

    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name must:</p> <ul> <li> <p>This value can only contain ASCII
     * letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li>
     * <li> <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline bool DimensionNameHasBeenSet() const { return m_dimensionNameHasBeenSet; }

    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name must:</p> <ul> <li> <p>This value can only contain ASCII
     * letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li>
     * <li> <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline void SetDimensionName(const Aws::String& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = value; }

    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name must:</p> <ul> <li> <p>This value can only contain ASCII
     * letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li>
     * <li> <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline void SetDimensionName(Aws::String&& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = std::move(value); }

    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name must:</p> <ul> <li> <p>This value can only contain ASCII
     * letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li>
     * <li> <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline void SetDimensionName(const char* value) { m_dimensionNameHasBeenSet = true; m_dimensionName.assign(value); }

    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name must:</p> <ul> <li> <p>This value can only contain ASCII
     * letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li>
     * <li> <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline CloudWatchDimensionConfiguration& WithDimensionName(const Aws::String& value) { SetDimensionName(value); return *this;}

    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name must:</p> <ul> <li> <p>This value can only contain ASCII
     * letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li>
     * <li> <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline CloudWatchDimensionConfiguration& WithDimensionName(Aws::String&& value) { SetDimensionName(std::move(value)); return *this;}

    /**
     * <p>The name of an Amazon CloudWatch dimension associated with an email sending
     * metric. The name must:</p> <ul> <li> <p>This value can only contain ASCII
     * letters (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li>
     * <li> <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline CloudWatchDimensionConfiguration& WithDimensionName(const char* value) { SetDimensionName(value); return *this;}


    /**
     * <p>The place where Amazon SES finds the value of a dimension to publish to
     * Amazon CloudWatch. If you want Amazon SES to use the message tags that you
     * specify using an <code>X-SES-MESSAGE-TAGS</code> header or a parameter to the
     * <code>SendEmail</code>/<code>SendRawEmail</code> API, choose
     * <code>messageTag</code>. If you want Amazon SES to use your own email headers,
     * choose <code>emailHeader</code>.</p>
     */
    inline const DimensionValueSource& GetDimensionValueSource() const{ return m_dimensionValueSource; }

    /**
     * <p>The place where Amazon SES finds the value of a dimension to publish to
     * Amazon CloudWatch. If you want Amazon SES to use the message tags that you
     * specify using an <code>X-SES-MESSAGE-TAGS</code> header or a parameter to the
     * <code>SendEmail</code>/<code>SendRawEmail</code> API, choose
     * <code>messageTag</code>. If you want Amazon SES to use your own email headers,
     * choose <code>emailHeader</code>.</p>
     */
    inline bool DimensionValueSourceHasBeenSet() const { return m_dimensionValueSourceHasBeenSet; }

    /**
     * <p>The place where Amazon SES finds the value of a dimension to publish to
     * Amazon CloudWatch. If you want Amazon SES to use the message tags that you
     * specify using an <code>X-SES-MESSAGE-TAGS</code> header or a parameter to the
     * <code>SendEmail</code>/<code>SendRawEmail</code> API, choose
     * <code>messageTag</code>. If you want Amazon SES to use your own email headers,
     * choose <code>emailHeader</code>.</p>
     */
    inline void SetDimensionValueSource(const DimensionValueSource& value) { m_dimensionValueSourceHasBeenSet = true; m_dimensionValueSource = value; }

    /**
     * <p>The place where Amazon SES finds the value of a dimension to publish to
     * Amazon CloudWatch. If you want Amazon SES to use the message tags that you
     * specify using an <code>X-SES-MESSAGE-TAGS</code> header or a parameter to the
     * <code>SendEmail</code>/<code>SendRawEmail</code> API, choose
     * <code>messageTag</code>. If you want Amazon SES to use your own email headers,
     * choose <code>emailHeader</code>.</p>
     */
    inline void SetDimensionValueSource(DimensionValueSource&& value) { m_dimensionValueSourceHasBeenSet = true; m_dimensionValueSource = std::move(value); }

    /**
     * <p>The place where Amazon SES finds the value of a dimension to publish to
     * Amazon CloudWatch. If you want Amazon SES to use the message tags that you
     * specify using an <code>X-SES-MESSAGE-TAGS</code> header or a parameter to the
     * <code>SendEmail</code>/<code>SendRawEmail</code> API, choose
     * <code>messageTag</code>. If you want Amazon SES to use your own email headers,
     * choose <code>emailHeader</code>.</p>
     */
    inline CloudWatchDimensionConfiguration& WithDimensionValueSource(const DimensionValueSource& value) { SetDimensionValueSource(value); return *this;}

    /**
     * <p>The place where Amazon SES finds the value of a dimension to publish to
     * Amazon CloudWatch. If you want Amazon SES to use the message tags that you
     * specify using an <code>X-SES-MESSAGE-TAGS</code> header or a parameter to the
     * <code>SendEmail</code>/<code>SendRawEmail</code> API, choose
     * <code>messageTag</code>. If you want Amazon SES to use your own email headers,
     * choose <code>emailHeader</code>.</p>
     */
    inline CloudWatchDimensionConfiguration& WithDimensionValueSource(DimensionValueSource&& value) { SetDimensionValueSource(std::move(value)); return *this;}


    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you do not provide the value of the dimension when you send an email. The
     * default value must:</p> <ul> <li> <p>This value can only contain ASCII letters
     * (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li> <li>
     * <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetDefaultDimensionValue() const{ return m_defaultDimensionValue; }

    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you do not provide the value of the dimension when you send an email. The
     * default value must:</p> <ul> <li> <p>This value can only contain ASCII letters
     * (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li> <li>
     * <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline bool DefaultDimensionValueHasBeenSet() const { return m_defaultDimensionValueHasBeenSet; }

    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you do not provide the value of the dimension when you send an email. The
     * default value must:</p> <ul> <li> <p>This value can only contain ASCII letters
     * (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li> <li>
     * <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline void SetDefaultDimensionValue(const Aws::String& value) { m_defaultDimensionValueHasBeenSet = true; m_defaultDimensionValue = value; }

    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you do not provide the value of the dimension when you send an email. The
     * default value must:</p> <ul> <li> <p>This value can only contain ASCII letters
     * (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li> <li>
     * <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline void SetDefaultDimensionValue(Aws::String&& value) { m_defaultDimensionValueHasBeenSet = true; m_defaultDimensionValue = std::move(value); }

    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you do not provide the value of the dimension when you send an email. The
     * default value must:</p> <ul> <li> <p>This value can only contain ASCII letters
     * (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li> <li>
     * <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline void SetDefaultDimensionValue(const char* value) { m_defaultDimensionValueHasBeenSet = true; m_defaultDimensionValue.assign(value); }

    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you do not provide the value of the dimension when you send an email. The
     * default value must:</p> <ul> <li> <p>This value can only contain ASCII letters
     * (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li> <li>
     * <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline CloudWatchDimensionConfiguration& WithDefaultDimensionValue(const Aws::String& value) { SetDefaultDimensionValue(value); return *this;}

    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you do not provide the value of the dimension when you send an email. The
     * default value must:</p> <ul> <li> <p>This value can only contain ASCII letters
     * (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li> <li>
     * <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline CloudWatchDimensionConfiguration& WithDefaultDimensionValue(Aws::String&& value) { SetDefaultDimensionValue(std::move(value)); return *this;}

    /**
     * <p>The default value of the dimension that is published to Amazon CloudWatch if
     * you do not provide the value of the dimension when you send an email. The
     * default value must:</p> <ul> <li> <p>This value can only contain ASCII letters
     * (a-z, A-Z), numbers (0-9), underscores (_), or dashes (-).</p> </li> <li>
     * <p>Contain less than 256 characters.</p> </li> </ul>
     */
    inline CloudWatchDimensionConfiguration& WithDefaultDimensionValue(const char* value) { SetDefaultDimensionValue(value); return *this;}

  private:

    Aws::String m_dimensionName;
    bool m_dimensionNameHasBeenSet;

    DimensionValueSource m_dimensionValueSource;
    bool m_dimensionValueSourceHasBeenSet;

    Aws::String m_defaultDimensionValue;
    bool m_defaultDimensionValueHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
