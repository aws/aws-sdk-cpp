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
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
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
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p> The commit diff for the pull request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/CommitDiffSourceCodeType">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUREVIEWER_API CommitDiffSourceCodeType
  {
  public:
    CommitDiffSourceCodeType();
    CommitDiffSourceCodeType(Aws::Utils::Json::JsonView jsonValue);
    CommitDiffSourceCodeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Source Commit SHA. </p>
     */
    inline const Aws::String& GetSourceCommit() const{ return m_sourceCommit; }

    /**
     * <p> Source Commit SHA. </p>
     */
    inline bool SourceCommitHasBeenSet() const { return m_sourceCommitHasBeenSet; }

    /**
     * <p> Source Commit SHA. </p>
     */
    inline void SetSourceCommit(const Aws::String& value) { m_sourceCommitHasBeenSet = true; m_sourceCommit = value; }

    /**
     * <p> Source Commit SHA. </p>
     */
    inline void SetSourceCommit(Aws::String&& value) { m_sourceCommitHasBeenSet = true; m_sourceCommit = std::move(value); }

    /**
     * <p> Source Commit SHA. </p>
     */
    inline void SetSourceCommit(const char* value) { m_sourceCommitHasBeenSet = true; m_sourceCommit.assign(value); }

    /**
     * <p> Source Commit SHA. </p>
     */
    inline CommitDiffSourceCodeType& WithSourceCommit(const Aws::String& value) { SetSourceCommit(value); return *this;}

    /**
     * <p> Source Commit SHA. </p>
     */
    inline CommitDiffSourceCodeType& WithSourceCommit(Aws::String&& value) { SetSourceCommit(std::move(value)); return *this;}

    /**
     * <p> Source Commit SHA. </p>
     */
    inline CommitDiffSourceCodeType& WithSourceCommit(const char* value) { SetSourceCommit(value); return *this;}


    /**
     * <p> Destination Commit SHA </p>
     */
    inline const Aws::String& GetDestinationCommit() const{ return m_destinationCommit; }

    /**
     * <p> Destination Commit SHA </p>
     */
    inline bool DestinationCommitHasBeenSet() const { return m_destinationCommitHasBeenSet; }

    /**
     * <p> Destination Commit SHA </p>
     */
    inline void SetDestinationCommit(const Aws::String& value) { m_destinationCommitHasBeenSet = true; m_destinationCommit = value; }

    /**
     * <p> Destination Commit SHA </p>
     */
    inline void SetDestinationCommit(Aws::String&& value) { m_destinationCommitHasBeenSet = true; m_destinationCommit = std::move(value); }

    /**
     * <p> Destination Commit SHA </p>
     */
    inline void SetDestinationCommit(const char* value) { m_destinationCommitHasBeenSet = true; m_destinationCommit.assign(value); }

    /**
     * <p> Destination Commit SHA </p>
     */
    inline CommitDiffSourceCodeType& WithDestinationCommit(const Aws::String& value) { SetDestinationCommit(value); return *this;}

    /**
     * <p> Destination Commit SHA </p>
     */
    inline CommitDiffSourceCodeType& WithDestinationCommit(Aws::String&& value) { SetDestinationCommit(std::move(value)); return *this;}

    /**
     * <p> Destination Commit SHA </p>
     */
    inline CommitDiffSourceCodeType& WithDestinationCommit(const char* value) { SetDestinationCommit(value); return *this;}

  private:

    Aws::String m_sourceCommit;
    bool m_sourceCommitHasBeenSet;

    Aws::String m_destinationCommit;
    bool m_destinationCommitHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
