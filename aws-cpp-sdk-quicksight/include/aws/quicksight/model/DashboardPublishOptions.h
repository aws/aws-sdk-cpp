/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AdHocFilteringOption.h>
#include <aws/quicksight/model/ExportToCSVOption.h>
#include <aws/quicksight/model/SheetControlsOption.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Dashboard publish options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardPublishOptions">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API DashboardPublishOptions
  {
  public:
    DashboardPublishOptions();
    DashboardPublishOptions(Aws::Utils::Json::JsonView jsonValue);
    DashboardPublishOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Ad hoc (one-time) filtering option.</p>
     */
    inline const AdHocFilteringOption& GetAdHocFilteringOption() const{ return m_adHocFilteringOption; }

    /**
     * <p>Ad hoc (one-time) filtering option.</p>
     */
    inline bool AdHocFilteringOptionHasBeenSet() const { return m_adHocFilteringOptionHasBeenSet; }

    /**
     * <p>Ad hoc (one-time) filtering option.</p>
     */
    inline void SetAdHocFilteringOption(const AdHocFilteringOption& value) { m_adHocFilteringOptionHasBeenSet = true; m_adHocFilteringOption = value; }

    /**
     * <p>Ad hoc (one-time) filtering option.</p>
     */
    inline void SetAdHocFilteringOption(AdHocFilteringOption&& value) { m_adHocFilteringOptionHasBeenSet = true; m_adHocFilteringOption = std::move(value); }

    /**
     * <p>Ad hoc (one-time) filtering option.</p>
     */
    inline DashboardPublishOptions& WithAdHocFilteringOption(const AdHocFilteringOption& value) { SetAdHocFilteringOption(value); return *this;}

    /**
     * <p>Ad hoc (one-time) filtering option.</p>
     */
    inline DashboardPublishOptions& WithAdHocFilteringOption(AdHocFilteringOption&& value) { SetAdHocFilteringOption(std::move(value)); return *this;}


    /**
     * <p>Export to .csv option.</p>
     */
    inline const ExportToCSVOption& GetExportToCSVOption() const{ return m_exportToCSVOption; }

    /**
     * <p>Export to .csv option.</p>
     */
    inline bool ExportToCSVOptionHasBeenSet() const { return m_exportToCSVOptionHasBeenSet; }

    /**
     * <p>Export to .csv option.</p>
     */
    inline void SetExportToCSVOption(const ExportToCSVOption& value) { m_exportToCSVOptionHasBeenSet = true; m_exportToCSVOption = value; }

    /**
     * <p>Export to .csv option.</p>
     */
    inline void SetExportToCSVOption(ExportToCSVOption&& value) { m_exportToCSVOptionHasBeenSet = true; m_exportToCSVOption = std::move(value); }

    /**
     * <p>Export to .csv option.</p>
     */
    inline DashboardPublishOptions& WithExportToCSVOption(const ExportToCSVOption& value) { SetExportToCSVOption(value); return *this;}

    /**
     * <p>Export to .csv option.</p>
     */
    inline DashboardPublishOptions& WithExportToCSVOption(ExportToCSVOption&& value) { SetExportToCSVOption(std::move(value)); return *this;}


    /**
     * <p>Sheet controls option.</p>
     */
    inline const SheetControlsOption& GetSheetControlsOption() const{ return m_sheetControlsOption; }

    /**
     * <p>Sheet controls option.</p>
     */
    inline bool SheetControlsOptionHasBeenSet() const { return m_sheetControlsOptionHasBeenSet; }

    /**
     * <p>Sheet controls option.</p>
     */
    inline void SetSheetControlsOption(const SheetControlsOption& value) { m_sheetControlsOptionHasBeenSet = true; m_sheetControlsOption = value; }

    /**
     * <p>Sheet controls option.</p>
     */
    inline void SetSheetControlsOption(SheetControlsOption&& value) { m_sheetControlsOptionHasBeenSet = true; m_sheetControlsOption = std::move(value); }

    /**
     * <p>Sheet controls option.</p>
     */
    inline DashboardPublishOptions& WithSheetControlsOption(const SheetControlsOption& value) { SetSheetControlsOption(value); return *this;}

    /**
     * <p>Sheet controls option.</p>
     */
    inline DashboardPublishOptions& WithSheetControlsOption(SheetControlsOption&& value) { SetSheetControlsOption(std::move(value)); return *this;}

  private:

    AdHocFilteringOption m_adHocFilteringOption;
    bool m_adHocFilteringOptionHasBeenSet;

    ExportToCSVOption m_exportToCSVOption;
    bool m_exportToCSVOptionHasBeenSet;

    SheetControlsOption m_sheetControlsOption;
    bool m_sheetControlsOptionHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
