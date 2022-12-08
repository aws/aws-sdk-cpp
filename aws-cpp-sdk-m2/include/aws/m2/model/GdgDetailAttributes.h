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
    AWS_MAINFRAMEMODERNIZATION_API GdgDetailAttributes();
    AWS_MAINFRAMEMODERNIZATION_API GdgDetailAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API GdgDetailAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of generation data sets, up to 255, in a GDG.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of generation data sets, up to 255, in a GDG.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of generation data sets, up to 255, in a GDG.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of generation data sets, up to 255, in a GDG.</p>
     */
    inline GdgDetailAttributes& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The disposition of the data set in the catalog.</p>
     */
    inline const Aws::String& GetRollDisposition() const{ return m_rollDisposition; }

    /**
     * <p>The disposition of the data set in the catalog.</p>
     */
    inline bool RollDispositionHasBeenSet() const { return m_rollDispositionHasBeenSet; }

    /**
     * <p>The disposition of the data set in the catalog.</p>
     */
    inline void SetRollDisposition(const Aws::String& value) { m_rollDispositionHasBeenSet = true; m_rollDisposition = value; }

    /**
     * <p>The disposition of the data set in the catalog.</p>
     */
    inline void SetRollDisposition(Aws::String&& value) { m_rollDispositionHasBeenSet = true; m_rollDisposition = std::move(value); }

    /**
     * <p>The disposition of the data set in the catalog.</p>
     */
    inline void SetRollDisposition(const char* value) { m_rollDispositionHasBeenSet = true; m_rollDisposition.assign(value); }

    /**
     * <p>The disposition of the data set in the catalog.</p>
     */
    inline GdgDetailAttributes& WithRollDisposition(const Aws::String& value) { SetRollDisposition(value); return *this;}

    /**
     * <p>The disposition of the data set in the catalog.</p>
     */
    inline GdgDetailAttributes& WithRollDisposition(Aws::String&& value) { SetRollDisposition(std::move(value)); return *this;}

    /**
     * <p>The disposition of the data set in the catalog.</p>
     */
    inline GdgDetailAttributes& WithRollDisposition(const char* value) { SetRollDisposition(value); return *this;}

  private:

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_rollDisposition;
    bool m_rollDispositionHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
