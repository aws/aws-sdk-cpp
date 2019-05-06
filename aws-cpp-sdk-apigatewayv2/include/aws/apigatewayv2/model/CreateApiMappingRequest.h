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
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   */
  class AWS_APIGATEWAYV2_API CreateApiMappingRequest : public ApiGatewayV2Request
  {
  public:
    CreateApiMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApiMapping"; }

    Aws::String SerializePayload() const override;


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
    inline CreateApiMappingRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline CreateApiMappingRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline CreateApiMappingRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * 
     */
    inline const Aws::String& GetApiMappingKey() const{ return m_apiMappingKey; }

    /**
     * 
     */
    inline bool ApiMappingKeyHasBeenSet() const { return m_apiMappingKeyHasBeenSet; }

    /**
     * 
     */
    inline void SetApiMappingKey(const Aws::String& value) { m_apiMappingKeyHasBeenSet = true; m_apiMappingKey = value; }

    /**
     * 
     */
    inline void SetApiMappingKey(Aws::String&& value) { m_apiMappingKeyHasBeenSet = true; m_apiMappingKey = std::move(value); }

    /**
     * 
     */
    inline void SetApiMappingKey(const char* value) { m_apiMappingKeyHasBeenSet = true; m_apiMappingKey.assign(value); }

    /**
     * 
     */
    inline CreateApiMappingRequest& WithApiMappingKey(const Aws::String& value) { SetApiMappingKey(value); return *this;}

    /**
     * 
     */
    inline CreateApiMappingRequest& WithApiMappingKey(Aws::String&& value) { SetApiMappingKey(std::move(value)); return *this;}

    /**
     * 
     */
    inline CreateApiMappingRequest& WithApiMappingKey(const char* value) { SetApiMappingKey(value); return *this;}


    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name.</p>
     */
    inline CreateApiMappingRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name.</p>
     */
    inline CreateApiMappingRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name.</p>
     */
    inline CreateApiMappingRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


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
    inline CreateApiMappingRequest& WithStage(const Aws::String& value) { SetStage(value); return *this;}

    /**
     * <p>The API stage.</p>
     */
    inline CreateApiMappingRequest& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}

    /**
     * <p>The API stage.</p>
     */
    inline CreateApiMappingRequest& WithStage(const char* value) { SetStage(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    Aws::String m_apiMappingKey;
    bool m_apiMappingKeyHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_stage;
    bool m_stageHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
