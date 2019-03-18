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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sdb/model/Attribute.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/Item">AWS API
   * Reference</a></p>
   */
  class AWS_SIMPLEDB_API Item
  {
  public:
    Item();
    Item(const Aws::Utils::Xml::XmlNode& xmlNode);
    Item& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * The name of the item.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the item.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the item.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the item.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the item.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the item.
     */
    inline Item& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the item.
     */
    inline Item& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the item.
     */
    inline Item& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p></p>
     */
    inline const Aws::String& GetAlternateNameEncoding() const{ return m_alternateNameEncoding; }

    /**
     * <p></p>
     */
    inline bool AlternateNameEncodingHasBeenSet() const { return m_alternateNameEncodingHasBeenSet; }

    /**
     * <p></p>
     */
    inline void SetAlternateNameEncoding(const Aws::String& value) { m_alternateNameEncodingHasBeenSet = true; m_alternateNameEncoding = value; }

    /**
     * <p></p>
     */
    inline void SetAlternateNameEncoding(Aws::String&& value) { m_alternateNameEncodingHasBeenSet = true; m_alternateNameEncoding = std::move(value); }

    /**
     * <p></p>
     */
    inline void SetAlternateNameEncoding(const char* value) { m_alternateNameEncodingHasBeenSet = true; m_alternateNameEncoding.assign(value); }

    /**
     * <p></p>
     */
    inline Item& WithAlternateNameEncoding(const Aws::String& value) { SetAlternateNameEncoding(value); return *this;}

    /**
     * <p></p>
     */
    inline Item& WithAlternateNameEncoding(Aws::String&& value) { SetAlternateNameEncoding(std::move(value)); return *this;}

    /**
     * <p></p>
     */
    inline Item& WithAlternateNameEncoding(const char* value) { SetAlternateNameEncoding(value); return *this;}


    /**
     * A list of attributes.
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * A list of attributes.
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * A list of attributes.
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * A list of attributes.
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * A list of attributes.
     */
    inline Item& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * A list of attributes.
     */
    inline Item& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * A list of attributes.
     */
    inline Item& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * A list of attributes.
     */
    inline Item& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_alternateNameEncoding;
    bool m_alternateNameEncodingHasBeenSet;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
