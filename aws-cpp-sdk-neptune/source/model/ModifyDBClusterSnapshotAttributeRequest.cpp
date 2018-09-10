﻿/*
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

#include <aws/neptune/model/ModifyDBClusterSnapshotAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

ModifyDBClusterSnapshotAttributeRequest::ModifyDBClusterSnapshotAttributeRequest() : 
    m_dBClusterSnapshotIdentifierHasBeenSet(false),
    m_attributeNameHasBeenSet(false),
    m_valuesToAddHasBeenSet(false),
    m_valuesToRemoveHasBeenSet(false)
{
}

Aws::String ModifyDBClusterSnapshotAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyDBClusterSnapshotAttribute&";
  if(m_dBClusterSnapshotIdentifierHasBeenSet)
  {
    ss << "DBClusterSnapshotIdentifier=" << StringUtils::URLEncode(m_dBClusterSnapshotIdentifier.c_str()) << "&";
  }

  if(m_attributeNameHasBeenSet)
  {
    ss << "AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }

  if(m_valuesToAddHasBeenSet)
  {
    unsigned valuesToAddCount = 1;
    for(auto& item : m_valuesToAdd)
    {
      ss << "ValuesToAdd.member." << valuesToAddCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      valuesToAddCount++;
    }
  }

  if(m_valuesToRemoveHasBeenSet)
  {
    unsigned valuesToRemoveCount = 1;
    for(auto& item : m_valuesToRemove)
    {
      ss << "ValuesToRemove.member." << valuesToRemoveCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      valuesToRemoveCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyDBClusterSnapshotAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
