/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DeactivateTypeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

DeactivateTypeRequest::DeactivateTypeRequest() : 
    m_typeNameHasBeenSet(false),
    m_type(ThirdPartyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

Aws::String DeactivateTypeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeactivateType&";
  if(m_typeNameHasBeenSet)
  {
    ss << "TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
    ss << "Type=" << ThirdPartyTypeMapper::GetNameForThirdPartyType(m_type) << "&";
  }

  if(m_arnHasBeenSet)
  {
    ss << "Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  DeactivateTypeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
