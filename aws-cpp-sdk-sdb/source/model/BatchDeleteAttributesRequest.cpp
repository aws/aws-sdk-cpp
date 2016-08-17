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
#include <aws/sdb/model/BatchDeleteAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SimpleDB::Model;
using namespace Aws::Utils;

BatchDeleteAttributesRequest::BatchDeleteAttributesRequest() : 
    m_domainNameHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

Aws::String BatchDeleteAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=BatchDeleteAttributes&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_itemsHasBeenSet)
  {
    unsigned itemsCount = 1;
    for(auto& item : m_items)
    {
      item.OutputToStream(ss, "Item.", itemsCount, "");
      itemsCount++;
    }
  }

  ss << "Version=2009-04-15";
  return ss.str();
}

