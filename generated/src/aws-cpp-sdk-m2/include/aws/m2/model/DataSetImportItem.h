/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/model/DataSet.h>
#include <aws/m2/model/ExternalLocation.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Identifies a specific data set to import from an external
   * location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/DataSetImportItem">AWS
   * API Reference</a></p>
   */
  class DataSetImportItem
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API DataSetImportItem();
    AWS_MAINFRAMEMODERNIZATION_API DataSetImportItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API DataSetImportItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data set.</p>
     */
    inline const DataSet& GetDataSet() const{ return m_dataSet; }

    /**
     * <p>The data set.</p>
     */
    inline bool DataSetHasBeenSet() const { return m_dataSetHasBeenSet; }

    /**
     * <p>The data set.</p>
     */
    inline void SetDataSet(const DataSet& value) { m_dataSetHasBeenSet = true; m_dataSet = value; }

    /**
     * <p>The data set.</p>
     */
    inline void SetDataSet(DataSet&& value) { m_dataSetHasBeenSet = true; m_dataSet = std::move(value); }

    /**
     * <p>The data set.</p>
     */
    inline DataSetImportItem& WithDataSet(const DataSet& value) { SetDataSet(value); return *this;}

    /**
     * <p>The data set.</p>
     */
    inline DataSetImportItem& WithDataSet(DataSet&& value) { SetDataSet(std::move(value)); return *this;}


    /**
     * <p>The location of the data set.</p>
     */
    inline const ExternalLocation& GetExternalLocation() const{ return m_externalLocation; }

    /**
     * <p>The location of the data set.</p>
     */
    inline bool ExternalLocationHasBeenSet() const { return m_externalLocationHasBeenSet; }

    /**
     * <p>The location of the data set.</p>
     */
    inline void SetExternalLocation(const ExternalLocation& value) { m_externalLocationHasBeenSet = true; m_externalLocation = value; }

    /**
     * <p>The location of the data set.</p>
     */
    inline void SetExternalLocation(ExternalLocation&& value) { m_externalLocationHasBeenSet = true; m_externalLocation = std::move(value); }

    /**
     * <p>The location of the data set.</p>
     */
    inline DataSetImportItem& WithExternalLocation(const ExternalLocation& value) { SetExternalLocation(value); return *this;}

    /**
     * <p>The location of the data set.</p>
     */
    inline DataSetImportItem& WithExternalLocation(ExternalLocation&& value) { SetExternalLocation(std::move(value)); return *this;}

  private:

    DataSet m_dataSet;
    bool m_dataSetHasBeenSet = false;

    ExternalLocation m_externalLocation;
    bool m_externalLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
