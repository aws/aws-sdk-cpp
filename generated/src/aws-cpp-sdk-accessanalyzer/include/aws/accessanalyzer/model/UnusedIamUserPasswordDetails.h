﻿/**
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
   * <p>Contains information about an unused access finding for an IAM user password.
   * IAM Access Analyzer charges for unused access analysis based on the number of
   * IAM roles and users analyzed per month. For more details on pricing, see <a
   * href="https://aws.amazon.com/iam/access-analyzer/pricing">IAM Access Analyzer
   * pricing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UnusedIamUserPasswordDetails">AWS
   * API Reference</a></p>
   */
  class UnusedIamUserPasswordDetails
  {
  public:
    AWS_ACCESSANALYZER_API UnusedIamUserPasswordDetails() = default;
    AWS_ACCESSANALYZER_API UnusedIamUserPasswordDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API UnusedIamUserPasswordDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time at which the password was last accessed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessed() const { return m_lastAccessed; }
    inline bool LastAccessedHasBeenSet() const { return m_lastAccessedHasBeenSet; }
    template<typename LastAccessedT = Aws::Utils::DateTime>
    void SetLastAccessed(LastAccessedT&& value) { m_lastAccessedHasBeenSet = true; m_lastAccessed = std::forward<LastAccessedT>(value); }
    template<typename LastAccessedT = Aws::Utils::DateTime>
    UnusedIamUserPasswordDetails& WithLastAccessed(LastAccessedT&& value) { SetLastAccessed(std::forward<LastAccessedT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastAccessed{};
    bool m_lastAccessedHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
