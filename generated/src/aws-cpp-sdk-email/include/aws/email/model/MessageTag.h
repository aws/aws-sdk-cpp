﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
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
namespace SES
{
namespace Model
{

  /**
   * <p>Contains the name and value of a tag that you can provide to
   * <code>SendEmail</code> or <code>SendRawEmail</code> to apply to an email.</p>
   * <p>Message tags, which you use with configuration sets, enable you to publish
   * email sending events. For information about using configuration sets, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/MessageTag">AWS
   * API Reference</a></p>
   */
  class MessageTag
  {
  public:
    AWS_SES_API MessageTag();
    AWS_SES_API MessageTag(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API MessageTag& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the tag. The name must meet the following requirements:</p> <ul>
     * <li> <p>Contain only ASCII letters (a-z, A-Z), numbers (0-9), underscores (_),
     * or dashes (-).</p> </li> <li> <p>Contain 256 characters or fewer.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MessageTag& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MessageTag& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MessageTag& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the tag. The value must meet the following requirements:</p>
     * <ul> <li> <p>Contain only ASCII letters (a-z, A-Z), numbers (0-9), underscores
     * (_), or dashes (-).</p> </li> <li> <p>Contain 256 characters or fewer.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline MessageTag& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline MessageTag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline MessageTag& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
