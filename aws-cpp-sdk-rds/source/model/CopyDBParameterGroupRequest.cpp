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
#include <aws/rds/model/CopyDBParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CopyDBParameterGroupRequest::CopyDBParameterGroupRequest() : 
    m_sourceDBParameterGroupIdentifierHasBeenSet(false),
    m_targetDBParameterGroupIdentifierHasBeenSet(false),
    m_targetDBParameterGroupDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CopyDBParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopyDBParameterGroup&";
  if(m_sourceDBParameterGroupIdentifierHasBeenSet)
  {
    ss << "SourceDBParameterGroupIdentifier=" << StringUtils::URLEncode(m_sourceDBParameterGroupIdentifier.c_str()) << "&";
  }

  if(m_targetDBParameterGroupIdentifierHasBeenSet)
  {
    ss << "TargetDBParameterGroupIdentifier=" << StringUtils::URLEncode(m_targetDBParameterGroupIdentifier.c_str()) << "&";
  }

  if(m_targetDBParameterGroupDescriptionHasBeenSet)
  {
    ss << "TargetDBParameterGroupDescription=" << StringUtils::URLEncode(m_targetDBParameterGroupDescription.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}

