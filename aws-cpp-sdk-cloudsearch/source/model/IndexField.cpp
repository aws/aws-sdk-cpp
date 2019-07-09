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

#include <aws/cloudsearch/model/IndexField.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

IndexField::IndexField() : 
    m_indexFieldNameHasBeenSet(false),
    m_indexFieldType(IndexFieldType::NOT_SET),
    m_indexFieldTypeHasBeenSet(false),
    m_intOptionsHasBeenSet(false),
    m_doubleOptionsHasBeenSet(false),
    m_literalOptionsHasBeenSet(false),
    m_textOptionsHasBeenSet(false),
    m_dateOptionsHasBeenSet(false),
    m_latLonOptionsHasBeenSet(false),
    m_intArrayOptionsHasBeenSet(false),
    m_doubleArrayOptionsHasBeenSet(false),
    m_literalArrayOptionsHasBeenSet(false),
    m_textArrayOptionsHasBeenSet(false),
    m_dateArrayOptionsHasBeenSet(false)
{
}

IndexField::IndexField(const XmlNode& xmlNode) : 
    m_indexFieldNameHasBeenSet(false),
    m_indexFieldType(IndexFieldType::NOT_SET),
    m_indexFieldTypeHasBeenSet(false),
    m_intOptionsHasBeenSet(false),
    m_doubleOptionsHasBeenSet(false),
    m_literalOptionsHasBeenSet(false),
    m_textOptionsHasBeenSet(false),
    m_dateOptionsHasBeenSet(false),
    m_latLonOptionsHasBeenSet(false),
    m_intArrayOptionsHasBeenSet(false),
    m_doubleArrayOptionsHasBeenSet(false),
    m_literalArrayOptionsHasBeenSet(false),
    m_textArrayOptionsHasBeenSet(false),
    m_dateArrayOptionsHasBeenSet(false)
{
  *this = xmlNode;
}

IndexField& IndexField::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode indexFieldNameNode = resultNode.FirstChild("IndexFieldName");
    if(!indexFieldNameNode.IsNull())
    {
      m_indexFieldName = indexFieldNameNode.GetText();
      m_indexFieldNameHasBeenSet = true;
    }
    XmlNode indexFieldTypeNode = resultNode.FirstChild("IndexFieldType");
    if(!indexFieldTypeNode.IsNull())
    {
      m_indexFieldType = IndexFieldTypeMapper::GetIndexFieldTypeForName(StringUtils::Trim(indexFieldTypeNode.GetText().c_str()).c_str());
      m_indexFieldTypeHasBeenSet = true;
    }
    XmlNode intOptionsNode = resultNode.FirstChild("IntOptions");
    if(!intOptionsNode.IsNull())
    {
      m_intOptions = intOptionsNode;
      m_intOptionsHasBeenSet = true;
    }
    XmlNode doubleOptionsNode = resultNode.FirstChild("DoubleOptions");
    if(!doubleOptionsNode.IsNull())
    {
      m_doubleOptions = doubleOptionsNode;
      m_doubleOptionsHasBeenSet = true;
    }
    XmlNode literalOptionsNode = resultNode.FirstChild("LiteralOptions");
    if(!literalOptionsNode.IsNull())
    {
      m_literalOptions = literalOptionsNode;
      m_literalOptionsHasBeenSet = true;
    }
    XmlNode textOptionsNode = resultNode.FirstChild("TextOptions");
    if(!textOptionsNode.IsNull())
    {
      m_textOptions = textOptionsNode;
      m_textOptionsHasBeenSet = true;
    }
    XmlNode dateOptionsNode = resultNode.FirstChild("DateOptions");
    if(!dateOptionsNode.IsNull())
    {
      m_dateOptions = dateOptionsNode;
      m_dateOptionsHasBeenSet = true;
    }
    XmlNode latLonOptionsNode = resultNode.FirstChild("LatLonOptions");
    if(!latLonOptionsNode.IsNull())
    {
      m_latLonOptions = latLonOptionsNode;
      m_latLonOptionsHasBeenSet = true;
    }
    XmlNode intArrayOptionsNode = resultNode.FirstChild("IntArrayOptions");
    if(!intArrayOptionsNode.IsNull())
    {
      m_intArrayOptions = intArrayOptionsNode;
      m_intArrayOptionsHasBeenSet = true;
    }
    XmlNode doubleArrayOptionsNode = resultNode.FirstChild("DoubleArrayOptions");
    if(!doubleArrayOptionsNode.IsNull())
    {
      m_doubleArrayOptions = doubleArrayOptionsNode;
      m_doubleArrayOptionsHasBeenSet = true;
    }
    XmlNode literalArrayOptionsNode = resultNode.FirstChild("LiteralArrayOptions");
    if(!literalArrayOptionsNode.IsNull())
    {
      m_literalArrayOptions = literalArrayOptionsNode;
      m_literalArrayOptionsHasBeenSet = true;
    }
    XmlNode textArrayOptionsNode = resultNode.FirstChild("TextArrayOptions");
    if(!textArrayOptionsNode.IsNull())
    {
      m_textArrayOptions = textArrayOptionsNode;
      m_textArrayOptionsHasBeenSet = true;
    }
    XmlNode dateArrayOptionsNode = resultNode.FirstChild("DateArrayOptions");
    if(!dateArrayOptionsNode.IsNull())
    {
      m_dateArrayOptions = dateArrayOptionsNode;
      m_dateArrayOptionsHasBeenSet = true;
    }
  }

  return *this;
}

void IndexField::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_indexFieldNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".IndexFieldName=" << StringUtils::URLEncode(m_indexFieldName.c_str()) << "&";
  }

  if(m_indexFieldTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".IndexFieldType=" << IndexFieldTypeMapper::GetNameForIndexFieldType(m_indexFieldType) << "&";
  }

  if(m_intOptionsHasBeenSet)
  {
      Aws::StringStream intOptionsLocationAndMemberSs;
      intOptionsLocationAndMemberSs << location << index << locationValue << ".IntOptions";
      m_intOptions.OutputToStream(oStream, intOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_doubleOptionsHasBeenSet)
  {
      Aws::StringStream doubleOptionsLocationAndMemberSs;
      doubleOptionsLocationAndMemberSs << location << index << locationValue << ".DoubleOptions";
      m_doubleOptions.OutputToStream(oStream, doubleOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_literalOptionsHasBeenSet)
  {
      Aws::StringStream literalOptionsLocationAndMemberSs;
      literalOptionsLocationAndMemberSs << location << index << locationValue << ".LiteralOptions";
      m_literalOptions.OutputToStream(oStream, literalOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_textOptionsHasBeenSet)
  {
      Aws::StringStream textOptionsLocationAndMemberSs;
      textOptionsLocationAndMemberSs << location << index << locationValue << ".TextOptions";
      m_textOptions.OutputToStream(oStream, textOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_dateOptionsHasBeenSet)
  {
      Aws::StringStream dateOptionsLocationAndMemberSs;
      dateOptionsLocationAndMemberSs << location << index << locationValue << ".DateOptions";
      m_dateOptions.OutputToStream(oStream, dateOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_latLonOptionsHasBeenSet)
  {
      Aws::StringStream latLonOptionsLocationAndMemberSs;
      latLonOptionsLocationAndMemberSs << location << index << locationValue << ".LatLonOptions";
      m_latLonOptions.OutputToStream(oStream, latLonOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_intArrayOptionsHasBeenSet)
  {
      Aws::StringStream intArrayOptionsLocationAndMemberSs;
      intArrayOptionsLocationAndMemberSs << location << index << locationValue << ".IntArrayOptions";
      m_intArrayOptions.OutputToStream(oStream, intArrayOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_doubleArrayOptionsHasBeenSet)
  {
      Aws::StringStream doubleArrayOptionsLocationAndMemberSs;
      doubleArrayOptionsLocationAndMemberSs << location << index << locationValue << ".DoubleArrayOptions";
      m_doubleArrayOptions.OutputToStream(oStream, doubleArrayOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_literalArrayOptionsHasBeenSet)
  {
      Aws::StringStream literalArrayOptionsLocationAndMemberSs;
      literalArrayOptionsLocationAndMemberSs << location << index << locationValue << ".LiteralArrayOptions";
      m_literalArrayOptions.OutputToStream(oStream, literalArrayOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_textArrayOptionsHasBeenSet)
  {
      Aws::StringStream textArrayOptionsLocationAndMemberSs;
      textArrayOptionsLocationAndMemberSs << location << index << locationValue << ".TextArrayOptions";
      m_textArrayOptions.OutputToStream(oStream, textArrayOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_dateArrayOptionsHasBeenSet)
  {
      Aws::StringStream dateArrayOptionsLocationAndMemberSs;
      dateArrayOptionsLocationAndMemberSs << location << index << locationValue << ".DateArrayOptions";
      m_dateArrayOptions.OutputToStream(oStream, dateArrayOptionsLocationAndMemberSs.str().c_str());
  }

}

void IndexField::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_indexFieldNameHasBeenSet)
  {
      oStream << location << ".IndexFieldName=" << StringUtils::URLEncode(m_indexFieldName.c_str()) << "&";
  }
  if(m_indexFieldTypeHasBeenSet)
  {
      oStream << location << ".IndexFieldType=" << IndexFieldTypeMapper::GetNameForIndexFieldType(m_indexFieldType) << "&";
  }
  if(m_intOptionsHasBeenSet)
  {
      Aws::String intOptionsLocationAndMember(location);
      intOptionsLocationAndMember += ".IntOptions";
      m_intOptions.OutputToStream(oStream, intOptionsLocationAndMember.c_str());
  }
  if(m_doubleOptionsHasBeenSet)
  {
      Aws::String doubleOptionsLocationAndMember(location);
      doubleOptionsLocationAndMember += ".DoubleOptions";
      m_doubleOptions.OutputToStream(oStream, doubleOptionsLocationAndMember.c_str());
  }
  if(m_literalOptionsHasBeenSet)
  {
      Aws::String literalOptionsLocationAndMember(location);
      literalOptionsLocationAndMember += ".LiteralOptions";
      m_literalOptions.OutputToStream(oStream, literalOptionsLocationAndMember.c_str());
  }
  if(m_textOptionsHasBeenSet)
  {
      Aws::String textOptionsLocationAndMember(location);
      textOptionsLocationAndMember += ".TextOptions";
      m_textOptions.OutputToStream(oStream, textOptionsLocationAndMember.c_str());
  }
  if(m_dateOptionsHasBeenSet)
  {
      Aws::String dateOptionsLocationAndMember(location);
      dateOptionsLocationAndMember += ".DateOptions";
      m_dateOptions.OutputToStream(oStream, dateOptionsLocationAndMember.c_str());
  }
  if(m_latLonOptionsHasBeenSet)
  {
      Aws::String latLonOptionsLocationAndMember(location);
      latLonOptionsLocationAndMember += ".LatLonOptions";
      m_latLonOptions.OutputToStream(oStream, latLonOptionsLocationAndMember.c_str());
  }
  if(m_intArrayOptionsHasBeenSet)
  {
      Aws::String intArrayOptionsLocationAndMember(location);
      intArrayOptionsLocationAndMember += ".IntArrayOptions";
      m_intArrayOptions.OutputToStream(oStream, intArrayOptionsLocationAndMember.c_str());
  }
  if(m_doubleArrayOptionsHasBeenSet)
  {
      Aws::String doubleArrayOptionsLocationAndMember(location);
      doubleArrayOptionsLocationAndMember += ".DoubleArrayOptions";
      m_doubleArrayOptions.OutputToStream(oStream, doubleArrayOptionsLocationAndMember.c_str());
  }
  if(m_literalArrayOptionsHasBeenSet)
  {
      Aws::String literalArrayOptionsLocationAndMember(location);
      literalArrayOptionsLocationAndMember += ".LiteralArrayOptions";
      m_literalArrayOptions.OutputToStream(oStream, literalArrayOptionsLocationAndMember.c_str());
  }
  if(m_textArrayOptionsHasBeenSet)
  {
      Aws::String textArrayOptionsLocationAndMember(location);
      textArrayOptionsLocationAndMember += ".TextArrayOptions";
      m_textArrayOptions.OutputToStream(oStream, textArrayOptionsLocationAndMember.c_str());
  }
  if(m_dateArrayOptionsHasBeenSet)
  {
      Aws::String dateArrayOptionsLocationAndMember(location);
      dateArrayOptionsLocationAndMember += ".DateArrayOptions";
      m_dateArrayOptions.OutputToStream(oStream, dateArrayOptionsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
