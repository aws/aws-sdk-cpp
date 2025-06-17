/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ProjectSelectionScope.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Defines the scope of repositories to be included in code security
   * scans.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ScopeSettings">AWS
   * API Reference</a></p>
   */
  class ScopeSettings
  {
  public:
    AWS_INSPECTOR2_API ScopeSettings() = default;
    AWS_INSPECTOR2_API ScopeSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ScopeSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scope of projects to be selected for scanning within the integrated
     * repositories. Setting the value to <code>ALL</code> applies the scope settings
     * to all existing and future projects imported into Amazon Inspector.</p>
     */
    inline ProjectSelectionScope GetProjectSelectionScope() const { return m_projectSelectionScope; }
    inline bool ProjectSelectionScopeHasBeenSet() const { return m_projectSelectionScopeHasBeenSet; }
    inline void SetProjectSelectionScope(ProjectSelectionScope value) { m_projectSelectionScopeHasBeenSet = true; m_projectSelectionScope = value; }
    inline ScopeSettings& WithProjectSelectionScope(ProjectSelectionScope value) { SetProjectSelectionScope(value); return *this;}
    ///@}
  private:

    ProjectSelectionScope m_projectSelectionScope{ProjectSelectionScope::NOT_SET};
    bool m_projectSelectionScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
