/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/CopyDBClusterParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

CopyDBClusterParameterGroupRequest::CopyDBClusterParameterGroupRequest() : 
    m_sourceDBClusterParameterGroupIdentifierHasBeenSet(false),
    m_targetDBClusterParameterGroupIdentifierHasBeenSet(false),
    m_targetDBClusterParameterGroupDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CopyDBClusterParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopyDBClusterParameterGroup&";
  if(m_sourceDBClusterParameterGroupIdentifierHasBeenSet)
  {
    ss << "SourceDBClusterParameterGroupIdentifier=" << StringUtils::URLEncode(m_sourceDBClusterParameterGroupIdentifier.c_str()) << "&";
  }

  if(m_targetDBClusterParameterGroupIdentifierHasBeenSet)
  {
    ss << "TargetDBClusterParameterGroupIdentifier=" << StringUtils::URLEncode(m_targetDBClusterParameterGroupIdentifier.c_str()) << "&";
  }

  if(m_targetDBClusterParameterGroupDescriptionHasBeenSet)
  {
    ss << "TargetDBClusterParameterGroupDescription=" << StringUtils::URLEncode(m_targetDBClusterParameterGroupDescription.c_str()) << "&";
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


void  CopyDBClusterParameterGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
