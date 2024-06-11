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
  class ApiMapping
  {
  public:
    AWS_APIGATEWAYV2_API ApiMapping();
    AWS_APIGATEWAYV2_API ApiMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API ApiMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline ApiMapping& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline ApiMapping& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline ApiMapping& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API mapping identifier.</p>
     */
    inline const Aws::String& GetApiMappingId() const{ return m_apiMappingId; }
    inline bool ApiMappingIdHasBeenSet() const { return m_apiMappingIdHasBeenSet; }
    inline void SetApiMappingId(const Aws::String& value) { m_apiMappingIdHasBeenSet = true; m_apiMappingId = value; }
    inline void SetApiMappingId(Aws::String&& value) { m_apiMappingIdHasBeenSet = true; m_apiMappingId = std::move(value); }
    inline void SetApiMappingId(const char* value) { m_apiMappingIdHasBeenSet = true; m_apiMappingId.assign(value); }
    inline ApiMapping& WithApiMappingId(const Aws::String& value) { SetApiMappingId(value); return *this;}
    inline ApiMapping& WithApiMappingId(Aws::String&& value) { SetApiMappingId(std::move(value)); return *this;}
    inline ApiMapping& WithApiMappingId(const char* value) { SetApiMappingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API mapping key.</p>
     */
    inline const Aws::String& GetApiMappingKey() const{ return m_apiMappingKey; }
    inline bool ApiMappingKeyHasBeenSet() const { return m_apiMappingKeyHasBeenSet; }
    inline void SetApiMappingKey(const Aws::String& value) { m_apiMappingKeyHasBeenSet = true; m_apiMappingKey = value; }
    inline void SetApiMappingKey(Aws::String&& value) { m_apiMappingKeyHasBeenSet = true; m_apiMappingKey = std::move(value); }
    inline void SetApiMappingKey(const char* value) { m_apiMappingKeyHasBeenSet = true; m_apiMappingKey.assign(value); }
    inline ApiMapping& WithApiMappingKey(const Aws::String& value) { SetApiMappingKey(value); return *this;}
    inline ApiMapping& WithApiMappingKey(Aws::String&& value) { SetApiMappingKey(std::move(value)); return *this;}
    inline ApiMapping& WithApiMappingKey(const char* value) { SetApiMappingKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API stage.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }
    inline ApiMapping& WithStage(const Aws::String& value) { SetStage(value); return *this;}
    inline ApiMapping& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}
    inline ApiMapping& WithStage(const char* value) { SetStage(value); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_apiMappingId;
    bool m_apiMappingIdHasBeenSet = false;

    Aws::String m_apiMappingKey;
    bool m_apiMappingKeyHasBeenSet = false;

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
