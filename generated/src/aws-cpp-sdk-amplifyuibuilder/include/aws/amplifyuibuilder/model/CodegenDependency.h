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
    AWS_AMPLIFYUIBUILDER_API CodegenDependency() = default;
    AWS_AMPLIFYUIBUILDER_API CodegenDependency(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CodegenDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the dependency package.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CodegenDependency& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the version of the supported dependency package.</p>
     */
    inline const Aws::String& GetSupportedVersion() const { return m_supportedVersion; }
    inline bool SupportedVersionHasBeenSet() const { return m_supportedVersionHasBeenSet; }
    template<typename SupportedVersionT = Aws::String>
    void SetSupportedVersion(SupportedVersionT&& value) { m_supportedVersionHasBeenSet = true; m_supportedVersion = std::forward<SupportedVersionT>(value); }
    template<typename SupportedVersionT = Aws::String>
    CodegenDependency& WithSupportedVersion(SupportedVersionT&& value) { SetSupportedVersion(std::forward<SupportedVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines if the dependency package is using Semantic versioning. If set to
     * true, it indicates that the dependency package uses Semantic versioning.</p>
     */
    inline bool GetIsSemVer() const { return m_isSemVer; }
    inline bool IsSemVerHasBeenSet() const { return m_isSemVerHasBeenSet; }
    inline void SetIsSemVer(bool value) { m_isSemVerHasBeenSet = true; m_isSemVer = value; }
    inline CodegenDependency& WithIsSemVer(bool value) { SetIsSemVer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the reason to include the dependency package in your project
     * code.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    CodegenDependency& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_supportedVersion;
    bool m_supportedVersionHasBeenSet = false;

    bool m_isSemVer{false};
    bool m_isSemVerHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
