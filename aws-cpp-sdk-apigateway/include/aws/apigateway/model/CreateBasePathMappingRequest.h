/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Requests Amazon API Gateway to create a new <a>BasePathMapping</a>
   * resource.</p>
   */
  class AWS_APIGATEWAY_API CreateBasePathMappingRequest : public APIGatewayRequest
  {
  public:
    CreateBasePathMappingRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to create.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to create.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to create.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to create.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to create.</p>
     */
    inline CreateBasePathMappingRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to create.</p>
     */
    inline CreateBasePathMappingRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name of the <a>BasePathMapping</a> resource to create.</p>
     */
    inline CreateBasePathMappingRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name. This value must be unique for all of the mappings across
     * a single API. Leave this blank if you do not want callers to specify a base path
     * name after the domain name.</p>
     */
    inline const Aws::String& GetBasePath() const{ return m_basePath; }

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name. This value must be unique for all of the mappings across
     * a single API. Leave this blank if you do not want callers to specify a base path
     * name after the domain name.</p>
     */
    inline void SetBasePath(const Aws::String& value) { m_basePathHasBeenSet = true; m_basePath = value; }

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name. This value must be unique for all of the mappings across
     * a single API. Leave this blank if you do not want callers to specify a base path
     * name after the domain name.</p>
     */
    inline void SetBasePath(Aws::String&& value) { m_basePathHasBeenSet = true; m_basePath = value; }

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name. This value must be unique for all of the mappings across
     * a single API. Leave this blank if you do not want callers to specify a base path
     * name after the domain name.</p>
     */
    inline void SetBasePath(const char* value) { m_basePathHasBeenSet = true; m_basePath.assign(value); }

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name. This value must be unique for all of the mappings across
     * a single API. Leave this blank if you do not want callers to specify a base path
     * name after the domain name.</p>
     */
    inline CreateBasePathMappingRequest& WithBasePath(const Aws::String& value) { SetBasePath(value); return *this;}

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name. This value must be unique for all of the mappings across
     * a single API. Leave this blank if you do not want callers to specify a base path
     * name after the domain name.</p>
     */
    inline CreateBasePathMappingRequest& WithBasePath(Aws::String&& value) { SetBasePath(value); return *this;}

    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name. This value must be unique for all of the mappings across
     * a single API. Leave this blank if you do not want callers to specify a base path
     * name after the domain name.</p>
     */
    inline CreateBasePathMappingRequest& WithBasePath(const char* value) { SetBasePath(value); return *this;}

    /**
     * <p>The name of the API that you want to apply this mapping to.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The name of the API that you want to apply this mapping to.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The name of the API that you want to apply this mapping to.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The name of the API that you want to apply this mapping to.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The name of the API that you want to apply this mapping to.</p>
     */
    inline CreateBasePathMappingRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The name of the API that you want to apply this mapping to.</p>
     */
    inline CreateBasePathMappingRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The name of the API that you want to apply this mapping to.</p>
     */
    inline CreateBasePathMappingRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The name of the API's stage that you want to use for this mapping. Leave this
     * blank if you do not want callers to explicitly specify the stage name after any
     * base path name.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }

    /**
     * <p>The name of the API's stage that you want to use for this mapping. Leave this
     * blank if you do not want callers to explicitly specify the stage name after any
     * base path name.</p>
     */
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>The name of the API's stage that you want to use for this mapping. Leave this
     * blank if you do not want callers to explicitly specify the stage name after any
     * base path name.</p>
     */
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>The name of the API's stage that you want to use for this mapping. Leave this
     * blank if you do not want callers to explicitly specify the stage name after any
     * base path name.</p>
     */
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }

    /**
     * <p>The name of the API's stage that you want to use for this mapping. Leave this
     * blank if you do not want callers to explicitly specify the stage name after any
     * base path name.</p>
     */
    inline CreateBasePathMappingRequest& WithStage(const Aws::String& value) { SetStage(value); return *this;}

    /**
     * <p>The name of the API's stage that you want to use for this mapping. Leave this
     * blank if you do not want callers to explicitly specify the stage name after any
     * base path name.</p>
     */
    inline CreateBasePathMappingRequest& WithStage(Aws::String&& value) { SetStage(value); return *this;}

    /**
     * <p>The name of the API's stage that you want to use for this mapping. Leave this
     * blank if you do not want callers to explicitly specify the stage name after any
     * base path name.</p>
     */
    inline CreateBasePathMappingRequest& WithStage(const char* value) { SetStage(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_basePath;
    bool m_basePathHasBeenSet;
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_stage;
    bool m_stageHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
