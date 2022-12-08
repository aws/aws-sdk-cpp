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
  class CreateExplainabilityResult
  {
  public:
    AWS_FORECASTSERVICE_API CreateExplainabilityResult();
    AWS_FORECASTSERVICE_API CreateExplainabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API CreateExplainabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline const Aws::String& GetExplainabilityArn() const{ return m_explainabilityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline void SetExplainabilityArn(const Aws::String& value) { m_explainabilityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline void SetExplainabilityArn(Aws::String&& value) { m_explainabilityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline void SetExplainabilityArn(const char* value) { m_explainabilityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline CreateExplainabilityResult& WithExplainabilityArn(const Aws::String& value) { SetExplainabilityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline CreateExplainabilityResult& WithExplainabilityArn(Aws::String&& value) { SetExplainabilityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline CreateExplainabilityResult& WithExplainabilityArn(const char* value) { SetExplainabilityArn(value); return *this;}

  private:

    Aws::String m_explainabilityArn;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
