/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ServiceConnectTestTrafficHeaderRules.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The test traffic routing configuration for Amazon ECS blue/green deployments.
   * This configuration allows you to define rules for routing specific traffic to
   * the new service revision during the deployment process, allowing for safe
   * testing before full production traffic shift.</p> <p>For more information, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect-blue-green.html">Service
   * Connect for Amazon ECS blue/green deployments</a> in the <i> Amazon Elastic
   * Container Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceConnectTestTrafficRules">AWS
   * API Reference</a></p>
   */
  class ServiceConnectTestTrafficRules
  {
  public:
    AWS_ECS_API ServiceConnectTestTrafficRules() = default;
    AWS_ECS_API ServiceConnectTestTrafficRules(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceConnectTestTrafficRules& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The HTTP header-based routing rules that determine which requests should be
     * routed to the new service version during blue/green deployment testing. These
     * rules provide fine-grained control over test traffic routing based on request
     * headers.</p>
     */
    inline const ServiceConnectTestTrafficHeaderRules& GetHeader() const { return m_header; }
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
    template<typename HeaderT = ServiceConnectTestTrafficHeaderRules>
    void SetHeader(HeaderT&& value) { m_headerHasBeenSet = true; m_header = std::forward<HeaderT>(value); }
    template<typename HeaderT = ServiceConnectTestTrafficHeaderRules>
    ServiceConnectTestTrafficRules& WithHeader(HeaderT&& value) { SetHeader(std::forward<HeaderT>(value)); return *this;}
    ///@}
  private:

    ServiceConnectTestTrafficHeaderRules m_header;
    bool m_headerHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
