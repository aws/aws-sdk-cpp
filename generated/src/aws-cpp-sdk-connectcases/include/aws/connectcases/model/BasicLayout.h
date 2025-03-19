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
    AWS_CONNECTCASES_API BasicLayout() = default;
    AWS_CONNECTCASES_API BasicLayout(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API BasicLayout& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This represents sections in a tab of the page layout.</p>
     */
    inline const LayoutSections& GetMoreInfo() const { return m_moreInfo; }
    inline bool MoreInfoHasBeenSet() const { return m_moreInfoHasBeenSet; }
    template<typename MoreInfoT = LayoutSections>
    void SetMoreInfo(MoreInfoT&& value) { m_moreInfoHasBeenSet = true; m_moreInfo = std::forward<MoreInfoT>(value); }
    template<typename MoreInfoT = LayoutSections>
    BasicLayout& WithMoreInfo(MoreInfoT&& value) { SetMoreInfo(std::forward<MoreInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This represents sections in a panel of the page layout.</p>
     */
    inline const LayoutSections& GetTopPanel() const { return m_topPanel; }
    inline bool TopPanelHasBeenSet() const { return m_topPanelHasBeenSet; }
    template<typename TopPanelT = LayoutSections>
    void SetTopPanel(TopPanelT&& value) { m_topPanelHasBeenSet = true; m_topPanel = std::forward<TopPanelT>(value); }
    template<typename TopPanelT = LayoutSections>
    BasicLayout& WithTopPanel(TopPanelT&& value) { SetTopPanel(std::forward<TopPanelT>(value)); return *this;}
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
