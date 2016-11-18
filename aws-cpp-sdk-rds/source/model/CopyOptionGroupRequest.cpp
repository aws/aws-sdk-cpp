﻿/*
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
#include <aws/rds/model/CopyOptionGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CopyOptionGroupRequest::CopyOptionGroupRequest() : 
    m_sourceOptionGroupIdentifierHasBeenSet(false),
    m_targetOptionGroupIdentifierHasBeenSet(false),
    m_targetOptionGroupDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CopyOptionGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopyOptionGroup&";
  if(m_sourceOptionGroupIdentifierHasBeenSet)
  {
    ss << "SourceOptionGroupIdentifier=" << StringUtils::URLEncode(m_sourceOptionGroupIdentifier.c_str()) << "&";
  }

  if(m_targetOptionGroupIdentifierHasBeenSet)
  {
    ss << "TargetOptionGroupIdentifier=" << StringUtils::URLEncode(m_targetOptionGroupIdentifier.c_str()) << "&";
  }

  if(m_targetOptionGroupDescriptionHasBeenSet)
  {
    ss << "TargetOptionGroupDescription=" << StringUtils::URLEncode(m_targetOptionGroupDescription.c_str()) << "&";
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

