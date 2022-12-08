/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/VisualTitleLabelOptions.h>
#include <aws/quicksight/model/VisualSubtitleLabelOptions.h>
#include <aws/quicksight/model/CustomContentConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/VisualCustomAction.h>
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
   * <p>A visual that contains custom content.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/custom-visual-content.html">Using
   * custom visual content</a> in the <i>Amazon QuickSight User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomContentVisual">AWS
   * API Reference</a></p>
   */
  class CustomContentVisual
  {
  public:
    AWS_QUICKSIGHT_API CustomContentVisual();
    AWS_QUICKSIGHT_API CustomContentVisual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomContentVisual& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline const Aws::String& GetVisualId() const{ return m_visualId; }

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline bool VisualIdHasBeenSet() const { return m_visualIdHasBeenSet; }

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline void SetVisualId(const Aws::String& value) { m_visualIdHasBeenSet = true; m_visualId = value; }

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline void SetVisualId(Aws::String&& value) { m_visualIdHasBeenSet = true; m_visualId = std::move(value); }

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline void SetVisualId(const char* value) { m_visualIdHasBeenSet = true; m_visualId.assign(value); }

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline CustomContentVisual& WithVisualId(const Aws::String& value) { SetVisualId(value); return *this;}

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline CustomContentVisual& WithVisualId(Aws::String&& value) { SetVisualId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline CustomContentVisual& WithVisualId(const char* value) { SetVisualId(value); return *this;}


    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline const VisualTitleLabelOptions& GetTitle() const{ return m_title; }

    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline void SetTitle(const VisualTitleLabelOptions& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline void SetTitle(VisualTitleLabelOptions&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline CustomContentVisual& WithTitle(const VisualTitleLabelOptions& value) { SetTitle(value); return *this;}

    /**
     * <p>The title that is displayed on the visual.</p>
     */
    inline CustomContentVisual& WithTitle(VisualTitleLabelOptions&& value) { SetTitle(std::move(value)); return *this;}


    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline const VisualSubtitleLabelOptions& GetSubtitle() const{ return m_subtitle; }

    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline bool SubtitleHasBeenSet() const { return m_subtitleHasBeenSet; }

    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline void SetSubtitle(const VisualSubtitleLabelOptions& value) { m_subtitleHasBeenSet = true; m_subtitle = value; }

    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline void SetSubtitle(VisualSubtitleLabelOptions&& value) { m_subtitleHasBeenSet = true; m_subtitle = std::move(value); }

    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline CustomContentVisual& WithSubtitle(const VisualSubtitleLabelOptions& value) { SetSubtitle(value); return *this;}

    /**
     * <p>The subtitle that is displayed on the visual.</p>
     */
    inline CustomContentVisual& WithSubtitle(VisualSubtitleLabelOptions&& value) { SetSubtitle(std::move(value)); return *this;}


    /**
     * <p>The configuration of a <code>CustomContentVisual</code>.</p>
     */
    inline const CustomContentConfiguration& GetChartConfiguration() const{ return m_chartConfiguration; }

    /**
     * <p>The configuration of a <code>CustomContentVisual</code>.</p>
     */
    inline bool ChartConfigurationHasBeenSet() const { return m_chartConfigurationHasBeenSet; }

    /**
     * <p>The configuration of a <code>CustomContentVisual</code>.</p>
     */
    inline void SetChartConfiguration(const CustomContentConfiguration& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = value; }

    /**
     * <p>The configuration of a <code>CustomContentVisual</code>.</p>
     */
    inline void SetChartConfiguration(CustomContentConfiguration&& value) { m_chartConfigurationHasBeenSet = true; m_chartConfiguration = std::move(value); }

    /**
     * <p>The configuration of a <code>CustomContentVisual</code>.</p>
     */
    inline CustomContentVisual& WithChartConfiguration(const CustomContentConfiguration& value) { SetChartConfiguration(value); return *this;}

    /**
     * <p>The configuration of a <code>CustomContentVisual</code>.</p>
     */
    inline CustomContentVisual& WithChartConfiguration(CustomContentConfiguration&& value) { SetChartConfiguration(std::move(value)); return *this;}


    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline const Aws::Vector<VisualCustomAction>& GetActions() const{ return m_actions; }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline void SetActions(const Aws::Vector<VisualCustomAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline void SetActions(Aws::Vector<VisualCustomAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline CustomContentVisual& WithActions(const Aws::Vector<VisualCustomAction>& value) { SetActions(value); return *this;}

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline CustomContentVisual& WithActions(Aws::Vector<VisualCustomAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline CustomContentVisual& AddActions(const VisualCustomAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline CustomContentVisual& AddActions(VisualCustomAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>The dataset that is used to create the custom content visual. You can't
     * create a visual without a dataset.</p>
     */
    inline const Aws::String& GetDataSetIdentifier() const{ return m_dataSetIdentifier; }

    /**
     * <p>The dataset that is used to create the custom content visual. You can't
     * create a visual without a dataset.</p>
     */
    inline bool DataSetIdentifierHasBeenSet() const { return m_dataSetIdentifierHasBeenSet; }

    /**
     * <p>The dataset that is used to create the custom content visual. You can't
     * create a visual without a dataset.</p>
     */
    inline void SetDataSetIdentifier(const Aws::String& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = value; }

    /**
     * <p>The dataset that is used to create the custom content visual. You can't
     * create a visual without a dataset.</p>
     */
    inline void SetDataSetIdentifier(Aws::String&& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = std::move(value); }

    /**
     * <p>The dataset that is used to create the custom content visual. You can't
     * create a visual without a dataset.</p>
     */
    inline void SetDataSetIdentifier(const char* value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier.assign(value); }

    /**
     * <p>The dataset that is used to create the custom content visual. You can't
     * create a visual without a dataset.</p>
     */
    inline CustomContentVisual& WithDataSetIdentifier(const Aws::String& value) { SetDataSetIdentifier(value); return *this;}

    /**
     * <p>The dataset that is used to create the custom content visual. You can't
     * create a visual without a dataset.</p>
     */
    inline CustomContentVisual& WithDataSetIdentifier(Aws::String&& value) { SetDataSetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The dataset that is used to create the custom content visual. You can't
     * create a visual without a dataset.</p>
     */
    inline CustomContentVisual& WithDataSetIdentifier(const char* value) { SetDataSetIdentifier(value); return *this;}

  private:

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;

    VisualTitleLabelOptions m_title;
    bool m_titleHasBeenSet = false;

    VisualSubtitleLabelOptions m_subtitle;
    bool m_subtitleHasBeenSet = false;

    CustomContentConfiguration m_chartConfiguration;
    bool m_chartConfigurationHasBeenSet = false;

    Aws::Vector<VisualCustomAction> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_dataSetIdentifier;
    bool m_dataSetIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
