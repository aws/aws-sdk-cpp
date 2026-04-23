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
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Represents an API mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ApiMapping">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAYV2_API ApiMapping
  {
  public:
    ApiMapping();
    ApiMapping(Aws::Utils::Json::JsonView jsonValue);
    ApiMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API identifier.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline ApiMapping& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline ApiMapping& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline ApiMapping& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The API mapping identifier.</p>
     */
    inline const Aws::String& GetApiMappingId() const{ return m_apiMappingId; }

    /**
     * <p>The API mapping identifier.</p>
     */
    inline bool ApiMappingIdHasBeenSet() const { return m_apiMappingIdHasBeenSet; }

    /**
     * <p>The API mapping identifier.</p>
     */
    inline void SetApiMappingId(const Aws::String& value) { m_apiMappingIdHasBeenSet = true; m_apiMappingId = value; }

    /**
     * <p>The API mapping identifier.</p>
     */
    inline void SetApiMappingId(Aws::String&& value) { m_apiMappingIdHasBeenSet = true; m_apiMappingId = std::move(value); }

    /**
     * <p>The API mapping identifier.</p>
     */
    inline void SetApiMappingId(const char* value) { m_apiMappingIdHasBeenSet = true; m_apiMappingId.assign(value); }

    /**
     * <p>The API mapping identifier.</p>
     */
    inline ApiMapping& WithApiMappingId(const Aws::String& value) { SetApiMappingId(value); return *this;}

    /**
     * <p>The API mapping identifier.</p>
     */
    inline ApiMapping& WithApiMappingId(Aws::String&& value) { SetApiMappingId(std::move(value)); return *this;}

    /**
     * <p>The API mapping identifier.</p>
     */
    inline ApiMapping& WithApiMappingId(const char* value) { SetApiMappingId(value); return *this;}


    /**
     * <p>The API mapping key.</p>
     */
    inline const Aws::String& GetApiMappingKey() const{ return m_apiMappingKey; }

    /**
     * <p>The API mapping key.</p>
     */
    inline bool ApiMappingKeyHasBeenSet() const { return m_apiMappingKeyHasBeenSet; }

    /**
     * <p>The API mapping key.</p>
     */
    inline void SetApiMappingKey(const Aws::String& value) { m_apiMappingKeyHasBeenSet = true; m_apiMappingKey = value; }

    /**
     * <p>The API mapping key.</p>
     */
    inline void SetApiMappingKey(Aws::String&& value) { m_apiMappingKeyHasBeenSet = true; m_apiMappingKey = std::move(value); }

    /**
     * <p>The API mapping key.</p>
     */
    inline void SetApiMappingKey(const char* value) { m_apiMappingKeyHasBeenSet = true; m_apiMappingKey.assign(value); }

    /**
     * <p>The API mapping key.</p>
     */
    inline ApiMapping& WithApiMappingKey(const Aws::String& value) { SetApiMappingKey(value); return *this;}

    /**
     * <p>The API mapping key.</p>
     */
    inline ApiMapping& WithApiMappingKey(Aws::String&& value) { SetApiMappingKey(std::move(value)); return *this;}

    /**
     * <p>The API mapping key.</p>
     */
    inline ApiMapping& WithApiMappingKey(const char* value) { SetApiMappingKey(value); return *this;}


    /**
     * <p>The API stage.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }

    /**
     * <p>The API stage.</p>
     */
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }

    /**
     * <p>The API stage.</p>
     */
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>The API stage.</p>
     */
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p>The API stage.</p>
     */
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }

    /**
     * <p>The API stage.</p>
     */
    inline ApiMapping& WithStage(const Aws::String& value) { SetStage(value); return *this;}

    /**
     * <p>The API stage.</p>
     */
    inline ApiMapping& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}

    /**
     * <p>The API stage.</p>
     */
    inline ApiMapping& WithStage(const char* value) { SetStage(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    Aws::String m_apiMappingId;
    bool m_apiMappingIdHasBeenSet;

    Aws::String m_apiMappingKey;
    bool m_apiMappingKeyHasBeenSet;

    Aws::String m_stage;
    bool m_stageHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
