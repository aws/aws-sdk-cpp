/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>

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
namespace CostandUsageReportService
{
namespace Model
{
  class ModifyReportDefinitionResult
  {
  public:
    AWS_COSTANDUSAGEREPORTSERVICE_API ModifyReportDefinitionResult();
    AWS_COSTANDUSAGEREPORTSERVICE_API ModifyReportDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTANDUSAGEREPORTSERVICE_API ModifyReportDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
