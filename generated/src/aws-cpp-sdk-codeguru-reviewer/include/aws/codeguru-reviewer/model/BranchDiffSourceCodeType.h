/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A type of <a
   * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
   * that specifies a code diff between a source and destination branch in an
   * associated repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/BranchDiffSourceCodeType">AWS
   * API Reference</a></p>
   */
  class BranchDiffSourceCodeType
  {
  public:
    AWS_CODEGURUREVIEWER_API BranchDiffSourceCodeType() = default;
    AWS_CODEGURUREVIEWER_API BranchDiffSourceCodeType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API BranchDiffSourceCodeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source branch for a diff in an associated repository.</p>
     */
    inline const Aws::String& GetSourceBranchName() const { return m_sourceBranchName; }
    inline bool SourceBranchNameHasBeenSet() const { return m_sourceBranchNameHasBeenSet; }
    template<typename SourceBranchNameT = Aws::String>
    void SetSourceBranchName(SourceBranchNameT&& value) { m_sourceBranchNameHasBeenSet = true; m_sourceBranchName = std::forward<SourceBranchNameT>(value); }
    template<typename SourceBranchNameT = Aws::String>
    BranchDiffSourceCodeType& WithSourceBranchName(SourceBranchNameT&& value) { SetSourceBranchName(std::forward<SourceBranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination branch for a diff in an associated repository.</p>
     */
    inline const Aws::String& GetDestinationBranchName() const { return m_destinationBranchName; }
    inline bool DestinationBranchNameHasBeenSet() const { return m_destinationBranchNameHasBeenSet; }
    template<typename DestinationBranchNameT = Aws::String>
    void SetDestinationBranchName(DestinationBranchNameT&& value) { m_destinationBranchNameHasBeenSet = true; m_destinationBranchName = std::forward<DestinationBranchNameT>(value); }
    template<typename DestinationBranchNameT = Aws::String>
    BranchDiffSourceCodeType& WithDestinationBranchName(DestinationBranchNameT&& value) { SetDestinationBranchName(std::forward<DestinationBranchNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceBranchName;
    bool m_sourceBranchNameHasBeenSet = false;

    Aws::String m_destinationBranchName;
    bool m_destinationBranchNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
