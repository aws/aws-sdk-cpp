/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DisassociateIamInstanceProfileRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DisassociateIamInstanceProfileRequest::DisassociateIamInstanceProfileRequest() : 
    m_associationIdHasBeenSet(false)
{
}

Aws::String DisassociateIamInstanceProfileRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DisassociateIamInstanceProfile&";
  if(m_associationIdHasBeenSet)
  {
    ss << "AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DisassociateIamInstanceProfileRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
