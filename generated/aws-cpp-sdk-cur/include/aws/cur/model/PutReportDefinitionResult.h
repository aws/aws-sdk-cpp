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
  /**
   * <p>If the action is successful, the service sends back an HTTP 200 response with
   * an empty HTTP body.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/PutReportDefinitionResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COSTANDUSAGEREPORTSERVICE_API PutReportDefinitionResult
  {
  public:
    PutReportDefinitionResult();
    PutReportDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutReportDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
