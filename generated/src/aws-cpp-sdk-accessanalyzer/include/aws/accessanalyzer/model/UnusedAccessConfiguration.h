/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>

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
   * <p>Contains information about an unused access analyzer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UnusedAccessConfiguration">AWS
   * API Reference</a></p>
   */
  class UnusedAccessConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API UnusedAccessConfiguration();
    AWS_ACCESSANALYZER_API UnusedAccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API UnusedAccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The specified access age in days for which to generate findings for unused
     * access. For example, if you specify 90 days, the analyzer will generate findings
     * for IAM entities within the accounts of the selected organization for any access
     * that hasn't been used in 90 or more days since the analyzer's last scan. You can
     * choose a value between 1 and 180 days.</p>
     */
    inline int GetUnusedAccessAge() const{ return m_unusedAccessAge; }

    /**
     * <p>The specified access age in days for which to generate findings for unused
     * access. For example, if you specify 90 days, the analyzer will generate findings
     * for IAM entities within the accounts of the selected organization for any access
     * that hasn't been used in 90 or more days since the analyzer's last scan. You can
     * choose a value between 1 and 180 days.</p>
     */
    inline bool UnusedAccessAgeHasBeenSet() const { return m_unusedAccessAgeHasBeenSet; }

    /**
     * <p>The specified access age in days for which to generate findings for unused
     * access. For example, if you specify 90 days, the analyzer will generate findings
     * for IAM entities within the accounts of the selected organization for any access
     * that hasn't been used in 90 or more days since the analyzer's last scan. You can
     * choose a value between 1 and 180 days.</p>
     */
    inline void SetUnusedAccessAge(int value) { m_unusedAccessAgeHasBeenSet = true; m_unusedAccessAge = value; }

    /**
     * <p>The specified access age in days for which to generate findings for unused
     * access. For example, if you specify 90 days, the analyzer will generate findings
     * for IAM entities within the accounts of the selected organization for any access
     * that hasn't been used in 90 or more days since the analyzer's last scan. You can
     * choose a value between 1 and 180 days.</p>
     */
    inline UnusedAccessConfiguration& WithUnusedAccessAge(int value) { SetUnusedAccessAge(value); return *this;}

  private:

    int m_unusedAccessAge;
    bool m_unusedAccessAgeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
