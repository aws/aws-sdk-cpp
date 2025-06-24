/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/CodeSecurityResource.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>A summary of an association between a code repository and a scan
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CodeSecurityScanConfigurationAssociationSummary">AWS
   * API Reference</a></p>
   */
  class CodeSecurityScanConfigurationAssociationSummary
  {
  public:
    AWS_INSPECTOR2_API CodeSecurityScanConfigurationAssociationSummary() = default;
    AWS_INSPECTOR2_API CodeSecurityScanConfigurationAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CodeSecurityScanConfigurationAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const CodeSecurityResource& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = CodeSecurityResource>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = CodeSecurityResource>
    CodeSecurityScanConfigurationAssociationSummary& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}
  private:

    CodeSecurityResource m_resource;
    bool m_resourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
