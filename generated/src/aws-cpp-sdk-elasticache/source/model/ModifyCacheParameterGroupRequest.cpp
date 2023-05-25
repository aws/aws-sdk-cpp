/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ModifyCacheParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

ModifyCacheParameterGroupRequest::ModifyCacheParameterGroupRequest() : 
    m_cacheParameterGroupNameHasBeenSet(false),
    m_parameterNameValuesHasBeenSet(false)
{
}

Aws::String ModifyCacheParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyCacheParameterGroup&";
  if(m_cacheParameterGroupNameHasBeenSet)
  {
    ss << "CacheParameterGroupName=" << StringUtils::URLEncode(m_cacheParameterGroupName.c_str()) << "&";
  }

  if(m_parameterNameValuesHasBeenSet)
  {
    unsigned parameterNameValuesCount = 1;
    for(auto& item : m_parameterNameValues)
    {
      item.OutputToStream(ss, "ParameterNameValues.member.", parameterNameValuesCount, "");
      parameterNameValuesCount++;
    }
  }

  ss << "Version=2015-02-02";
  return ss.str();
}


void  ModifyCacheParameterGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
