/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnDataType.h>
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
   * <p>Output column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/OutputColumn">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API OutputColumn
  {
  public:
    OutputColumn();
    OutputColumn(Aws::Utils::Json::JsonView jsonValue);
    OutputColumn& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A display name for the dataset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A display name for the dataset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A display name for the dataset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A display name for the dataset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A display name for the dataset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A display name for the dataset.</p>
     */
    inline OutputColumn& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A display name for the dataset.</p>
     */
    inline OutputColumn& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A display name for the dataset.</p>
     */
    inline OutputColumn& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Type.</p>
     */
    inline const ColumnDataType& GetType() const{ return m_type; }

    /**
     * <p>Type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type.</p>
     */
    inline void SetType(const ColumnDataType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type.</p>
     */
    inline void SetType(ColumnDataType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type.</p>
     */
    inline OutputColumn& WithType(const ColumnDataType& value) { SetType(value); return *this;}

    /**
     * <p>Type.</p>
     */
    inline OutputColumn& WithType(ColumnDataType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ColumnDataType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
