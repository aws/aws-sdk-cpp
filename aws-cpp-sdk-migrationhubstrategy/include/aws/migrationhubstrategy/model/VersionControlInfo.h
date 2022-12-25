/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/VersionControlType.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p>Details about the version control configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/VersionControlInfo">AWS
   * API Reference</a></p>
   */
  class VersionControlInfo
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API VersionControlInfo();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API VersionControlInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API VersionControlInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time when the version control system was last configured.</p>
     */
    inline const Aws::String& GetVersionControlConfigurationTimeStamp() const{ return m_versionControlConfigurationTimeStamp; }

    /**
     * <p>The time when the version control system was last configured.</p>
     */
    inline bool VersionControlConfigurationTimeStampHasBeenSet() const { return m_versionControlConfigurationTimeStampHasBeenSet; }

    /**
     * <p>The time when the version control system was last configured.</p>
     */
    inline void SetVersionControlConfigurationTimeStamp(const Aws::String& value) { m_versionControlConfigurationTimeStampHasBeenSet = true; m_versionControlConfigurationTimeStamp = value; }

    /**
     * <p>The time when the version control system was last configured.</p>
     */
    inline void SetVersionControlConfigurationTimeStamp(Aws::String&& value) { m_versionControlConfigurationTimeStampHasBeenSet = true; m_versionControlConfigurationTimeStamp = std::move(value); }

    /**
     * <p>The time when the version control system was last configured.</p>
     */
    inline void SetVersionControlConfigurationTimeStamp(const char* value) { m_versionControlConfigurationTimeStampHasBeenSet = true; m_versionControlConfigurationTimeStamp.assign(value); }

    /**
     * <p>The time when the version control system was last configured.</p>
     */
    inline VersionControlInfo& WithVersionControlConfigurationTimeStamp(const Aws::String& value) { SetVersionControlConfigurationTimeStamp(value); return *this;}

    /**
     * <p>The time when the version control system was last configured.</p>
     */
    inline VersionControlInfo& WithVersionControlConfigurationTimeStamp(Aws::String&& value) { SetVersionControlConfigurationTimeStamp(std::move(value)); return *this;}

    /**
     * <p>The time when the version control system was last configured.</p>
     */
    inline VersionControlInfo& WithVersionControlConfigurationTimeStamp(const char* value) { SetVersionControlConfigurationTimeStamp(value); return *this;}


    /**
     * <p>The type of version control.</p>
     */
    inline const VersionControlType& GetVersionControlType() const{ return m_versionControlType; }

    /**
     * <p>The type of version control.</p>
     */
    inline bool VersionControlTypeHasBeenSet() const { return m_versionControlTypeHasBeenSet; }

    /**
     * <p>The type of version control.</p>
     */
    inline void SetVersionControlType(const VersionControlType& value) { m_versionControlTypeHasBeenSet = true; m_versionControlType = value; }

    /**
     * <p>The type of version control.</p>
     */
    inline void SetVersionControlType(VersionControlType&& value) { m_versionControlTypeHasBeenSet = true; m_versionControlType = std::move(value); }

    /**
     * <p>The type of version control.</p>
     */
    inline VersionControlInfo& WithVersionControlType(const VersionControlType& value) { SetVersionControlType(value); return *this;}

    /**
     * <p>The type of version control.</p>
     */
    inline VersionControlInfo& WithVersionControlType(VersionControlType&& value) { SetVersionControlType(std::move(value)); return *this;}

  private:

    Aws::String m_versionControlConfigurationTimeStamp;
    bool m_versionControlConfigurationTimeStampHasBeenSet = false;

    VersionControlType m_versionControlType;
    bool m_versionControlTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
