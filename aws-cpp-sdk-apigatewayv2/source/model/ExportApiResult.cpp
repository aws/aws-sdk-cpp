/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/ExportApiResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

ExportApiResult::ExportApiResult()
{
}

ExportApiResult::ExportApiResult(ExportApiResult&& toMove) : 
    m_body(std::move(toMove.m_body))
{
}

ExportApiResult& ExportApiResult::operator=(ExportApiResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_body = std::move(toMove.m_body);

   return *this;
}

ExportApiResult::ExportApiResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

ExportApiResult& ExportApiResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_body = result.TakeOwnershipOfPayload();

   return *this;
}
