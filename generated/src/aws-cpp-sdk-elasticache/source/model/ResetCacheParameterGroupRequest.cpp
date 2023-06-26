﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/ResetCacheParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

ResetCacheParameterGroupRequest::ResetCacheParameterGroupRequest() : 
    m_cacheParameterGroupNameHasBeenSet(false),
    m_resetAllParameters(false),
    m_resetAllParametersHasBeenSet(false),
    m_parameterNameValuesHasBeenSet(false)
{
}

Aws::String ResetCacheParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ResetCacheParameterGroup&";
  if(m_cacheParameterGroupNameHasBeenSet)
  {
    ss << "CacheParameterGroupName=" << StringUtils::URLEncode(m_cacheParameterGroupName.c_str()) << "&";
  }

  if(m_resetAllParametersHasBeenSet)
  {
    ss << "ResetAllParameters=" << std::boolalpha << m_resetAllParameters << "&";
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


void  ResetCacheParameterGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
