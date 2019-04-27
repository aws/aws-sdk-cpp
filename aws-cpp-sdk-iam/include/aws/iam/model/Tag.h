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
#include <aws/iam/IAM_EXPORTS.h>
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
namespace IAM
{
namespace Model
{

  /**
   * <p>A structure that represents user-provided metadata that can be associated
   * with a resource such as an IAM user or role. For more information about tagging,
   * see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
   * Identities</a> in the <i>IAM User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/Tag">AWS API
   * Reference</a></p>
   */
  class AWS_IAM_API Tag
  {
  public:
    Tag();
    Tag(const Aws::Utils::Xml::XmlNode& xmlNode);
    Tag& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The key name that can be used to look up or retrieve the associated value.
     * For example, <code>Department</code> or <code>Cost Center</code> are common
     * choices.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key name that can be used to look up or retrieve the associated value.
     * For example, <code>Department</code> or <code>Cost Center</code> are common
     * choices.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key name that can be used to look up or retrieve the associated value.
     * For example, <code>Department</code> or <code>Cost Center</code> are common
     * choices.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key name that can be used to look up or retrieve the associated value.
     * For example, <code>Department</code> or <code>Cost Center</code> are common
     * choices.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key name that can be used to look up or retrieve the associated value.
     * For example, <code>Department</code> or <code>Cost Center</code> are common
     * choices.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key name that can be used to look up or retrieve the associated value.
     * For example, <code>Department</code> or <code>Cost Center</code> are common
     * choices.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key name that can be used to look up or retrieve the associated value.
     * For example, <code>Department</code> or <code>Cost Center</code> are common
     * choices.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key name that can be used to look up or retrieve the associated value.
     * For example, <code>Department</code> or <code>Cost Center</code> are common
     * choices.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value associated with this tag. For example, tags with a key name of
     * <code>Department</code> could have values such as <code>Human Resources</code>,
     * <code>Accounting</code>, and <code>Support</code>. Tags with a key name of
     * <code>Cost Center</code> might have values that consist of the number associated
     * with the different cost centers in your company. Typically, many resources have
     * tags with the same key name but with different values.</p> <note> <p>AWS always
     * interprets the tag <code>Value</code> as a single string. If you need to store
     * an array, you can store comma-separated values in the string. However, you must
     * interpret the value in your code.</p> </note>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value associated with this tag. For example, tags with a key name of
     * <code>Department</code> could have values such as <code>Human Resources</code>,
     * <code>Accounting</code>, and <code>Support</code>. Tags with a key name of
     * <code>Cost Center</code> might have values that consist of the number associated
     * with the different cost centers in your company. Typically, many resources have
     * tags with the same key name but with different values.</p> <note> <p>AWS always
     * interprets the tag <code>Value</code> as a single string. If you need to store
     * an array, you can store comma-separated values in the string. However, you must
     * interpret the value in your code.</p> </note>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value associated with this tag. For example, tags with a key name of
     * <code>Department</code> could have values such as <code>Human Resources</code>,
     * <code>Accounting</code>, and <code>Support</code>. Tags with a key name of
     * <code>Cost Center</code> might have values that consist of the number associated
     * with the different cost centers in your company. Typically, many resources have
     * tags with the same key name but with different values.</p> <note> <p>AWS always
     * interprets the tag <code>Value</code> as a single string. If you need to store
     * an array, you can store comma-separated values in the string. However, you must
     * interpret the value in your code.</p> </note>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value associated with this tag. For example, tags with a key name of
     * <code>Department</code> could have values such as <code>Human Resources</code>,
     * <code>Accounting</code>, and <code>Support</code>. Tags with a key name of
     * <code>Cost Center</code> might have values that consist of the number associated
     * with the different cost centers in your company. Typically, many resources have
     * tags with the same key name but with different values.</p> <note> <p>AWS always
     * interprets the tag <code>Value</code> as a single string. If you need to store
     * an array, you can store comma-separated values in the string. However, you must
     * interpret the value in your code.</p> </note>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value associated with this tag. For example, tags with a key name of
     * <code>Department</code> could have values such as <code>Human Resources</code>,
     * <code>Accounting</code>, and <code>Support</code>. Tags with a key name of
     * <code>Cost Center</code> might have values that consist of the number associated
     * with the different cost centers in your company. Typically, many resources have
     * tags with the same key name but with different values.</p> <note> <p>AWS always
     * interprets the tag <code>Value</code> as a single string. If you need to store
     * an array, you can store comma-separated values in the string. However, you must
     * interpret the value in your code.</p> </note>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value associated with this tag. For example, tags with a key name of
     * <code>Department</code> could have values such as <code>Human Resources</code>,
     * <code>Accounting</code>, and <code>Support</code>. Tags with a key name of
     * <code>Cost Center</code> might have values that consist of the number associated
     * with the different cost centers in your company. Typically, many resources have
     * tags with the same key name but with different values.</p> <note> <p>AWS always
     * interprets the tag <code>Value</code> as a single string. If you need to store
     * an array, you can store comma-separated values in the string. However, you must
     * interpret the value in your code.</p> </note>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value associated with this tag. For example, tags with a key name of
     * <code>Department</code> could have values such as <code>Human Resources</code>,
     * <code>Accounting</code>, and <code>Support</code>. Tags with a key name of
     * <code>Cost Center</code> might have values that consist of the number associated
     * with the different cost centers in your company. Typically, many resources have
     * tags with the same key name but with different values.</p> <note> <p>AWS always
     * interprets the tag <code>Value</code> as a single string. If you need to store
     * an array, you can store comma-separated values in the string. However, you must
     * interpret the value in your code.</p> </note>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value associated with this tag. For example, tags with a key name of
     * <code>Department</code> could have values such as <code>Human Resources</code>,
     * <code>Accounting</code>, and <code>Support</code>. Tags with a key name of
     * <code>Cost Center</code> might have values that consist of the number associated
     * with the different cost centers in your company. Typically, many resources have
     * tags with the same key name but with different values.</p> <note> <p>AWS always
     * interprets the tag <code>Value</code> as a single string. If you need to store
     * an array, you can store comma-separated values in the string. However, you must
     * interpret the value in your code.</p> </note>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
