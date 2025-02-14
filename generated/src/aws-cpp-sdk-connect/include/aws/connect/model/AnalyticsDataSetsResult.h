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
    AWS_CONNECT_API AnalyticsDataSetsResult();
    AWS_CONNECT_API AnalyticsDataSetsResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AnalyticsDataSetsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the dataset.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }
    inline AnalyticsDataSetsResult& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline AnalyticsDataSetsResult& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline AnalyticsDataSetsResult& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetDataSetName() const{ return m_dataSetName; }
    inline bool DataSetNameHasBeenSet() const { return m_dataSetNameHasBeenSet; }
    inline void SetDataSetName(const Aws::String& value) { m_dataSetNameHasBeenSet = true; m_dataSetName = value; }
    inline void SetDataSetName(Aws::String&& value) { m_dataSetNameHasBeenSet = true; m_dataSetName = std::move(value); }
    inline void SetDataSetName(const char* value) { m_dataSetNameHasBeenSet = true; m_dataSetName.assign(value); }
    inline AnalyticsDataSetsResult& WithDataSetName(const Aws::String& value) { SetDataSetName(value); return *this;}
    inline AnalyticsDataSetsResult& WithDataSetName(Aws::String&& value) { SetDataSetName(std::move(value)); return *this;}
    inline AnalyticsDataSetsResult& WithDataSetName(const char* value) { SetDataSetName(value); return *this;}
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
