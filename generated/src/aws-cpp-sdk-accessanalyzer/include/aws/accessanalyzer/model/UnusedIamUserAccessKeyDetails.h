/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about an unused access finding for an IAM user access
   * key. IAM Access Analyzer charges for unused access analysis based on the number
   * of IAM roles and users analyzed per month. For more details on pricing, see <a
   * href="https://aws.amazon.com/iam/access-analyzer/pricing">IAM Access Analyzer
   * pricing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UnusedIamUserAccessKeyDetails">AWS
   * API Reference</a></p>
   */
  class UnusedIamUserAccessKeyDetails
  {
  public:
    AWS_ACCESSANALYZER_API UnusedIamUserAccessKeyDetails() = default;
    AWS_ACCESSANALYZER_API UnusedIamUserAccessKeyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API UnusedIamUserAccessKeyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the access key for which the unused access finding was
     * generated.</p>
     */
    inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    template<typename AccessKeyIdT = Aws::String>
    void SetAccessKeyId(AccessKeyIdT&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::forward<AccessKeyIdT>(value); }
    template<typename AccessKeyIdT = Aws::String>
    UnusedIamUserAccessKeyDetails& WithAccessKeyId(AccessKeyIdT&& value) { SetAccessKeyId(std::forward<AccessKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the access key was last accessed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessed() const { return m_lastAccessed; }
    inline bool LastAccessedHasBeenSet() const { return m_lastAccessedHasBeenSet; }
    template<typename LastAccessedT = Aws::Utils::DateTime>
    void SetLastAccessed(LastAccessedT&& value) { m_lastAccessedHasBeenSet = true; m_lastAccessed = std::forward<LastAccessedT>(value); }
    template<typename LastAccessedT = Aws::Utils::DateTime>
    UnusedIamUserAccessKeyDetails& WithLastAccessed(LastAccessedT&& value) { SetLastAccessed(std::forward<LastAccessedT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessed{};
    bool m_lastAccessedHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
