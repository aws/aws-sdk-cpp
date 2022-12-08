/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/AnalysisError.h>
#include <aws/quicksight/model/Sheet.h>
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
   * <p>Metadata structure for an analysis in Amazon QuickSight</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Analysis">AWS
   * API Reference</a></p>
   */
  class Analysis
  {
  public:
    AWS_QUICKSIGHT_API Analysis();
    AWS_QUICKSIGHT_API Analysis(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Analysis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the analysis.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }

    /**
     * <p>The ID of the analysis.</p>
     */
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }

    /**
     * <p>The ID of the analysis.</p>
     */
    inline void SetAnalysisId(const Aws::String& value) { m_analysisIdHasBeenSet = true; m_analysisId = value; }

    /**
     * <p>The ID of the analysis.</p>
     */
    inline void SetAnalysisId(Aws::String&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::move(value); }

    /**
     * <p>The ID of the analysis.</p>
     */
    inline void SetAnalysisId(const char* value) { m_analysisIdHasBeenSet = true; m_analysisId.assign(value); }

    /**
     * <p>The ID of the analysis.</p>
     */
    inline Analysis& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}

    /**
     * <p>The ID of the analysis.</p>
     */
    inline Analysis& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}

    /**
     * <p>The ID of the analysis.</p>
     */
    inline Analysis& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the analysis.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis.</p>
     */
    inline Analysis& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis.</p>
     */
    inline Analysis& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis.</p>
     */
    inline Analysis& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline Analysis& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline Analysis& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline Analysis& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Status associated with the analysis.</p>
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status associated with the analysis.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status associated with the analysis.</p>
     */
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status associated with the analysis.</p>
     */
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status associated with the analysis.</p>
     */
    inline Analysis& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status associated with the analysis.</p>
     */
    inline Analysis& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline const Aws::Vector<AnalysisError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }

    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline void SetErrors(const Aws::Vector<AnalysisError>& value) { m_errorsHasBeenSet = true; m_errors = value; }

    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline void SetErrors(Aws::Vector<AnalysisError>&& value) { m_errorsHasBeenSet = true; m_errors = std::move(value); }

    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline Analysis& WithErrors(const Aws::Vector<AnalysisError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline Analysis& WithErrors(Aws::Vector<AnalysisError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline Analysis& AddErrors(const AnalysisError& value) { m_errorsHasBeenSet = true; m_errors.push_back(value); return *this; }

    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline Analysis& AddErrors(AnalysisError&& value) { m_errorsHasBeenSet = true; m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARNs of the datasets of the analysis.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDataSetArns() const{ return m_dataSetArns; }

    /**
     * <p>The ARNs of the datasets of the analysis.</p>
     */
    inline bool DataSetArnsHasBeenSet() const { return m_dataSetArnsHasBeenSet; }

    /**
     * <p>The ARNs of the datasets of the analysis.</p>
     */
    inline void SetDataSetArns(const Aws::Vector<Aws::String>& value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns = value; }

    /**
     * <p>The ARNs of the datasets of the analysis.</p>
     */
    inline void SetDataSetArns(Aws::Vector<Aws::String>&& value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns = std::move(value); }

    /**
     * <p>The ARNs of the datasets of the analysis.</p>
     */
    inline Analysis& WithDataSetArns(const Aws::Vector<Aws::String>& value) { SetDataSetArns(value); return *this;}

    /**
     * <p>The ARNs of the datasets of the analysis.</p>
     */
    inline Analysis& WithDataSetArns(Aws::Vector<Aws::String>&& value) { SetDataSetArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the datasets of the analysis.</p>
     */
    inline Analysis& AddDataSetArns(const Aws::String& value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the datasets of the analysis.</p>
     */
    inline Analysis& AddDataSetArns(Aws::String&& value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the datasets of the analysis.</p>
     */
    inline Analysis& AddDataSetArns(const char* value) { m_dataSetArnsHasBeenSet = true; m_dataSetArns.push_back(value); return *this; }


    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline const Aws::String& GetThemeArn() const{ return m_themeArn; }

    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline bool ThemeArnHasBeenSet() const { return m_themeArnHasBeenSet; }

    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline void SetThemeArn(const Aws::String& value) { m_themeArnHasBeenSet = true; m_themeArn = value; }

    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline void SetThemeArn(Aws::String&& value) { m_themeArnHasBeenSet = true; m_themeArn = std::move(value); }

    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline void SetThemeArn(const char* value) { m_themeArnHasBeenSet = true; m_themeArn.assign(value); }

    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline Analysis& WithThemeArn(const Aws::String& value) { SetThemeArn(value); return *this;}

    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline Analysis& WithThemeArn(Aws::String&& value) { SetThemeArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline Analysis& WithThemeArn(const char* value) { SetThemeArn(value); return *this;}


    /**
     * <p>The time that the analysis was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time that the analysis was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time that the analysis was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time that the analysis was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time that the analysis was created.</p>
     */
    inline Analysis& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time that the analysis was created.</p>
     */
    inline Analysis& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The time that the analysis was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time that the analysis was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time that the analysis was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time that the analysis was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time that the analysis was last updated.</p>
     */
    inline Analysis& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time that the analysis was last updated.</p>
     */
    inline Analysis& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline const Aws::Vector<Sheet>& GetSheets() const{ return m_sheets; }

    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline bool SheetsHasBeenSet() const { return m_sheetsHasBeenSet; }

    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline void SetSheets(const Aws::Vector<Sheet>& value) { m_sheetsHasBeenSet = true; m_sheets = value; }

    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline void SetSheets(Aws::Vector<Sheet>&& value) { m_sheetsHasBeenSet = true; m_sheets = std::move(value); }

    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline Analysis& WithSheets(const Aws::Vector<Sheet>& value) { SetSheets(value); return *this;}

    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline Analysis& WithSheets(Aws::Vector<Sheet>&& value) { SetSheets(std::move(value)); return *this;}

    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline Analysis& AddSheets(const Sheet& value) { m_sheetsHasBeenSet = true; m_sheets.push_back(value); return *this; }

    /**
     * <p>A list of the associated sheets with the unique identifier and name of each
     * sheet.</p>
     */
    inline Analysis& AddSheets(Sheet&& value) { m_sheetsHasBeenSet = true; m_sheets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ResourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<AnalysisError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dataSetArns;
    bool m_dataSetArnsHasBeenSet = false;

    Aws::String m_themeArn;
    bool m_themeArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Vector<Sheet> m_sheets;
    bool m_sheetsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
