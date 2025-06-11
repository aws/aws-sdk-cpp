/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/controlcatalog/model/ControlScope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ControlCatalog
{
namespace Model
{

  /**
   * <p>Returns information about the control, including the scope of the control, if
   * enabled, and the Regions in which the control is available for deployment. For
   * more information about scope, see <a
   * href="https://docs.aws.amazon.com/whitepapers/latest/aws-fault-isolation-boundaries/global-services.html">Global
   * services</a>.</p> <p>If you are applying controls through an Amazon Web Services
   * Control Tower landing zone environment, remember that the values returned in the
   * <code>RegionConfiguration</code> API operation are not related to the governed
   * Regions in your landing zone. For example, if you are governing Regions
   * <code>A</code>,<code>B</code>,and <code>C</code> while the control is available
   * in Regions <code>A</code>, <code>B</code>, C<code>,</code> and <code>D</code>,
   * you'd see a response with <code>DeployableRegions</code> of <code>A</code>,
   * <code>B</code>, <code>C</code>, and <code>D</code> for a control with
   * <code>REGIONAL</code> scope, even though you may not intend to deploy the
   * control in Region <code>D</code>, because you do not govern it through your
   * landing zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/RegionConfiguration">AWS
   * API Reference</a></p>
   */
  class RegionConfiguration
  {
  public:
    AWS_CONTROLCATALOG_API RegionConfiguration() = default;
    AWS_CONTROLCATALOG_API RegionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API RegionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The coverage of the control, if deployed. Scope is an enumerated type, with
     * value <code>Regional</code>, or <code>Global</code>. A control with Global scope
     * is effective in all Amazon Web Services Regions, regardless of the Region from
     * which it is enabled, or to which it is deployed. A control implemented by an SCP
     * is usually Global in scope. A control with Regional scope has operations that
     * are restricted specifically to the Region from which it is enabled and to which
     * it is deployed. Controls implemented by Config rules and CloudFormation hooks
     * usually are Regional in scope. Security Hub controls usually are Regional in
     * scope.</p>
     */
    inline ControlScope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(ControlScope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline RegionConfiguration& WithScope(ControlScope value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Regions in which the control is available to be deployed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeployableRegions() const { return m_deployableRegions; }
    inline bool DeployableRegionsHasBeenSet() const { return m_deployableRegionsHasBeenSet; }
    template<typename DeployableRegionsT = Aws::Vector<Aws::String>>
    void SetDeployableRegions(DeployableRegionsT&& value) { m_deployableRegionsHasBeenSet = true; m_deployableRegions = std::forward<DeployableRegionsT>(value); }
    template<typename DeployableRegionsT = Aws::Vector<Aws::String>>
    RegionConfiguration& WithDeployableRegions(DeployableRegionsT&& value) { SetDeployableRegions(std::forward<DeployableRegionsT>(value)); return *this;}
    template<typename DeployableRegionsT = Aws::String>
    RegionConfiguration& AddDeployableRegions(DeployableRegionsT&& value) { m_deployableRegionsHasBeenSet = true; m_deployableRegions.emplace_back(std::forward<DeployableRegionsT>(value)); return *this; }
    ///@}
  private:

    ControlScope m_scope{ControlScope::NOT_SET};
    bool m_scopeHasBeenSet = false;

    Aws::Vector<Aws::String> m_deployableRegions;
    bool m_deployableRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
