/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/UpdateGeneratedTemplateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String UpdateGeneratedTemplateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateGeneratedTemplate&";
  if(m_generatedTemplateNameHasBeenSet)
  {
    ss << "GeneratedTemplateName=" << StringUtils::URLEncode(m_generatedTemplateName.c_str()) << "&";
  }

  if(m_newGeneratedTemplateNameHasBeenSet)
  {
    ss << "NewGeneratedTemplateName=" << StringUtils::URLEncode(m_newGeneratedTemplateName.c_str()) << "&";
  }

  if(m_addResourcesHasBeenSet)
  {
    if (m_addResources.empty())
    {
      ss << "AddResources=&";
    }
    else
    {
      unsigned addResourcesCount = 1;
      for(auto& item : m_addResources)
      {
        item.OutputToStream(ss, "AddResources.member.", addResourcesCount, "");
        addResourcesCount++;
      }
    }
  }

  if(m_removeResourcesHasBeenSet)
  {
    if (m_removeResources.empty())
    {
      ss << "RemoveResources=&";
    }
    else
    {
      unsigned removeResourcesCount = 1;
      for(auto& item : m_removeResources)
      {
        ss << "RemoveResources.member." << removeResourcesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        removeResourcesCount++;
      }
    }
  }

  if(m_refreshAllResourcesHasBeenSet)
  {
    ss << "RefreshAllResources=" << std::boolalpha << m_refreshAllResources << "&";
  }

  if(m_templateConfigurationHasBeenSet)
  {
    m_templateConfiguration.OutputToStream(ss, "TemplateConfiguration");
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  UpdateGeneratedTemplateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
