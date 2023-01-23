/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Provides a summary of the dataset group properties used in the <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/API_ListDatasetGroups.html">ListDatasetGroups</a>
   * operation. To get the complete set of properties, call the <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDatasetGroup.html">DescribeDatasetGroup</a>
   * operation, and provide the <code>DatasetGroupArn</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DatasetGroupSummary">AWS
   * API Reference</a></p>
   */
  class DatasetGroupSummary
  {
  public:
    AWS_FORECASTSERVICE_API DatasetGroupSummary();
    AWS_FORECASTSERVICE_API DatasetGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API DatasetGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline DatasetGroupSummary& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline DatasetGroupSummary& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group.</p>
     */
    inline DatasetGroupSummary& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>The name of the dataset group.</p>
     */
    inline const Aws::String& GetDatasetGroupName() const{ return m_datasetGroupName; }

    /**
     * <p>The name of the dataset group.</p>
     */
    inline bool DatasetGroupNameHasBeenSet() const { return m_datasetGroupNameHasBeenSet; }

    /**
     * <p>The name of the dataset group.</p>
     */
    inline void SetDatasetGroupName(const Aws::String& value) { m_datasetGroupNameHasBeenSet = true; m_datasetGroupName = value; }

    /**
     * <p>The name of the dataset group.</p>
     */
    inline void SetDatasetGroupName(Aws::String&& value) { m_datasetGroupNameHasBeenSet = true; m_datasetGroupName = std::move(value); }

    /**
     * <p>The name of the dataset group.</p>
     */
    inline void SetDatasetGroupName(const char* value) { m_datasetGroupNameHasBeenSet = true; m_datasetGroupName.assign(value); }

    /**
     * <p>The name of the dataset group.</p>
     */
    inline DatasetGroupSummary& WithDatasetGroupName(const Aws::String& value) { SetDatasetGroupName(value); return *this;}

    /**
     * <p>The name of the dataset group.</p>
     */
    inline DatasetGroupSummary& WithDatasetGroupName(Aws::String&& value) { SetDatasetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset group.</p>
     */
    inline DatasetGroupSummary& WithDatasetGroupName(const char* value) { SetDatasetGroupName(value); return *this;}


    /**
     * <p>When the dataset group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the dataset group was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the dataset group was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the dataset group was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the dataset group was created.</p>
     */
    inline DatasetGroupSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the dataset group was created.</p>
     */
    inline DatasetGroupSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>When the dataset group was created or last updated from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
     * operation. While the dataset group is being updated,
     * <code>LastModificationTime</code> is the current time of the
     * <code>ListDatasetGroups</code> call.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>When the dataset group was created or last updated from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
     * operation. While the dataset group is being updated,
     * <code>LastModificationTime</code> is the current time of the
     * <code>ListDatasetGroups</code> call.</p>
     */
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }

    /**
     * <p>When the dataset group was created or last updated from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
     * operation. While the dataset group is being updated,
     * <code>LastModificationTime</code> is the current time of the
     * <code>ListDatasetGroups</code> call.</p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }

    /**
     * <p>When the dataset group was created or last updated from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
     * operation. While the dataset group is being updated,
     * <code>LastModificationTime</code> is the current time of the
     * <code>ListDatasetGroups</code> call.</p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }

    /**
     * <p>When the dataset group was created or last updated from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
     * operation. While the dataset group is being updated,
     * <code>LastModificationTime</code> is the current time of the
     * <code>ListDatasetGroups</code> call.</p>
     */
    inline DatasetGroupSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>When the dataset group was created or last updated from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_UpdateDatasetGroup.html">UpdateDatasetGroup</a>
     * operation. While the dataset group is being updated,
     * <code>LastModificationTime</code> is the current time of the
     * <code>ListDatasetGroups</code> call.</p>
     */
    inline DatasetGroupSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet = false;

    Aws::String m_datasetGroupName;
    bool m_datasetGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime;
    bool m_lastModificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
