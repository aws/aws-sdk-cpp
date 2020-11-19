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

  class AWS_GLUE_API SchemaVersionNumber
  {
  public:
    SchemaVersionNumber();
    SchemaVersionNumber(Aws::Utils::Json::JsonView jsonValue);
    SchemaVersionNumber& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline bool GetLatestVersion() const{ return m_latestVersion; }

    
    inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }

    
    inline void SetLatestVersion(bool value) { m_latestVersionHasBeenSet = true; m_latestVersion = value; }

    
    inline SchemaVersionNumber& WithLatestVersion(bool value) { SetLatestVersion(value); return *this;}


    
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }

    
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    
    inline SchemaVersionNumber& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}

  private:

    bool m_latestVersion;
    bool m_latestVersionHasBeenSet;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
