/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/DatastoreStatus.h>
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
namespace HealthLake
{
namespace Model
{

  /**
   * <p>The filters applied to a data store query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DatastoreFilter">AWS
   * API Reference</a></p>
   */
  class DatastoreFilter
  {
  public:
    AWS_HEALTHLAKE_API DatastoreFilter() = default;
    AWS_HEALTHLAKE_API DatastoreFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API DatastoreFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter data store results by name.</p>
     */
    inline const Aws::String& GetDatastoreName() const { return m_datastoreName; }
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }
    template<typename DatastoreNameT = Aws::String>
    void SetDatastoreName(DatastoreNameT&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::forward<DatastoreNameT>(value); }
    template<typename DatastoreNameT = Aws::String>
    DatastoreFilter& WithDatastoreName(DatastoreNameT&& value) { SetDatastoreName(std::forward<DatastoreNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter data store results by status.</p>
     */
    inline DatastoreStatus GetDatastoreStatus() const { return m_datastoreStatus; }
    inline bool DatastoreStatusHasBeenSet() const { return m_datastoreStatusHasBeenSet; }
    inline void SetDatastoreStatus(DatastoreStatus value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = value; }
    inline DatastoreFilter& WithDatastoreStatus(DatastoreStatus value) { SetDatastoreStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter to set cutoff dates for records. All data stores created before the
     * specified date are included in the results. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const { return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    void SetCreatedBefore(CreatedBeforeT&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::forward<CreatedBeforeT>(value); }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    DatastoreFilter& WithCreatedBefore(CreatedBeforeT&& value) { SetCreatedBefore(std::forward<CreatedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter to set cutoff dates for records. All data stores created after the
     * specified date are included in the results.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const { return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    void SetCreatedAfter(CreatedAfterT&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::forward<CreatedAfterT>(value); }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    DatastoreFilter& WithCreatedAfter(CreatedAfterT&& value) { SetCreatedAfter(std::forward<CreatedAfterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;

    DatastoreStatus m_datastoreStatus{DatastoreStatus::NOT_SET};
    bool m_datastoreStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore{};
    bool m_createdBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter{};
    bool m_createdAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
