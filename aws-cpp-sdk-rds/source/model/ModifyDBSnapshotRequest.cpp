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
#include <aws/rds/model/ModifyDBSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyDBSnapshotRequest::ModifyDBSnapshotRequest() : 
    m_dBSnapshotIdentifierHasBeenSet(false),
    m_engineVersionHasBeenSet(false)
{
}

Aws::String ModifyDBSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyDBSnapshot&";
  if(m_dBSnapshotIdentifierHasBeenSet)
  {
    ss << "DBSnapshotIdentifier=" << StringUtils::URLEncode(m_dBSnapshotIdentifier.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
    ss << "EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyDBSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
