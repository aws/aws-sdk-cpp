/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Requests API Gateway to create a new BasePathMapping resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/CreateBasePathMappingRequest">AWS
   * API Reference</a></p>
   */
  class CreateBasePathMappingRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API CreateBasePathMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBasePathMapping"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The domain name of the BasePathMapping resource to create.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline CreateBasePathMappingRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline CreateBasePathMappingRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline CreateBasePathMappingRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name. This value must be unique for all of the mappings across
     * a single API. Specify '(none)' if you do not want callers to specify a base path
     * name after the domain name.</p>
     */
    inline const Aws::String& GetBasePath() const{ return m_basePath; }
    inline bool BasePathHasBeenSet() const { return m_basePathHasBeenSet; }
    inline void SetBasePath(const Aws::String& value) { m_basePathHasBeenSet = true; m_basePath = value; }
    inline void SetBasePath(Aws::String&& value) { m_basePathHasBeenSet = true; m_basePath = std::move(value); }
    inline void SetBasePath(const char* value) { m_basePathHasBeenSet = true; m_basePath.assign(value); }
    inline CreateBasePathMappingRequest& WithBasePath(const Aws::String& value) { SetBasePath(value); return *this;}
    inline CreateBasePathMappingRequest& WithBasePath(Aws::String&& value) { SetBasePath(std::move(value)); return *this;}
    inline CreateBasePathMappingRequest& WithBasePath(const char* value) { SetBasePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }
    inline CreateBasePathMappingRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}
    inline CreateBasePathMappingRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}
    inline CreateBasePathMappingRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API's stage that you want to use for this mapping. Specify
     * '(none)' if you want callers to explicitly specify the stage name after any base
     * path name.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }
    inline CreateBasePathMappingRequest& WithStage(const Aws::String& value) { SetStage(value); return *this;}
    inline CreateBasePathMappingRequest& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}
    inline CreateBasePathMappingRequest& WithStage(const char* value) { SetStage(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_basePath;
    bool m_basePathHasBeenSet = false;

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
