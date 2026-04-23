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
#include <aws/sdb/model/ReplaceableAttribute.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/sdb-2009-04-15/ReplaceableItem">AWS
   * API Reference</a></p>
   */
  class AWS_SIMPLEDB_API ReplaceableItem
  {
  public:
    ReplaceableItem();
    ReplaceableItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    ReplaceableItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * The name of the replaceable item.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the replaceable item.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the replaceable item.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the replaceable item.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the replaceable item.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the replaceable item.
     */
    inline ReplaceableItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the replaceable item.
     */
    inline ReplaceableItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the replaceable item.
     */
    inline ReplaceableItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The list of attributes for a replaceable item.
     */
    inline const Aws::Vector<ReplaceableAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * The list of attributes for a replaceable item.
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * The list of attributes for a replaceable item.
     */
    inline void SetAttributes(const Aws::Vector<ReplaceableAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * The list of attributes for a replaceable item.
     */
    inline void SetAttributes(Aws::Vector<ReplaceableAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * The list of attributes for a replaceable item.
     */
    inline ReplaceableItem& WithAttributes(const Aws::Vector<ReplaceableAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * The list of attributes for a replaceable item.
     */
    inline ReplaceableItem& WithAttributes(Aws::Vector<ReplaceableAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * The list of attributes for a replaceable item.
     */
    inline ReplaceableItem& AddAttributes(const ReplaceableAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * The list of attributes for a replaceable item.
     */
    inline ReplaceableItem& AddAttributes(ReplaceableAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<ReplaceableAttribute> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
