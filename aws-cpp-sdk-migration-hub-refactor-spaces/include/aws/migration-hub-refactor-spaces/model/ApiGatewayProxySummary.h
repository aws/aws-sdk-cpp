/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migration-hub-refactor-spaces/model/ApiGatewayEndpointType.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   * <p>A wrapper object holding the Amazon API Gateway proxy summary. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ApiGatewayProxySummary">AWS
   * API Reference</a></p>
   */
  class ApiGatewayProxySummary
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayProxySummary();
    AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayProxySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API ApiGatewayProxySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource ID of the API Gateway for the proxy. </p>
     */
    inline const Aws::String& GetApiGatewayId() const{ return m_apiGatewayId; }

    /**
     * <p>The resource ID of the API Gateway for the proxy. </p>
     */
    inline bool ApiGatewayIdHasBeenSet() const { return m_apiGatewayIdHasBeenSet; }

    /**
     * <p>The resource ID of the API Gateway for the proxy. </p>
     */
    inline void SetApiGatewayId(const Aws::String& value) { m_apiGatewayIdHasBeenSet = true; m_apiGatewayId = value; }

    /**
     * <p>The resource ID of the API Gateway for the proxy. </p>
     */
    inline void SetApiGatewayId(Aws::String&& value) { m_apiGatewayIdHasBeenSet = true; m_apiGatewayId = std::move(value); }

    /**
     * <p>The resource ID of the API Gateway for the proxy. </p>
     */
    inline void SetApiGatewayId(const char* value) { m_apiGatewayIdHasBeenSet = true; m_apiGatewayId.assign(value); }

    /**
     * <p>The resource ID of the API Gateway for the proxy. </p>
     */
    inline ApiGatewayProxySummary& WithApiGatewayId(const Aws::String& value) { SetApiGatewayId(value); return *this;}

    /**
     * <p>The resource ID of the API Gateway for the proxy. </p>
     */
    inline ApiGatewayProxySummary& WithApiGatewayId(Aws::String&& value) { SetApiGatewayId(std::move(value)); return *this;}

    /**
     * <p>The resource ID of the API Gateway for the proxy. </p>
     */
    inline ApiGatewayProxySummary& WithApiGatewayId(const char* value) { SetApiGatewayId(value); return *this;}


    /**
     * <p>The type of API Gateway endpoint created. </p>
     */
    inline const ApiGatewayEndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of API Gateway endpoint created. </p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of API Gateway endpoint created. </p>
     */
    inline void SetEndpointType(const ApiGatewayEndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of API Gateway endpoint created. </p>
     */
    inline void SetEndpointType(ApiGatewayEndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of API Gateway endpoint created. </p>
     */
    inline ApiGatewayProxySummary& WithEndpointType(const ApiGatewayEndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of API Gateway endpoint created. </p>
     */
    inline ApiGatewayProxySummary& WithEndpointType(ApiGatewayEndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer configured by the
     * API Gateway proxy. </p>
     */
    inline const Aws::String& GetNlbArn() const{ return m_nlbArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer configured by the
     * API Gateway proxy. </p>
     */
    inline bool NlbArnHasBeenSet() const { return m_nlbArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer configured by the
     * API Gateway proxy. </p>
     */
    inline void SetNlbArn(const Aws::String& value) { m_nlbArnHasBeenSet = true; m_nlbArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer configured by the
     * API Gateway proxy. </p>
     */
    inline void SetNlbArn(Aws::String&& value) { m_nlbArnHasBeenSet = true; m_nlbArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer configured by the
     * API Gateway proxy. </p>
     */
    inline void SetNlbArn(const char* value) { m_nlbArnHasBeenSet = true; m_nlbArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer configured by the
     * API Gateway proxy. </p>
     */
    inline ApiGatewayProxySummary& WithNlbArn(const Aws::String& value) { SetNlbArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer configured by the
     * API Gateway proxy. </p>
     */
    inline ApiGatewayProxySummary& WithNlbArn(Aws::String&& value) { SetNlbArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer configured by the
     * API Gateway proxy. </p>
     */
    inline ApiGatewayProxySummary& WithNlbArn(const char* value) { SetNlbArn(value); return *this;}


    /**
     * <p>The name of the Network Load Balancer that is configured by the API Gateway
     * proxy. </p>
     */
    inline const Aws::String& GetNlbName() const{ return m_nlbName; }

    /**
     * <p>The name of the Network Load Balancer that is configured by the API Gateway
     * proxy. </p>
     */
    inline bool NlbNameHasBeenSet() const { return m_nlbNameHasBeenSet; }

    /**
     * <p>The name of the Network Load Balancer that is configured by the API Gateway
     * proxy. </p>
     */
    inline void SetNlbName(const Aws::String& value) { m_nlbNameHasBeenSet = true; m_nlbName = value; }

    /**
     * <p>The name of the Network Load Balancer that is configured by the API Gateway
     * proxy. </p>
     */
    inline void SetNlbName(Aws::String&& value) { m_nlbNameHasBeenSet = true; m_nlbName = std::move(value); }

    /**
     * <p>The name of the Network Load Balancer that is configured by the API Gateway
     * proxy. </p>
     */
    inline void SetNlbName(const char* value) { m_nlbNameHasBeenSet = true; m_nlbName.assign(value); }

    /**
     * <p>The name of the Network Load Balancer that is configured by the API Gateway
     * proxy. </p>
     */
    inline ApiGatewayProxySummary& WithNlbName(const Aws::String& value) { SetNlbName(value); return *this;}

    /**
     * <p>The name of the Network Load Balancer that is configured by the API Gateway
     * proxy. </p>
     */
    inline ApiGatewayProxySummary& WithNlbName(Aws::String&& value) { SetNlbName(std::move(value)); return *this;}

    /**
     * <p>The name of the Network Load Balancer that is configured by the API Gateway
     * proxy. </p>
     */
    inline ApiGatewayProxySummary& WithNlbName(const char* value) { SetNlbName(value); return *this;}


    /**
     * <p>The endpoint URL of the API Gateway proxy. </p>
     */
    inline const Aws::String& GetProxyUrl() const{ return m_proxyUrl; }

    /**
     * <p>The endpoint URL of the API Gateway proxy. </p>
     */
    inline bool ProxyUrlHasBeenSet() const { return m_proxyUrlHasBeenSet; }

    /**
     * <p>The endpoint URL of the API Gateway proxy. </p>
     */
    inline void SetProxyUrl(const Aws::String& value) { m_proxyUrlHasBeenSet = true; m_proxyUrl = value; }

    /**
     * <p>The endpoint URL of the API Gateway proxy. </p>
     */
    inline void SetProxyUrl(Aws::String&& value) { m_proxyUrlHasBeenSet = true; m_proxyUrl = std::move(value); }

    /**
     * <p>The endpoint URL of the API Gateway proxy. </p>
     */
    inline void SetProxyUrl(const char* value) { m_proxyUrlHasBeenSet = true; m_proxyUrl.assign(value); }

    /**
     * <p>The endpoint URL of the API Gateway proxy. </p>
     */
    inline ApiGatewayProxySummary& WithProxyUrl(const Aws::String& value) { SetProxyUrl(value); return *this;}

    /**
     * <p>The endpoint URL of the API Gateway proxy. </p>
     */
    inline ApiGatewayProxySummary& WithProxyUrl(Aws::String&& value) { SetProxyUrl(std::move(value)); return *this;}

    /**
     * <p>The endpoint URL of the API Gateway proxy. </p>
     */
    inline ApiGatewayProxySummary& WithProxyUrl(const char* value) { SetProxyUrl(value); return *this;}


    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline ApiGatewayProxySummary& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline ApiGatewayProxySummary& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the API Gateway stage. The name defaults to <code>prod</code>.
     * </p>
     */
    inline ApiGatewayProxySummary& WithStageName(const char* value) { SetStageName(value); return *this;}


    /**
     * <p>The <code>VpcLink</code> ID of the API Gateway proxy. </p>
     */
    inline const Aws::String& GetVpcLinkId() const{ return m_vpcLinkId; }

    /**
     * <p>The <code>VpcLink</code> ID of the API Gateway proxy. </p>
     */
    inline bool VpcLinkIdHasBeenSet() const { return m_vpcLinkIdHasBeenSet; }

    /**
     * <p>The <code>VpcLink</code> ID of the API Gateway proxy. </p>
     */
    inline void SetVpcLinkId(const Aws::String& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = value; }

    /**
     * <p>The <code>VpcLink</code> ID of the API Gateway proxy. </p>
     */
    inline void SetVpcLinkId(Aws::String&& value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId = std::move(value); }

    /**
     * <p>The <code>VpcLink</code> ID of the API Gateway proxy. </p>
     */
    inline void SetVpcLinkId(const char* value) { m_vpcLinkIdHasBeenSet = true; m_vpcLinkId.assign(value); }

    /**
     * <p>The <code>VpcLink</code> ID of the API Gateway proxy. </p>
     */
    inline ApiGatewayProxySummary& WithVpcLinkId(const Aws::String& value) { SetVpcLinkId(value); return *this;}

    /**
     * <p>The <code>VpcLink</code> ID of the API Gateway proxy. </p>
     */
    inline ApiGatewayProxySummary& WithVpcLinkId(Aws::String&& value) { SetVpcLinkId(std::move(value)); return *this;}

    /**
     * <p>The <code>VpcLink</code> ID of the API Gateway proxy. </p>
     */
    inline ApiGatewayProxySummary& WithVpcLinkId(const char* value) { SetVpcLinkId(value); return *this;}

  private:

    Aws::String m_apiGatewayId;
    bool m_apiGatewayIdHasBeenSet = false;

    ApiGatewayEndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_nlbArn;
    bool m_nlbArnHasBeenSet = false;

    Aws::String m_nlbName;
    bool m_nlbNameHasBeenSet = false;

    Aws::String m_proxyUrl;
    bool m_proxyUrlHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_vpcLinkId;
    bool m_vpcLinkIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
