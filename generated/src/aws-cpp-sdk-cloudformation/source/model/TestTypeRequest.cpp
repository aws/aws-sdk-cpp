/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/TestTypeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String TestTypeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=TestType&";
  if(m_arnHasBeenSet)
  {
    ss << "Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
    ss << "Type=" << StringUtils::URLEncode(ThirdPartyTypeMapper::GetNameForThirdPartyType(m_type)) << "&";
  }

  if(m_typeNameHasBeenSet)
  {
    ss << "TypeName=" << StringUtils::URLEncode(m_typeName.c_str()) << "&";
  }

  if(m_versionIdHasBeenSet)
  {
    ss << "VersionId=" << StringUtils::URLEncode(m_versionId.c_str()) << "&";
  }

  if(m_logDeliveryBucketHasBeenSet)
  {
    ss << "LogDeliveryBucket=" << StringUtils::URLEncode(m_logDeliveryBucket.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  TestTypeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
