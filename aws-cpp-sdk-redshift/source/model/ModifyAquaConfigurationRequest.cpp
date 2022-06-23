/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyAquaConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifyAquaConfigurationRequest::ModifyAquaConfigurationRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_aquaConfigurationStatus(AquaConfigurationStatus::NOT_SET),
    m_aquaConfigurationStatusHasBeenSet(false)
{
}

Aws::String ModifyAquaConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyAquaConfiguration&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_aquaConfigurationStatusHasBeenSet)
  {
    ss << "AquaConfigurationStatus=" << AquaConfigurationStatusMapper::GetNameForAquaConfigurationStatus(m_aquaConfigurationStatus) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyAquaConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
