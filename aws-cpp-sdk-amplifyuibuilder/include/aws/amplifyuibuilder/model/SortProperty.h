/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/SortDirection.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes how to sort the data that you bind to a component.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/SortProperty">AWS
   * API Reference</a></p>
   */
  class SortProperty
  {
  public:
    AWS_AMPLIFYUIBUILDER_API SortProperty();
    AWS_AMPLIFYUIBUILDER_API SortProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API SortProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The direction of the sort, either ascending or descending.</p>
     */
    inline const SortDirection& GetDirection() const{ return m_direction; }

    /**
     * <p>The direction of the sort, either ascending or descending.</p>
     */
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }

    /**
     * <p>The direction of the sort, either ascending or descending.</p>
     */
    inline void SetDirection(const SortDirection& value) { m_directionHasBeenSet = true; m_direction = value; }

    /**
     * <p>The direction of the sort, either ascending or descending.</p>
     */
    inline void SetDirection(SortDirection&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }

    /**
     * <p>The direction of the sort, either ascending or descending.</p>
     */
    inline SortProperty& WithDirection(const SortDirection& value) { SetDirection(value); return *this;}

    /**
     * <p>The direction of the sort, either ascending or descending.</p>
     */
    inline SortProperty& WithDirection(SortDirection&& value) { SetDirection(std::move(value)); return *this;}


    /**
     * <p>The field to perform the sort on.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p>The field to perform the sort on.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The field to perform the sort on.</p>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The field to perform the sort on.</p>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The field to perform the sort on.</p>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p>The field to perform the sort on.</p>
     */
    inline SortProperty& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p>The field to perform the sort on.</p>
     */
    inline SortProperty& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    /**
     * <p>The field to perform the sort on.</p>
     */
    inline SortProperty& WithField(const char* value) { SetField(value); return *this;}

  private:

    SortDirection m_direction;
    bool m_directionHasBeenSet = false;

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
