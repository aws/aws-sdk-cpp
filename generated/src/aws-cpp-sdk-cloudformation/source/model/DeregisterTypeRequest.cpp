﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DeregisterTypeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

DeregisterTypeRequest::DeregisterTypeRequest() : 
    m_arnHasBeenSet(false),
    m_type(RegistryType::NOT_SET),
    m_typeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

Aws::String DeregisterTypeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeregisterType&";
  if(m_arnHasBeenSet)
  {
    ss << "Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
    ss << "Type=" << RegistryTypeMapper::GetNameForRegistryType(m_type) << "&";
  }

  if(m_typeNameHasBeenSet)
  {
    ss << "TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }

  if(m_versionIdHasBeenSet)
  {
    ss << "VersionId=" << StringUtils::URLEncode(m_versionId.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  DeregisterTypeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
