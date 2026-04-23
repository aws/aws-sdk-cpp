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
#include <aws/codestar/CodeStar_EXPORTS.h>
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
namespace CodeStar
{
namespace Model
{

  /**
   * <p>Information about the AWS CodeCommit repository to be created in AWS
   * CodeStar. This is where the source code files provided with the project request
   * will be uploaded after project creation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/CodeCommitCodeDestination">AWS
   * API Reference</a></p>
   */
  class AWS_CODESTAR_API CodeCommitCodeDestination
  {
  public:
    CodeCommitCodeDestination();
    CodeCommitCodeDestination(Aws::Utils::Json::JsonView jsonValue);
    CodeCommitCodeDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline CodeCommitCodeDestination& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline CodeCommitCodeDestination& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS CodeCommit repository to be created in AWS CodeStar.</p>
     */
    inline CodeCommitCodeDestination& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
