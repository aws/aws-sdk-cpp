/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CandidateArtifactLocations.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The properties of an AutoML candidate job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CandidateProperties">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API CandidateProperties
  {
  public:
    CandidateProperties();
    CandidateProperties(Aws::Utils::Json::JsonView jsonValue);
    CandidateProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 prefix to the artifacts generated for an AutoML candidate.</p>
     */
    inline const CandidateArtifactLocations& GetCandidateArtifactLocations() const{ return m_candidateArtifactLocations; }

    /**
     * <p>The S3 prefix to the artifacts generated for an AutoML candidate.</p>
     */
    inline bool CandidateArtifactLocationsHasBeenSet() const { return m_candidateArtifactLocationsHasBeenSet; }

    /**
     * <p>The S3 prefix to the artifacts generated for an AutoML candidate.</p>
     */
    inline void SetCandidateArtifactLocations(const CandidateArtifactLocations& value) { m_candidateArtifactLocationsHasBeenSet = true; m_candidateArtifactLocations = value; }

    /**
     * <p>The S3 prefix to the artifacts generated for an AutoML candidate.</p>
     */
    inline void SetCandidateArtifactLocations(CandidateArtifactLocations&& value) { m_candidateArtifactLocationsHasBeenSet = true; m_candidateArtifactLocations = std::move(value); }

    /**
     * <p>The S3 prefix to the artifacts generated for an AutoML candidate.</p>
     */
    inline CandidateProperties& WithCandidateArtifactLocations(const CandidateArtifactLocations& value) { SetCandidateArtifactLocations(value); return *this;}

    /**
     * <p>The S3 prefix to the artifacts generated for an AutoML candidate.</p>
     */
    inline CandidateProperties& WithCandidateArtifactLocations(CandidateArtifactLocations&& value) { SetCandidateArtifactLocations(std::move(value)); return *this;}

  private:

    CandidateArtifactLocations m_candidateArtifactLocations;
    bool m_candidateArtifactLocationsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
