/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>The required attributes for a generation data group data set. A generation
   * data set is one of a collection of successive, historically related, catalogued
   * data sets that together are known as a generation data group (GDG). Use this
   * structure when you want to import a GDG. For more information on GDG, see <a
   * href="https://www.ibm.com/docs/en/zos/2.3.0?topic=guide-generation-data-sets">Generation
   * data sets</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/GdgDetailAttributes">AWS
   * API Reference</a></p>
   */
  class GdgDetailAttributes
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API GdgDetailAttributes() = default;
    AWS_MAINFRAMEMODERNIZATION_API GdgDetailAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API GdgDetailAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of generation data sets, up to 255, in a GDG.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GdgDetailAttributes& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The disposition of the data set in the catalog.</p>
     */
    inline const Aws::String& GetRollDisposition() const { return m_rollDisposition; }
    inline bool RollDispositionHasBeenSet() const { return m_rollDispositionHasBeenSet; }
    template<typename RollDispositionT = Aws::String>
    void SetRollDisposition(RollDispositionT&& value) { m_rollDispositionHasBeenSet = true; m_rollDisposition = std::forward<RollDispositionT>(value); }
    template<typename RollDispositionT = Aws::String>
    GdgDetailAttributes& WithRollDisposition(RollDispositionT&& value) { SetRollDisposition(std::forward<RollDispositionT>(value)); return *this;}
    ///@}
  private:

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_rollDisposition;
    bool m_rollDispositionHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
