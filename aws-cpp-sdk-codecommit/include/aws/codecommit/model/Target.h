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
   * <p>Returns information about a target for a pull request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/Target">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API Target
  {
  public:
    Target();
    Target(Aws::Utils::Json::JsonView jsonValue);
    Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline Target& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline Target& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline Target& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline const Aws::String& GetSourceReference() const{ return m_sourceReference; }

    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline bool SourceReferenceHasBeenSet() const { return m_sourceReferenceHasBeenSet; }

    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline void SetSourceReference(const Aws::String& value) { m_sourceReferenceHasBeenSet = true; m_sourceReference = value; }

    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline void SetSourceReference(Aws::String&& value) { m_sourceReferenceHasBeenSet = true; m_sourceReference = std::move(value); }

    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline void SetSourceReference(const char* value) { m_sourceReferenceHasBeenSet = true; m_sourceReference.assign(value); }

    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline Target& WithSourceReference(const Aws::String& value) { SetSourceReference(value); return *this;}

    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline Target& WithSourceReference(Aws::String&& value) { SetSourceReference(std::move(value)); return *this;}

    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline Target& WithSourceReference(const char* value) { SetSourceReference(value); return *this;}


    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch.</p>
     */
    inline const Aws::String& GetDestinationReference() const{ return m_destinationReference; }

    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch.</p>
     */
    inline bool DestinationReferenceHasBeenSet() const { return m_destinationReferenceHasBeenSet; }

    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch.</p>
     */
    inline void SetDestinationReference(const Aws::String& value) { m_destinationReferenceHasBeenSet = true; m_destinationReference = value; }

    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch.</p>
     */
    inline void SetDestinationReference(Aws::String&& value) { m_destinationReferenceHasBeenSet = true; m_destinationReference = std::move(value); }

    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch.</p>
     */
    inline void SetDestinationReference(const char* value) { m_destinationReferenceHasBeenSet = true; m_destinationReference.assign(value); }

    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch.</p>
     */
    inline Target& WithDestinationReference(const Aws::String& value) { SetDestinationReference(value); return *this;}

    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch.</p>
     */
    inline Target& WithDestinationReference(Aws::String&& value) { SetDestinationReference(std::move(value)); return *this;}

    /**
     * <p>The branch of the repository where the pull request changes will be merged
     * into. Also known as the destination branch.</p>
     */
    inline Target& WithDestinationReference(const char* value) { SetDestinationReference(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_sourceReference;
    bool m_sourceReferenceHasBeenSet;

    Aws::String m_destinationReference;
    bool m_destinationReferenceHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
