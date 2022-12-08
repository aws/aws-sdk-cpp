/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>A block that contains information about the configuration manager (Chef) and
   * the versions of the configuration manager that are supported for an operating
   * system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/OperatingSystemConfigurationManager">AWS
   * API Reference</a></p>
   */
  class OperatingSystemConfigurationManager
  {
  public:
    AWS_OPSWORKS_API OperatingSystemConfigurationManager();
    AWS_OPSWORKS_API OperatingSystemConfigurationManager(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API OperatingSystemConfigurationManager& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the configuration manager, which is Chef.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configuration manager, which is Chef.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the configuration manager, which is Chef.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the configuration manager, which is Chef.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the configuration manager, which is Chef.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the configuration manager, which is Chef.</p>
     */
    inline OperatingSystemConfigurationManager& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configuration manager, which is Chef.</p>
     */
    inline OperatingSystemConfigurationManager& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration manager, which is Chef.</p>
     */
    inline OperatingSystemConfigurationManager& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The versions of the configuration manager that are supported by an operating
     * system.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The versions of the configuration manager that are supported by an operating
     * system.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The versions of the configuration manager that are supported by an operating
     * system.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The versions of the configuration manager that are supported by an operating
     * system.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The versions of the configuration manager that are supported by an operating
     * system.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The versions of the configuration manager that are supported by an operating
     * system.</p>
     */
    inline OperatingSystemConfigurationManager& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The versions of the configuration manager that are supported by an operating
     * system.</p>
     */
    inline OperatingSystemConfigurationManager& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The versions of the configuration manager that are supported by an operating
     * system.</p>
     */
    inline OperatingSystemConfigurationManager& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
