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


    ///@{
    /**
     * <p>Name of the dependency package.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CodegenDependency& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CodegenDependency& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CodegenDependency& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the version of the supported dependency package.</p>
     */
    inline const Aws::String& GetSupportedVersion() const{ return m_supportedVersion; }
    inline bool SupportedVersionHasBeenSet() const { return m_supportedVersionHasBeenSet; }
    inline void SetSupportedVersion(const Aws::String& value) { m_supportedVersionHasBeenSet = true; m_supportedVersion = value; }
    inline void SetSupportedVersion(Aws::String&& value) { m_supportedVersionHasBeenSet = true; m_supportedVersion = std::move(value); }
    inline void SetSupportedVersion(const char* value) { m_supportedVersionHasBeenSet = true; m_supportedVersion.assign(value); }
    inline CodegenDependency& WithSupportedVersion(const Aws::String& value) { SetSupportedVersion(value); return *this;}
    inline CodegenDependency& WithSupportedVersion(Aws::String&& value) { SetSupportedVersion(std::move(value)); return *this;}
    inline CodegenDependency& WithSupportedVersion(const char* value) { SetSupportedVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if the dependency package is using Semantic versioning. If set to
     * true, it indicates that the dependency package uses Semantic versioning.</p>
     */
    inline bool GetIsSemVer() const{ return m_isSemVer; }
    inline bool IsSemVerHasBeenSet() const { return m_isSemVerHasBeenSet; }
    inline void SetIsSemVer(bool value) { m_isSemVerHasBeenSet = true; m_isSemVer = value; }
    inline CodegenDependency& WithIsSemVer(bool value) { SetIsSemVer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the reason to include the dependency package in your project
     * code.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline CodegenDependency& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline CodegenDependency& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline CodegenDependency& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}
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
