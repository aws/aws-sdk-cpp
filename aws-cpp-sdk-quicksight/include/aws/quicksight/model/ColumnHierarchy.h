/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ExplicitHierarchy.h>
#include <aws/quicksight/model/DateTimeHierarchy.h>
#include <aws/quicksight/model/PredefinedHierarchy.h>
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
   * <p>The option that determines the hierarchy of the fields for a visual
   * element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnHierarchy">AWS
   * API Reference</a></p>
   */
  class ColumnHierarchy
  {
  public:
    AWS_QUICKSIGHT_API ColumnHierarchy();
    AWS_QUICKSIGHT_API ColumnHierarchy(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnHierarchy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The option that determines the hierarchy of the fields that are built within
     * a visual's field wells. These fields can't be duplicated to other visuals.</p>
     */
    inline const ExplicitHierarchy& GetExplicitHierarchy() const{ return m_explicitHierarchy; }

    /**
     * <p>The option that determines the hierarchy of the fields that are built within
     * a visual's field wells. These fields can't be duplicated to other visuals.</p>
     */
    inline bool ExplicitHierarchyHasBeenSet() const { return m_explicitHierarchyHasBeenSet; }

    /**
     * <p>The option that determines the hierarchy of the fields that are built within
     * a visual's field wells. These fields can't be duplicated to other visuals.</p>
     */
    inline void SetExplicitHierarchy(const ExplicitHierarchy& value) { m_explicitHierarchyHasBeenSet = true; m_explicitHierarchy = value; }

    /**
     * <p>The option that determines the hierarchy of the fields that are built within
     * a visual's field wells. These fields can't be duplicated to other visuals.</p>
     */
    inline void SetExplicitHierarchy(ExplicitHierarchy&& value) { m_explicitHierarchyHasBeenSet = true; m_explicitHierarchy = std::move(value); }

    /**
     * <p>The option that determines the hierarchy of the fields that are built within
     * a visual's field wells. These fields can't be duplicated to other visuals.</p>
     */
    inline ColumnHierarchy& WithExplicitHierarchy(const ExplicitHierarchy& value) { SetExplicitHierarchy(value); return *this;}

    /**
     * <p>The option that determines the hierarchy of the fields that are built within
     * a visual's field wells. These fields can't be duplicated to other visuals.</p>
     */
    inline ColumnHierarchy& WithExplicitHierarchy(ExplicitHierarchy&& value) { SetExplicitHierarchy(std::move(value)); return *this;}


    /**
     * <p>The option that determines the hierarchy of any <code>DateTime</code>
     * fields.</p>
     */
    inline const DateTimeHierarchy& GetDateTimeHierarchy() const{ return m_dateTimeHierarchy; }

    /**
     * <p>The option that determines the hierarchy of any <code>DateTime</code>
     * fields.</p>
     */
    inline bool DateTimeHierarchyHasBeenSet() const { return m_dateTimeHierarchyHasBeenSet; }

    /**
     * <p>The option that determines the hierarchy of any <code>DateTime</code>
     * fields.</p>
     */
    inline void SetDateTimeHierarchy(const DateTimeHierarchy& value) { m_dateTimeHierarchyHasBeenSet = true; m_dateTimeHierarchy = value; }

    /**
     * <p>The option that determines the hierarchy of any <code>DateTime</code>
     * fields.</p>
     */
    inline void SetDateTimeHierarchy(DateTimeHierarchy&& value) { m_dateTimeHierarchyHasBeenSet = true; m_dateTimeHierarchy = std::move(value); }

    /**
     * <p>The option that determines the hierarchy of any <code>DateTime</code>
     * fields.</p>
     */
    inline ColumnHierarchy& WithDateTimeHierarchy(const DateTimeHierarchy& value) { SetDateTimeHierarchy(value); return *this;}

    /**
     * <p>The option that determines the hierarchy of any <code>DateTime</code>
     * fields.</p>
     */
    inline ColumnHierarchy& WithDateTimeHierarchy(DateTimeHierarchy&& value) { SetDateTimeHierarchy(std::move(value)); return *this;}


    /**
     * <p>The option that determines the hierarchy of the fields that are defined
     * during data preparation. These fields are available to use in any analysis that
     * uses the data source.</p>
     */
    inline const PredefinedHierarchy& GetPredefinedHierarchy() const{ return m_predefinedHierarchy; }

    /**
     * <p>The option that determines the hierarchy of the fields that are defined
     * during data preparation. These fields are available to use in any analysis that
     * uses the data source.</p>
     */
    inline bool PredefinedHierarchyHasBeenSet() const { return m_predefinedHierarchyHasBeenSet; }

    /**
     * <p>The option that determines the hierarchy of the fields that are defined
     * during data preparation. These fields are available to use in any analysis that
     * uses the data source.</p>
     */
    inline void SetPredefinedHierarchy(const PredefinedHierarchy& value) { m_predefinedHierarchyHasBeenSet = true; m_predefinedHierarchy = value; }

    /**
     * <p>The option that determines the hierarchy of the fields that are defined
     * during data preparation. These fields are available to use in any analysis that
     * uses the data source.</p>
     */
    inline void SetPredefinedHierarchy(PredefinedHierarchy&& value) { m_predefinedHierarchyHasBeenSet = true; m_predefinedHierarchy = std::move(value); }

    /**
     * <p>The option that determines the hierarchy of the fields that are defined
     * during data preparation. These fields are available to use in any analysis that
     * uses the data source.</p>
     */
    inline ColumnHierarchy& WithPredefinedHierarchy(const PredefinedHierarchy& value) { SetPredefinedHierarchy(value); return *this;}

    /**
     * <p>The option that determines the hierarchy of the fields that are defined
     * during data preparation. These fields are available to use in any analysis that
     * uses the data source.</p>
     */
    inline ColumnHierarchy& WithPredefinedHierarchy(PredefinedHierarchy&& value) { SetPredefinedHierarchy(std::move(value)); return *this;}

  private:

    ExplicitHierarchy m_explicitHierarchy;
    bool m_explicitHierarchyHasBeenSet = false;

    DateTimeHierarchy m_dateTimeHierarchy;
    bool m_dateTimeHierarchyHasBeenSet = false;

    PredefinedHierarchy m_predefinedHierarchy;
    bool m_predefinedHierarchyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
