/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/PublishTypeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

PublishTypeRequest::PublishTypeRequest() : 
    m_type(ThirdPartyType::NOT_SET),
    m_typeHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_publicVersionNumberHasBeenSet(false)
{
}

Aws::String PublishTypeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PublishType&";
  if(m_typeHasBeenSet)
  {
    ss << "Type=" << ThirdPartyTypeMapper::GetNameForThirdPartyType(m_type) << "&";
  }

  if(m_arnHasBeenSet)
  {
    ss << "Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }

  if(m_typeNameHasBeenSet)
  {
    ss << "TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }

  if(m_publicVersionNumberHasBeenSet)
  {
    ss << "PublicVersionNumber=" << StringUtils::URLEncode(m_publicVersionNumber.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  PublishTypeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
