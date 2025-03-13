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
    AWS_CODECOMMIT_API Target() = default;
    AWS_CODECOMMIT_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the repository that contains the pull request.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    Target& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch of the repository that contains the changes for the pull request.
     * Also known as the source branch.</p>
     */
    inline const Aws::String& GetSourceReference() const { return m_sourceReference; }
    inline bool SourceReferenceHasBeenSet() const { return m_sourceReferenceHasBeenSet; }
    template<typename SourceReferenceT = Aws::String>
    void SetSourceReference(SourceReferenceT&& value) { m_sourceReferenceHasBeenSet = true; m_sourceReference = std::forward<SourceReferenceT>(value); }
    template<typename SourceReferenceT = Aws::String>
    Target& WithSourceReference(SourceReferenceT&& value) { SetSourceReference(std::forward<SourceReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The branch of the repository where the pull request changes are merged. Also
     * known as the destination branch.</p>
     */
    inline const Aws::String& GetDestinationReference() const { return m_destinationReference; }
    inline bool DestinationReferenceHasBeenSet() const { return m_destinationReferenceHasBeenSet; }
    template<typename DestinationReferenceT = Aws::String>
    void SetDestinationReference(DestinationReferenceT&& value) { m_destinationReferenceHasBeenSet = true; m_destinationReference = std::forward<DestinationReferenceT>(value); }
    template<typename DestinationReferenceT = Aws::String>
    Target& WithDestinationReference(DestinationReferenceT&& value) { SetDestinationReference(std::forward<DestinationReferenceT>(value)); return *this;}
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
