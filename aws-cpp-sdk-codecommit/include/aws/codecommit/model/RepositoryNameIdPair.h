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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Information about a repository name and ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/RepositoryNameIdPair">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API RepositoryNameIdPair
  {
  public:
    RepositoryNameIdPair();
    RepositoryNameIdPair(Aws::Utils::Json::JsonView jsonValue);
    RepositoryNameIdPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name associated with the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name associated with the repository.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name associated with the repository.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name associated with the repository.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name associated with the repository.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name associated with the repository.</p>
     */
    inline RepositoryNameIdPair& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name associated with the repository.</p>
     */
    inline RepositoryNameIdPair& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name associated with the repository.</p>
     */
    inline RepositoryNameIdPair& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The ID associated with the repository.</p>
     */
    inline const Aws::String& GetRepositoryId() const{ return m_repositoryId; }

    /**
     * <p>The ID associated with the repository.</p>
     */
    inline bool RepositoryIdHasBeenSet() const { return m_repositoryIdHasBeenSet; }

    /**
     * <p>The ID associated with the repository.</p>
     */
    inline void SetRepositoryId(const Aws::String& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = value; }

    /**
     * <p>The ID associated with the repository.</p>
     */
    inline void SetRepositoryId(Aws::String&& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = std::move(value); }

    /**
     * <p>The ID associated with the repository.</p>
     */
    inline void SetRepositoryId(const char* value) { m_repositoryIdHasBeenSet = true; m_repositoryId.assign(value); }

    /**
     * <p>The ID associated with the repository.</p>
     */
    inline RepositoryNameIdPair& WithRepositoryId(const Aws::String& value) { SetRepositoryId(value); return *this;}

    /**
     * <p>The ID associated with the repository.</p>
     */
    inline RepositoryNameIdPair& WithRepositoryId(Aws::String&& value) { SetRepositoryId(std::move(value)); return *this;}

    /**
     * <p>The ID associated with the repository.</p>
     */
    inline RepositoryNameIdPair& WithRepositoryId(const char* value) { SetRepositoryId(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_repositoryId;
    bool m_repositoryIdHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
