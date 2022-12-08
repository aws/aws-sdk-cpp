/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
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
   * <p>The source controls that are used in a
   * <code>CascadingControlConfiguration</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CascadingControlSource">AWS
   * API Reference</a></p>
   */
  class CascadingControlSource
  {
  public:
    AWS_QUICKSIGHT_API CascadingControlSource();
    AWS_QUICKSIGHT_API CascadingControlSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CascadingControlSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source sheet control ID of a <code>CascadingControlSource</code>.</p>
     */
    inline const Aws::String& GetSourceSheetControlId() const{ return m_sourceSheetControlId; }

    /**
     * <p>The source sheet control ID of a <code>CascadingControlSource</code>.</p>
     */
    inline bool SourceSheetControlIdHasBeenSet() const { return m_sourceSheetControlIdHasBeenSet; }

    /**
     * <p>The source sheet control ID of a <code>CascadingControlSource</code>.</p>
     */
    inline void SetSourceSheetControlId(const Aws::String& value) { m_sourceSheetControlIdHasBeenSet = true; m_sourceSheetControlId = value; }

    /**
     * <p>The source sheet control ID of a <code>CascadingControlSource</code>.</p>
     */
    inline void SetSourceSheetControlId(Aws::String&& value) { m_sourceSheetControlIdHasBeenSet = true; m_sourceSheetControlId = std::move(value); }

    /**
     * <p>The source sheet control ID of a <code>CascadingControlSource</code>.</p>
     */
    inline void SetSourceSheetControlId(const char* value) { m_sourceSheetControlIdHasBeenSet = true; m_sourceSheetControlId.assign(value); }

    /**
     * <p>The source sheet control ID of a <code>CascadingControlSource</code>.</p>
     */
    inline CascadingControlSource& WithSourceSheetControlId(const Aws::String& value) { SetSourceSheetControlId(value); return *this;}

    /**
     * <p>The source sheet control ID of a <code>CascadingControlSource</code>.</p>
     */
    inline CascadingControlSource& WithSourceSheetControlId(Aws::String&& value) { SetSourceSheetControlId(std::move(value)); return *this;}

    /**
     * <p>The source sheet control ID of a <code>CascadingControlSource</code>.</p>
     */
    inline CascadingControlSource& WithSourceSheetControlId(const char* value) { SetSourceSheetControlId(value); return *this;}


    /**
     * <p>The column identifier that determines which column to look up for the source
     * sheet control.</p>
     */
    inline const ColumnIdentifier& GetColumnToMatch() const{ return m_columnToMatch; }

    /**
     * <p>The column identifier that determines which column to look up for the source
     * sheet control.</p>
     */
    inline bool ColumnToMatchHasBeenSet() const { return m_columnToMatchHasBeenSet; }

    /**
     * <p>The column identifier that determines which column to look up for the source
     * sheet control.</p>
     */
    inline void SetColumnToMatch(const ColumnIdentifier& value) { m_columnToMatchHasBeenSet = true; m_columnToMatch = value; }

    /**
     * <p>The column identifier that determines which column to look up for the source
     * sheet control.</p>
     */
    inline void SetColumnToMatch(ColumnIdentifier&& value) { m_columnToMatchHasBeenSet = true; m_columnToMatch = std::move(value); }

    /**
     * <p>The column identifier that determines which column to look up for the source
     * sheet control.</p>
     */
    inline CascadingControlSource& WithColumnToMatch(const ColumnIdentifier& value) { SetColumnToMatch(value); return *this;}

    /**
     * <p>The column identifier that determines which column to look up for the source
     * sheet control.</p>
     */
    inline CascadingControlSource& WithColumnToMatch(ColumnIdentifier&& value) { SetColumnToMatch(std::move(value)); return *this;}

  private:

    Aws::String m_sourceSheetControlId;
    bool m_sourceSheetControlIdHasBeenSet = false;

    ColumnIdentifier m_columnToMatch;
    bool m_columnToMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
