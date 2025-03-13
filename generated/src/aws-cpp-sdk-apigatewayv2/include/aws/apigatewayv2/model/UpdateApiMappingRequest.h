/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Updates an ApiMapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateApiMappingRequest">AWS
   * API Reference</a></p>
   */
  class UpdateApiMappingRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API UpdateApiMappingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApiMapping"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    UpdateApiMappingRequest& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API mapping identifier.</p>
     */
    inline const Aws::String& GetApiMappingId() const { return m_apiMappingId; }
    inline bool ApiMappingIdHasBeenSet() const { return m_apiMappingIdHasBeenSet; }
    template<typename ApiMappingIdT = Aws::String>
    void SetApiMappingId(ApiMappingIdT&& value) { m_apiMappingIdHasBeenSet = true; m_apiMappingId = std::forward<ApiMappingIdT>(value); }
    template<typename ApiMappingIdT = Aws::String>
    UpdateApiMappingRequest& WithApiMappingId(ApiMappingIdT&& value) { SetApiMappingId(std::forward<ApiMappingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API mapping key.</p>
     */
    inline const Aws::String& GetApiMappingKey() const { return m_apiMappingKey; }
    inline bool ApiMappingKeyHasBeenSet() const { return m_apiMappingKeyHasBeenSet; }
    template<typename ApiMappingKeyT = Aws::String>
    void SetApiMappingKey(ApiMappingKeyT&& value) { m_apiMappingKeyHasBeenSet = true; m_apiMappingKey = std::forward<ApiMappingKeyT>(value); }
    template<typename ApiMappingKeyT = Aws::String>
    UpdateApiMappingRequest& WithApiMappingKey(ApiMappingKeyT&& value) { SetApiMappingKey(std::forward<ApiMappingKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    UpdateApiMappingRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API stage.</p>
     */
    inline const Aws::String& GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    template<typename StageT = Aws::String>
    void SetStage(StageT&& value) { m_stageHasBeenSet = true; m_stage = std::forward<StageT>(value); }
    template<typename StageT = Aws::String>
    UpdateApiMappingRequest& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_apiMappingId;
    bool m_apiMappingIdHasBeenSet = false;

    Aws::String m_apiMappingKey;
    bool m_apiMappingKeyHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
