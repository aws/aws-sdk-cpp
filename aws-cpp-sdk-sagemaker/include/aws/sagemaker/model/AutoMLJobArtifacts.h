/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The artifacts that are generated during an AutoML job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLJobArtifacts">AWS
   * API Reference</a></p>
   */
  class AutoMLJobArtifacts
  {
  public:
    AWS_SAGEMAKER_API AutoMLJobArtifacts();
    AWS_SAGEMAKER_API AutoMLJobArtifacts(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLJobArtifacts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of the notebook location.</p>
     */
    inline const Aws::String& GetCandidateDefinitionNotebookLocation() const{ return m_candidateDefinitionNotebookLocation; }

    /**
     * <p>The URL of the notebook location.</p>
     */
    inline bool CandidateDefinitionNotebookLocationHasBeenSet() const { return m_candidateDefinitionNotebookLocationHasBeenSet; }

    /**
     * <p>The URL of the notebook location.</p>
     */
    inline void SetCandidateDefinitionNotebookLocation(const Aws::String& value) { m_candidateDefinitionNotebookLocationHasBeenSet = true; m_candidateDefinitionNotebookLocation = value; }

    /**
     * <p>The URL of the notebook location.</p>
     */
    inline void SetCandidateDefinitionNotebookLocation(Aws::String&& value) { m_candidateDefinitionNotebookLocationHasBeenSet = true; m_candidateDefinitionNotebookLocation = std::move(value); }

    /**
     * <p>The URL of the notebook location.</p>
     */
    inline void SetCandidateDefinitionNotebookLocation(const char* value) { m_candidateDefinitionNotebookLocationHasBeenSet = true; m_candidateDefinitionNotebookLocation.assign(value); }

    /**
     * <p>The URL of the notebook location.</p>
     */
    inline AutoMLJobArtifacts& WithCandidateDefinitionNotebookLocation(const Aws::String& value) { SetCandidateDefinitionNotebookLocation(value); return *this;}

    /**
     * <p>The URL of the notebook location.</p>
     */
    inline AutoMLJobArtifacts& WithCandidateDefinitionNotebookLocation(Aws::String&& value) { SetCandidateDefinitionNotebookLocation(std::move(value)); return *this;}

    /**
     * <p>The URL of the notebook location.</p>
     */
    inline AutoMLJobArtifacts& WithCandidateDefinitionNotebookLocation(const char* value) { SetCandidateDefinitionNotebookLocation(value); return *this;}


    /**
     * <p>The URL of the notebook location.</p>
     */
    inline const Aws::String& GetDataExplorationNotebookLocation() const{ return m_dataExplorationNotebookLocation; }

    /**
     * <p>The URL of the notebook location.</p>
     */
    inline bool DataExplorationNotebookLocationHasBeenSet() const { return m_dataExplorationNotebookLocationHasBeenSet; }

    /**
     * <p>The URL of the notebook location.</p>
     */
    inline void SetDataExplorationNotebookLocation(const Aws::String& value) { m_dataExplorationNotebookLocationHasBeenSet = true; m_dataExplorationNotebookLocation = value; }

    /**
     * <p>The URL of the notebook location.</p>
     */
    inline void SetDataExplorationNotebookLocation(Aws::String&& value) { m_dataExplorationNotebookLocationHasBeenSet = true; m_dataExplorationNotebookLocation = std::move(value); }

    /**
     * <p>The URL of the notebook location.</p>
     */
    inline void SetDataExplorationNotebookLocation(const char* value) { m_dataExplorationNotebookLocationHasBeenSet = true; m_dataExplorationNotebookLocation.assign(value); }

    /**
     * <p>The URL of the notebook location.</p>
     */
    inline AutoMLJobArtifacts& WithDataExplorationNotebookLocation(const Aws::String& value) { SetDataExplorationNotebookLocation(value); return *this;}

    /**
     * <p>The URL of the notebook location.</p>
     */
    inline AutoMLJobArtifacts& WithDataExplorationNotebookLocation(Aws::String&& value) { SetDataExplorationNotebookLocation(std::move(value)); return *this;}

    /**
     * <p>The URL of the notebook location.</p>
     */
    inline AutoMLJobArtifacts& WithDataExplorationNotebookLocation(const char* value) { SetDataExplorationNotebookLocation(value); return *this;}

  private:

    Aws::String m_candidateDefinitionNotebookLocation;
    bool m_candidateDefinitionNotebookLocationHasBeenSet = false;

    Aws::String m_dataExplorationNotebookLocation;
    bool m_dataExplorationNotebookLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
