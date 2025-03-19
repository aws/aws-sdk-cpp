/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/model/GdgAttributes.h>
#include <aws/m2/model/PoAttributes.h>
#include <aws/m2/model/PsAttributes.h>
#include <aws/m2/model/VsamAttributes.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Additional details about the data set. Different attributes correspond to
   * different data set organizations. The values are populated based on datasetOrg,
   * storageType and backend (Blu Age or Micro Focus).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DatasetOrgAttributes">AWS
   * API Reference</a></p>
   */
  class DatasetOrgAttributes
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API DatasetOrgAttributes() = default;
    AWS_MAINFRAMEMODERNIZATION_API DatasetOrgAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DatasetOrgAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The generation data group of the data set.</p>
     */
    inline const GdgAttributes& GetGdg() const { return m_gdg; }
    inline bool GdgHasBeenSet() const { return m_gdgHasBeenSet; }
    template<typename GdgT = GdgAttributes>
    void SetGdg(GdgT&& value) { m_gdgHasBeenSet = true; m_gdg = std::forward<GdgT>(value); }
    template<typename GdgT = GdgAttributes>
    DatasetOrgAttributes& WithGdg(GdgT&& value) { SetGdg(std::forward<GdgT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a PO type data set.</p>
     */
    inline const PoAttributes& GetPo() const { return m_po; }
    inline bool PoHasBeenSet() const { return m_poHasBeenSet; }
    template<typename PoT = PoAttributes>
    void SetPo(PoT&& value) { m_poHasBeenSet = true; m_po = std::forward<PoT>(value); }
    template<typename PoT = PoAttributes>
    DatasetOrgAttributes& WithPo(PoT&& value) { SetPo(std::forward<PoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a PS type data set.</p>
     */
    inline const PsAttributes& GetPs() const { return m_ps; }
    inline bool PsHasBeenSet() const { return m_psHasBeenSet; }
    template<typename PsT = PsAttributes>
    void SetPs(PsT&& value) { m_psHasBeenSet = true; m_ps = std::forward<PsT>(value); }
    template<typename PsT = PsAttributes>
    DatasetOrgAttributes& WithPs(PsT&& value) { SetPs(std::forward<PsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a VSAM data set.</p>
     */
    inline const VsamAttributes& GetVsam() const { return m_vsam; }
    inline bool VsamHasBeenSet() const { return m_vsamHasBeenSet; }
    template<typename VsamT = VsamAttributes>
    void SetVsam(VsamT&& value) { m_vsamHasBeenSet = true; m_vsam = std::forward<VsamT>(value); }
    template<typename VsamT = VsamAttributes>
    DatasetOrgAttributes& WithVsam(VsamT&& value) { SetVsam(std::forward<VsamT>(value)); return *this;}
    ///@}
  private:

    GdgAttributes m_gdg;
    bool m_gdgHasBeenSet = false;

    PoAttributes m_po;
    bool m_poHasBeenSet = false;

    PsAttributes m_ps;
    bool m_psHasBeenSet = false;

    VsamAttributes m_vsam;
    bool m_vsamHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
