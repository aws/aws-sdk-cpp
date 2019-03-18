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
#include <aws/sdb/SimpleDB_EXPORTS.h>
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
namespace SimpleDB
{
namespace Model
{

  /**
   * <p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/ReplaceableAttribute">AWS
   * API Reference</a></p>
   */
  class AWS_SIMPLEDB_API ReplaceableAttribute
  {
  public:
    ReplaceableAttribute();
    ReplaceableAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReplaceableAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * The name of the replaceable attribute.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the replaceable attribute.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the replaceable attribute.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the replaceable attribute.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the replaceable attribute.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the replaceable attribute.
     */
    inline ReplaceableAttribute& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the replaceable attribute.
     */
    inline ReplaceableAttribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the replaceable attribute.
     */
    inline ReplaceableAttribute& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The value of the replaceable attribute.
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * The value of the replaceable attribute.
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * The value of the replaceable attribute.
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * The value of the replaceable attribute.
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * The value of the replaceable attribute.
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * The value of the replaceable attribute.
     */
    inline ReplaceableAttribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * The value of the replaceable attribute.
     */
    inline ReplaceableAttribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * The value of the replaceable attribute.
     */
    inline ReplaceableAttribute& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * A flag specifying whether or not to replace the attribute/value pair or to add a
     * new attribute/value pair. The default setting is <code>false</code>.
     */
    inline bool GetReplace() const{ return m_replace; }

    /**
     * A flag specifying whether or not to replace the attribute/value pair or to add a
     * new attribute/value pair. The default setting is <code>false</code>.
     */
    inline bool ReplaceHasBeenSet() const { return m_replaceHasBeenSet; }

    /**
     * A flag specifying whether or not to replace the attribute/value pair or to add a
     * new attribute/value pair. The default setting is <code>false</code>.
     */
    inline void SetReplace(bool value) { m_replaceHasBeenSet = true; m_replace = value; }

    /**
     * A flag specifying whether or not to replace the attribute/value pair or to add a
     * new attribute/value pair. The default setting is <code>false</code>.
     */
    inline ReplaceableAttribute& WithReplace(bool value) { SetReplace(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    bool m_replace;
    bool m_replaceHasBeenSet;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
