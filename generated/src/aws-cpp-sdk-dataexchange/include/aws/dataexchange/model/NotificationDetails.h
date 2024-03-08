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
    AWS_DATAEXCHANGE_API NotificationDetails();
    AWS_DATAEXCHANGE_API NotificationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API NotificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Extra details specific to a data update type notification.</p>
     */
    inline const DataUpdateRequestDetails& GetDataUpdate() const{ return m_dataUpdate; }

    /**
     * <p>Extra details specific to a data update type notification.</p>
     */
    inline bool DataUpdateHasBeenSet() const { return m_dataUpdateHasBeenSet; }

    /**
     * <p>Extra details specific to a data update type notification.</p>
     */
    inline void SetDataUpdate(const DataUpdateRequestDetails& value) { m_dataUpdateHasBeenSet = true; m_dataUpdate = value; }

    /**
     * <p>Extra details specific to a data update type notification.</p>
     */
    inline void SetDataUpdate(DataUpdateRequestDetails&& value) { m_dataUpdateHasBeenSet = true; m_dataUpdate = std::move(value); }

    /**
     * <p>Extra details specific to a data update type notification.</p>
     */
    inline NotificationDetails& WithDataUpdate(const DataUpdateRequestDetails& value) { SetDataUpdate(value); return *this;}

    /**
     * <p>Extra details specific to a data update type notification.</p>
     */
    inline NotificationDetails& WithDataUpdate(DataUpdateRequestDetails&& value) { SetDataUpdate(std::move(value)); return *this;}


    /**
     * <p>Extra details specific to a deprecation type notification.</p>
     */
    inline const DeprecationRequestDetails& GetDeprecation() const{ return m_deprecation; }

    /**
     * <p>Extra details specific to a deprecation type notification.</p>
     */
    inline bool DeprecationHasBeenSet() const { return m_deprecationHasBeenSet; }

    /**
     * <p>Extra details specific to a deprecation type notification.</p>
     */
    inline void SetDeprecation(const DeprecationRequestDetails& value) { m_deprecationHasBeenSet = true; m_deprecation = value; }

    /**
     * <p>Extra details specific to a deprecation type notification.</p>
     */
    inline void SetDeprecation(DeprecationRequestDetails&& value) { m_deprecationHasBeenSet = true; m_deprecation = std::move(value); }

    /**
     * <p>Extra details specific to a deprecation type notification.</p>
     */
    inline NotificationDetails& WithDeprecation(const DeprecationRequestDetails& value) { SetDeprecation(value); return *this;}

    /**
     * <p>Extra details specific to a deprecation type notification.</p>
     */
    inline NotificationDetails& WithDeprecation(DeprecationRequestDetails&& value) { SetDeprecation(std::move(value)); return *this;}


    /**
     * <p>Extra details specific to a schema change type notification.</p>
     */
    inline const SchemaChangeRequestDetails& GetSchemaChange() const{ return m_schemaChange; }

    /**
     * <p>Extra details specific to a schema change type notification.</p>
     */
    inline bool SchemaChangeHasBeenSet() const { return m_schemaChangeHasBeenSet; }

    /**
     * <p>Extra details specific to a schema change type notification.</p>
     */
    inline void SetSchemaChange(const SchemaChangeRequestDetails& value) { m_schemaChangeHasBeenSet = true; m_schemaChange = value; }

    /**
     * <p>Extra details specific to a schema change type notification.</p>
     */
    inline void SetSchemaChange(SchemaChangeRequestDetails&& value) { m_schemaChangeHasBeenSet = true; m_schemaChange = std::move(value); }

    /**
     * <p>Extra details specific to a schema change type notification.</p>
     */
    inline NotificationDetails& WithSchemaChange(const SchemaChangeRequestDetails& value) { SetSchemaChange(value); return *this;}

    /**
     * <p>Extra details specific to a schema change type notification.</p>
     */
    inline NotificationDetails& WithSchemaChange(SchemaChangeRequestDetails&& value) { SetSchemaChange(std::move(value)); return *this;}

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
