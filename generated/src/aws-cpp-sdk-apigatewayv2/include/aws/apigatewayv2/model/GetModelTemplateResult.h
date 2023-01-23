/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
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
namespace ApiGatewayV2
{
namespace Model
{
  class GetModelTemplateResult
  {
  public:
    AWS_APIGATEWAYV2_API GetModelTemplateResult();
    AWS_APIGATEWAYV2_API GetModelTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API GetModelTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The template value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The template value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_value = value; }

    /**
     * <p>The template value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_value = std::move(value); }

    /**
     * <p>The template value.</p>
     */
    inline void SetValue(const char* value) { m_value.assign(value); }

    /**
     * <p>The template value.</p>
     */
    inline GetModelTemplateResult& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The template value.</p>
     */
    inline GetModelTemplateResult& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The template value.</p>
     */
    inline GetModelTemplateResult& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_value;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
