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
