/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>

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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The configuration settings for the ID mapping table.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IdMappingConfig">AWS
   * API Reference</a></p>
   */
  class IdMappingConfig
  {
  public:
    AWS_CLEANROOMS_API IdMappingConfig() = default;
    AWS_CLEANROOMS_API IdMappingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API IdMappingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An indicator as to whether you can use your column as a dimension column in
     * the ID mapping table (<code>TRUE</code>) or not (<code>FALSE</code>).</p>
     * <p>Default is <code>FALSE</code>.</p>
     */
    inline bool GetAllowUseAsDimensionColumn() const { return m_allowUseAsDimensionColumn; }
    inline bool AllowUseAsDimensionColumnHasBeenSet() const { return m_allowUseAsDimensionColumnHasBeenSet; }
    inline void SetAllowUseAsDimensionColumn(bool value) { m_allowUseAsDimensionColumnHasBeenSet = true; m_allowUseAsDimensionColumn = value; }
    inline IdMappingConfig& WithAllowUseAsDimensionColumn(bool value) { SetAllowUseAsDimensionColumn(value); return *this;}
    ///@}
  private:

    bool m_allowUseAsDimensionColumn{false};
    bool m_allowUseAsDimensionColumnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
