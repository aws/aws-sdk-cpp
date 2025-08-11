/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EVS
{
namespace Model
{

  /**
   * <p> The license information that Amazon EVS requires to create an environment.
   * Amazon EVS requires two license keys: a VCF solution key and a vSAN license
   * key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/LicenseInfo">AWS API
   * Reference</a></p>
   */
  class LicenseInfo
  {
  public:
    AWS_EVS_API LicenseInfo() = default;
    AWS_EVS_API LicenseInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API LicenseInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The VCF solution key. This license unlocks VMware VCF product features,
     * including vSphere, NSX, SDDC Manager, and vCenter Server. The VCF solution key
     * must cover a minimum of 256 cores.</p>
     */
    inline const Aws::String& GetSolutionKey() const { return m_solutionKey; }
    inline bool SolutionKeyHasBeenSet() const { return m_solutionKeyHasBeenSet; }
    template<typename SolutionKeyT = Aws::String>
    void SetSolutionKey(SolutionKeyT&& value) { m_solutionKeyHasBeenSet = true; m_solutionKey = std::forward<SolutionKeyT>(value); }
    template<typename SolutionKeyT = Aws::String>
    LicenseInfo& WithSolutionKey(SolutionKeyT&& value) { SetSolutionKey(std::forward<SolutionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The VSAN license key. This license unlocks vSAN features. The vSAN license
     * key must provide at least 110 TiB of vSAN capacity.</p>
     */
    inline const Aws::String& GetVsanKey() const { return m_vsanKey; }
    inline bool VsanKeyHasBeenSet() const { return m_vsanKeyHasBeenSet; }
    template<typename VsanKeyT = Aws::String>
    void SetVsanKey(VsanKeyT&& value) { m_vsanKeyHasBeenSet = true; m_vsanKey = std::forward<VsanKeyT>(value); }
    template<typename VsanKeyT = Aws::String>
    LicenseInfo& WithVsanKey(VsanKeyT&& value) { SetVsanKey(std::forward<VsanKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_solutionKey;
    bool m_solutionKeyHasBeenSet = false;

    Aws::String m_vsanKey;
    bool m_vsanKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
