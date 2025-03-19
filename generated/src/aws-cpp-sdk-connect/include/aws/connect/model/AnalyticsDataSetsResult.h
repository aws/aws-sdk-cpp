/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about datasets that are available to associate with:
   * <code>DataSetId</code>, <code>DataSetName</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AnalyticsDataSetsResult">AWS
   * API Reference</a></p>
   */
  class AnalyticsDataSetsResult
  {
  public:
    AWS_CONNECT_API AnalyticsDataSetsResult() = default;
    AWS_CONNECT_API AnalyticsDataSetsResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AnalyticsDataSetsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the dataset.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    AnalyticsDataSetsResult& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetDataSetName() const { return m_dataSetName; }
    inline bool DataSetNameHasBeenSet() const { return m_dataSetNameHasBeenSet; }
    template<typename DataSetNameT = Aws::String>
    void SetDataSetName(DataSetNameT&& value) { m_dataSetNameHasBeenSet = true; m_dataSetName = std::forward<DataSetNameT>(value); }
    template<typename DataSetNameT = Aws::String>
    AnalyticsDataSetsResult& WithDataSetName(DataSetNameT&& value) { SetDataSetName(std::forward<DataSetNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_dataSetName;
    bool m_dataSetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
