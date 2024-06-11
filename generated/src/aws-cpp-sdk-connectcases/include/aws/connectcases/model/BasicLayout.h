/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/LayoutSections.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Content specific to <code>BasicLayout</code> type. It configures fields in
   * the top panel and More Info tab of agent application. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/BasicLayout">AWS
   * API Reference</a></p>
   */
  class BasicLayout
  {
  public:
    AWS_CONNECTCASES_API BasicLayout();
    AWS_CONNECTCASES_API BasicLayout(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API BasicLayout& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This represents sections in a tab of the page layout.</p>
     */
    inline const LayoutSections& GetMoreInfo() const{ return m_moreInfo; }
    inline bool MoreInfoHasBeenSet() const { return m_moreInfoHasBeenSet; }
    inline void SetMoreInfo(const LayoutSections& value) { m_moreInfoHasBeenSet = true; m_moreInfo = value; }
    inline void SetMoreInfo(LayoutSections&& value) { m_moreInfoHasBeenSet = true; m_moreInfo = std::move(value); }
    inline BasicLayout& WithMoreInfo(const LayoutSections& value) { SetMoreInfo(value); return *this;}
    inline BasicLayout& WithMoreInfo(LayoutSections&& value) { SetMoreInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This represents sections in a panel of the page layout.</p>
     */
    inline const LayoutSections& GetTopPanel() const{ return m_topPanel; }
    inline bool TopPanelHasBeenSet() const { return m_topPanelHasBeenSet; }
    inline void SetTopPanel(const LayoutSections& value) { m_topPanelHasBeenSet = true; m_topPanel = value; }
    inline void SetTopPanel(LayoutSections&& value) { m_topPanelHasBeenSet = true; m_topPanel = std::move(value); }
    inline BasicLayout& WithTopPanel(const LayoutSections& value) { SetTopPanel(value); return *this;}
    inline BasicLayout& WithTopPanel(LayoutSections&& value) { SetTopPanel(std::move(value)); return *this;}
    ///@}
  private:

    LayoutSections m_moreInfo;
    bool m_moreInfoHasBeenSet = false;

    LayoutSections m_topPanel;
    bool m_topPanelHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
