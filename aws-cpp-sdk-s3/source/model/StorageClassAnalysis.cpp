﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/model/StorageClassAnalysis.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3
{
namespace Model
{

StorageClassAnalysis::StorageClassAnalysis() : 
    m_dataExportHasBeenSet(false)
{
}

StorageClassAnalysis::StorageClassAnalysis(const XmlNode& xmlNode) : 
    m_dataExportHasBeenSet(false)
{
  *this = xmlNode;
}

StorageClassAnalysis& StorageClassAnalysis::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dataExportNode = resultNode.FirstChild("DataExport");
    if(!dataExportNode.IsNull())
    {
      m_dataExport = dataExportNode;
      m_dataExportHasBeenSet = true;
    }
  }

  return *this;
}

void StorageClassAnalysis::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_dataExportHasBeenSet)
  {
   XmlNode dataExportNode = parentNode.CreateChildElement("DataExport");
   m_dataExport.AddToNode(dataExportNode);
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
