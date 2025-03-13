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
namespace Http
{
    class URI;
} //namespace Http
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
    AWS_APIGATEWAY_API CreateBasePathMappingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBasePathMapping"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The domain name of the BasePathMapping resource to create.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    CreateBasePathMappingRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the domain name resource. Required for private custom
     * domain names.</p>
     */
    inline const Aws::String& GetDomainNameId() const { return m_domainNameId; }
    inline bool DomainNameIdHasBeenSet() const { return m_domainNameIdHasBeenSet; }
    template<typename DomainNameIdT = Aws::String>
    void SetDomainNameId(DomainNameIdT&& value) { m_domainNameIdHasBeenSet = true; m_domainNameId = std::forward<DomainNameIdT>(value); }
    template<typename DomainNameIdT = Aws::String>
    CreateBasePathMappingRequest& WithDomainNameId(DomainNameIdT&& value) { SetDomainNameId(std::forward<DomainNameIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base path name that callers of the API must provide as part of the URL
     * after the domain name. This value must be unique for all of the mappings across
     * a single API. Specify '(none)' if you do not want callers to specify a base path
     * name after the domain name.</p>
     */
    inline const Aws::String& GetBasePath() const { return m_basePath; }
    inline bool BasePathHasBeenSet() const { return m_basePathHasBeenSet; }
    template<typename BasePathT = Aws::String>
    void SetBasePath(BasePathT&& value) { m_basePathHasBeenSet = true; m_basePath = std::forward<BasePathT>(value); }
    template<typename BasePathT = Aws::String>
    CreateBasePathMappingRequest& WithBasePath(BasePathT&& value) { SetBasePath(std::forward<BasePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const { return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    template<typename RestApiIdT = Aws::String>
    void SetRestApiId(RestApiIdT&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::forward<RestApiIdT>(value); }
    template<typename RestApiIdT = Aws::String>
    CreateBasePathMappingRequest& WithRestApiId(RestApiIdT&& value) { SetRestApiId(std::forward<RestApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API's stage that you want to use for this mapping. Specify
     * '(none)' if you want callers to explicitly specify the stage name after any base
     * path name.</p>
     */
    inline const Aws::String& GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    template<typename StageT = Aws::String>
    void SetStage(StageT&& value) { m_stageHasBeenSet = true; m_stage = std::forward<StageT>(value); }
    template<typename StageT = Aws::String>
    CreateBasePathMappingRequest& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_domainNameId;
    bool m_domainNameIdHasBeenSet = false;

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
