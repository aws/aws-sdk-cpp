/*
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

#include <aws/appsync/model/GetIntrospectionSchemaResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetIntrospectionSchemaResult::GetIntrospectionSchemaResult()
{
}

GetIntrospectionSchemaResult::GetIntrospectionSchemaResult(GetIntrospectionSchemaResult&& toMove) : 
    m_schema(std::move(toMove.m_schema))
{
}

GetIntrospectionSchemaResult& GetIntrospectionSchemaResult::operator=(GetIntrospectionSchemaResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_schema = std::move(toMove.m_schema);

   return *this;
}

GetIntrospectionSchemaResult::GetIntrospectionSchemaResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetIntrospectionSchemaResult& GetIntrospectionSchemaResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_schema = result.TakeOwnershipOfPayload();

   return *this;
}
