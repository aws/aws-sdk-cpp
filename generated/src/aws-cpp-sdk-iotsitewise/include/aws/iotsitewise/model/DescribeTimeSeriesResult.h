/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PropertyDataType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{
  class DescribeTimeSeriesResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeTimeSeriesResult() = default;
    AWS_IOTSITEWISE_API DescribeTimeSeriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeTimeSeriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset in which the asset property was created.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    DescribeTimeSeriesResult& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset property, in UUID format.</p>
     */
    inline const Aws::String& GetPropertyId() const { return m_propertyId; }
    template<typename PropertyIdT = Aws::String>
    void SetPropertyId(PropertyIdT&& value) { m_propertyIdHasBeenSet = true; m_propertyId = std::forward<PropertyIdT>(value); }
    template<typename PropertyIdT = Aws::String>
    DescribeTimeSeriesResult& WithPropertyId(PropertyIdT&& value) { SetPropertyId(std::forward<PropertyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    DescribeTimeSeriesResult& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the time series.</p>
     */
    inline const Aws::String& GetTimeSeriesId() const { return m_timeSeriesId; }
    template<typename TimeSeriesIdT = Aws::String>
    void SetTimeSeriesId(TimeSeriesIdT&& value) { m_timeSeriesIdHasBeenSet = true; m_timeSeriesId = std::forward<TimeSeriesIdT>(value); }
    template<typename TimeSeriesIdT = Aws::String>
    DescribeTimeSeriesResult& WithTimeSeriesId(TimeSeriesIdT&& value) { SetTimeSeriesId(std::forward<TimeSeriesIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the time series.</p> <p>If you specify <code>STRUCT</code>,
     * you must also specify <code>dataTypeSpec</code> to identify the type of the
     * structure for this time series.</p>
     */
    inline PropertyDataType GetDataType() const { return m_dataType; }
    inline void SetDataType(PropertyDataType value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline DescribeTimeSeriesResult& WithDataType(PropertyDataType value) { SetDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the structure for this time series. This parameter is
     * required for time series that have the <code>STRUCT</code> data type.</p> <p>The
     * options for this parameter depend on the type of the composite model in which
     * you created the asset property that is associated with your time series. Use
     * <code>AWS/ALARM_STATE</code> for alarm state in alarm composite models.</p>
     */
    inline const Aws::String& GetDataTypeSpec() const { return m_dataTypeSpec; }
    template<typename DataTypeSpecT = Aws::String>
    void SetDataTypeSpec(DataTypeSpecT&& value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec = std::forward<DataTypeSpecT>(value); }
    template<typename DataTypeSpecT = Aws::String>
    DescribeTimeSeriesResult& WithDataTypeSpec(DataTypeSpecT&& value) { SetDataTypeSpec(std::forward<DataTypeSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the time series was created, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeSeriesCreationDate() const { return m_timeSeriesCreationDate; }
    template<typename TimeSeriesCreationDateT = Aws::Utils::DateTime>
    void SetTimeSeriesCreationDate(TimeSeriesCreationDateT&& value) { m_timeSeriesCreationDateHasBeenSet = true; m_timeSeriesCreationDate = std::forward<TimeSeriesCreationDateT>(value); }
    template<typename TimeSeriesCreationDateT = Aws::Utils::DateTime>
    DescribeTimeSeriesResult& WithTimeSeriesCreationDate(TimeSeriesCreationDateT&& value) { SetTimeSeriesCreationDate(std::forward<TimeSeriesCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the time series was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeSeriesLastUpdateDate() const { return m_timeSeriesLastUpdateDate; }
    template<typename TimeSeriesLastUpdateDateT = Aws::Utils::DateTime>
    void SetTimeSeriesLastUpdateDate(TimeSeriesLastUpdateDateT&& value) { m_timeSeriesLastUpdateDateHasBeenSet = true; m_timeSeriesLastUpdateDate = std::forward<TimeSeriesLastUpdateDateT>(value); }
    template<typename TimeSeriesLastUpdateDateT = Aws::Utils::DateTime>
    DescribeTimeSeriesResult& WithTimeSeriesLastUpdateDate(TimeSeriesLastUpdateDateT&& value) { SetTimeSeriesLastUpdateDate(std::forward<TimeSeriesLastUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the time series, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:time-series/${TimeSeriesId}</code>
     * </p>
     */
    inline const Aws::String& GetTimeSeriesArn() const { return m_timeSeriesArn; }
    template<typename TimeSeriesArnT = Aws::String>
    void SetTimeSeriesArn(TimeSeriesArnT&& value) { m_timeSeriesArnHasBeenSet = true; m_timeSeriesArn = std::forward<TimeSeriesArnT>(value); }
    template<typename TimeSeriesArnT = Aws::String>
    DescribeTimeSeriesResult& WithTimeSeriesArn(TimeSeriesArnT&& value) { SetTimeSeriesArn(std::forward<TimeSeriesArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTimeSeriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_propertyId;
    bool m_propertyIdHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_timeSeriesId;
    bool m_timeSeriesIdHasBeenSet = false;

    PropertyDataType m_dataType{PropertyDataType::NOT_SET};
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_dataTypeSpec;
    bool m_dataTypeSpecHasBeenSet = false;

    Aws::Utils::DateTime m_timeSeriesCreationDate{};
    bool m_timeSeriesCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_timeSeriesLastUpdateDate{};
    bool m_timeSeriesLastUpdateDateHasBeenSet = false;

    Aws::String m_timeSeriesArn;
    bool m_timeSeriesArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
