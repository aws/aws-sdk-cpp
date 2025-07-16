/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ServiceConnectTestTrafficHeaderMatchRules.h>
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
   * <p>The HTTP header rules used to identify and route test traffic during Amazon
   * ECS blue/green deployments. These rules specify which HTTP headers to examine
   * and what values to match for routing decisions.</p> <p>For more information, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect-blue-green.html">Service
   * Connect for Amazon ECS blue/green deployments</a> in the <i> Amazon Elastic
   * Container Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceConnectTestTrafficHeaderRules">AWS
   * API Reference</a></p>
   */
  class ServiceConnectTestTrafficHeaderRules
  {
  public:
    AWS_ECS_API ServiceConnectTestTrafficHeaderRules() = default;
    AWS_ECS_API ServiceConnectTestTrafficHeaderRules(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceConnectTestTrafficHeaderRules& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the HTTP header to examine for test traffic routing. Common
     * examples include custom headers like <code>X-Test-Version</code> or
     * <code>X-Canary-Request</code> that can be used to identify test traffic.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ServiceConnectTestTrafficHeaderRules& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The header value matching configuration that determines how the HTTP header
     * value is evaluated for test traffic routing decisions.</p>
     */
    inline const ServiceConnectTestTrafficHeaderMatchRules& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = ServiceConnectTestTrafficHeaderMatchRules>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = ServiceConnectTestTrafficHeaderMatchRules>
    ServiceConnectTestTrafficHeaderRules& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServiceConnectTestTrafficHeaderMatchRules m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
