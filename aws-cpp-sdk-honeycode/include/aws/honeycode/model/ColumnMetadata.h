/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/Format.h>
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
namespace Honeycode
{
namespace Model
{

  /**
   * <p>Metadata for column in the table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ColumnMetadata">AWS
   * API Reference</a></p>
   */
  class ColumnMetadata
  {
  public:
    AWS_HONEYCODE_API ColumnMetadata();
    AWS_HONEYCODE_API ColumnMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API ColumnMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the column.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the column.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the column.</p>
     */
    inline ColumnMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the column.</p>
     */
    inline ColumnMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the column.</p>
     */
    inline ColumnMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The format of the column.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the column.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the column.</p>
     */
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the column.</p>
     */
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the column.</p>
     */
    inline ColumnMetadata& WithFormat(const Format& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the column.</p>
     */
    inline ColumnMetadata& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Format m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
