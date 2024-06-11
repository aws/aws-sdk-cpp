/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/SortDirection.h>
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


    ///@{
    /**
     * <p>The field to perform the sort on.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }
    inline SortProperty& WithField(const Aws::String& value) { SetField(value); return *this;}
    inline SortProperty& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}
    inline SortProperty& WithField(const char* value) { SetField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The direction of the sort, either ascending or descending.</p>
     */
    inline const SortDirection& GetDirection() const{ return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(const SortDirection& value) { m_directionHasBeenSet = true; m_direction = value; }
    inline void SetDirection(SortDirection&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }
    inline SortProperty& WithDirection(const SortDirection& value) { SetDirection(value); return *this;}
    inline SortProperty& WithDirection(SortDirection&& value) { SetDirection(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    SortDirection m_direction;
    bool m_directionHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
