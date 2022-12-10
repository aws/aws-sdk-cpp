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
    AWS_CODEGURUREVIEWER_API BranchDiffSourceCodeType();
    AWS_CODEGURUREVIEWER_API BranchDiffSourceCodeType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API BranchDiffSourceCodeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source branch for a diff in an associated repository.</p>
     */
    inline const Aws::String& GetSourceBranchName() const{ return m_sourceBranchName; }

    /**
     * <p>The source branch for a diff in an associated repository.</p>
     */
    inline bool SourceBranchNameHasBeenSet() const { return m_sourceBranchNameHasBeenSet; }

    /**
     * <p>The source branch for a diff in an associated repository.</p>
     */
    inline void SetSourceBranchName(const Aws::String& value) { m_sourceBranchNameHasBeenSet = true; m_sourceBranchName = value; }

    /**
     * <p>The source branch for a diff in an associated repository.</p>
     */
    inline void SetSourceBranchName(Aws::String&& value) { m_sourceBranchNameHasBeenSet = true; m_sourceBranchName = std::move(value); }

    /**
     * <p>The source branch for a diff in an associated repository.</p>
     */
    inline void SetSourceBranchName(const char* value) { m_sourceBranchNameHasBeenSet = true; m_sourceBranchName.assign(value); }

    /**
     * <p>The source branch for a diff in an associated repository.</p>
     */
    inline BranchDiffSourceCodeType& WithSourceBranchName(const Aws::String& value) { SetSourceBranchName(value); return *this;}

    /**
     * <p>The source branch for a diff in an associated repository.</p>
     */
    inline BranchDiffSourceCodeType& WithSourceBranchName(Aws::String&& value) { SetSourceBranchName(std::move(value)); return *this;}

    /**
     * <p>The source branch for a diff in an associated repository.</p>
     */
    inline BranchDiffSourceCodeType& WithSourceBranchName(const char* value) { SetSourceBranchName(value); return *this;}


    /**
     * <p>The destination branch for a diff in an associated repository.</p>
     */
    inline const Aws::String& GetDestinationBranchName() const{ return m_destinationBranchName; }

    /**
     * <p>The destination branch for a diff in an associated repository.</p>
     */
    inline bool DestinationBranchNameHasBeenSet() const { return m_destinationBranchNameHasBeenSet; }

    /**
     * <p>The destination branch for a diff in an associated repository.</p>
     */
    inline void SetDestinationBranchName(const Aws::String& value) { m_destinationBranchNameHasBeenSet = true; m_destinationBranchName = value; }

    /**
     * <p>The destination branch for a diff in an associated repository.</p>
     */
    inline void SetDestinationBranchName(Aws::String&& value) { m_destinationBranchNameHasBeenSet = true; m_destinationBranchName = std::move(value); }

    /**
     * <p>The destination branch for a diff in an associated repository.</p>
     */
    inline void SetDestinationBranchName(const char* value) { m_destinationBranchNameHasBeenSet = true; m_destinationBranchName.assign(value); }

    /**
     * <p>The destination branch for a diff in an associated repository.</p>
     */
    inline BranchDiffSourceCodeType& WithDestinationBranchName(const Aws::String& value) { SetDestinationBranchName(value); return *this;}

    /**
     * <p>The destination branch for a diff in an associated repository.</p>
     */
    inline BranchDiffSourceCodeType& WithDestinationBranchName(Aws::String&& value) { SetDestinationBranchName(std::move(value)); return *this;}

    /**
     * <p>The destination branch for a diff in an associated repository.</p>
     */
    inline BranchDiffSourceCodeType& WithDestinationBranchName(const char* value) { SetDestinationBranchName(value); return *this;}

  private:

    Aws::String m_sourceBranchName;
    bool m_sourceBranchNameHasBeenSet = false;

    Aws::String m_destinationBranchName;
    bool m_destinationBranchNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
