/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ContinuousDeploymentSingleWeightConfig.h>
#include <aws/cloudfront/model/ContinuousDeploymentSingleHeaderConfig.h>
#include <aws/cloudfront/model/ContinuousDeploymentPolicyType.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The traffic configuration of your continuous deployment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/TrafficConfig">AWS
   * API Reference</a></p>
   */
  class TrafficConfig
  {
  public:
    AWS_CLOUDFRONT_API TrafficConfig() = default;
    AWS_CLOUDFRONT_API TrafficConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API TrafficConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Contains the percentage of traffic to send to the staging distribution.</p>
     */
    inline const ContinuousDeploymentSingleWeightConfig& GetSingleWeightConfig() const { return m_singleWeightConfig; }
    inline bool SingleWeightConfigHasBeenSet() const { return m_singleWeightConfigHasBeenSet; }
    template<typename SingleWeightConfigT = ContinuousDeploymentSingleWeightConfig>
    void SetSingleWeightConfig(SingleWeightConfigT&& value) { m_singleWeightConfigHasBeenSet = true; m_singleWeightConfig = std::forward<SingleWeightConfigT>(value); }
    template<typename SingleWeightConfigT = ContinuousDeploymentSingleWeightConfig>
    TrafficConfig& WithSingleWeightConfig(SingleWeightConfigT&& value) { SetSingleWeightConfig(std::forward<SingleWeightConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines which HTTP requests are sent to the staging distribution.</p>
     */
    inline const ContinuousDeploymentSingleHeaderConfig& GetSingleHeaderConfig() const { return m_singleHeaderConfig; }
    inline bool SingleHeaderConfigHasBeenSet() const { return m_singleHeaderConfigHasBeenSet; }
    template<typename SingleHeaderConfigT = ContinuousDeploymentSingleHeaderConfig>
    void SetSingleHeaderConfig(SingleHeaderConfigT&& value) { m_singleHeaderConfigHasBeenSet = true; m_singleHeaderConfig = std::forward<SingleHeaderConfigT>(value); }
    template<typename SingleHeaderConfigT = ContinuousDeploymentSingleHeaderConfig>
    TrafficConfig& WithSingleHeaderConfig(SingleHeaderConfigT&& value) { SetSingleHeaderConfig(std::forward<SingleHeaderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of traffic configuration.</p>
     */
    inline ContinuousDeploymentPolicyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ContinuousDeploymentPolicyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TrafficConfig& WithType(ContinuousDeploymentPolicyType value) { SetType(value); return *this;}
    ///@}
  private:

    ContinuousDeploymentSingleWeightConfig m_singleWeightConfig;
    bool m_singleWeightConfigHasBeenSet = false;

    ContinuousDeploymentSingleHeaderConfig m_singleHeaderConfig;
    bool m_singleHeaderConfigHasBeenSet = false;

    ContinuousDeploymentPolicyType m_type{ContinuousDeploymentPolicyType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
