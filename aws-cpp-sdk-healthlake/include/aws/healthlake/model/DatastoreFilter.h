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
   * <p>The filters applied to Data Store query.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>Allows the user to filter Data Store results by name.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }

    /**
     * <p>Allows the user to filter Data Store results by name.</p>
     */
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }

    /**
     * <p>Allows the user to filter Data Store results by name.</p>
     */
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = value; }

    /**
     * <p>Allows the user to filter Data Store results by name.</p>
     */
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::move(value); }

    /**
     * <p>Allows the user to filter Data Store results by name.</p>
     */
    inline void SetDatastoreName(const char* value) { m_datastoreNameHasBeenSet = true; m_datastoreName.assign(value); }

    /**
     * <p>Allows the user to filter Data Store results by name.</p>
     */
    inline DatastoreFilter& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}

    /**
     * <p>Allows the user to filter Data Store results by name.</p>
     */
    inline DatastoreFilter& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}

    /**
     * <p>Allows the user to filter Data Store results by name.</p>
     */
    inline DatastoreFilter& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}


    /**
     * <p>Allows the user to filter Data Store results by status.</p>
     */
    inline const DatastoreStatus& GetDatastoreStatus() const{ return m_datastoreStatus; }

    /**
     * <p>Allows the user to filter Data Store results by status.</p>
     */
    inline bool DatastoreStatusHasBeenSet() const { return m_datastoreStatusHasBeenSet; }

    /**
     * <p>Allows the user to filter Data Store results by status.</p>
     */
    inline void SetDatastoreStatus(const DatastoreStatus& value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = value; }

    /**
     * <p>Allows the user to filter Data Store results by status.</p>
     */
    inline void SetDatastoreStatus(DatastoreStatus&& value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = std::move(value); }

    /**
     * <p>Allows the user to filter Data Store results by status.</p>
     */
    inline DatastoreFilter& WithDatastoreStatus(const DatastoreStatus& value) { SetDatastoreStatus(value); return *this;}

    /**
     * <p>Allows the user to filter Data Store results by status.</p>
     */
    inline DatastoreFilter& WithDatastoreStatus(DatastoreStatus&& value) { SetDatastoreStatus(std::move(value)); return *this;}


    /**
     * <p>A filter that allows the user to set cutoff dates for records. All Data
     * Stores created before the specified date will be included in the results. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>A filter that allows the user to set cutoff dates for records. All Data
     * Stores created before the specified date will be included in the results. </p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>A filter that allows the user to set cutoff dates for records. All Data
     * Stores created before the specified date will be included in the results. </p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>A filter that allows the user to set cutoff dates for records. All Data
     * Stores created before the specified date will be included in the results. </p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>A filter that allows the user to set cutoff dates for records. All Data
     * Stores created before the specified date will be included in the results. </p>
     */
    inline DatastoreFilter& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>A filter that allows the user to set cutoff dates for records. All Data
     * Stores created before the specified date will be included in the results. </p>
     */
    inline DatastoreFilter& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>A filter that allows the user to set cutoff dates for records. All Data
     * Stores created after the specified date will be included in the results.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>A filter that allows the user to set cutoff dates for records. All Data
     * Stores created after the specified date will be included in the results.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>A filter that allows the user to set cutoff dates for records. All Data
     * Stores created after the specified date will be included in the results.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>A filter that allows the user to set cutoff dates for records. All Data
     * Stores created after the specified date will be included in the results.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>A filter that allows the user to set cutoff dates for records. All Data
     * Stores created after the specified date will be included in the results.</p>
     */
    inline DatastoreFilter& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>A filter that allows the user to set cutoff dates for records. All Data
     * Stores created after the specified date will be included in the results.</p>
     */
    inline DatastoreFilter& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}

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
