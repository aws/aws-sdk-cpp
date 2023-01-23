/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Represents the input of a batch get repositories operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/BatchGetRepositoriesInput">AWS
   * API Reference</a></p>
   */
  class BatchGetRepositoriesRequest : public CodeCommitRequest
  {
  public:
    AWS_CODECOMMIT_API BatchGetRepositoriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetRepositories"; }

    AWS_CODECOMMIT_API Aws::String SerializePayload() const override;

    AWS_CODECOMMIT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The names of the repositories to get information about.</p>  <p>The
     * length constraint limit is for each string in the array. The array itself can be
     * empty.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetRepositoryNames() const{ return m_repositoryNames; }

    /**
     * <p>The names of the repositories to get information about.</p>  <p>The
     * length constraint limit is for each string in the array. The array itself can be
     * empty.</p> 
     */
    inline bool RepositoryNamesHasBeenSet() const { return m_repositoryNamesHasBeenSet; }

    /**
     * <p>The names of the repositories to get information about.</p>  <p>The
     * length constraint limit is for each string in the array. The array itself can be
     * empty.</p> 
     */
    inline void SetRepositoryNames(const Aws::Vector<Aws::String>& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames = value; }

    /**
     * <p>The names of the repositories to get information about.</p>  <p>The
     * length constraint limit is for each string in the array. The array itself can be
     * empty.</p> 
     */
    inline void SetRepositoryNames(Aws::Vector<Aws::String>&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames = std::move(value); }

    /**
     * <p>The names of the repositories to get information about.</p>  <p>The
     * length constraint limit is for each string in the array. The array itself can be
     * empty.</p> 
     */
    inline BatchGetRepositoriesRequest& WithRepositoryNames(const Aws::Vector<Aws::String>& value) { SetRepositoryNames(value); return *this;}

    /**
     * <p>The names of the repositories to get information about.</p>  <p>The
     * length constraint limit is for each string in the array. The array itself can be
     * empty.</p> 
     */
    inline BatchGetRepositoriesRequest& WithRepositoryNames(Aws::Vector<Aws::String>&& value) { SetRepositoryNames(std::move(value)); return *this;}

    /**
     * <p>The names of the repositories to get information about.</p>  <p>The
     * length constraint limit is for each string in the array. The array itself can be
     * empty.</p> 
     */
    inline BatchGetRepositoriesRequest& AddRepositoryNames(const Aws::String& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.push_back(value); return *this; }

    /**
     * <p>The names of the repositories to get information about.</p>  <p>The
     * length constraint limit is for each string in the array. The array itself can be
     * empty.</p> 
     */
    inline BatchGetRepositoriesRequest& AddRepositoryNames(Aws::String&& value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the repositories to get information about.</p>  <p>The
     * length constraint limit is for each string in the array. The array itself can be
     * empty.</p> 
     */
    inline BatchGetRepositoriesRequest& AddRepositoryNames(const char* value) { m_repositoryNamesHasBeenSet = true; m_repositoryNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_repositoryNames;
    bool m_repositoryNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
