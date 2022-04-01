/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetFlowLogsIntegrationTemplateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

GetFlowLogsIntegrationTemplateRequest::GetFlowLogsIntegrationTemplateRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_flowLogIdHasBeenSet(false),
    m_configDeliveryS3DestinationArnHasBeenSet(false),
    m_integrateServicesHasBeenSet(false)
{
}

Aws::String GetFlowLogsIntegrationTemplateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetFlowLogsIntegrationTemplate&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_flowLogIdHasBeenSet)
  {
    ss << "FlowLogId=" << StringUtils::URLEncode(m_flowLogId.c_str()) << "&";
  }

  if(m_configDeliveryS3DestinationArnHasBeenSet)
  {
    ss << "ConfigDeliveryS3DestinationArn=" << StringUtils::URLEncode(m_configDeliveryS3DestinationArn.c_str()) << "&";
  }

  if(m_integrateServicesHasBeenSet)
  {
    m_integrateServices.OutputToStream(ss, "IntegrateService");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetFlowLogsIntegrationTemplateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
