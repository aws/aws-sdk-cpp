/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains information about an unused access finding for an IAM role. IAM
   * Access Analyzer charges for unused access analysis based on the number of IAM
   * roles and users analyzed per month. For more details on pricing, see <a
   * href="https://aws.amazon.com/iam/access-analyzer/pricing">IAM Access Analyzer
   * pricing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UnusedIamRoleDetails">AWS
   * API Reference</a></p>
   */
  class UnusedIamRoleDetails
  {
  public:
    AWS_ACCESSANALYZER_API UnusedIamRoleDetails();
    AWS_ACCESSANALYZER_API UnusedIamRoleDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API UnusedIamRoleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time at which the role was last accessed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessed() const{ return m_lastAccessed; }

    /**
     * <p>The time at which the role was last accessed.</p>
     */
    inline bool LastAccessedHasBeenSet() const { return m_lastAccessedHasBeenSet; }

    /**
     * <p>The time at which the role was last accessed.</p>
     */
    inline void SetLastAccessed(const Aws::Utils::DateTime& value) { m_lastAccessedHasBeenSet = true; m_lastAccessed = value; }

    /**
     * <p>The time at which the role was last accessed.</p>
     */
    inline void SetLastAccessed(Aws::Utils::DateTime&& value) { m_lastAccessedHasBeenSet = true; m_lastAccessed = std::move(value); }

    /**
     * <p>The time at which the role was last accessed.</p>
     */
    inline UnusedIamRoleDetails& WithLastAccessed(const Aws::Utils::DateTime& value) { SetLastAccessed(value); return *this;}

    /**
     * <p>The time at which the role was last accessed.</p>
     */
    inline UnusedIamRoleDetails& WithLastAccessed(Aws::Utils::DateTime&& value) { SetLastAccessed(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_lastAccessed;
    bool m_lastAccessedHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
