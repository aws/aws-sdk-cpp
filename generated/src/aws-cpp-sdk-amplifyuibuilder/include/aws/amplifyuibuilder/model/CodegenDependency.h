/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Dependency package that may be required for the project code to
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CodegenDependency">AWS
   * API Reference</a></p>
   */
  class CodegenDependency
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CodegenDependency();
    AWS_AMPLIFYUIBUILDER_API CodegenDependency(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CodegenDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the dependency package.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the dependency package.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the dependency package.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the dependency package.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the dependency package.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the dependency package.</p>
     */
    inline CodegenDependency& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the dependency package.</p>
     */
    inline CodegenDependency& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the dependency package.</p>
     */
    inline CodegenDependency& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Indicates the version of the supported dependency package.</p>
     */
    inline const Aws::String& GetSupportedVersion() const{ return m_supportedVersion; }

    /**
     * <p>Indicates the version of the supported dependency package.</p>
     */
    inline bool SupportedVersionHasBeenSet() const { return m_supportedVersionHasBeenSet; }

    /**
     * <p>Indicates the version of the supported dependency package.</p>
     */
    inline void SetSupportedVersion(const Aws::String& value) { m_supportedVersionHasBeenSet = true; m_supportedVersion = value; }

    /**
     * <p>Indicates the version of the supported dependency package.</p>
     */
    inline void SetSupportedVersion(Aws::String&& value) { m_supportedVersionHasBeenSet = true; m_supportedVersion = std::move(value); }

    /**
     * <p>Indicates the version of the supported dependency package.</p>
     */
    inline void SetSupportedVersion(const char* value) { m_supportedVersionHasBeenSet = true; m_supportedVersion.assign(value); }

    /**
     * <p>Indicates the version of the supported dependency package.</p>
     */
    inline CodegenDependency& WithSupportedVersion(const Aws::String& value) { SetSupportedVersion(value); return *this;}

    /**
     * <p>Indicates the version of the supported dependency package.</p>
     */
    inline CodegenDependency& WithSupportedVersion(Aws::String&& value) { SetSupportedVersion(std::move(value)); return *this;}

    /**
     * <p>Indicates the version of the supported dependency package.</p>
     */
    inline CodegenDependency& WithSupportedVersion(const char* value) { SetSupportedVersion(value); return *this;}


    /**
     * <p>Determines if the dependency package is using Semantic versioning. If set to
     * true, it indicates that the dependency package uses Semantic versioning.</p>
     */
    inline bool GetIsSemVer() const{ return m_isSemVer; }

    /**
     * <p>Determines if the dependency package is using Semantic versioning. If set to
     * true, it indicates that the dependency package uses Semantic versioning.</p>
     */
    inline bool IsSemVerHasBeenSet() const { return m_isSemVerHasBeenSet; }

    /**
     * <p>Determines if the dependency package is using Semantic versioning. If set to
     * true, it indicates that the dependency package uses Semantic versioning.</p>
     */
    inline void SetIsSemVer(bool value) { m_isSemVerHasBeenSet = true; m_isSemVer = value; }

    /**
     * <p>Determines if the dependency package is using Semantic versioning. If set to
     * true, it indicates that the dependency package uses Semantic versioning.</p>
     */
    inline CodegenDependency& WithIsSemVer(bool value) { SetIsSemVer(value); return *this;}


    /**
     * <p>Indicates the reason to include the dependency package in your project
     * code.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>Indicates the reason to include the dependency package in your project
     * code.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Indicates the reason to include the dependency package in your project
     * code.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Indicates the reason to include the dependency package in your project
     * code.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Indicates the reason to include the dependency package in your project
     * code.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>Indicates the reason to include the dependency package in your project
     * code.</p>
     */
    inline CodegenDependency& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>Indicates the reason to include the dependency package in your project
     * code.</p>
     */
    inline CodegenDependency& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>Indicates the reason to include the dependency package in your project
     * code.</p>
     */
    inline CodegenDependency& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_supportedVersion;
    bool m_supportedVersionHasBeenSet = false;

    bool m_isSemVer;
    bool m_isSemVerHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
