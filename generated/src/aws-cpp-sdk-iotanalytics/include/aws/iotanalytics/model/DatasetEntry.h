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
   * <p>The reference to a dataset entry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetEntry">AWS
   * API Reference</a></p>
   */
  class DatasetEntry
  {
  public:
    AWS_IOTANALYTICS_API DatasetEntry();
    AWS_IOTANALYTICS_API DatasetEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatasetEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dataset item.</p>
     */
    inline const Aws::String& GetEntryName() const{ return m_entryName; }

    /**
     * <p>The name of the dataset item.</p>
     */
    inline bool EntryNameHasBeenSet() const { return m_entryNameHasBeenSet; }

    /**
     * <p>The name of the dataset item.</p>
     */
    inline void SetEntryName(const Aws::String& value) { m_entryNameHasBeenSet = true; m_entryName = value; }

    /**
     * <p>The name of the dataset item.</p>
     */
    inline void SetEntryName(Aws::String&& value) { m_entryNameHasBeenSet = true; m_entryName = std::move(value); }

    /**
     * <p>The name of the dataset item.</p>
     */
    inline void SetEntryName(const char* value) { m_entryNameHasBeenSet = true; m_entryName.assign(value); }

    /**
     * <p>The name of the dataset item.</p>
     */
    inline DatasetEntry& WithEntryName(const Aws::String& value) { SetEntryName(value); return *this;}

    /**
     * <p>The name of the dataset item.</p>
     */
    inline DatasetEntry& WithEntryName(Aws::String&& value) { SetEntryName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset item.</p>
     */
    inline DatasetEntry& WithEntryName(const char* value) { SetEntryName(value); return *this;}


    /**
     * <p>The presigned URI of the dataset item.</p>
     */
    inline const Aws::String& GetDataURI() const{ return m_dataURI; }

    /**
     * <p>The presigned URI of the dataset item.</p>
     */
    inline bool DataURIHasBeenSet() const { return m_dataURIHasBeenSet; }

    /**
     * <p>The presigned URI of the dataset item.</p>
     */
    inline void SetDataURI(const Aws::String& value) { m_dataURIHasBeenSet = true; m_dataURI = value; }

    /**
     * <p>The presigned URI of the dataset item.</p>
     */
    inline void SetDataURI(Aws::String&& value) { m_dataURIHasBeenSet = true; m_dataURI = std::move(value); }

    /**
     * <p>The presigned URI of the dataset item.</p>
     */
    inline void SetDataURI(const char* value) { m_dataURIHasBeenSet = true; m_dataURI.assign(value); }

    /**
     * <p>The presigned URI of the dataset item.</p>
     */
    inline DatasetEntry& WithDataURI(const Aws::String& value) { SetDataURI(value); return *this;}

    /**
     * <p>The presigned URI of the dataset item.</p>
     */
    inline DatasetEntry& WithDataURI(Aws::String&& value) { SetDataURI(std::move(value)); return *this;}

    /**
     * <p>The presigned URI of the dataset item.</p>
     */
    inline DatasetEntry& WithDataURI(const char* value) { SetDataURI(value); return *this;}

  private:

    Aws::String m_entryName;
    bool m_entryNameHasBeenSet = false;

    Aws::String m_dataURI;
    bool m_dataURIHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
