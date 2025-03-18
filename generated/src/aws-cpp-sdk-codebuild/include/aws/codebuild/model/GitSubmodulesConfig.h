/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>

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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p> Information about the Git submodules configuration for an CodeBuild build
   * project. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/GitSubmodulesConfig">AWS
   * API Reference</a></p>
   */
  class GitSubmodulesConfig
  {
  public:
    AWS_CODEBUILD_API GitSubmodulesConfig() = default;
    AWS_CODEBUILD_API GitSubmodulesConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API GitSubmodulesConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Set to true to fetch Git submodules for your CodeBuild build project. </p>
     */
    inline bool GetFetchSubmodules() const { return m_fetchSubmodules; }
    inline bool FetchSubmodulesHasBeenSet() const { return m_fetchSubmodulesHasBeenSet; }
    inline void SetFetchSubmodules(bool value) { m_fetchSubmodulesHasBeenSet = true; m_fetchSubmodules = value; }
    inline GitSubmodulesConfig& WithFetchSubmodules(bool value) { SetFetchSubmodules(value); return *this;}
    ///@}
  private:

    bool m_fetchSubmodules{false};
    bool m_fetchSubmodulesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
