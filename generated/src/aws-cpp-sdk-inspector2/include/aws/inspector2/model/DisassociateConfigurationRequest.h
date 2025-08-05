/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains details about a request to disassociate a code repository from a
   * scan configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/DisassociateConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class DisassociateConfigurationRequest
  {
  public:
    AWS_INSPECTOR2_API DisassociateConfigurationRequest() = default;
    AWS_INSPECTOR2_API DisassociateConfigurationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API DisassociateConfigurationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scan configuration to disassociate from
     * a code repository.</p>
     */
    inline const Aws::String& GetScanConfigurationArn() const { return m_scanConfigurationArn; }
    inline bool ScanConfigurationArnHasBeenSet() const { return m_scanConfigurationArnHasBeenSet; }
    template<typename ScanConfigurationArnT = Aws::String>
    void SetScanConfigurationArn(ScanConfigurationArnT&& value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn = std::forward<ScanConfigurationArnT>(value); }
    template<typename ScanConfigurationArnT = Aws::String>
    DisassociateConfigurationRequest& WithScanConfigurationArn(ScanConfigurationArnT&& value) { SetScanConfigurationArn(std::forward<ScanConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CodeSecurityResource& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = CodeSecurityResource>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = CodeSecurityResource>
    DisassociateConfigurationRequest& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scanConfigurationArn;
    bool m_scanConfigurationArnHasBeenSet = false;

    CodeSecurityResource m_resource;
    bool m_resourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
