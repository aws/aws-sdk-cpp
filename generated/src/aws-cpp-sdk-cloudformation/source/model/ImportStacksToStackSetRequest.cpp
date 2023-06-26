/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ImportStacksToStackSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

ImportStacksToStackSetRequest::ImportStacksToStackSetRequest() : 
    m_stackSetNameHasBeenSet(false),
    m_stackIdsHasBeenSet(false),
    m_stackIdsUrlHasBeenSet(false),
    m_organizationalUnitIdsHasBeenSet(false),
    m_operationPreferencesHasBeenSet(false),
    m_operationId(Aws::Utils::UUID::PseudoRandomUUID()),
    m_operationIdHasBeenSet(true),
    m_callAs(CallAs::NOT_SET),
    m_callAsHasBeenSet(false)
{
}

Aws::String ImportStacksToStackSetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ImportStacksToStackSet&";
  if(m_stackSetNameHasBeenSet)
  {
    ss << "StackSetName=" << StringUtils::URLEncode(m_stackSetName.c_str()) << "&";
  }

  if(m_stackIdsHasBeenSet)
  {
    unsigned stackIdsCount = 1;
    for(auto& item : m_stackIds)
    {
      ss << "StackIds.member." << stackIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      stackIdsCount++;
    }
  }

  if(m_stackIdsUrlHasBeenSet)
  {
    ss << "StackIdsUrl=" << StringUtils::URLEncode(m_stackIdsUrl.c_str()) << "&";
  }

  if(m_organizationalUnitIdsHasBeenSet)
  {
    unsigned organizationalUnitIdsCount = 1;
    for(auto& item : m_organizationalUnitIds)
    {
      ss << "OrganizationalUnitIds.member." << organizationalUnitIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      organizationalUnitIdsCount++;
    }
  }

  if(m_operationPreferencesHasBeenSet)
  {
    m_operationPreferences.OutputToStream(ss, "OperationPreferences");
  }

  if(m_operationIdHasBeenSet)
  {
    ss << "OperationId=" << StringUtils::URLEncode(m_operationId.c_str()) << "&";
  }

  if(m_callAsHasBeenSet)
  {
    ss << "CallAs=" << CallAsMapper::GetNameForCallAs(m_callAs) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ImportStacksToStackSetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
