/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppIntegrationsService
{
namespace Model
{
  class DeleteDataIntegrationResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API DeleteDataIntegrationResult();
    AWS_APPINTEGRATIONSSERVICE_API DeleteDataIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API DeleteDataIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
