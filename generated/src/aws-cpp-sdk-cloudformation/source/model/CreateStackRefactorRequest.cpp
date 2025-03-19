/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/CreateStackRefactorRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String CreateStackRefactorRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateStackRefactor&";
  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_enableStackCreationHasBeenSet)
  {
    ss << "EnableStackCreation=" << std::boolalpha << m_enableStackCreation << "&";
  }

  if(m_resourceMappingsHasBeenSet)
  {
    if (m_resourceMappings.empty())
    {
      ss << "ResourceMappings=&";
    }
    else
    {
      unsigned resourceMappingsCount = 1;
      for(auto& item : m_resourceMappings)
      {
        item.OutputToStream(ss, "ResourceMappings.member.", resourceMappingsCount, "");
        resourceMappingsCount++;
      }
    }
  }

  if(m_stackDefinitionsHasBeenSet)
  {
    if (m_stackDefinitions.empty())
    {
      ss << "StackDefinitions=&";
    }
    else
    {
      unsigned stackDefinitionsCount = 1;
      for(auto& item : m_stackDefinitions)
      {
        item.OutputToStream(ss, "StackDefinitions.member.", stackDefinitionsCount, "");
        stackDefinitionsCount++;
      }
    }
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  CreateStackRefactorRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
