/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/model/GdgDetailAttributes.h>
#include <aws/m2/model/VsamDetailAttributes.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DatasetDetailOrgAttributes">AWS
   * API Reference</a></p>
   */
  class DatasetDetailOrgAttributes
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API DatasetDetailOrgAttributes();
    AWS_MAINFRAMEMODERNIZATION_API DatasetDetailOrgAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DatasetDetailOrgAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The generation data group of the data set.</p>
     */
    inline const GdgDetailAttributes& GetGdg() const{ return m_gdg; }

    /**
     * <p>The generation data group of the data set.</p>
     */
    inline bool GdgHasBeenSet() const { return m_gdgHasBeenSet; }

    /**
     * <p>The generation data group of the data set.</p>
     */
    inline void SetGdg(const GdgDetailAttributes& value) { m_gdgHasBeenSet = true; m_gdg = value; }

    /**
     * <p>The generation data group of the data set.</p>
     */
    inline void SetGdg(GdgDetailAttributes&& value) { m_gdgHasBeenSet = true; m_gdg = std::move(value); }

    /**
     * <p>The generation data group of the data set.</p>
     */
    inline DatasetDetailOrgAttributes& WithGdg(const GdgDetailAttributes& value) { SetGdg(value); return *this;}

    /**
     * <p>The generation data group of the data set.</p>
     */
    inline DatasetDetailOrgAttributes& WithGdg(GdgDetailAttributes&& value) { SetGdg(std::move(value)); return *this;}


    /**
     * <p>The details of a VSAM data set.</p>
     */
    inline const VsamDetailAttributes& GetVsam() const{ return m_vsam; }

    /**
     * <p>The details of a VSAM data set.</p>
     */
    inline bool VsamHasBeenSet() const { return m_vsamHasBeenSet; }

    /**
     * <p>The details of a VSAM data set.</p>
     */
    inline void SetVsam(const VsamDetailAttributes& value) { m_vsamHasBeenSet = true; m_vsam = value; }

    /**
     * <p>The details of a VSAM data set.</p>
     */
    inline void SetVsam(VsamDetailAttributes&& value) { m_vsamHasBeenSet = true; m_vsam = std::move(value); }

    /**
     * <p>The details of a VSAM data set.</p>
     */
    inline DatasetDetailOrgAttributes& WithVsam(const VsamDetailAttributes& value) { SetVsam(value); return *this;}

    /**
     * <p>The details of a VSAM data set.</p>
     */
    inline DatasetDetailOrgAttributes& WithVsam(VsamDetailAttributes&& value) { SetVsam(std::move(value)); return *this;}

  private:

    GdgDetailAttributes m_gdg;
    bool m_gdgHasBeenSet = false;

    VsamDetailAttributes m_vsam;
    bool m_vsamHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
