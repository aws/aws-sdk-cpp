/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/model/ModifyDBSnapshotAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyDBSnapshotAttributeRequest::ModifyDBSnapshotAttributeRequest() : 
    m_dBSnapshotIdentifierHasBeenSet(false),
    m_attributeNameHasBeenSet(false),
    m_valuesToAddHasBeenSet(false),
    m_valuesToRemoveHasBeenSet(false)
{
}

Aws::String ModifyDBSnapshotAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyDBSnapshotAttribute&";
  if(m_dBSnapshotIdentifierHasBeenSet)
  {
    ss << "DBSnapshotIdentifier=" << StringUtils::URLEncode(m_dBSnapshotIdentifier.c_str()) << "&";
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

