﻿/**
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
  class AWS_APIGATEWAYV2_API GetApiMappingResult
  {
  public:
    GetApiMappingResult();
    GetApiMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetApiMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiId = value; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiId = std::move(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const char* value) { m_apiId.assign(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline GetApiMappingResult& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline GetApiMappingResult& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline GetApiMappingResult& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The API mapping identifier.</p>
     */
    inline const Aws::String& GetApiMappingId() const{ return m_apiMappingId; }

    /**
     * <p>The API mapping identifier.</p>
     */
    inline void SetApiMappingId(const Aws::String& value) { m_apiMappingId = value; }

    /**
     * <p>The API mapping identifier.</p>
     */
    inline void SetApiMappingId(Aws::String&& value) { m_apiMappingId = std::move(value); }

    /**
     * <p>The API mapping identifier.</p>
     */
    inline void SetApiMappingId(const char* value) { m_apiMappingId.assign(value); }

    /**
     * <p>The API mapping identifier.</p>
     */
    inline GetApiMappingResult& WithApiMappingId(const Aws::String& value) { SetApiMappingId(value); return *this;}

    /**
     * <p>The API mapping identifier.</p>
     */
    inline GetApiMappingResult& WithApiMappingId(Aws::String&& value) { SetApiMappingId(std::move(value)); return *this;}

    /**
     * <p>The API mapping identifier.</p>
     */
    inline GetApiMappingResult& WithApiMappingId(const char* value) { SetApiMappingId(value); return *this;}


    /**
     * <p>The API mapping key.</p>
     */
    inline const Aws::String& GetApiMappingKey() const{ return m_apiMappingKey; }

    /**
     * <p>The API mapping key.</p>
     */
    inline void SetApiMappingKey(const Aws::String& value) { m_apiMappingKey = value; }

    /**
     * <p>The API mapping key.</p>
     */
    inline void SetApiMappingKey(Aws::String&& value) { m_apiMappingKey = std::move(value); }

    /**
     * <p>The API mapping key.</p>
     */
    inline void SetApiMappingKey(const char* value) { m_apiMappingKey.assign(value); }

    /**
     * <p>The API mapping key.</p>
     */
    inline GetApiMappingResult& WithApiMappingKey(const Aws::String& value) { SetApiMappingKey(value); return *this;}

    /**
     * <p>The API mapping key.</p>
     */
    inline GetApiMappingResult& WithApiMappingKey(Aws::String&& value) { SetApiMappingKey(std::move(value)); return *this;}

    /**
     * <p>The API mapping key.</p>
     */
    inline GetApiMappingResult& WithApiMappingKey(const char* value) { SetApiMappingKey(value); return *this;}


    /**
     * <p>The API stage.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }

    /**
     * <p>The API stage.</p>
     */
    inline void SetStage(const Aws::String& value) { m_stage = value; }

    /**
     * <p>The API stage.</p>
     */
    inline void SetStage(Aws::String&& value) { m_stage = std::move(value); }

    /**
     * <p>The API stage.</p>
     */
    inline void SetStage(const char* value) { m_stage.assign(value); }

    /**
     * <p>The API stage.</p>
     */
    inline GetApiMappingResult& WithStage(const Aws::String& value) { SetStage(value); return *this;}

    /**
     * <p>The API stage.</p>
     */
    inline GetApiMappingResult& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}

    /**
     * <p>The API stage.</p>
     */
    inline GetApiMappingResult& WithStage(const char* value) { SetStage(value); return *this;}

  private:

    Aws::String m_apiId;

    Aws::String m_apiMappingId;

    Aws::String m_apiMappingKey;

    Aws::String m_stage;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
