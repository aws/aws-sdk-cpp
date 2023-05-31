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
    AWS_MAINFRAMEMODERNIZATION_API DatasetOrgAttributes();
    AWS_MAINFRAMEMODERNIZATION_API DatasetOrgAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DatasetOrgAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The generation data group of the data set.</p>
     */
    inline const GdgAttributes& GetGdg() const{ return m_gdg; }

    /**
     * <p>The generation data group of the data set.</p>
     */
    inline bool GdgHasBeenSet() const { return m_gdgHasBeenSet; }

    /**
     * <p>The generation data group of the data set.</p>
     */
    inline void SetGdg(const GdgAttributes& value) { m_gdgHasBeenSet = true; m_gdg = value; }

    /**
     * <p>The generation data group of the data set.</p>
     */
    inline void SetGdg(GdgAttributes&& value) { m_gdgHasBeenSet = true; m_gdg = std::move(value); }

    /**
     * <p>The generation data group of the data set.</p>
     */
    inline DatasetOrgAttributes& WithGdg(const GdgAttributes& value) { SetGdg(value); return *this;}

    /**
     * <p>The generation data group of the data set.</p>
     */
    inline DatasetOrgAttributes& WithGdg(GdgAttributes&& value) { SetGdg(std::move(value)); return *this;}


    /**
     * <p>The details of a PO type data set.</p>
     */
    inline const PoAttributes& GetPo() const{ return m_po; }

    /**
     * <p>The details of a PO type data set.</p>
     */
    inline bool PoHasBeenSet() const { return m_poHasBeenSet; }

    /**
     * <p>The details of a PO type data set.</p>
     */
    inline void SetPo(const PoAttributes& value) { m_poHasBeenSet = true; m_po = value; }

    /**
     * <p>The details of a PO type data set.</p>
     */
    inline void SetPo(PoAttributes&& value) { m_poHasBeenSet = true; m_po = std::move(value); }

    /**
     * <p>The details of a PO type data set.</p>
     */
    inline DatasetOrgAttributes& WithPo(const PoAttributes& value) { SetPo(value); return *this;}

    /**
     * <p>The details of a PO type data set.</p>
     */
    inline DatasetOrgAttributes& WithPo(PoAttributes&& value) { SetPo(std::move(value)); return *this;}


    /**
     * <p>The details of a PS type data set.</p>
     */
    inline const PsAttributes& GetPs() const{ return m_ps; }

    /**
     * <p>The details of a PS type data set.</p>
     */
    inline bool PsHasBeenSet() const { return m_psHasBeenSet; }

    /**
     * <p>The details of a PS type data set.</p>
     */
    inline void SetPs(const PsAttributes& value) { m_psHasBeenSet = true; m_ps = value; }

    /**
     * <p>The details of a PS type data set.</p>
     */
    inline void SetPs(PsAttributes&& value) { m_psHasBeenSet = true; m_ps = std::move(value); }

    /**
     * <p>The details of a PS type data set.</p>
     */
    inline DatasetOrgAttributes& WithPs(const PsAttributes& value) { SetPs(value); return *this;}

    /**
     * <p>The details of a PS type data set.</p>
     */
    inline DatasetOrgAttributes& WithPs(PsAttributes&& value) { SetPs(std::move(value)); return *this;}


    /**
     * <p>The details of a VSAM data set.</p>
     */
    inline const VsamAttributes& GetVsam() const{ return m_vsam; }

    /**
     * <p>The details of a VSAM data set.</p>
     */
    inline bool VsamHasBeenSet() const { return m_vsamHasBeenSet; }

    /**
     * <p>The details of a VSAM data set.</p>
     */
    inline void SetVsam(const VsamAttributes& value) { m_vsamHasBeenSet = true; m_vsam = value; }

    /**
     * <p>The details of a VSAM data set.</p>
     */
    inline void SetVsam(VsamAttributes&& value) { m_vsamHasBeenSet = true; m_vsam = std::move(value); }

    /**
     * <p>The details of a VSAM data set.</p>
     */
    inline DatasetOrgAttributes& WithVsam(const VsamAttributes& value) { SetVsam(value); return *this;}

    /**
     * <p>The details of a VSAM data set.</p>
     */
    inline DatasetOrgAttributes& WithVsam(VsamAttributes&& value) { SetVsam(std::move(value)); return *this;}

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
