/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/EndpointType.h>
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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>The endpoint configuration to indicate the types of endpoints an API
   * (RestApi) or its custom domain name (DomainName) has. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/EndpointConfiguration">AWS
   * API Reference</a></p>
   */
  class EndpointConfiguration
  {
  public:
    AWS_APIGATEWAY_API EndpointConfiguration() = default;
    AWS_APIGATEWAY_API EndpointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API EndpointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of endpoint types of an API (RestApi) or its custom domain name
     * (DomainName). For an edge-optimized API and its custom domain name, the endpoint
     * type is <code>"EDGE"</code>. For a regional API and its custom domain name, the
     * endpoint type is <code>REGIONAL</code>. For a private API, the endpoint type is
     * <code>PRIVATE</code>.</p>
     */
    inline const Aws::Vector<EndpointType>& GetTypes() const { return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    template<typename TypesT = Aws::Vector<EndpointType>>
    void SetTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types = std::forward<TypesT>(value); }
    template<typename TypesT = Aws::Vector<EndpointType>>
    EndpointConfiguration& WithTypes(TypesT&& value) { SetTypes(std::forward<TypesT>(value)); return *this;}
    inline EndpointConfiguration& AddTypes(EndpointType value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of VpcEndpointIds of an API (RestApi) against which to create Route53
     * ALIASes. It is only supported for <code>PRIVATE</code> endpoint type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcEndpointIds() const { return m_vpcEndpointIds; }
    inline bool VpcEndpointIdsHasBeenSet() const { return m_vpcEndpointIdsHasBeenSet; }
    template<typename VpcEndpointIdsT = Aws::Vector<Aws::String>>
    void SetVpcEndpointIds(VpcEndpointIdsT&& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds = std::forward<VpcEndpointIdsT>(value); }
    template<typename VpcEndpointIdsT = Aws::Vector<Aws::String>>
    EndpointConfiguration& WithVpcEndpointIds(VpcEndpointIdsT&& value) { SetVpcEndpointIds(std::forward<VpcEndpointIdsT>(value)); return *this;}
    template<typename VpcEndpointIdsT = Aws::String>
    EndpointConfiguration& AddVpcEndpointIds(VpcEndpointIdsT&& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds.emplace_back(std::forward<VpcEndpointIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<EndpointType> m_types;
    bool m_typesHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcEndpointIds;
    bool m_vpcEndpointIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
