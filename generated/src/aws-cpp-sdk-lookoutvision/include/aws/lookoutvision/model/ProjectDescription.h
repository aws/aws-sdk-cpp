/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutvision/model/DatasetMetadata.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>Describe an Amazon Lookout for Vision project. For more information, see
   * <a>DescribeProject</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ProjectDescription">AWS
   * API Reference</a></p>
   */
  class ProjectDescription
  {
  public:
    AWS_LOOKOUTFORVISION_API ProjectDescription();
    AWS_LOOKOUTFORVISION_API ProjectDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API ProjectDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project.</p>
     */
    inline ProjectDescription& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline ProjectDescription& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project.</p>
     */
    inline ProjectDescription& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The unix timestamp for the date and time that the project was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The unix timestamp for the date and time that the project was created. </p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The unix timestamp for the date and time that the project was created. </p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The unix timestamp for the date and time that the project was created. </p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The unix timestamp for the date and time that the project was created. </p>
     */
    inline ProjectDescription& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The unix timestamp for the date and time that the project was created. </p>
     */
    inline ProjectDescription& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>A list of datasets in the project.</p>
     */
    inline const Aws::Vector<DatasetMetadata>& GetDatasets() const{ return m_datasets; }

    /**
     * <p>A list of datasets in the project.</p>
     */
    inline bool DatasetsHasBeenSet() const { return m_datasetsHasBeenSet; }

    /**
     * <p>A list of datasets in the project.</p>
     */
    inline void SetDatasets(const Aws::Vector<DatasetMetadata>& value) { m_datasetsHasBeenSet = true; m_datasets = value; }

    /**
     * <p>A list of datasets in the project.</p>
     */
    inline void SetDatasets(Aws::Vector<DatasetMetadata>&& value) { m_datasetsHasBeenSet = true; m_datasets = std::move(value); }

    /**
     * <p>A list of datasets in the project.</p>
     */
    inline ProjectDescription& WithDatasets(const Aws::Vector<DatasetMetadata>& value) { SetDatasets(value); return *this;}

    /**
     * <p>A list of datasets in the project.</p>
     */
    inline ProjectDescription& WithDatasets(Aws::Vector<DatasetMetadata>&& value) { SetDatasets(std::move(value)); return *this;}

    /**
     * <p>A list of datasets in the project.</p>
     */
    inline ProjectDescription& AddDatasets(const DatasetMetadata& value) { m_datasetsHasBeenSet = true; m_datasets.push_back(value); return *this; }

    /**
     * <p>A list of datasets in the project.</p>
     */
    inline ProjectDescription& AddDatasets(DatasetMetadata&& value) { m_datasetsHasBeenSet = true; m_datasets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::Vector<DatasetMetadata> m_datasets;
    bool m_datasetsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
