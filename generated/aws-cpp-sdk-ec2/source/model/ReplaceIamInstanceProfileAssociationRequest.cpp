/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReplaceIamInstanceProfileAssociationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ReplaceIamInstanceProfileAssociationRequest::ReplaceIamInstanceProfileAssociationRequest() : 
    m_iamInstanceProfileHasBeenSet(false),
    m_associationIdHasBeenSet(false)
{
}

Aws::String ReplaceIamInstanceProfileAssociationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ReplaceIamInstanceProfileAssociation&";
  if(m_iamInstanceProfileHasBeenSet)
  {
    m_iamInstanceProfile.OutputToStream(ss, "IamInstanceProfile");
  }

  if(m_associationIdHasBeenSet)
  {
    ss << "AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ReplaceIamInstanceProfileAssociationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
