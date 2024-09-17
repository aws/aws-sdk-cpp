/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RepositoryNameIdPair
  {
  public:
    AWS_CODECOMMIT_API RepositoryNameIdPair();
    AWS_CODECOMMIT_API RepositoryNameIdPair(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API RepositoryNameIdPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name associated with the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline RepositoryNameIdPair& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline RepositoryNameIdPair& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline RepositoryNameIdPair& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID associated with the repository.</p>
     */
    inline const Aws::String& GetRepositoryId() const{ return m_repositoryId; }
    inline bool RepositoryIdHasBeenSet() const { return m_repositoryIdHasBeenSet; }
    inline void SetRepositoryId(const Aws::String& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = value; }
    inline void SetRepositoryId(Aws::String&& value) { m_repositoryIdHasBeenSet = true; m_repositoryId = std::move(value); }
    inline void SetRepositoryId(const char* value) { m_repositoryIdHasBeenSet = true; m_repositoryId.assign(value); }
    inline RepositoryNameIdPair& WithRepositoryId(const Aws::String& value) { SetRepositoryId(value); return *this;}
    inline RepositoryNameIdPair& WithRepositoryId(Aws::String&& value) { SetRepositoryId(std::move(value)); return *this;}
    inline RepositoryNameIdPair& WithRepositoryId(const char* value) { SetRepositoryId(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_repositoryId;
    bool m_repositoryIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
