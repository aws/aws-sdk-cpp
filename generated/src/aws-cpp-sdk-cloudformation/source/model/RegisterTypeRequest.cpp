/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/RegisterTypeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

RegisterTypeRequest::RegisterTypeRequest() : 
    m_type(RegistryType::NOT_SET),
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_schemaHandlerPackageHasBeenSet(false),
    m_loggingConfigHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String RegisterTypeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RegisterType&";
  if(m_typeHasBeenSet)
  {
    ss << "Type=" << RegistryTypeMapper::GetNameForRegistryType(m_type) << "&";
  }

  if(m_typeNameHasBeenSet)
  {
    ss << "TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }

  if(m_schemaHandlerPackageHasBeenSet)
  {
    ss << "SchemaHandlerPackage=" << StringUtils::URLEncode(m_schemaHandlerPackage.c_str()) << "&";
  }

  if(m_loggingConfigHasBeenSet)
  {
    m_loggingConfig.OutputToStream(ss, "LoggingConfig");
  }

  if(m_executionRoleArnHasBeenSet)
  {
    ss << "ExecutionRoleArn=" << StringUtils::URLEncode(m_executionRoleArn.c_str()) << "&";
  }

  if(m_clientRequestTokenHasBeenSet)
  {
    ss << "ClientRequestToken=" << StringUtils::URLEncode(m_clientRequestToken.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  RegisterTypeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
