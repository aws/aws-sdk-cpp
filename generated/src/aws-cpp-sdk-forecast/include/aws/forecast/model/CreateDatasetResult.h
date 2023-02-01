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
  class CreateDatasetResult
  {
  public:
    AWS_FORECASTSERVICE_API CreateDatasetResult();
    AWS_FORECASTSERVICE_API CreateDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline CreateDatasetResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline CreateDatasetResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline CreateDatasetResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}

  private:

    Aws::String m_datasetArn;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
