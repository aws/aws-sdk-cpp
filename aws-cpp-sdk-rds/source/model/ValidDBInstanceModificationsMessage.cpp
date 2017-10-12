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

#include <aws/rds/model/ValidDBInstanceModificationsMessage.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

ValidDBInstanceModificationsMessage::ValidDBInstanceModificationsMessage() : 
    m_storageHasBeenSet(false)
{
}

ValidDBInstanceModificationsMessage::ValidDBInstanceModificationsMessage(const XmlNode& xmlNode) : 
    m_storageHasBeenSet(false)
{
  *this = xmlNode;
}

ValidDBInstanceModificationsMessage& ValidDBInstanceModificationsMessage::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode storageNode = resultNode.FirstChild("Storage");
    if(!storageNode.IsNull())
    {
      XmlNode storageMember = storageNode.FirstChild("ValidStorageOptions");
      while(!storageMember.IsNull())
      {
        m_storage.push_back(storageMember);
        storageMember = storageMember.NextNode("ValidStorageOptions");
      }

      m_storageHasBeenSet = true;
    }
  }

  return *this;
}

void ValidDBInstanceModificationsMessage::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_storageHasBeenSet)
  {
      unsigned storageIdx = 1;
      for(auto& item : m_storage)
      {
        Aws::StringStream storageSs;
        storageSs << location << index << locationValue << ".ValidStorageOptions." << storageIdx++;
        item.OutputToStream(oStream, storageSs.str().c_str());
      }
  }

}

void ValidDBInstanceModificationsMessage::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_storageHasBeenSet)
  {
      unsigned storageIdx = 1;
      for(auto& item : m_storage)
      {
        Aws::StringStream storageSs;
        storageSs << location <<  ".ValidStorageOptions." << storageIdx++;
        item.OutputToStream(oStream, storageSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
