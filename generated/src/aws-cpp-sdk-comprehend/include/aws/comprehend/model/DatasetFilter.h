/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/DatasetStatus.h>
#include <aws/comprehend/model/DatasetType.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Filter the datasets based on creation time or dataset status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DatasetFilter">AWS
   * API Reference</a></p>
   */
  class DatasetFilter
  {
  public:
    AWS_COMPREHEND_API DatasetFilter() = default;
    AWS_COMPREHEND_API DatasetFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DatasetFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter the datasets based on the dataset status.</p>
     */
    inline DatasetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DatasetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DatasetFilter& WithStatus(DatasetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the datasets based on the dataset type.</p>
     */
    inline DatasetType GetDatasetType() const { return m_datasetType; }
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }
    inline void SetDatasetType(DatasetType value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }
    inline DatasetFilter& WithDatasetType(DatasetType value) { SetDatasetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the datasets to include datasets created after the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const { return m_creationTimeAfter; }
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    void SetCreationTimeAfter(CreationTimeAfterT&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::forward<CreationTimeAfterT>(value); }
    template<typename CreationTimeAfterT = Aws::Utils::DateTime>
    DatasetFilter& WithCreationTimeAfter(CreationTimeAfterT&& value) { SetCreationTimeAfter(std::forward<CreationTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the datasets to include datasets created before the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const { return m_creationTimeBefore; }
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    void SetCreationTimeBefore(CreationTimeBeforeT&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::forward<CreationTimeBeforeT>(value); }
    template<typename CreationTimeBeforeT = Aws::Utils::DateTime>
    DatasetFilter& WithCreationTimeBefore(CreationTimeBeforeT&& value) { SetCreationTimeBefore(std::forward<CreationTimeBeforeT>(value)); return *this;}
    ///@}
  private:

    DatasetStatus m_status{DatasetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    DatasetType m_datasetType{DatasetType::NOT_SET};
    bool m_datasetTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter{};
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore{};
    bool m_creationTimeBeforeHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
