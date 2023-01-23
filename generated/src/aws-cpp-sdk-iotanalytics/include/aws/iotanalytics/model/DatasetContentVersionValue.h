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
   * <p>The dataset whose latest contents are used as input to the notebook or
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetContentVersionValue">AWS
   * API Reference</a></p>
   */
  class DatasetContentVersionValue
  {
  public:
    AWS_IOTANALYTICS_API DatasetContentVersionValue();
    AWS_IOTANALYTICS_API DatasetContentVersionValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatasetContentVersionValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dataset whose latest contents are used as input to the
     * notebook or application.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset whose latest contents are used as input to the
     * notebook or application.</p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the dataset whose latest contents are used as input to the
     * notebook or application.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset whose latest contents are used as input to the
     * notebook or application.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset whose latest contents are used as input to the
     * notebook or application.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset whose latest contents are used as input to the
     * notebook or application.</p>
     */
    inline DatasetContentVersionValue& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset whose latest contents are used as input to the
     * notebook or application.</p>
     */
    inline DatasetContentVersionValue& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset whose latest contents are used as input to the
     * notebook or application.</p>
     */
    inline DatasetContentVersionValue& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
