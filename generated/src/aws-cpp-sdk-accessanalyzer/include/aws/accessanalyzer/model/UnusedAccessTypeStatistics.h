/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about the total number of findings for a type of unused
   * access.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UnusedAccessTypeStatistics">AWS
   * API Reference</a></p>
   */
  class UnusedAccessTypeStatistics
  {
  public:
    AWS_ACCESSANALYZER_API UnusedAccessTypeStatistics() = default;
    AWS_ACCESSANALYZER_API UnusedAccessTypeStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API UnusedAccessTypeStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of unused access.</p>
     */
    inline const Aws::String& GetUnusedAccessType() const { return m_unusedAccessType; }
    inline bool UnusedAccessTypeHasBeenSet() const { return m_unusedAccessTypeHasBeenSet; }
    template<typename UnusedAccessTypeT = Aws::String>
    void SetUnusedAccessType(UnusedAccessTypeT&& value) { m_unusedAccessTypeHasBeenSet = true; m_unusedAccessType = std::forward<UnusedAccessTypeT>(value); }
    template<typename UnusedAccessTypeT = Aws::String>
    UnusedAccessTypeStatistics& WithUnusedAccessType(UnusedAccessTypeT&& value) { SetUnusedAccessType(std::forward<UnusedAccessTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of findings for the specified unused access type.</p>
     */
    inline int GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(int value) { m_totalHasBeenSet = true; m_total = value; }
    inline UnusedAccessTypeStatistics& WithTotal(int value) { SetTotal(value); return *this;}
    ///@}
  private:

    Aws::String m_unusedAccessType;
    bool m_unusedAccessTypeHasBeenSet = false;

    int m_total{0};
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
