/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NeuronInfo.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

NeuronInfo::NeuronInfo(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

NeuronInfo& NeuronInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode neuronDevicesNode = resultNode.FirstChild("neuronDevices");
    if(!neuronDevicesNode.IsNull())
    {
      XmlNode neuronDevicesMember = neuronDevicesNode.FirstChild("item");
      m_neuronDevicesHasBeenSet = !neuronDevicesMember.IsNull();
      while(!neuronDevicesMember.IsNull())
      {
        m_neuronDevices.push_back(neuronDevicesMember);
        neuronDevicesMember = neuronDevicesMember.NextNode("item");
      }

      m_neuronDevicesHasBeenSet = true;
    }
    XmlNode totalNeuronDeviceMemoryInMiBNode = resultNode.FirstChild("totalNeuronDeviceMemoryInMiB");
    if(!totalNeuronDeviceMemoryInMiBNode.IsNull())
    {
      m_totalNeuronDeviceMemoryInMiB = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalNeuronDeviceMemoryInMiBNode.GetText()).c_str()).c_str());
      m_totalNeuronDeviceMemoryInMiBHasBeenSet = true;
    }
  }

  return *this;
}

void NeuronInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_neuronDevicesHasBeenSet)
  {
      unsigned neuronDevicesIdx = 1;
      for(auto& item : m_neuronDevices)
      {
        Aws::StringStream neuronDevicesSs;
        neuronDevicesSs << location << index << locationValue << ".NeuronDevices." << neuronDevicesIdx++;
        item.OutputToStream(oStream, neuronDevicesSs.str().c_str());
      }
  }

  if(m_totalNeuronDeviceMemoryInMiBHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalNeuronDeviceMemoryInMiB=" << m_totalNeuronDeviceMemoryInMiB << "&";
  }

}

void NeuronInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_neuronDevicesHasBeenSet)
  {
      unsigned neuronDevicesIdx = 1;
      for(auto& item : m_neuronDevices)
      {
        Aws::StringStream neuronDevicesSs;
        neuronDevicesSs << location << ".NeuronDevices." << neuronDevicesIdx++;
        item.OutputToStream(oStream, neuronDevicesSs.str().c_str());
      }
  }
  if(m_totalNeuronDeviceMemoryInMiBHasBeenSet)
  {
      oStream << location << ".TotalNeuronDeviceMemoryInMiB=" << m_totalNeuronDeviceMemoryInMiB << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
