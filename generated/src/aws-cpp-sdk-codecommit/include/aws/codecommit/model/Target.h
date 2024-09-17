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
   * <p>Returns information about a target for a pull request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/Target">AWS
   * API Reference</a></p>
   */
  class Target
  {
  public:
    AWS_CODECOMMIT_API Target();
    AWS_CODECOMMIT_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline Target& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline Target& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline Target& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline const Aws::String& GetSourceReference() const{ return m_sourceReference; }
    inline bool SourceReferenceHasBeenSet() const { return m_sourceReferenceHasBeenSet; }
    inline void SetSourceReference(const Aws::String& value) { m_sourceReferenceHasBeenSet = true; m_sourceReference = value; }
    inline void SetSourceReference(Aws::String&& value) { m_sourceReferenceHasBeenSet = true; m_sourceReference = std::move(value); }
    inline void SetSourceReference(const char* value) { m_sourceReferenceHasBeenSet = true; m_sourceReference.assign(value); }
    inline Target& WithSourceReference(const Aws::String& value) { SetSourceReference(value); return *this;}
    inline Target& WithSourceReference(Aws::String&& value) { SetSourceReference(std::move(value)); return *this;}
    inline Target& WithSourceReference(const char* value) { SetSourceReference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch of the repository where the pull request changes are merged. Also
     * known as the destination branch.</p>
     */
    inline const Aws::String& GetDestinationReference() const{ return m_destinationReference; }
    inline bool DestinationReferenceHasBeenSet() const { return m_destinationReferenceHasBeenSet; }
    inline void SetDestinationReference(const Aws::String& value) { m_destinationReferenceHasBeenSet = true; m_destinationReference = value; }
    inline void SetDestinationReference(Aws::String&& value) { m_destinationReferenceHasBeenSet = true; m_destinationReference = std::move(value); }
    inline void SetDestinationReference(const char* value) { m_destinationReferenceHasBeenSet = true; m_destinationReference.assign(value); }
    inline Target& WithDestinationReference(const Aws::String& value) { SetDestinationReference(value); return *this;}
    inline Target& WithDestinationReference(Aws::String&& value) { SetDestinationReference(std::move(value)); return *this;}
    inline Target& WithDestinationReference(const char* value) { SetDestinationReference(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_sourceReference;
    bool m_sourceReferenceHasBeenSet = false;

    Aws::String m_destinationReference;
    bool m_destinationReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
