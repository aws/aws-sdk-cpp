/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>The version of the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AppVersionSummary">AWS
   * API Reference</a></p>
   */
  class AWS_RESILIENCEHUB_API AppVersionSummary
  {
  public:
    AppVersionSummary();
    AppVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AppVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }

    /**
     * <p>The version of the application.</p>
     */
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersion(const Aws::String& value) { m_appVersionHasBeenSet = true; m_appVersion = value; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersion(Aws::String&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::move(value); }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersion(const char* value) { m_appVersionHasBeenSet = true; m_appVersion.assign(value); }

    /**
     * <p>The version of the application.</p>
     */
    inline AppVersionSummary& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline AppVersionSummary& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline AppVersionSummary& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}

  private:

    Aws::String m_appVersion;
    bool m_appVersionHasBeenSet;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
