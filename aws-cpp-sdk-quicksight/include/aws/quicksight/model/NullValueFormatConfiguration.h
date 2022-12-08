/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The options that determine the null value format configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NullValueFormatConfiguration">AWS
   * API Reference</a></p>
   */
  class NullValueFormatConfiguration
  {
  public:
    AWS_QUICKSIGHT_API NullValueFormatConfiguration();
    AWS_QUICKSIGHT_API NullValueFormatConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NullValueFormatConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the null string of null values.</p>
     */
    inline const Aws::String& GetNullString() const{ return m_nullString; }

    /**
     * <p>Determines the null string of null values.</p>
     */
    inline bool NullStringHasBeenSet() const { return m_nullStringHasBeenSet; }

    /**
     * <p>Determines the null string of null values.</p>
     */
    inline void SetNullString(const Aws::String& value) { m_nullStringHasBeenSet = true; m_nullString = value; }

    /**
     * <p>Determines the null string of null values.</p>
     */
    inline void SetNullString(Aws::String&& value) { m_nullStringHasBeenSet = true; m_nullString = std::move(value); }

    /**
     * <p>Determines the null string of null values.</p>
     */
    inline void SetNullString(const char* value) { m_nullStringHasBeenSet = true; m_nullString.assign(value); }

    /**
     * <p>Determines the null string of null values.</p>
     */
    inline NullValueFormatConfiguration& WithNullString(const Aws::String& value) { SetNullString(value); return *this;}

    /**
     * <p>Determines the null string of null values.</p>
     */
    inline NullValueFormatConfiguration& WithNullString(Aws::String&& value) { SetNullString(std::move(value)); return *this;}

    /**
     * <p>Determines the null string of null values.</p>
     */
    inline NullValueFormatConfiguration& WithNullString(const char* value) { SetNullString(value); return *this;}

  private:

    Aws::String m_nullString;
    bool m_nullStringHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
