/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticloadbalancingv2/model/TargetAdministrativeOverrideStateEnum.h>
#include <aws/elasticloadbalancingv2/model/TargetAdministrativeOverrideReasonEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about the override status applied to a target.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AdministrativeOverride">AWS
   * API Reference</a></p>
   */
  class AdministrativeOverride
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API AdministrativeOverride() = default;
    AWS_ELASTICLOADBALANCINGV2_API AdministrativeOverride(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API AdministrativeOverride& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The state of the override.</p>
     */
    inline TargetAdministrativeOverrideStateEnum GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(TargetAdministrativeOverrideStateEnum value) { m_stateHasBeenSet = true; m_state = value; }
    inline AdministrativeOverride& WithState(TargetAdministrativeOverrideStateEnum value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason code for the state.</p>
     */
    inline TargetAdministrativeOverrideReasonEnum GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(TargetAdministrativeOverrideReasonEnum value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline AdministrativeOverride& WithReason(TargetAdministrativeOverrideReasonEnum value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the override state that provides additional details.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AdministrativeOverride& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    TargetAdministrativeOverrideStateEnum m_state{TargetAdministrativeOverrideStateEnum::NOT_SET};
    bool m_stateHasBeenSet = false;

    TargetAdministrativeOverrideReasonEnum m_reason{TargetAdministrativeOverrideReasonEnum::NOT_SET};
    bool m_reasonHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
