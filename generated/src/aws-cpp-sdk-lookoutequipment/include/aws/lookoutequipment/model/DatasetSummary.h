/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/DatasetStatus.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p>Contains information about the specific data set, including name, ARN, and
   * status. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/DatasetSummary">AWS
   * API Reference</a></p>
   */
  class DatasetSummary
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DatasetSummary();
    AWS_LOOKOUTEQUIPMENT_API DatasetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API DatasetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dataset. </p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset. </p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the dataset. </p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset. </p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset. </p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset. </p>
     */
    inline DatasetSummary& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset. </p>
     */
    inline DatasetSummary& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset. </p>
     */
    inline DatasetSummary& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the specified dataset. </p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified dataset. </p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified dataset. </p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified dataset. </p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified dataset. </p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified dataset. </p>
     */
    inline DatasetSummary& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specified dataset. </p>
     */
    inline DatasetSummary& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specified dataset. </p>
     */
    inline DatasetSummary& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>Indicates the status of the dataset. </p>
     */
    inline const DatasetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of the dataset. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates the status of the dataset. </p>
     */
    inline void SetStatus(const DatasetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates the status of the dataset. </p>
     */
    inline void SetStatus(DatasetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates the status of the dataset. </p>
     */
    inline DatasetSummary& WithStatus(const DatasetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of the dataset. </p>
     */
    inline DatasetSummary& WithStatus(DatasetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the dataset was created in Amazon Lookout for Equipment.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the dataset was created in Amazon Lookout for Equipment.
     * </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the dataset was created in Amazon Lookout for Equipment.
     * </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the dataset was created in Amazon Lookout for Equipment.
     * </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the dataset was created in Amazon Lookout for Equipment.
     * </p>
     */
    inline DatasetSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the dataset was created in Amazon Lookout for Equipment.
     * </p>
     */
    inline DatasetSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    DatasetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
