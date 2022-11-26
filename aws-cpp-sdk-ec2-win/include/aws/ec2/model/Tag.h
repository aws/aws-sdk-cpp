﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a tag.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Tag">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API Tag
  {
  public:
    Tag();
    Tag(const Aws::Utils::Xml::XmlNode& xmlNode);
    Tag& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys are case-sensitive and
     * accept a maximum of 127 Unicode characters. May not begin with
     * <code>aws:</code>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys are case-sensitive and
     * accept a maximum of 127 Unicode characters. May not begin with
     * <code>aws:</code>.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys are case-sensitive and
     * accept a maximum of 127 Unicode characters. May not begin with
     * <code>aws:</code>.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys are case-sensitive and
     * accept a maximum of 127 Unicode characters. May not begin with
     * <code>aws:</code>.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys are case-sensitive and
     * accept a maximum of 127 Unicode characters. May not begin with
     * <code>aws:</code>.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys are case-sensitive and
     * accept a maximum of 127 Unicode characters. May not begin with
     * <code>aws:</code>.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys are case-sensitive and
     * accept a maximum of 127 Unicode characters. May not begin with
     * <code>aws:</code>.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key of the tag.</p> <p>Constraints: Tag keys are case-sensitive and
     * accept a maximum of 127 Unicode characters. May not begin with
     * <code>aws:</code>.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values are case-sensitive and
     * accept a maximum of 256 Unicode characters.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values are case-sensitive and
     * accept a maximum of 256 Unicode characters.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values are case-sensitive and
     * accept a maximum of 256 Unicode characters.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values are case-sensitive and
     * accept a maximum of 256 Unicode characters.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values are case-sensitive and
     * accept a maximum of 256 Unicode characters.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values are case-sensitive and
     * accept a maximum of 256 Unicode characters.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values are case-sensitive and
     * accept a maximum of 256 Unicode characters.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the tag.</p> <p>Constraints: Tag values are case-sensitive and
     * accept a maximum of 256 Unicode characters.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
