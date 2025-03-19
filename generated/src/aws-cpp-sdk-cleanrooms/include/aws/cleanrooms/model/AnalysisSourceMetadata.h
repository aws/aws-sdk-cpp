/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisTemplateArtifactMetadata.h>
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
   * <p>The analysis source metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisSourceMetadata">AWS
   * API Reference</a></p>
   */
  class AnalysisSourceMetadata
  {
  public:
    AWS_CLEANROOMS_API AnalysisSourceMetadata() = default;
    AWS_CLEANROOMS_API AnalysisSourceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisSourceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The artifacts of the analysis source metadata.</p>
     */
    inline const AnalysisTemplateArtifactMetadata& GetArtifacts() const { return m_artifacts; }
    inline bool ArtifactsHasBeenSet() const { return m_artifactsHasBeenSet; }
    template<typename ArtifactsT = AnalysisTemplateArtifactMetadata>
    void SetArtifacts(ArtifactsT&& value) { m_artifactsHasBeenSet = true; m_artifacts = std::forward<ArtifactsT>(value); }
    template<typename ArtifactsT = AnalysisTemplateArtifactMetadata>
    AnalysisSourceMetadata& WithArtifacts(ArtifactsT&& value) { SetArtifacts(std::forward<ArtifactsT>(value)); return *this;}
    ///@}
  private:

    AnalysisTemplateArtifactMetadata m_artifacts;
    bool m_artifactsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
