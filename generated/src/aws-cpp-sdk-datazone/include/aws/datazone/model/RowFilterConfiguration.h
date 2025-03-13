/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/RowFilter.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The row filter configuration details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RowFilterConfiguration">AWS
   * API Reference</a></p>
   */
  class RowFilterConfiguration
  {
  public:
    AWS_DATAZONE_API RowFilterConfiguration() = default;
    AWS_DATAZONE_API RowFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RowFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The row filter.</p>
     */
    inline const RowFilter& GetRowFilter() const { return m_rowFilter; }
    inline bool RowFilterHasBeenSet() const { return m_rowFilterHasBeenSet; }
    template<typename RowFilterT = RowFilter>
    void SetRowFilter(RowFilterT&& value) { m_rowFilterHasBeenSet = true; m_rowFilter = std::forward<RowFilterT>(value); }
    template<typename RowFilterT = RowFilter>
    RowFilterConfiguration& WithRowFilter(RowFilterT&& value) { SetRowFilter(std::forward<RowFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the row filter is sensitive.</p>
     */
    inline bool GetSensitive() const { return m_sensitive; }
    inline bool SensitiveHasBeenSet() const { return m_sensitiveHasBeenSet; }
    inline void SetSensitive(bool value) { m_sensitiveHasBeenSet = true; m_sensitive = value; }
    inline RowFilterConfiguration& WithSensitive(bool value) { SetSensitive(value); return *this;}
    ///@}
  private:

    RowFilter m_rowFilter;
    bool m_rowFilterHasBeenSet = false;

    bool m_sensitive{false};
    bool m_sensitiveHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
