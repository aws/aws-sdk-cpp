/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/RegisterPublisherRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

RegisterPublisherRequest::RegisterPublisherRequest() : 
    m_acceptTermsAndConditions(false),
    m_acceptTermsAndConditionsHasBeenSet(false),
    m_connectionArnHasBeenSet(false)
{
}

Aws::String RegisterPublisherRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RegisterPublisher&";
  if(m_acceptTermsAndConditionsHasBeenSet)
  {
    ss << "AcceptTermsAndConditions=" << std::boolalpha << m_acceptTermsAndConditions << "&";
  }

  if(m_connectionArnHasBeenSet)
  {
    ss << "ConnectionArn=" << StringUtils::URLEncode(m_connectionArn.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  RegisterPublisherRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
