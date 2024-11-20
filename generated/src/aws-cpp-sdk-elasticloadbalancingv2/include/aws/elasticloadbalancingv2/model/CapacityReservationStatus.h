/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticloadbalancingv2/model/CapacityReservationStateEnum.h>
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
   * <p>The status of a capacity reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/CapacityReservationStatus">AWS
   * API Reference</a></p>
   */
  class CapacityReservationStatus
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API CapacityReservationStatus();
    AWS_ELASTICLOADBALANCINGV2_API CapacityReservationStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API CapacityReservationStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The status code.</p>
     */
    inline const CapacityReservationStateEnum& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const CapacityReservationStateEnum& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(CapacityReservationStateEnum&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline CapacityReservationStatus& WithCode(const CapacityReservationStateEnum& value) { SetCode(value); return *this;}
    inline CapacityReservationStatus& WithCode(CapacityReservationStateEnum&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason code for the status.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline CapacityReservationStatus& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline CapacityReservationStatus& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline CapacityReservationStatus& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}
  private:

    CapacityReservationStateEnum m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
