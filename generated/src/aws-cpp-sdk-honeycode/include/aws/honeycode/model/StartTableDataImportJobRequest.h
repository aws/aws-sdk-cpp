/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/honeycode/HoneycodeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/ImportDataSource.h>
#include <aws/honeycode/model/ImportSourceDataFormat.h>
#include <aws/honeycode/model/ImportOptions.h>
#include <utility>

namespace Aws
{
namespace Honeycode
{
namespace Model
{

  /**
   */
  class StartTableDataImportJobRequest : public HoneycodeRequest
  {
  public:
    AWS_HONEYCODE_API StartTableDataImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTableDataImportJob"; }

    AWS_HONEYCODE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the workbook where the rows are being imported.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline const Aws::String& GetWorkbookId() const{ return m_workbookId; }

    /**
     * <p>The ID of the workbook where the rows are being imported.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline bool WorkbookIdHasBeenSet() const { return m_workbookIdHasBeenSet; }

    /**
     * <p>The ID of the workbook where the rows are being imported.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(const Aws::String& value) { m_workbookIdHasBeenSet = true; m_workbookId = value; }

    /**
     * <p>The ID of the workbook where the rows are being imported.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(Aws::String&& value) { m_workbookIdHasBeenSet = true; m_workbookId = std::move(value); }

    /**
     * <p>The ID of the workbook where the rows are being imported.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(const char* value) { m_workbookIdHasBeenSet = true; m_workbookId.assign(value); }

    /**
     * <p>The ID of the workbook where the rows are being imported.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline StartTableDataImportJobRequest& WithWorkbookId(const Aws::String& value) { SetWorkbookId(value); return *this;}

    /**
     * <p>The ID of the workbook where the rows are being imported.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline StartTableDataImportJobRequest& WithWorkbookId(Aws::String&& value) { SetWorkbookId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workbook where the rows are being imported.</p> <p> If a
     * workbook with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline StartTableDataImportJobRequest& WithWorkbookId(const char* value) { SetWorkbookId(value); return *this;}


    /**
     * <p> The source of the data that is being imported. The size of source must be no
     * larger than 100 MB. Source must have no more than 100,000 cells and no more than
     * 1,000 rows. </p>
     */
    inline const ImportDataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p> The source of the data that is being imported. The size of source must be no
     * larger than 100 MB. Source must have no more than 100,000 cells and no more than
     * 1,000 rows. </p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p> The source of the data that is being imported. The size of source must be no
     * larger than 100 MB. Source must have no more than 100,000 cells and no more than
     * 1,000 rows. </p>
     */
    inline void SetDataSource(const ImportDataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p> The source of the data that is being imported. The size of source must be no
     * larger than 100 MB. Source must have no more than 100,000 cells and no more than
     * 1,000 rows. </p>
     */
    inline void SetDataSource(ImportDataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p> The source of the data that is being imported. The size of source must be no
     * larger than 100 MB. Source must have no more than 100,000 cells and no more than
     * 1,000 rows. </p>
     */
    inline StartTableDataImportJobRequest& WithDataSource(const ImportDataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p> The source of the data that is being imported. The size of source must be no
     * larger than 100 MB. Source must have no more than 100,000 cells and no more than
     * 1,000 rows. </p>
     */
    inline StartTableDataImportJobRequest& WithDataSource(ImportDataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p> The format of the data that is being imported. Currently the only option
     * supported is "DELIMITED_TEXT". </p>
     */
    inline const ImportSourceDataFormat& GetDataFormat() const{ return m_dataFormat; }

    /**
     * <p> The format of the data that is being imported. Currently the only option
     * supported is "DELIMITED_TEXT". </p>
     */
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }

    /**
     * <p> The format of the data that is being imported. Currently the only option
     * supported is "DELIMITED_TEXT". </p>
     */
    inline void SetDataFormat(const ImportSourceDataFormat& value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }

    /**
     * <p> The format of the data that is being imported. Currently the only option
     * supported is "DELIMITED_TEXT". </p>
     */
    inline void SetDataFormat(ImportSourceDataFormat&& value) { m_dataFormatHasBeenSet = true; m_dataFormat = std::move(value); }

    /**
     * <p> The format of the data that is being imported. Currently the only option
     * supported is "DELIMITED_TEXT". </p>
     */
    inline StartTableDataImportJobRequest& WithDataFormat(const ImportSourceDataFormat& value) { SetDataFormat(value); return *this;}

    /**
     * <p> The format of the data that is being imported. Currently the only option
     * supported is "DELIMITED_TEXT". </p>
     */
    inline StartTableDataImportJobRequest& WithDataFormat(ImportSourceDataFormat&& value) { SetDataFormat(std::move(value)); return *this;}


    /**
     * <p>The ID of the table where the rows are being imported.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline const Aws::String& GetDestinationTableId() const{ return m_destinationTableId; }

    /**
     * <p>The ID of the table where the rows are being imported.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline bool DestinationTableIdHasBeenSet() const { return m_destinationTableIdHasBeenSet; }

    /**
     * <p>The ID of the table where the rows are being imported.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetDestinationTableId(const Aws::String& value) { m_destinationTableIdHasBeenSet = true; m_destinationTableId = value; }

    /**
     * <p>The ID of the table where the rows are being imported.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetDestinationTableId(Aws::String&& value) { m_destinationTableIdHasBeenSet = true; m_destinationTableId = std::move(value); }

    /**
     * <p>The ID of the table where the rows are being imported.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetDestinationTableId(const char* value) { m_destinationTableIdHasBeenSet = true; m_destinationTableId.assign(value); }

    /**
     * <p>The ID of the table where the rows are being imported.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline StartTableDataImportJobRequest& WithDestinationTableId(const Aws::String& value) { SetDestinationTableId(value); return *this;}

    /**
     * <p>The ID of the table where the rows are being imported.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline StartTableDataImportJobRequest& WithDestinationTableId(Aws::String&& value) { SetDestinationTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the table where the rows are being imported.</p> <p> If a table
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline StartTableDataImportJobRequest& WithDestinationTableId(const char* value) { SetDestinationTableId(value); return *this;}


    /**
     * <p> The options for customizing this import request. </p>
     */
    inline const ImportOptions& GetImportOptions() const{ return m_importOptions; }

    /**
     * <p> The options for customizing this import request. </p>
     */
    inline bool ImportOptionsHasBeenSet() const { return m_importOptionsHasBeenSet; }

    /**
     * <p> The options for customizing this import request. </p>
     */
    inline void SetImportOptions(const ImportOptions& value) { m_importOptionsHasBeenSet = true; m_importOptions = value; }

    /**
     * <p> The options for customizing this import request. </p>
     */
    inline void SetImportOptions(ImportOptions&& value) { m_importOptionsHasBeenSet = true; m_importOptions = std::move(value); }

    /**
     * <p> The options for customizing this import request. </p>
     */
    inline StartTableDataImportJobRequest& WithImportOptions(const ImportOptions& value) { SetImportOptions(value); return *this;}

    /**
     * <p> The options for customizing this import request. </p>
     */
    inline StartTableDataImportJobRequest& WithImportOptions(ImportOptions&& value) { SetImportOptions(std::move(value)); return *this;}


    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline StartTableDataImportJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline StartTableDataImportJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p> The request token for performing the update action. Request tokens help to
     * identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will not perform the action
     * again. </p> <p> Note that request tokens are valid only for a few minutes. You
     * cannot use request tokens to dedupe requests spanning hours or days. </p>
     */
    inline StartTableDataImportJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_workbookId;
    bool m_workbookIdHasBeenSet = false;

    ImportDataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    ImportSourceDataFormat m_dataFormat;
    bool m_dataFormatHasBeenSet = false;

    Aws::String m_destinationTableId;
    bool m_destinationTableIdHasBeenSet = false;

    ImportOptions m_importOptions;
    bool m_importOptionsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
