/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AdHocFilteringOption.h>
#include <aws/quicksight/model/ExportToCSVOption.h>
#include <aws/quicksight/model/SheetControlsOption.h>
#include <aws/quicksight/model/DashboardVisualPublishOptions.h>
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
  class DashboardPublishOptions
  {
  public:
    AWS_QUICKSIGHT_API DashboardPublishOptions();
    AWS_QUICKSIGHT_API DashboardPublishOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardPublishOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


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


    /**
     * <p/>
     */
    inline const DashboardVisualPublishOptions& GetVisualPublishOptions() const{ return m_visualPublishOptions; }

    /**
     * <p/>
     */
    inline bool VisualPublishOptionsHasBeenSet() const { return m_visualPublishOptionsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetVisualPublishOptions(const DashboardVisualPublishOptions& value) { m_visualPublishOptionsHasBeenSet = true; m_visualPublishOptions = value; }

    /**
     * <p/>
     */
    inline void SetVisualPublishOptions(DashboardVisualPublishOptions&& value) { m_visualPublishOptionsHasBeenSet = true; m_visualPublishOptions = std::move(value); }

    /**
     * <p/>
     */
    inline DashboardPublishOptions& WithVisualPublishOptions(const DashboardVisualPublishOptions& value) { SetVisualPublishOptions(value); return *this;}

    /**
     * <p/>
     */
    inline DashboardPublishOptions& WithVisualPublishOptions(DashboardVisualPublishOptions&& value) { SetVisualPublishOptions(std::move(value)); return *this;}

  private:

    AdHocFilteringOption m_adHocFilteringOption;
    bool m_adHocFilteringOptionHasBeenSet = false;

    ExportToCSVOption m_exportToCSVOption;
    bool m_exportToCSVOptionHasBeenSet = false;

    SheetControlsOption m_sheetControlsOption;
    bool m_sheetControlsOptionHasBeenSet = false;

    DashboardVisualPublishOptions m_visualPublishOptions;
    bool m_visualPublishOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
