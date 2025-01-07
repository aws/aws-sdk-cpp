﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/DataCatalogType.h>
#include <aws/athena/model/DataCatalogStatus.h>
#include <aws/athena/model/ConnectionType.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>The summary information for the data catalog, which includes its name and
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/DataCatalogSummary">AWS
   * API Reference</a></p>
   */
  class DataCatalogSummary
  {
  public:
    AWS_ATHENA_API DataCatalogSummary();
    AWS_ATHENA_API DataCatalogSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API DataCatalogSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data catalog. The catalog name is unique for the Amazon Web
     * Services account and can use a maximum of 127 alphanumeric, underscore, at sign,
     * or hyphen characters. The remainder of the length constraint of 256 is reserved
     * for use by Athena.</p>
     */
    inline const Aws::String& GetCatalogName() const{ return m_catalogName; }
    inline bool CatalogNameHasBeenSet() const { return m_catalogNameHasBeenSet; }
    inline void SetCatalogName(const Aws::String& value) { m_catalogNameHasBeenSet = true; m_catalogName = value; }
    inline void SetCatalogName(Aws::String&& value) { m_catalogNameHasBeenSet = true; m_catalogName = std::move(value); }
    inline void SetCatalogName(const char* value) { m_catalogNameHasBeenSet = true; m_catalogName.assign(value); }
    inline DataCatalogSummary& WithCatalogName(const Aws::String& value) { SetCatalogName(value); return *this;}
    inline DataCatalogSummary& WithCatalogName(Aws::String&& value) { SetCatalogName(std::move(value)); return *this;}
    inline DataCatalogSummary& WithCatalogName(const char* value) { SetCatalogName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data catalog type.</p>
     */
    inline const DataCatalogType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DataCatalogType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DataCatalogType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DataCatalogSummary& WithType(const DataCatalogType& value) { SetType(value); return *this;}
    inline DataCatalogSummary& WithType(DataCatalogType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the creation or deletion of the data catalog.</p> <ul> <li>
     * <p>The <code>LAMBDA</code>, <code>GLUE</code>, and <code>HIVE</code> data
     * catalog types are created synchronously. Their status is either
     * <code>CREATE_COMPLETE</code> or <code>CREATE_FAILED</code>.</p> </li> <li>
     * <p>The <code>FEDERATED</code> data catalog type is created asynchronously.</p>
     * </li> </ul> <p>Data catalog creation status:</p> <ul> <li> <p>
     * <code>CREATE_IN_PROGRESS</code>: Federated data catalog creation in
     * progress.</p> </li> <li> <p> <code>CREATE_COMPLETE</code>: Data catalog creation
     * complete.</p> </li> <li> <p> <code>CREATE_FAILED</code>: Data catalog could not
     * be created.</p> </li> <li> <p> <code>CREATE_FAILED_CLEANUP_IN_PROGRESS</code>:
     * Federated data catalog creation failed and is being removed.</p> </li> <li> <p>
     * <code>CREATE_FAILED_CLEANUP_COMPLETE</code>: Federated data catalog creation
     * failed and was removed.</p> </li> <li> <p>
     * <code>CREATE_FAILED_CLEANUP_FAILED</code>: Federated data catalog creation
     * failed but could not be removed.</p> </li> </ul> <p>Data catalog deletion
     * status:</p> <ul> <li> <p> <code>DELETE_IN_PROGRESS</code>: Federated data
     * catalog deletion in progress.</p> </li> <li> <p> <code>DELETE_COMPLETE</code>:
     * Federated data catalog deleted.</p> </li> <li> <p> <code>DELETE_FAILED</code>:
     * Federated data catalog could not be deleted.</p> </li> </ul>
     */
    inline const DataCatalogStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DataCatalogStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DataCatalogStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DataCatalogSummary& WithStatus(const DataCatalogStatus& value) { SetStatus(value); return *this;}
    inline DataCatalogSummary& WithStatus(DataCatalogStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of connection for a <code>FEDERATED</code> data catalog (for
     * example, <code>REDSHIFT</code>, <code>MYSQL</code>, or <code>SQLSERVER</code>).
     * For information about individual connectors, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/connectors-available.html">Available
     * data source connectors</a>.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(const ConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline void SetConnectionType(ConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }
    inline DataCatalogSummary& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}
    inline DataCatalogSummary& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text of the error that occurred during data catalog creation or deletion.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }
    inline DataCatalogSummary& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline DataCatalogSummary& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline DataCatalogSummary& WithError(const char* value) { SetError(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogName;
    bool m_catalogNameHasBeenSet = false;

    DataCatalogType m_type;
    bool m_typeHasBeenSet = false;

    DataCatalogStatus m_status;
    bool m_statusHasBeenSet = false;

    ConnectionType m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
