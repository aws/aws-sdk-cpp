/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/AnalysisTemplateArtifacts.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The structure that defines the body of the analysis template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisSource">AWS
   * API Reference</a></p>
   */
  class AnalysisSource
  {
  public:
    AWS_CLEANROOMS_API AnalysisSource();
    AWS_CLEANROOMS_API AnalysisSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The query text.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline AnalysisSource& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline AnalysisSource& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline AnalysisSource& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The artifacts of the analysis source.</p>
     */
    inline const AnalysisTemplateArtifacts& GetArtifacts() const{ return m_artifacts; }
    inline bool ArtifactsHasBeenSet() const { return m_artifactsHasBeenSet; }
    inline void SetArtifacts(const AnalysisTemplateArtifacts& value) { m_artifactsHasBeenSet = true; m_artifacts = value; }
    inline void SetArtifacts(AnalysisTemplateArtifacts&& value) { m_artifactsHasBeenSet = true; m_artifacts = std::move(value); }
    inline AnalysisSource& WithArtifacts(const AnalysisTemplateArtifacts& value) { SetArtifacts(value); return *this;}
    inline AnalysisSource& WithArtifacts(AnalysisTemplateArtifacts&& value) { SetArtifacts(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    AnalysisTemplateArtifacts m_artifacts;
    bool m_artifactsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
