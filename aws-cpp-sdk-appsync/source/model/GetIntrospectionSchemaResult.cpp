/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
