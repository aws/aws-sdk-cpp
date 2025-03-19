/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/ContinuousDeploymentPolicyConfig.h>
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
   * <p>A continuous deployment policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ContinuousDeploymentPolicy">AWS
   * API Reference</a></p>
   */
  class ContinuousDeploymentPolicy
  {
  public:
    AWS_CLOUDFRONT_API ContinuousDeploymentPolicy() = default;
    AWS_CLOUDFRONT_API ContinuousDeploymentPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ContinuousDeploymentPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The identifier of the continuous deployment policy.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ContinuousDeploymentPolicy& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the continuous deployment policy was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ContinuousDeploymentPolicy& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ContinuousDeploymentPolicyConfig& GetContinuousDeploymentPolicyConfig() const { return m_continuousDeploymentPolicyConfig; }
    inline bool ContinuousDeploymentPolicyConfigHasBeenSet() const { return m_continuousDeploymentPolicyConfigHasBeenSet; }
    template<typename ContinuousDeploymentPolicyConfigT = ContinuousDeploymentPolicyConfig>
    void SetContinuousDeploymentPolicyConfig(ContinuousDeploymentPolicyConfigT&& value) { m_continuousDeploymentPolicyConfigHasBeenSet = true; m_continuousDeploymentPolicyConfig = std::forward<ContinuousDeploymentPolicyConfigT>(value); }
    template<typename ContinuousDeploymentPolicyConfigT = ContinuousDeploymentPolicyConfig>
    ContinuousDeploymentPolicy& WithContinuousDeploymentPolicyConfig(ContinuousDeploymentPolicyConfigT&& value) { SetContinuousDeploymentPolicyConfig(std::forward<ContinuousDeploymentPolicyConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    ContinuousDeploymentPolicyConfig m_continuousDeploymentPolicyConfig;
    bool m_continuousDeploymentPolicyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
