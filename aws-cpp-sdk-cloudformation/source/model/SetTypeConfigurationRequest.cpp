/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/SetTypeConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

SetTypeConfigurationRequest::SetTypeConfigurationRequest() : 
    m_typeArnHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_configurationAliasHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_type(ThirdPartyType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String SetTypeConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetTypeConfiguration&";
  if(m_typeArnHasBeenSet)
  {
    ss << "TypeArn=" << StringUtils::URLEncode(m_typeArn.c_str()) << "&";
  }

  if(m_configurationHasBeenSet)
  {
    ss << "Configuration=" << StringUtils::URLEncode(m_configuration.c_str()) << "&";
  }

  if(m_configurationAliasHasBeenSet)
  {
    ss << "ConfigurationAlias=" << StringUtils::URLEncode(m_configurationAlias.c_str()) << "&";
  }

  if(m_typeNameHasBeenSet)
  {
    ss << "TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
    ss << "Type=" << ThirdPartyTypeMapper::GetNameForThirdPartyType(m_type) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  SetTypeConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
