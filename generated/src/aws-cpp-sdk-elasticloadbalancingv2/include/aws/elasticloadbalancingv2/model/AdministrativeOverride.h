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
    AWS_ELASTICLOADBALANCINGV2_API AdministrativeOverride();
    AWS_ELASTICLOADBALANCINGV2_API AdministrativeOverride(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API AdministrativeOverride& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The state of the override.</p>
     */
    inline const TargetAdministrativeOverrideStateEnum& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const TargetAdministrativeOverrideStateEnum& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(TargetAdministrativeOverrideStateEnum&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline AdministrativeOverride& WithState(const TargetAdministrativeOverrideStateEnum& value) { SetState(value); return *this;}
    inline AdministrativeOverride& WithState(TargetAdministrativeOverrideStateEnum&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason code for the state.</p>
     */
    inline const TargetAdministrativeOverrideReasonEnum& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const TargetAdministrativeOverrideReasonEnum& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(TargetAdministrativeOverrideReasonEnum&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline AdministrativeOverride& WithReason(const TargetAdministrativeOverrideReasonEnum& value) { SetReason(value); return *this;}
    inline AdministrativeOverride& WithReason(TargetAdministrativeOverrideReasonEnum&& value) { SetReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the override state that provides additional details.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AdministrativeOverride& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AdministrativeOverride& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AdministrativeOverride& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    TargetAdministrativeOverrideStateEnum m_state;
    bool m_stateHasBeenSet = false;

    TargetAdministrativeOverrideReasonEnum m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
