/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Identifies a specific resource in a code repository that will be
   * scanned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CodeSecurityResource">AWS
   * API Reference</a></p>
   */
  class CodeSecurityResource
  {
  public:
    AWS_INSPECTOR2_API CodeSecurityResource() = default;
    AWS_INSPECTOR2_API CodeSecurityResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CodeSecurityResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the project in the code repository.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    CodeSecurityResource& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
