/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/model/CodeSecurityResource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class GetCodeSecurityScanRequest : public Inspector2Request
  {
  public:
    AWS_INSPECTOR2_API GetCodeSecurityScanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCodeSecurityScan"; }

    AWS_INSPECTOR2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The resource identifier for the code repository that was scanned.</p>
     */
    inline const CodeSecurityResource& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = CodeSecurityResource>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = CodeSecurityResource>
    GetCodeSecurityScanRequest& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the scan to retrieve.</p>
     */
    inline const Aws::String& GetScanId() const { return m_scanId; }
    inline bool ScanIdHasBeenSet() const { return m_scanIdHasBeenSet; }
    template<typename ScanIdT = Aws::String>
    void SetScanId(ScanIdT&& value) { m_scanIdHasBeenSet = true; m_scanId = std::forward<ScanIdT>(value); }
    template<typename ScanIdT = Aws::String>
    GetCodeSecurityScanRequest& WithScanId(ScanIdT&& value) { SetScanId(std::forward<ScanIdT>(value)); return *this;}
    ///@}
  private:

    CodeSecurityResource m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_scanId;
    bool m_scanIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
