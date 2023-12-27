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
    AWS_ACCESSANALYZER_API UnusedIamUserAccessKeyDetails();
    AWS_ACCESSANALYZER_API UnusedIamUserAccessKeyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API UnusedIamUserAccessKeyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the access key for which the unused access finding was
     * generated.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The ID of the access key for which the unused access finding was
     * generated.</p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p>The ID of the access key for which the unused access finding was
     * generated.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The ID of the access key for which the unused access finding was
     * generated.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>The ID of the access key for which the unused access finding was
     * generated.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>The ID of the access key for which the unused access finding was
     * generated.</p>
     */
    inline UnusedIamUserAccessKeyDetails& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The ID of the access key for which the unused access finding was
     * generated.</p>
     */
    inline UnusedIamUserAccessKeyDetails& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the access key for which the unused access finding was
     * generated.</p>
     */
    inline UnusedIamUserAccessKeyDetails& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p>The time at which the access key was last accessed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessed() const{ return m_lastAccessed; }

    /**
     * <p>The time at which the access key was last accessed.</p>
     */
    inline bool LastAccessedHasBeenSet() const { return m_lastAccessedHasBeenSet; }

    /**
     * <p>The time at which the access key was last accessed.</p>
     */
    inline void SetLastAccessed(const Aws::Utils::DateTime& value) { m_lastAccessedHasBeenSet = true; m_lastAccessed = value; }

    /**
     * <p>The time at which the access key was last accessed.</p>
     */
    inline void SetLastAccessed(Aws::Utils::DateTime&& value) { m_lastAccessedHasBeenSet = true; m_lastAccessed = std::move(value); }

    /**
     * <p>The time at which the access key was last accessed.</p>
     */
    inline UnusedIamUserAccessKeyDetails& WithLastAccessed(const Aws::Utils::DateTime& value) { SetLastAccessed(value); return *this;}

    /**
     * <p>The time at which the access key was last accessed.</p>
     */
    inline UnusedIamUserAccessKeyDetails& WithLastAccessed(Aws::Utils::DateTime&& value) { SetLastAccessed(std::move(value)); return *this;}

  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessed;
    bool m_lastAccessedHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
