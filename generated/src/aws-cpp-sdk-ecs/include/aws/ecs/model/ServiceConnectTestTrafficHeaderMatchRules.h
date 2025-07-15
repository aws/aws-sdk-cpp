/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The header matching rules for test traffic routing in Amazon ECS blue/green
   * deployments. These rules determine how incoming requests are matched based on
   * HTTP headers to route test traffic to the new service revision.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceConnectTestTrafficHeaderMatchRules">AWS
   * API Reference</a></p>
   */
  class ServiceConnectTestTrafficHeaderMatchRules
  {
  public:
    AWS_ECS_API ServiceConnectTestTrafficHeaderMatchRules() = default;
    AWS_ECS_API ServiceConnectTestTrafficHeaderMatchRules(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceConnectTestTrafficHeaderMatchRules& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The exact value that the HTTP header must match for the test traffic routing
     * rule to apply. This provides precise control over which requests are routed to
     * the new service revision during blue/green deployments.</p>
     */
    inline const Aws::String& GetExact() const { return m_exact; }
    inline bool ExactHasBeenSet() const { return m_exactHasBeenSet; }
    template<typename ExactT = Aws::String>
    void SetExact(ExactT&& value) { m_exactHasBeenSet = true; m_exact = std::forward<ExactT>(value); }
    template<typename ExactT = Aws::String>
    ServiceConnectTestTrafficHeaderMatchRules& WithExact(ExactT&& value) { SetExact(std::forward<ExactT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exact;
    bool m_exactHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
