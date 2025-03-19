/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DataSetReference.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains the reference information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Reference">AWS
   * API Reference</a></p>
   */
  class Reference
  {
  public:
    AWS_IOTSITEWISE_API Reference() = default;
    AWS_IOTSITEWISE_API Reference(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Reference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the dataset reference information.</p>
     */
    inline const DataSetReference& GetDataset() const { return m_dataset; }
    inline bool DatasetHasBeenSet() const { return m_datasetHasBeenSet; }
    template<typename DatasetT = DataSetReference>
    void SetDataset(DatasetT&& value) { m_datasetHasBeenSet = true; m_dataset = std::forward<DatasetT>(value); }
    template<typename DatasetT = DataSetReference>
    Reference& WithDataset(DatasetT&& value) { SetDataset(std::forward<DatasetT>(value)); return *this;}
    ///@}
  private:

    DataSetReference m_dataset;
    bool m_datasetHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
