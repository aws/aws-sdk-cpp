/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ExportHiddenFieldsOption.h>
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DashboardVisualPublishOptions">AWS
   * API Reference</a></p>
   */
  class DashboardVisualPublishOptions
  {
  public:
    AWS_QUICKSIGHT_API DashboardVisualPublishOptions();
    AWS_QUICKSIGHT_API DashboardVisualPublishOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DashboardVisualPublishOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const ExportHiddenFieldsOption& GetExportHiddenFieldsOption() const{ return m_exportHiddenFieldsOption; }

    /**
     * <p/>
     */
    inline bool ExportHiddenFieldsOptionHasBeenSet() const { return m_exportHiddenFieldsOptionHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetExportHiddenFieldsOption(const ExportHiddenFieldsOption& value) { m_exportHiddenFieldsOptionHasBeenSet = true; m_exportHiddenFieldsOption = value; }

    /**
     * <p/>
     */
    inline void SetExportHiddenFieldsOption(ExportHiddenFieldsOption&& value) { m_exportHiddenFieldsOptionHasBeenSet = true; m_exportHiddenFieldsOption = std::move(value); }

    /**
     * <p/>
     */
    inline DashboardVisualPublishOptions& WithExportHiddenFieldsOption(const ExportHiddenFieldsOption& value) { SetExportHiddenFieldsOption(value); return *this;}

    /**
     * <p/>
     */
    inline DashboardVisualPublishOptions& WithExportHiddenFieldsOption(ExportHiddenFieldsOption&& value) { SetExportHiddenFieldsOption(std::move(value)); return *this;}

  private:

    ExportHiddenFieldsOption m_exportHiddenFieldsOption;
    bool m_exportHiddenFieldsOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
