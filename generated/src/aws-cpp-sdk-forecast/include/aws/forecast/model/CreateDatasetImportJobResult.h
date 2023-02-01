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
  class CreateDatasetImportJobResult
  {
  public:
    AWS_FORECASTSERVICE_API CreateDatasetImportJobResult();
    AWS_FORECASTSERVICE_API CreateDatasetImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateDatasetImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline const Aws::String& GetDatasetImportJobArn() const{ return m_datasetImportJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline void SetDatasetImportJobArn(const Aws::String& value) { m_datasetImportJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline void SetDatasetImportJobArn(Aws::String&& value) { m_datasetImportJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline void SetDatasetImportJobArn(const char* value) { m_datasetImportJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline CreateDatasetImportJobResult& WithDatasetImportJobArn(const Aws::String& value) { SetDatasetImportJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline CreateDatasetImportJobResult& WithDatasetImportJobArn(Aws::String&& value) { SetDatasetImportJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset import job.</p>
     */
    inline CreateDatasetImportJobResult& WithDatasetImportJobArn(const char* value) { SetDatasetImportJobArn(value); return *this;}

  private:

    Aws::String m_datasetImportJobArn;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
