/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p> Information about the Git submodules configuration for an AWS CodeBuild
   * build project. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/GitSubmodulesConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API GitSubmodulesConfig
  {
  public:
    GitSubmodulesConfig();
    GitSubmodulesConfig(Aws::Utils::Json::JsonView jsonValue);
    GitSubmodulesConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Set to true to fetch Git submodules for your AWS CodeBuild build project.
     * </p>
     */
    inline bool GetFetchSubmodules() const{ return m_fetchSubmodules; }

    /**
     * <p> Set to true to fetch Git submodules for your AWS CodeBuild build project.
     * </p>
     */
    inline bool FetchSubmodulesHasBeenSet() const { return m_fetchSubmodulesHasBeenSet; }

    /**
     * <p> Set to true to fetch Git submodules for your AWS CodeBuild build project.
     * </p>
     */
    inline void SetFetchSubmodules(bool value) { m_fetchSubmodulesHasBeenSet = true; m_fetchSubmodules = value; }

    /**
     * <p> Set to true to fetch Git submodules for your AWS CodeBuild build project.
     * </p>
     */
    inline GitSubmodulesConfig& WithFetchSubmodules(bool value) { SetFetchSubmodules(value); return *this;}

  private:

    bool m_fetchSubmodules;
    bool m_fetchSubmodulesHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
