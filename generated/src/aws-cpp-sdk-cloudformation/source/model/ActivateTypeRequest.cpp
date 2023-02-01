/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ActivateTypeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

ActivateTypeRequest::ActivateTypeRequest() : 
    m_type(ThirdPartyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_publicTypeArnHasBeenSet(false),
    m_publisherIdHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_typeNameAliasHasBeenSet(false),
    m_autoUpdate(false),
    m_autoUpdateHasBeenSet(false),
    m_loggingConfigHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_versionBump(VersionBump::NOT_SET),
    m_versionBumpHasBeenSet(false),
    m_majorVersion(0),
    m_majorVersionHasBeenSet(false)
{
}

Aws::String ActivateTypeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ActivateType&";
  if(m_typeHasBeenSet)
  {
    ss << "Type=" << ThirdPartyTypeMapper::GetNameForThirdPartyType(m_type) << "&";
  }

  if(m_publicTypeArnHasBeenSet)
  {
    ss << "PublicTypeArn=" << StringUtils::URLEncode(m_publicTypeArn.c_str()) << "&";
  }

  if(m_publisherIdHasBeenSet)
  {
    ss << "PublisherId=" << StringUtils::URLEncode(m_publisherId.c_str()) << "&";
  }

  if(m_typeNameHasBeenSet)
  {
    ss << "TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }

  if(m_typeNameAliasHasBeenSet)
  {
    ss << "TypeNameAlias=" << StringUtils::URLEncode(m_typeNameAlias.c_str()) << "&";
  }

  if(m_autoUpdateHasBeenSet)
  {
    ss << "AutoUpdate=" << std::boolalpha << m_autoUpdate << "&";
  }

  if(m_loggingConfigHasBeenSet)
  {
    m_loggingConfig.OutputToStream(ss, "LoggingConfig");
  }

  if(m_executionRoleArnHasBeenSet)
  {
    ss << "ExecutionRoleArn=" << StringUtils::URLEncode(m_executionRoleArn.c_str()) << "&";
  }

  if(m_versionBumpHasBeenSet)
  {
    ss << "VersionBump=" << VersionBumpMapper::GetNameForVersionBump(m_versionBump) << "&";
  }

  if(m_majorVersionHasBeenSet)
  {
    ss << "MajorVersion=" << m_majorVersion << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ActivateTypeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
