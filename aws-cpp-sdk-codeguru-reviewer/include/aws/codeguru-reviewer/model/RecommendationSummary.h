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
   * <p> Information about recommendations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/RecommendationSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUREVIEWER_API RecommendationSummary
  {
  public:
    RecommendationSummary();
    RecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
    RecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the file on which a recommendation is provided.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>Name of the file on which a recommendation is provided.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>Name of the file on which a recommendation is provided.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>Name of the file on which a recommendation is provided.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>Name of the file on which a recommendation is provided.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>Name of the file on which a recommendation is provided.</p>
     */
    inline RecommendationSummary& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>Name of the file on which a recommendation is provided.</p>
     */
    inline RecommendationSummary& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>Name of the file on which a recommendation is provided.</p>
     */
    inline RecommendationSummary& WithFilePath(const char* value) { SetFilePath(value); return *this;}


    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }

    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }

    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }

    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }

    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline RecommendationSummary& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline RecommendationSummary& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline RecommendationSummary& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    /**
     * <p> Start line from where the recommendation is applicable in the source commit
     * or source branch. </p>
     */
    inline int GetStartLine() const{ return m_startLine; }

    /**
     * <p> Start line from where the recommendation is applicable in the source commit
     * or source branch. </p>
     */
    inline bool StartLineHasBeenSet() const { return m_startLineHasBeenSet; }

    /**
     * <p> Start line from where the recommendation is applicable in the source commit
     * or source branch. </p>
     */
    inline void SetStartLine(int value) { m_startLineHasBeenSet = true; m_startLine = value; }

    /**
     * <p> Start line from where the recommendation is applicable in the source commit
     * or source branch. </p>
     */
    inline RecommendationSummary& WithStartLine(int value) { SetStartLine(value); return *this;}


    /**
     * <p> Last line where the recommendation is applicable in the source commit or
     * source branch. For a single line comment the start line and end line values are
     * the same. </p>
     */
    inline int GetEndLine() const{ return m_endLine; }

    /**
     * <p> Last line where the recommendation is applicable in the source commit or
     * source branch. For a single line comment the start line and end line values are
     * the same. </p>
     */
    inline bool EndLineHasBeenSet() const { return m_endLineHasBeenSet; }

    /**
     * <p> Last line where the recommendation is applicable in the source commit or
     * source branch. For a single line comment the start line and end line values are
     * the same. </p>
     */
    inline void SetEndLine(int value) { m_endLineHasBeenSet = true; m_endLine = value; }

    /**
     * <p> Last line where the recommendation is applicable in the source commit or
     * source branch. For a single line comment the start line and end line values are
     * the same. </p>
     */
    inline RecommendationSummary& WithEndLine(int value) { SetEndLine(value); return *this;}


    /**
     * <p> A description of the recommendation generated by CodeGuru Reviewer for the
     * lines of code between the start line and the end line. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A description of the recommendation generated by CodeGuru Reviewer for the
     * lines of code between the start line and the end line. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A description of the recommendation generated by CodeGuru Reviewer for the
     * lines of code between the start line and the end line. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A description of the recommendation generated by CodeGuru Reviewer for the
     * lines of code between the start line and the end line. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A description of the recommendation generated by CodeGuru Reviewer for the
     * lines of code between the start line and the end line. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A description of the recommendation generated by CodeGuru Reviewer for the
     * lines of code between the start line and the end line. </p>
     */
    inline RecommendationSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description of the recommendation generated by CodeGuru Reviewer for the
     * lines of code between the start line and the end line. </p>
     */
    inline RecommendationSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description of the recommendation generated by CodeGuru Reviewer for the
     * lines of code between the start line and the end line. </p>
     */
    inline RecommendationSummary& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet;

    int m_startLine;
    bool m_startLineHasBeenSet;

    int m_endLine;
    bool m_endLineHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
