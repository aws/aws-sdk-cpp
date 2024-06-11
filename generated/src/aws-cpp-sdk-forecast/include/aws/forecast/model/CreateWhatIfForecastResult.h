﻿/**
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
  class CreateWhatIfForecastResult
  {
  public:
    AWS_FORECASTSERVICE_API CreateWhatIfForecastResult();
    AWS_FORECASTSERVICE_API CreateWhatIfForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateWhatIfForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline const Aws::String& GetWhatIfForecastArn() const{ return m_whatIfForecastArn; }
    inline void SetWhatIfForecastArn(const Aws::String& value) { m_whatIfForecastArn = value; }
    inline void SetWhatIfForecastArn(Aws::String&& value) { m_whatIfForecastArn = std::move(value); }
    inline void SetWhatIfForecastArn(const char* value) { m_whatIfForecastArn.assign(value); }
    inline CreateWhatIfForecastResult& WithWhatIfForecastArn(const Aws::String& value) { SetWhatIfForecastArn(value); return *this;}
    inline CreateWhatIfForecastResult& WithWhatIfForecastArn(Aws::String&& value) { SetWhatIfForecastArn(std::move(value)); return *this;}
    inline CreateWhatIfForecastResult& WithWhatIfForecastArn(const char* value) { SetWhatIfForecastArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWhatIfForecastResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWhatIfForecastResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWhatIfForecastResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_whatIfForecastArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
