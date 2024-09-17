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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }
    inline ProjectDescription& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline ProjectDescription& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline ProjectDescription& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline ProjectDescription& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline ProjectDescription& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline ProjectDescription& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unix timestamp for the date and time that the project was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }
    inline ProjectDescription& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline ProjectDescription& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of datasets in the project.</p>
     */
    inline const Aws::Vector<DatasetMetadata>& GetDatasets() const{ return m_datasets; }
    inline bool DatasetsHasBeenSet() const { return m_datasetsHasBeenSet; }
    inline void SetDatasets(const Aws::Vector<DatasetMetadata>& value) { m_datasetsHasBeenSet = true; m_datasets = value; }
    inline void SetDatasets(Aws::Vector<DatasetMetadata>&& value) { m_datasetsHasBeenSet = true; m_datasets = std::move(value); }
    inline ProjectDescription& WithDatasets(const Aws::Vector<DatasetMetadata>& value) { SetDatasets(value); return *this;}
    inline ProjectDescription& WithDatasets(Aws::Vector<DatasetMetadata>&& value) { SetDatasets(std::move(value)); return *this;}
    inline ProjectDescription& AddDatasets(const DatasetMetadata& value) { m_datasetsHasBeenSet = true; m_datasets.push_back(value); return *this; }
    inline ProjectDescription& AddDatasets(DatasetMetadata&& value) { m_datasetsHasBeenSet = true; m_datasets.push_back(std::move(value)); return *this; }
    ///@}
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
