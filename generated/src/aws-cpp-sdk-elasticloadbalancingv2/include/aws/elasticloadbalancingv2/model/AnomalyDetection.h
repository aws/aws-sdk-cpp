/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticloadbalancingv2/model/AnomalyResultEnum.h>
#include <aws/elasticloadbalancingv2/model/MitigationInEffectEnum.h>
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
   * <p>Information about anomaly detection and mitigation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AnomalyDetection">AWS
   * API Reference</a></p>
   */
  class AnomalyDetection
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API AnomalyDetection() = default;
    AWS_ELASTICLOADBALANCINGV2_API AnomalyDetection(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API AnomalyDetection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The latest anomaly detection result.</p>
     */
    inline AnomalyResultEnum GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(AnomalyResultEnum value) { m_resultHasBeenSet = true; m_result = value; }
    inline AnomalyDetection& WithResult(AnomalyResultEnum value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether anomaly mitigation is in progress.</p>
     */
    inline MitigationInEffectEnum GetMitigationInEffect() const { return m_mitigationInEffect; }
    inline bool MitigationInEffectHasBeenSet() const { return m_mitigationInEffectHasBeenSet; }
    inline void SetMitigationInEffect(MitigationInEffectEnum value) { m_mitigationInEffectHasBeenSet = true; m_mitigationInEffect = value; }
    inline AnomalyDetection& WithMitigationInEffect(MitigationInEffectEnum value) { SetMitigationInEffect(value); return *this;}
    ///@}
  private:

    AnomalyResultEnum m_result{AnomalyResultEnum::NOT_SET};
    bool m_resultHasBeenSet = false;

    MitigationInEffectEnum m_mitigationInEffect{MitigationInEffectEnum::NOT_SET};
    bool m_mitigationInEffectHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
