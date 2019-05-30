/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/RetentionPeriod.h>
#include <aws/iotanalytics/model/DatastoreStorage.h>
#include <utility>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class AWS_IOTANALYTICS_API UpdateDatastoreRequest : public IoTAnalyticsRequest
  {
  public:
    UpdateDatastoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDatastore"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }

    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }

    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = value; }

    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::move(value); }

    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline void SetDatastoreName(const char* value) { m_datastoreNameHasBeenSet = true; m_datastoreName.assign(value); }

    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline UpdateDatastoreRequest& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}

    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline UpdateDatastoreRequest& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}

    /**
     * <p>The name of the data store to be updated.</p>
     */
    inline UpdateDatastoreRequest& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}


    /**
     * <p>How long, in days, message data is kept for the data store.</p>
     */
    inline const RetentionPeriod& GetRetentionPeriod() const{ return m_retentionPeriod; }

    /**
     * <p>How long, in days, message data is kept for the data store.</p>
     */
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }

    /**
     * <p>How long, in days, message data is kept for the data store.</p>
     */
    inline void SetRetentionPeriod(const RetentionPeriod& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }

    /**
     * <p>How long, in days, message data is kept for the data store.</p>
     */
    inline void SetRetentionPeriod(RetentionPeriod&& value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = std::move(value); }

    /**
     * <p>How long, in days, message data is kept for the data store.</p>
     */
    inline UpdateDatastoreRequest& WithRetentionPeriod(const RetentionPeriod& value) { SetRetentionPeriod(value); return *this;}

    /**
     * <p>How long, in days, message data is kept for the data store.</p>
     */
    inline UpdateDatastoreRequest& WithRetentionPeriod(RetentionPeriod&& value) { SetRetentionPeriod(std::move(value)); return *this;}


    /**
     * <p>Where data store data is stored.</p>
     */
    inline const DatastoreStorage& GetDatastoreStorage() const{ return m_datastoreStorage; }

    /**
     * <p>Where data store data is stored.</p>
     */
    inline bool DatastoreStorageHasBeenSet() const { return m_datastoreStorageHasBeenSet; }

    /**
     * <p>Where data store data is stored.</p>
     */
    inline void SetDatastoreStorage(const DatastoreStorage& value) { m_datastoreStorageHasBeenSet = true; m_datastoreStorage = value; }

    /**
     * <p>Where data store data is stored.</p>
     */
    inline void SetDatastoreStorage(DatastoreStorage&& value) { m_datastoreStorageHasBeenSet = true; m_datastoreStorage = std::move(value); }

    /**
     * <p>Where data store data is stored.</p>
     */
    inline UpdateDatastoreRequest& WithDatastoreStorage(const DatastoreStorage& value) { SetDatastoreStorage(value); return *this;}

    /**
     * <p>Where data store data is stored.</p>
     */
    inline UpdateDatastoreRequest& WithDatastoreStorage(DatastoreStorage&& value) { SetDatastoreStorage(std::move(value)); return *this;}

  private:

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet;

    RetentionPeriod m_retentionPeriod;
    bool m_retentionPeriodHasBeenSet;

    DatastoreStorage m_datastoreStorage;
    bool m_datastoreStorageHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
