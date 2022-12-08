/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rekognition/model/ProjectStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/DatasetMetadata.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>A description of an Amazon Rekognition Custom Labels project. For more
   * information, see <a>DescribeProjects</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ProjectDescription">AWS
   * API Reference</a></p>
   */
  class ProjectDescription
  {
  public:
    AWS_REKOGNITION_API ProjectDescription();
    AWS_REKOGNITION_API ProjectDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ProjectDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline ProjectDescription& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline ProjectDescription& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline ProjectDescription& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}


    /**
     * <p>The Unix timestamp for the date and time that the project was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The Unix timestamp for the date and time that the project was created.</p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The Unix timestamp for the date and time that the project was created.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The Unix timestamp for the date and time that the project was created.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The Unix timestamp for the date and time that the project was created.</p>
     */
    inline ProjectDescription& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The Unix timestamp for the date and time that the project was created.</p>
     */
    inline ProjectDescription& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The current status of the project.</p>
     */
    inline const ProjectStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the project.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the project.</p>
     */
    inline void SetStatus(const ProjectStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the project.</p>
     */
    inline void SetStatus(ProjectStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the project.</p>
     */
    inline ProjectDescription& WithStatus(const ProjectStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the project.</p>
     */
    inline ProjectDescription& WithStatus(ProjectStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> Information about the training and test datasets in the project. </p>
     */
    inline const Aws::Vector<DatasetMetadata>& GetDatasets() const{ return m_datasets; }

    /**
     * <p> Information about the training and test datasets in the project. </p>
     */
    inline bool DatasetsHasBeenSet() const { return m_datasetsHasBeenSet; }

    /**
     * <p> Information about the training and test datasets in the project. </p>
     */
    inline void SetDatasets(const Aws::Vector<DatasetMetadata>& value) { m_datasetsHasBeenSet = true; m_datasets = value; }

    /**
     * <p> Information about the training and test datasets in the project. </p>
     */
    inline void SetDatasets(Aws::Vector<DatasetMetadata>&& value) { m_datasetsHasBeenSet = true; m_datasets = std::move(value); }

    /**
     * <p> Information about the training and test datasets in the project. </p>
     */
    inline ProjectDescription& WithDatasets(const Aws::Vector<DatasetMetadata>& value) { SetDatasets(value); return *this;}

    /**
     * <p> Information about the training and test datasets in the project. </p>
     */
    inline ProjectDescription& WithDatasets(Aws::Vector<DatasetMetadata>&& value) { SetDatasets(std::move(value)); return *this;}

    /**
     * <p> Information about the training and test datasets in the project. </p>
     */
    inline ProjectDescription& AddDatasets(const DatasetMetadata& value) { m_datasetsHasBeenSet = true; m_datasets.push_back(value); return *this; }

    /**
     * <p> Information about the training and test datasets in the project. </p>
     */
    inline ProjectDescription& AddDatasets(DatasetMetadata&& value) { m_datasetsHasBeenSet = true; m_datasets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    ProjectStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<DatasetMetadata> m_datasets;
    bool m_datasetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
