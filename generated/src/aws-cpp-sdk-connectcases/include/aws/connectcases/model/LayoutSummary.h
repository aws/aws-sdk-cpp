/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Object for the summarized details of the layout.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/LayoutSummary">AWS
   * API Reference</a></p>
   */
  class LayoutSummary
  {
  public:
    AWS_CONNECTCASES_API LayoutSummary() = default;
    AWS_CONNECTCASES_API LayoutSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API LayoutSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the layout.</p>
     */
    inline const Aws::String& GetLayoutArn() const { return m_layoutArn; }
    inline bool LayoutArnHasBeenSet() const { return m_layoutArnHasBeenSet; }
    template<typename LayoutArnT = Aws::String>
    void SetLayoutArn(LayoutArnT&& value) { m_layoutArnHasBeenSet = true; m_layoutArn = std::forward<LayoutArnT>(value); }
    template<typename LayoutArnT = Aws::String>
    LayoutSummary& WithLayoutArn(LayoutArnT&& value) { SetLayoutArn(std::forward<LayoutArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for of the layout.</p>
     */
    inline const Aws::String& GetLayoutId() const { return m_layoutId; }
    inline bool LayoutIdHasBeenSet() const { return m_layoutIdHasBeenSet; }
    template<typename LayoutIdT = Aws::String>
    void SetLayoutId(LayoutIdT&& value) { m_layoutIdHasBeenSet = true; m_layoutId = std::forward<LayoutIdT>(value); }
    template<typename LayoutIdT = Aws::String>
    LayoutSummary& WithLayoutId(LayoutIdT&& value) { SetLayoutId(std::forward<LayoutIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the layout.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    LayoutSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_layoutArn;
    bool m_layoutArnHasBeenSet = false;

    Aws::String m_layoutId;
    bool m_layoutIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
