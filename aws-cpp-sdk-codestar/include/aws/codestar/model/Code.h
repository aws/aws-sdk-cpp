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
#include <aws/codestar/model/CodeSource.h>
#include <aws/codestar/model/CodeDestination.h>
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
   * <p>Location and destination information about the source code files provided
   * with the project request. The source code is uploaded to the new project source
   * repository after project creation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/Code">AWS API
   * Reference</a></p>
   */
  class AWS_CODESTAR_API Code
  {
  public:
    Code();
    Code(Aws::Utils::Json::JsonView jsonValue);
    Code& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location where the source code files provided with the project request
     * are stored. AWS CodeStar retrieves the files during project creation.</p>
     */
    inline const CodeSource& GetSource() const{ return m_source; }

    /**
     * <p>The location where the source code files provided with the project request
     * are stored. AWS CodeStar retrieves the files during project creation.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The location where the source code files provided with the project request
     * are stored. AWS CodeStar retrieves the files during project creation.</p>
     */
    inline void SetSource(const CodeSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The location where the source code files provided with the project request
     * are stored. AWS CodeStar retrieves the files during project creation.</p>
     */
    inline void SetSource(CodeSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The location where the source code files provided with the project request
     * are stored. AWS CodeStar retrieves the files during project creation.</p>
     */
    inline Code& WithSource(const CodeSource& value) { SetSource(value); return *this;}

    /**
     * <p>The location where the source code files provided with the project request
     * are stored. AWS CodeStar retrieves the files during project creation.</p>
     */
    inline Code& WithSource(CodeSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The repository to be created in AWS CodeStar. Valid values are AWS CodeCommit
     * or GitHub. After AWS CodeStar provisions the new repository, the source code
     * files provided with the project request are placed in the repository.</p>
     */
    inline const CodeDestination& GetDestination() const{ return m_destination; }

    /**
     * <p>The repository to be created in AWS CodeStar. Valid values are AWS CodeCommit
     * or GitHub. After AWS CodeStar provisions the new repository, the source code
     * files provided with the project request are placed in the repository.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The repository to be created in AWS CodeStar. Valid values are AWS CodeCommit
     * or GitHub. After AWS CodeStar provisions the new repository, the source code
     * files provided with the project request are placed in the repository.</p>
     */
    inline void SetDestination(const CodeDestination& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The repository to be created in AWS CodeStar. Valid values are AWS CodeCommit
     * or GitHub. After AWS CodeStar provisions the new repository, the source code
     * files provided with the project request are placed in the repository.</p>
     */
    inline void SetDestination(CodeDestination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The repository to be created in AWS CodeStar. Valid values are AWS CodeCommit
     * or GitHub. After AWS CodeStar provisions the new repository, the source code
     * files provided with the project request are placed in the repository.</p>
     */
    inline Code& WithDestination(const CodeDestination& value) { SetDestination(value); return *this;}

    /**
     * <p>The repository to be created in AWS CodeStar. Valid values are AWS CodeCommit
     * or GitHub. After AWS CodeStar provisions the new repository, the source code
     * files provided with the project request are placed in the repository.</p>
     */
    inline Code& WithDestination(CodeDestination&& value) { SetDestination(std::move(value)); return *this;}

  private:

    CodeSource m_source;
    bool m_sourceHasBeenSet;

    CodeDestination m_destination;
    bool m_destinationHasBeenSet;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
