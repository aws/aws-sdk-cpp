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
    AWS_IOTANALYTICS_API DatasetEntry() = default;
    AWS_IOTANALYTICS_API DatasetEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatasetEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the dataset item.</p>
     */
    inline const Aws::String& GetEntryName() const { return m_entryName; }
    inline bool EntryNameHasBeenSet() const { return m_entryNameHasBeenSet; }
    template<typename EntryNameT = Aws::String>
    void SetEntryName(EntryNameT&& value) { m_entryNameHasBeenSet = true; m_entryName = std::forward<EntryNameT>(value); }
    template<typename EntryNameT = Aws::String>
    DatasetEntry& WithEntryName(EntryNameT&& value) { SetEntryName(std::forward<EntryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The presigned URI of the dataset item.</p>
     */
    inline const Aws::String& GetDataURI() const { return m_dataURI; }
    inline bool DataURIHasBeenSet() const { return m_dataURIHasBeenSet; }
    template<typename DataURIT = Aws::String>
    void SetDataURI(DataURIT&& value) { m_dataURIHasBeenSet = true; m_dataURI = std::forward<DataURIT>(value); }
    template<typename DataURIT = Aws::String>
    DatasetEntry& WithDataURI(DataURIT&& value) { SetDataURI(std::forward<DataURIT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entryName;
    bool m_entryNameHasBeenSet = false;

    Aws::String m_dataURI;
    bool m_dataURIHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
