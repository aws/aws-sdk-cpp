/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/OSType.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Information about the operating system. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/OSInfo">AWS
   * API Reference</a></p>
   */
  class OSInfo
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API OSInfo();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API OSInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API OSInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Information about the type of operating system. </p>
     */
    inline const OSType& GetType() const{ return m_type; }

    /**
     * <p> Information about the type of operating system. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> Information about the type of operating system. </p>
     */
    inline void SetType(const OSType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> Information about the type of operating system. </p>
     */
    inline void SetType(OSType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> Information about the type of operating system. </p>
     */
    inline OSInfo& WithType(const OSType& value) { SetType(value); return *this;}

    /**
     * <p> Information about the type of operating system. </p>
     */
    inline OSInfo& WithType(OSType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> Information about the version of operating system. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p> Information about the version of operating system. </p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p> Information about the version of operating system. </p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p> Information about the version of operating system. </p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p> Information about the version of operating system. </p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p> Information about the version of operating system. </p>
     */
    inline OSInfo& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p> Information about the version of operating system. </p>
     */
    inline OSInfo& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p> Information about the version of operating system. </p>
     */
    inline OSInfo& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    OSType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
