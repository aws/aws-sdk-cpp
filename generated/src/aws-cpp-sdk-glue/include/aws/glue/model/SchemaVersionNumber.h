/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure containing the schema version information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SchemaVersionNumber">AWS
   * API Reference</a></p>
   */
  class SchemaVersionNumber
  {
  public:
    AWS_GLUE_API SchemaVersionNumber();
    AWS_GLUE_API SchemaVersionNumber(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API SchemaVersionNumber& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The latest version available for the schema.</p>
     */
    inline bool GetLatestVersion() const{ return m_latestVersion; }

    /**
     * <p>The latest version available for the schema.</p>
     */
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }

    /**
     * <p>The latest version available for the schema.</p>
     */
    inline void SetLatestVersion(bool value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }

    /**
     * <p>The latest version available for the schema.</p>
     */
    inline SchemaVersionNumber& WithLatestVersion(bool value) { SetLatestVersion(value); return *this;}


    /**
     * <p>The version number of the schema.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline SchemaVersionNumber& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}

  private:

    bool m_latestVersion;
    bool m_latestVersionHasBeenSet = false;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
