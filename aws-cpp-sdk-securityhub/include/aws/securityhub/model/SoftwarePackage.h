/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about a software package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SoftwarePackage">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API SoftwarePackage
  {
  public:
    SoftwarePackage();
    SoftwarePackage(Aws::Utils::Json::JsonView jsonValue);
    SoftwarePackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the software package.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the software package.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the software package.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the software package.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the software package.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the software package.</p>
     */
    inline SoftwarePackage& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the software package.</p>
     */
    inline SoftwarePackage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the software package.</p>
     */
    inline SoftwarePackage& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the software package.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the software package.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the software package.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the software package.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the software package.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the software package.</p>
     */
    inline SoftwarePackage& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the software package.</p>
     */
    inline SoftwarePackage& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the software package.</p>
     */
    inline SoftwarePackage& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The epoch of the software package.</p>
     */
    inline const Aws::String& GetEpoch() const{ return m_epoch; }

    /**
     * <p>The epoch of the software package.</p>
     */
    inline bool EpochHasBeenSet() const { return m_epochHasBeenSet; }

    /**
     * <p>The epoch of the software package.</p>
     */
    inline void SetEpoch(const Aws::String& value) { m_epochHasBeenSet = true; m_epoch = value; }

    /**
     * <p>The epoch of the software package.</p>
     */
    inline void SetEpoch(Aws::String&& value) { m_epochHasBeenSet = true; m_epoch = std::move(value); }

    /**
     * <p>The epoch of the software package.</p>
     */
    inline void SetEpoch(const char* value) { m_epochHasBeenSet = true; m_epoch.assign(value); }

    /**
     * <p>The epoch of the software package.</p>
     */
    inline SoftwarePackage& WithEpoch(const Aws::String& value) { SetEpoch(value); return *this;}

    /**
     * <p>The epoch of the software package.</p>
     */
    inline SoftwarePackage& WithEpoch(Aws::String&& value) { SetEpoch(std::move(value)); return *this;}

    /**
     * <p>The epoch of the software package.</p>
     */
    inline SoftwarePackage& WithEpoch(const char* value) { SetEpoch(value); return *this;}


    /**
     * <p>The release of the software package.</p>
     */
    inline const Aws::String& GetRelease() const{ return m_release; }

    /**
     * <p>The release of the software package.</p>
     */
    inline bool ReleaseHasBeenSet() const { return m_releaseHasBeenSet; }

    /**
     * <p>The release of the software package.</p>
     */
    inline void SetRelease(const Aws::String& value) { m_releaseHasBeenSet = true; m_release = value; }

    /**
     * <p>The release of the software package.</p>
     */
    inline void SetRelease(Aws::String&& value) { m_releaseHasBeenSet = true; m_release = std::move(value); }

    /**
     * <p>The release of the software package.</p>
     */
    inline void SetRelease(const char* value) { m_releaseHasBeenSet = true; m_release.assign(value); }

    /**
     * <p>The release of the software package.</p>
     */
    inline SoftwarePackage& WithRelease(const Aws::String& value) { SetRelease(value); return *this;}

    /**
     * <p>The release of the software package.</p>
     */
    inline SoftwarePackage& WithRelease(Aws::String&& value) { SetRelease(std::move(value)); return *this;}

    /**
     * <p>The release of the software package.</p>
     */
    inline SoftwarePackage& WithRelease(const char* value) { SetRelease(value); return *this;}


    /**
     * <p>The architecture used for the software package.</p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The architecture used for the software package.</p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The architecture used for the software package.</p>
     */
    inline void SetArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The architecture used for the software package.</p>
     */
    inline void SetArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The architecture used for the software package.</p>
     */
    inline void SetArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.assign(value); }

    /**
     * <p>The architecture used for the software package.</p>
     */
    inline SoftwarePackage& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The architecture used for the software package.</p>
     */
    inline SoftwarePackage& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}

    /**
     * <p>The architecture used for the software package.</p>
     */
    inline SoftwarePackage& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Aws::String m_epoch;
    bool m_epochHasBeenSet;

    Aws::String m_release;
    bool m_releaseHasBeenSet;

    Aws::String m_architecture;
    bool m_architectureHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
