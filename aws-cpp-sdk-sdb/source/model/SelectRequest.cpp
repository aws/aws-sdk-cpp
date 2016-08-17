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
#include <aws/sdb/model/SelectRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SimpleDB::Model;
using namespace Aws::Utils;

SelectRequest::SelectRequest() : 
    m_selectExpressionHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_consistentRead(false),
    m_consistentReadHasBeenSet(false)
{
}

Aws::String SelectRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=Select&";
  if(m_selectExpressionHasBeenSet)
  {
    ss << "SelectExpression=" << StringUtils::URLEncode(m_selectExpression.c_str()) << "&";
  }

  if(m_nextTokenHasBeenSet)
  {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if(m_consistentReadHasBeenSet)
  {
    ss << "ConsistentRead=" << m_consistentRead << "&";
  }

  ss << "Version=2009-04-15";
  return ss.str();
}

