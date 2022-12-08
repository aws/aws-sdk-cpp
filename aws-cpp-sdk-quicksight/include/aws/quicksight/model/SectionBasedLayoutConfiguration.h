/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SectionBasedLayoutCanvasSizeOptions.h>
#include <aws/quicksight/model/HeaderFooterSectionConfiguration.h>
#include <aws/quicksight/model/BodySectionConfiguration.h>
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
   * <p>The configuration for a section-based layout.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SectionBasedLayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class SectionBasedLayoutConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SectionBasedLayoutConfiguration();
    AWS_QUICKSIGHT_API SectionBasedLayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SectionBasedLayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of header section configurations.</p>
     */
    inline const Aws::Vector<HeaderFooterSectionConfiguration>& GetHeaderSections() const{ return m_headerSections; }

    /**
     * <p>A list of header section configurations.</p>
     */
    inline bool HeaderSectionsHasBeenSet() const { return m_headerSectionsHasBeenSet; }

    /**
     * <p>A list of header section configurations.</p>
     */
    inline void SetHeaderSections(const Aws::Vector<HeaderFooterSectionConfiguration>& value) { m_headerSectionsHasBeenSet = true; m_headerSections = value; }

    /**
     * <p>A list of header section configurations.</p>
     */
    inline void SetHeaderSections(Aws::Vector<HeaderFooterSectionConfiguration>&& value) { m_headerSectionsHasBeenSet = true; m_headerSections = std::move(value); }

    /**
     * <p>A list of header section configurations.</p>
     */
    inline SectionBasedLayoutConfiguration& WithHeaderSections(const Aws::Vector<HeaderFooterSectionConfiguration>& value) { SetHeaderSections(value); return *this;}

    /**
     * <p>A list of header section configurations.</p>
     */
    inline SectionBasedLayoutConfiguration& WithHeaderSections(Aws::Vector<HeaderFooterSectionConfiguration>&& value) { SetHeaderSections(std::move(value)); return *this;}

    /**
     * <p>A list of header section configurations.</p>
     */
    inline SectionBasedLayoutConfiguration& AddHeaderSections(const HeaderFooterSectionConfiguration& value) { m_headerSectionsHasBeenSet = true; m_headerSections.push_back(value); return *this; }

    /**
     * <p>A list of header section configurations.</p>
     */
    inline SectionBasedLayoutConfiguration& AddHeaderSections(HeaderFooterSectionConfiguration&& value) { m_headerSectionsHasBeenSet = true; m_headerSections.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of body section configurations.</p>
     */
    inline const Aws::Vector<BodySectionConfiguration>& GetBodySections() const{ return m_bodySections; }

    /**
     * <p>A list of body section configurations.</p>
     */
    inline bool BodySectionsHasBeenSet() const { return m_bodySectionsHasBeenSet; }

    /**
     * <p>A list of body section configurations.</p>
     */
    inline void SetBodySections(const Aws::Vector<BodySectionConfiguration>& value) { m_bodySectionsHasBeenSet = true; m_bodySections = value; }

    /**
     * <p>A list of body section configurations.</p>
     */
    inline void SetBodySections(Aws::Vector<BodySectionConfiguration>&& value) { m_bodySectionsHasBeenSet = true; m_bodySections = std::move(value); }

    /**
     * <p>A list of body section configurations.</p>
     */
    inline SectionBasedLayoutConfiguration& WithBodySections(const Aws::Vector<BodySectionConfiguration>& value) { SetBodySections(value); return *this;}

    /**
     * <p>A list of body section configurations.</p>
     */
    inline SectionBasedLayoutConfiguration& WithBodySections(Aws::Vector<BodySectionConfiguration>&& value) { SetBodySections(std::move(value)); return *this;}

    /**
     * <p>A list of body section configurations.</p>
     */
    inline SectionBasedLayoutConfiguration& AddBodySections(const BodySectionConfiguration& value) { m_bodySectionsHasBeenSet = true; m_bodySections.push_back(value); return *this; }

    /**
     * <p>A list of body section configurations.</p>
     */
    inline SectionBasedLayoutConfiguration& AddBodySections(BodySectionConfiguration&& value) { m_bodySectionsHasBeenSet = true; m_bodySections.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of footer section configurations.</p>
     */
    inline const Aws::Vector<HeaderFooterSectionConfiguration>& GetFooterSections() const{ return m_footerSections; }

    /**
     * <p>A list of footer section configurations.</p>
     */
    inline bool FooterSectionsHasBeenSet() const { return m_footerSectionsHasBeenSet; }

    /**
     * <p>A list of footer section configurations.</p>
     */
    inline void SetFooterSections(const Aws::Vector<HeaderFooterSectionConfiguration>& value) { m_footerSectionsHasBeenSet = true; m_footerSections = value; }

    /**
     * <p>A list of footer section configurations.</p>
     */
    inline void SetFooterSections(Aws::Vector<HeaderFooterSectionConfiguration>&& value) { m_footerSectionsHasBeenSet = true; m_footerSections = std::move(value); }

    /**
     * <p>A list of footer section configurations.</p>
     */
    inline SectionBasedLayoutConfiguration& WithFooterSections(const Aws::Vector<HeaderFooterSectionConfiguration>& value) { SetFooterSections(value); return *this;}

    /**
     * <p>A list of footer section configurations.</p>
     */
    inline SectionBasedLayoutConfiguration& WithFooterSections(Aws::Vector<HeaderFooterSectionConfiguration>&& value) { SetFooterSections(std::move(value)); return *this;}

    /**
     * <p>A list of footer section configurations.</p>
     */
    inline SectionBasedLayoutConfiguration& AddFooterSections(const HeaderFooterSectionConfiguration& value) { m_footerSectionsHasBeenSet = true; m_footerSections.push_back(value); return *this; }

    /**
     * <p>A list of footer section configurations.</p>
     */
    inline SectionBasedLayoutConfiguration& AddFooterSections(HeaderFooterSectionConfiguration&& value) { m_footerSectionsHasBeenSet = true; m_footerSections.push_back(std::move(value)); return *this; }


    /**
     * <p>The options for the canvas of a section-based layout.</p>
     */
    inline const SectionBasedLayoutCanvasSizeOptions& GetCanvasSizeOptions() const{ return m_canvasSizeOptions; }

    /**
     * <p>The options for the canvas of a section-based layout.</p>
     */
    inline bool CanvasSizeOptionsHasBeenSet() const { return m_canvasSizeOptionsHasBeenSet; }

    /**
     * <p>The options for the canvas of a section-based layout.</p>
     */
    inline void SetCanvasSizeOptions(const SectionBasedLayoutCanvasSizeOptions& value) { m_canvasSizeOptionsHasBeenSet = true; m_canvasSizeOptions = value; }

    /**
     * <p>The options for the canvas of a section-based layout.</p>
     */
    inline void SetCanvasSizeOptions(SectionBasedLayoutCanvasSizeOptions&& value) { m_canvasSizeOptionsHasBeenSet = true; m_canvasSizeOptions = std::move(value); }

    /**
     * <p>The options for the canvas of a section-based layout.</p>
     */
    inline SectionBasedLayoutConfiguration& WithCanvasSizeOptions(const SectionBasedLayoutCanvasSizeOptions& value) { SetCanvasSizeOptions(value); return *this;}

    /**
     * <p>The options for the canvas of a section-based layout.</p>
     */
    inline SectionBasedLayoutConfiguration& WithCanvasSizeOptions(SectionBasedLayoutCanvasSizeOptions&& value) { SetCanvasSizeOptions(std::move(value)); return *this;}

  private:

    Aws::Vector<HeaderFooterSectionConfiguration> m_headerSections;
    bool m_headerSectionsHasBeenSet = false;

    Aws::Vector<BodySectionConfiguration> m_bodySections;
    bool m_bodySectionsHasBeenSet = false;

    Aws::Vector<HeaderFooterSectionConfiguration> m_footerSections;
    bool m_footerSectionsHasBeenSet = false;

    SectionBasedLayoutCanvasSizeOptions m_canvasSizeOptions;
    bool m_canvasSizeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
