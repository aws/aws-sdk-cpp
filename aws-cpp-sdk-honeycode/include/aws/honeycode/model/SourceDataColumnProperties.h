/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>

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
namespace Honeycode
{
namespace Model
{

  /**
   * <p>An object that contains the properties for importing data to a specific
   * column in a table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/SourceDataColumnProperties">AWS
   * API Reference</a></p>
   */
  class SourceDataColumnProperties
  {
  public:
    AWS_HONEYCODE_API SourceDataColumnProperties();
    AWS_HONEYCODE_API SourceDataColumnProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API SourceDataColumnProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The index of the column in the input file.</p>
     */
    inline int GetColumnIndex() const{ return m_columnIndex; }

    /**
     * <p>The index of the column in the input file.</p>
     */
    inline bool ColumnIndexHasBeenSet() const { return m_columnIndexHasBeenSet; }

    /**
     * <p>The index of the column in the input file.</p>
     */
    inline void SetColumnIndex(int value) { m_columnIndexHasBeenSet = true; m_columnIndex = value; }

    /**
     * <p>The index of the column in the input file.</p>
     */
    inline SourceDataColumnProperties& WithColumnIndex(int value) { SetColumnIndex(value); return *this;}

  private:

    int m_columnIndex;
    bool m_columnIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
