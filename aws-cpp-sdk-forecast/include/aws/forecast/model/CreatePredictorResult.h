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
  class AWS_FORECASTSERVICE_API CreatePredictorResult
  {
  public:
    CreatePredictorResult();
    CreatePredictorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePredictorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline const Aws::String& GetPredictorArn() const{ return m_predictorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline void SetPredictorArn(const Aws::String& value) { m_predictorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline void SetPredictorArn(Aws::String&& value) { m_predictorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline void SetPredictorArn(const char* value) { m_predictorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline CreatePredictorResult& WithPredictorArn(const Aws::String& value) { SetPredictorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline CreatePredictorResult& WithPredictorArn(Aws::String&& value) { SetPredictorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the predictor.</p>
     */
    inline CreatePredictorResult& WithPredictorArn(const char* value) { SetPredictorArn(value); return *this;}

  private:

    Aws::String m_predictorArn;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
