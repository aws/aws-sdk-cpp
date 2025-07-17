/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/ParameterDefinition.h>
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
   * <p> <p>This field only supports multi-tenant distributions. You can't
   * specify this field for standard distributions. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-config-options.html#unsupported-saas">Unsupported
   * features for SaaS Manager for Amazon CloudFront</a> in the <i>Amazon CloudFront
   * Developer Guide</i>.</p>  <p>The configuration for a distribution
   * tenant.</p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/TenantConfig">AWS
   * API Reference</a></p>
   */
  class TenantConfig
  {
  public:
    AWS_CLOUDFRONT_API TenantConfig() = default;
    AWS_CLOUDFRONT_API TenantConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API TenantConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The parameters that you specify for a distribution tenant.</p>
     */
    inline const Aws::Vector<ParameterDefinition>& GetParameterDefinitions() const { return m_parameterDefinitions; }
    inline bool ParameterDefinitionsHasBeenSet() const { return m_parameterDefinitionsHasBeenSet; }
    template<typename ParameterDefinitionsT = Aws::Vector<ParameterDefinition>>
    void SetParameterDefinitions(ParameterDefinitionsT&& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions = std::forward<ParameterDefinitionsT>(value); }
    template<typename ParameterDefinitionsT = Aws::Vector<ParameterDefinition>>
    TenantConfig& WithParameterDefinitions(ParameterDefinitionsT&& value) { SetParameterDefinitions(std::forward<ParameterDefinitionsT>(value)); return *this;}
    template<typename ParameterDefinitionsT = ParameterDefinition>
    TenantConfig& AddParameterDefinitions(ParameterDefinitionsT&& value) { m_parameterDefinitionsHasBeenSet = true; m_parameterDefinitions.emplace_back(std::forward<ParameterDefinitionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ParameterDefinition> m_parameterDefinitions;
    bool m_parameterDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
