/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace ForecastService
{
namespace Model
{
  class CreateExplainabilityExportResult
  {
  public:
    AWS_FORECASTSERVICE_API CreateExplainabilityExportResult();
    AWS_FORECASTSERVICE_API CreateExplainabilityExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateExplainabilityExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline const Aws::String& GetExplainabilityExportArn() const{ return m_explainabilityExportArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline void SetExplainabilityExportArn(const Aws::String& value) { m_explainabilityExportArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline void SetExplainabilityExportArn(Aws::String&& value) { m_explainabilityExportArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline void SetExplainabilityExportArn(const char* value) { m_explainabilityExportArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline CreateExplainabilityExportResult& WithExplainabilityExportArn(const Aws::String& value) { SetExplainabilityExportArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline CreateExplainabilityExportResult& WithExplainabilityExportArn(Aws::String&& value) { SetExplainabilityExportArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline CreateExplainabilityExportResult& WithExplainabilityExportArn(const char* value) { SetExplainabilityExportArn(value); return *this;}

  private:

    Aws::String m_explainabilityExportArn;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
