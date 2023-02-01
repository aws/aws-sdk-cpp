/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>The datastore activity that specifies where to store the processed
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatastoreActivity">AWS
   * API Reference</a></p>
   */
  class DatastoreActivity
  {
  public:
    AWS_IOTANALYTICS_API DatastoreActivity();
    AWS_IOTANALYTICS_API DatastoreActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatastoreActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the datastore activity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the datastore activity.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the datastore activity.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the datastore activity.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the datastore activity.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the datastore activity.</p>
     */
    inline DatastoreActivity& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the datastore activity.</p>
     */
    inline DatastoreActivity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the datastore activity.</p>
     */
    inline DatastoreActivity& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the data store where processed messages are stored.</p>
     */
    inline const Aws::String& GetDatastoreName() const{ return m_datastoreName; }

    /**
     * <p>The name of the data store where processed messages are stored.</p>
     */
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }

    /**
     * <p>The name of the data store where processed messages are stored.</p>
     */
    inline void SetDatastoreName(const Aws::String& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = value; }

    /**
     * <p>The name of the data store where processed messages are stored.</p>
     */
    inline void SetDatastoreName(Aws::String&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::move(value); }

    /**
     * <p>The name of the data store where processed messages are stored.</p>
     */
    inline void SetDatastoreName(const char* value) { m_datastoreNameHasBeenSet = true; m_datastoreName.assign(value); }

    /**
     * <p>The name of the data store where processed messages are stored.</p>
     */
    inline DatastoreActivity& WithDatastoreName(const Aws::String& value) { SetDatastoreName(value); return *this;}

    /**
     * <p>The name of the data store where processed messages are stored.</p>
     */
    inline DatastoreActivity& WithDatastoreName(Aws::String&& value) { SetDatastoreName(std::move(value)); return *this;}

    /**
     * <p>The name of the data store where processed messages are stored.</p>
     */
    inline DatastoreActivity& WithDatastoreName(const char* value) { SetDatastoreName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
