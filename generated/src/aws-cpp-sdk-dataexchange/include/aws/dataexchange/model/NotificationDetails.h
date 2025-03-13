/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/DataUpdateRequestDetails.h>
#include <aws/dataexchange/model/DeprecationRequestDetails.h>
#include <aws/dataexchange/model/SchemaChangeRequestDetails.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Extra details specific to this notification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/NotificationDetails">AWS
   * API Reference</a></p>
   */
  class NotificationDetails
  {
  public:
    AWS_DATAEXCHANGE_API NotificationDetails() = default;
    AWS_DATAEXCHANGE_API NotificationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API NotificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Extra details specific to a data update type notification.</p>
     */
    inline const DataUpdateRequestDetails& GetDataUpdate() const { return m_dataUpdate; }
    inline bool DataUpdateHasBeenSet() const { return m_dataUpdateHasBeenSet; }
    template<typename DataUpdateT = DataUpdateRequestDetails>
    void SetDataUpdate(DataUpdateT&& value) { m_dataUpdateHasBeenSet = true; m_dataUpdate = std::forward<DataUpdateT>(value); }
    template<typename DataUpdateT = DataUpdateRequestDetails>
    NotificationDetails& WithDataUpdate(DataUpdateT&& value) { SetDataUpdate(std::forward<DataUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Extra details specific to a deprecation type notification.</p>
     */
    inline const DeprecationRequestDetails& GetDeprecation() const { return m_deprecation; }
    inline bool DeprecationHasBeenSet() const { return m_deprecationHasBeenSet; }
    template<typename DeprecationT = DeprecationRequestDetails>
    void SetDeprecation(DeprecationT&& value) { m_deprecationHasBeenSet = true; m_deprecation = std::forward<DeprecationT>(value); }
    template<typename DeprecationT = DeprecationRequestDetails>
    NotificationDetails& WithDeprecation(DeprecationT&& value) { SetDeprecation(std::forward<DeprecationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Extra details specific to a schema change type notification.</p>
     */
    inline const SchemaChangeRequestDetails& GetSchemaChange() const { return m_schemaChange; }
    inline bool SchemaChangeHasBeenSet() const { return m_schemaChangeHasBeenSet; }
    template<typename SchemaChangeT = SchemaChangeRequestDetails>
    void SetSchemaChange(SchemaChangeT&& value) { m_schemaChangeHasBeenSet = true; m_schemaChange = std::forward<SchemaChangeT>(value); }
    template<typename SchemaChangeT = SchemaChangeRequestDetails>
    NotificationDetails& WithSchemaChange(SchemaChangeT&& value) { SetSchemaChange(std::forward<SchemaChangeT>(value)); return *this;}
    ///@}
  private:

    DataUpdateRequestDetails m_dataUpdate;
    bool m_dataUpdateHasBeenSet = false;

    DeprecationRequestDetails m_deprecation;
    bool m_deprecationHasBeenSet = false;

    SchemaChangeRequestDetails m_schemaChange;
    bool m_schemaChangeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
