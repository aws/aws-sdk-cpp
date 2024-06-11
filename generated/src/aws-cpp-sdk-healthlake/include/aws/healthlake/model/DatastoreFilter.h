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
   * <p>The filters applied to data store query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DatastoreFilter">AWS
   * API Reference</a></p>
   */
  class DatastoreFilter
  {
  public:
    AWS_HEALTHLAKE_API DatastoreFilter();
    AWS_HEALTHLAKE_API DatastoreFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API DatastoreFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows the user to filter data store results by name.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = value; }
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::move(value); }
    inline void SetDatastoreName(const char* value) { m_datastoreNameHasBeenSet = true; m_datastoreName.assign(value); }
    inline DatastoreFilter& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}
    inline DatastoreFilter& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}
    inline DatastoreFilter& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows the user to filter data store results by status.</p>
     */
    inline const DatastoreStatus& GetDatastoreStatus() const{ return m_datastoreStatus; }
    inline bool DatastoreStatusHasBeenSet() const { return m_datastoreStatusHasBeenSet; }
    inline void SetDatastoreStatus(const DatastoreStatus& value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = value; }
    inline void SetDatastoreStatus(DatastoreStatus&& value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = std::move(value); }
    inline DatastoreFilter& WithDatastoreStatus(const DatastoreStatus& value) { SetDatastoreStatus(value); return *this;}
    inline DatastoreFilter& WithDatastoreStatus(DatastoreStatus&& value) { SetDatastoreStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that allows the user to set cutoff dates for records. All data
     * stores created before the specified date will be included in the results. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }
    inline DatastoreFilter& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}
    inline DatastoreFilter& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that allows the user to set cutoff dates for records. All data
     * stores created after the specified date will be included in the results.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }
    inline DatastoreFilter& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}
    inline DatastoreFilter& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;

    DatastoreStatus m_datastoreStatus;
    bool m_datastoreStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
