/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/ErrorHandlingConfig.h>
#include <aws/appflow/model/WriteOperationType.h>
#include <aws/appflow/model/SalesforceDataTransferApi.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The properties that are applied when Salesforce is being used as a
   * destination. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SalesforceDestinationProperties">AWS
   * API Reference</a></p>
   */
  class SalesforceDestinationProperties
  {
  public:
    AWS_APPFLOW_API SalesforceDestinationProperties();
    AWS_APPFLOW_API SalesforceDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SalesforceDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The object specified in the Salesforce flow destination. </p>
     */
    inline const Aws::String& GetObject() const{ return m_object; }

    /**
     * <p> The object specified in the Salesforce flow destination. </p>
     */
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }

    /**
     * <p> The object specified in the Salesforce flow destination. </p>
     */
    inline void SetObject(const Aws::String& value) { m_objectHasBeenSet = true; m_object = value; }

    /**
     * <p> The object specified in the Salesforce flow destination. </p>
     */
    inline void SetObject(Aws::String&& value) { m_objectHasBeenSet = true; m_object = std::move(value); }

    /**
     * <p> The object specified in the Salesforce flow destination. </p>
     */
    inline void SetObject(const char* value) { m_objectHasBeenSet = true; m_object.assign(value); }

    /**
     * <p> The object specified in the Salesforce flow destination. </p>
     */
    inline SalesforceDestinationProperties& WithObject(const Aws::String& value) { SetObject(value); return *this;}

    /**
     * <p> The object specified in the Salesforce flow destination. </p>
     */
    inline SalesforceDestinationProperties& WithObject(Aws::String&& value) { SetObject(std::move(value)); return *this;}

    /**
     * <p> The object specified in the Salesforce flow destination. </p>
     */
    inline SalesforceDestinationProperties& WithObject(const char* value) { SetObject(value); return *this;}


    /**
     * <p> The name of the field that Amazon AppFlow uses as an ID when performing a
     * write operation such as update or delete. </p>
     */
    inline const Aws::Vector<Aws::String>& GetIdFieldNames() const{ return m_idFieldNames; }

    /**
     * <p> The name of the field that Amazon AppFlow uses as an ID when performing a
     * write operation such as update or delete. </p>
     */
    inline bool IdFieldNamesHasBeenSet() const { return m_idFieldNamesHasBeenSet; }

    /**
     * <p> The name of the field that Amazon AppFlow uses as an ID when performing a
     * write operation such as update or delete. </p>
     */
    inline void SetIdFieldNames(const Aws::Vector<Aws::String>& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames = value; }

    /**
     * <p> The name of the field that Amazon AppFlow uses as an ID when performing a
     * write operation such as update or delete. </p>
     */
    inline void SetIdFieldNames(Aws::Vector<Aws::String>&& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames = std::move(value); }

    /**
     * <p> The name of the field that Amazon AppFlow uses as an ID when performing a
     * write operation such as update or delete. </p>
     */
    inline SalesforceDestinationProperties& WithIdFieldNames(const Aws::Vector<Aws::String>& value) { SetIdFieldNames(value); return *this;}

    /**
     * <p> The name of the field that Amazon AppFlow uses as an ID when performing a
     * write operation such as update or delete. </p>
     */
    inline SalesforceDestinationProperties& WithIdFieldNames(Aws::Vector<Aws::String>&& value) { SetIdFieldNames(std::move(value)); return *this;}

    /**
     * <p> The name of the field that Amazon AppFlow uses as an ID when performing a
     * write operation such as update or delete. </p>
     */
    inline SalesforceDestinationProperties& AddIdFieldNames(const Aws::String& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames.push_back(value); return *this; }

    /**
     * <p> The name of the field that Amazon AppFlow uses as an ID when performing a
     * write operation such as update or delete. </p>
     */
    inline SalesforceDestinationProperties& AddIdFieldNames(Aws::String&& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames.push_back(std::move(value)); return *this; }

    /**
     * <p> The name of the field that Amazon AppFlow uses as an ID when performing a
     * write operation such as update or delete. </p>
     */
    inline SalesforceDestinationProperties& AddIdFieldNames(const char* value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames.push_back(value); return *this; }


    /**
     * <p> The settings that determine how Amazon AppFlow handles an error when placing
     * data in the Salesforce destination. For example, this setting would determine if
     * the flow should fail after one insertion error, or continue and attempt to
     * insert every record regardless of the initial failure.
     * <code>ErrorHandlingConfig</code> is a part of the destination connector details.
     * </p>
     */
    inline const ErrorHandlingConfig& GetErrorHandlingConfig() const{ return m_errorHandlingConfig; }

    /**
     * <p> The settings that determine how Amazon AppFlow handles an error when placing
     * data in the Salesforce destination. For example, this setting would determine if
     * the flow should fail after one insertion error, or continue and attempt to
     * insert every record regardless of the initial failure.
     * <code>ErrorHandlingConfig</code> is a part of the destination connector details.
     * </p>
     */
    inline bool ErrorHandlingConfigHasBeenSet() const { return m_errorHandlingConfigHasBeenSet; }

    /**
     * <p> The settings that determine how Amazon AppFlow handles an error when placing
     * data in the Salesforce destination. For example, this setting would determine if
     * the flow should fail after one insertion error, or continue and attempt to
     * insert every record regardless of the initial failure.
     * <code>ErrorHandlingConfig</code> is a part of the destination connector details.
     * </p>
     */
    inline void SetErrorHandlingConfig(const ErrorHandlingConfig& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = value; }

    /**
     * <p> The settings that determine how Amazon AppFlow handles an error when placing
     * data in the Salesforce destination. For example, this setting would determine if
     * the flow should fail after one insertion error, or continue and attempt to
     * insert every record regardless of the initial failure.
     * <code>ErrorHandlingConfig</code> is a part of the destination connector details.
     * </p>
     */
    inline void SetErrorHandlingConfig(ErrorHandlingConfig&& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = std::move(value); }

    /**
     * <p> The settings that determine how Amazon AppFlow handles an error when placing
     * data in the Salesforce destination. For example, this setting would determine if
     * the flow should fail after one insertion error, or continue and attempt to
     * insert every record regardless of the initial failure.
     * <code>ErrorHandlingConfig</code> is a part of the destination connector details.
     * </p>
     */
    inline SalesforceDestinationProperties& WithErrorHandlingConfig(const ErrorHandlingConfig& value) { SetErrorHandlingConfig(value); return *this;}

    /**
     * <p> The settings that determine how Amazon AppFlow handles an error when placing
     * data in the Salesforce destination. For example, this setting would determine if
     * the flow should fail after one insertion error, or continue and attempt to
     * insert every record regardless of the initial failure.
     * <code>ErrorHandlingConfig</code> is a part of the destination connector details.
     * </p>
     */
    inline SalesforceDestinationProperties& WithErrorHandlingConfig(ErrorHandlingConfig&& value) { SetErrorHandlingConfig(std::move(value)); return *this;}


    /**
     * <p> This specifies the type of write operation to be performed in Salesforce.
     * When the value is <code>UPSERT</code>, then <code>idFieldNames</code> is
     * required. </p>
     */
    inline const WriteOperationType& GetWriteOperationType() const{ return m_writeOperationType; }

    /**
     * <p> This specifies the type of write operation to be performed in Salesforce.
     * When the value is <code>UPSERT</code>, then <code>idFieldNames</code> is
     * required. </p>
     */
    inline bool WriteOperationTypeHasBeenSet() const { return m_writeOperationTypeHasBeenSet; }

    /**
     * <p> This specifies the type of write operation to be performed in Salesforce.
     * When the value is <code>UPSERT</code>, then <code>idFieldNames</code> is
     * required. </p>
     */
    inline void SetWriteOperationType(const WriteOperationType& value) { m_writeOperationTypeHasBeenSet = true; m_writeOperationType = value; }

    /**
     * <p> This specifies the type of write operation to be performed in Salesforce.
     * When the value is <code>UPSERT</code>, then <code>idFieldNames</code> is
     * required. </p>
     */
    inline void SetWriteOperationType(WriteOperationType&& value) { m_writeOperationTypeHasBeenSet = true; m_writeOperationType = std::move(value); }

    /**
     * <p> This specifies the type of write operation to be performed in Salesforce.
     * When the value is <code>UPSERT</code>, then <code>idFieldNames</code> is
     * required. </p>
     */
    inline SalesforceDestinationProperties& WithWriteOperationType(const WriteOperationType& value) { SetWriteOperationType(value); return *this;}

    /**
     * <p> This specifies the type of write operation to be performed in Salesforce.
     * When the value is <code>UPSERT</code>, then <code>idFieldNames</code> is
     * required. </p>
     */
    inline SalesforceDestinationProperties& WithWriteOperationType(WriteOperationType&& value) { SetWriteOperationType(std::move(value)); return *this;}


    /**
     * <p>Specifies which Salesforce API is used by Amazon AppFlow when your flow
     * transfers data to Salesforce.</p> <dl> <dt>AUTOMATIC</dt> <dd> <p>The default.
     * Amazon AppFlow selects which API to use based on the number of records that your
     * flow transfers to Salesforce. If your flow transfers fewer than 1,000 records,
     * Amazon AppFlow uses Salesforce REST API. If your flow transfers 1,000 records or
     * more, Amazon AppFlow uses Salesforce Bulk API 2.0.</p> <p>Each of these
     * Salesforce APIs structures data differently. If Amazon AppFlow selects the API
     * automatically, be aware that, for recurring flows, the data output might vary
     * from one flow run to the next. For example, if a flow runs daily, it might use
     * REST API on one day to transfer 900 records, and it might use Bulk API 2.0 on
     * the next day to transfer 1,100 records. For each of these flow runs, the
     * respective Salesforce API formats the data differently. Some of the differences
     * include how dates are formatted and null values are represented. Also, Bulk API
     * 2.0 doesn't transfer Salesforce compound fields.</p> <p>By choosing this option,
     * you optimize flow performance for both small and large data transfers, but the
     * tradeoff is inconsistent formatting in the output.</p> </dd> <dt>BULKV2</dt>
     * <dd> <p>Amazon AppFlow uses only Salesforce Bulk API 2.0. This API runs
     * asynchronous data transfers, and it's optimal for large sets of data. By
     * choosing this option, you ensure that your flow writes consistent output, but
     * you optimize performance only for large data transfers.</p> <p>Note that Bulk
     * API 2.0 does not transfer Salesforce compound fields.</p> </dd>
     * <dt>REST_SYNC</dt> <dd> <p>Amazon AppFlow uses only Salesforce REST API. By
     * choosing this option, you ensure that your flow writes consistent output, but
     * you decrease performance for large data transfers that are better suited for
     * Bulk API 2.0. In some cases, if your flow attempts to transfer a vary large set
     * of data, it might fail with a timed out error.</p> </dd> </dl>
     */
    inline const SalesforceDataTransferApi& GetDataTransferApi() const{ return m_dataTransferApi; }

    /**
     * <p>Specifies which Salesforce API is used by Amazon AppFlow when your flow
     * transfers data to Salesforce.</p> <dl> <dt>AUTOMATIC</dt> <dd> <p>The default.
     * Amazon AppFlow selects which API to use based on the number of records that your
     * flow transfers to Salesforce. If your flow transfers fewer than 1,000 records,
     * Amazon AppFlow uses Salesforce REST API. If your flow transfers 1,000 records or
     * more, Amazon AppFlow uses Salesforce Bulk API 2.0.</p> <p>Each of these
     * Salesforce APIs structures data differently. If Amazon AppFlow selects the API
     * automatically, be aware that, for recurring flows, the data output might vary
     * from one flow run to the next. For example, if a flow runs daily, it might use
     * REST API on one day to transfer 900 records, and it might use Bulk API 2.0 on
     * the next day to transfer 1,100 records. For each of these flow runs, the
     * respective Salesforce API formats the data differently. Some of the differences
     * include how dates are formatted and null values are represented. Also, Bulk API
     * 2.0 doesn't transfer Salesforce compound fields.</p> <p>By choosing this option,
     * you optimize flow performance for both small and large data transfers, but the
     * tradeoff is inconsistent formatting in the output.</p> </dd> <dt>BULKV2</dt>
     * <dd> <p>Amazon AppFlow uses only Salesforce Bulk API 2.0. This API runs
     * asynchronous data transfers, and it's optimal for large sets of data. By
     * choosing this option, you ensure that your flow writes consistent output, but
     * you optimize performance only for large data transfers.</p> <p>Note that Bulk
     * API 2.0 does not transfer Salesforce compound fields.</p> </dd>
     * <dt>REST_SYNC</dt> <dd> <p>Amazon AppFlow uses only Salesforce REST API. By
     * choosing this option, you ensure that your flow writes consistent output, but
     * you decrease performance for large data transfers that are better suited for
     * Bulk API 2.0. In some cases, if your flow attempts to transfer a vary large set
     * of data, it might fail with a timed out error.</p> </dd> </dl>
     */
    inline bool DataTransferApiHasBeenSet() const { return m_dataTransferApiHasBeenSet; }

    /**
     * <p>Specifies which Salesforce API is used by Amazon AppFlow when your flow
     * transfers data to Salesforce.</p> <dl> <dt>AUTOMATIC</dt> <dd> <p>The default.
     * Amazon AppFlow selects which API to use based on the number of records that your
     * flow transfers to Salesforce. If your flow transfers fewer than 1,000 records,
     * Amazon AppFlow uses Salesforce REST API. If your flow transfers 1,000 records or
     * more, Amazon AppFlow uses Salesforce Bulk API 2.0.</p> <p>Each of these
     * Salesforce APIs structures data differently. If Amazon AppFlow selects the API
     * automatically, be aware that, for recurring flows, the data output might vary
     * from one flow run to the next. For example, if a flow runs daily, it might use
     * REST API on one day to transfer 900 records, and it might use Bulk API 2.0 on
     * the next day to transfer 1,100 records. For each of these flow runs, the
     * respective Salesforce API formats the data differently. Some of the differences
     * include how dates are formatted and null values are represented. Also, Bulk API
     * 2.0 doesn't transfer Salesforce compound fields.</p> <p>By choosing this option,
     * you optimize flow performance for both small and large data transfers, but the
     * tradeoff is inconsistent formatting in the output.</p> </dd> <dt>BULKV2</dt>
     * <dd> <p>Amazon AppFlow uses only Salesforce Bulk API 2.0. This API runs
     * asynchronous data transfers, and it's optimal for large sets of data. By
     * choosing this option, you ensure that your flow writes consistent output, but
     * you optimize performance only for large data transfers.</p> <p>Note that Bulk
     * API 2.0 does not transfer Salesforce compound fields.</p> </dd>
     * <dt>REST_SYNC</dt> <dd> <p>Amazon AppFlow uses only Salesforce REST API. By
     * choosing this option, you ensure that your flow writes consistent output, but
     * you decrease performance for large data transfers that are better suited for
     * Bulk API 2.0. In some cases, if your flow attempts to transfer a vary large set
     * of data, it might fail with a timed out error.</p> </dd> </dl>
     */
    inline void SetDataTransferApi(const SalesforceDataTransferApi& value) { m_dataTransferApiHasBeenSet = true; m_dataTransferApi = value; }

    /**
     * <p>Specifies which Salesforce API is used by Amazon AppFlow when your flow
     * transfers data to Salesforce.</p> <dl> <dt>AUTOMATIC</dt> <dd> <p>The default.
     * Amazon AppFlow selects which API to use based on the number of records that your
     * flow transfers to Salesforce. If your flow transfers fewer than 1,000 records,
     * Amazon AppFlow uses Salesforce REST API. If your flow transfers 1,000 records or
     * more, Amazon AppFlow uses Salesforce Bulk API 2.0.</p> <p>Each of these
     * Salesforce APIs structures data differently. If Amazon AppFlow selects the API
     * automatically, be aware that, for recurring flows, the data output might vary
     * from one flow run to the next. For example, if a flow runs daily, it might use
     * REST API on one day to transfer 900 records, and it might use Bulk API 2.0 on
     * the next day to transfer 1,100 records. For each of these flow runs, the
     * respective Salesforce API formats the data differently. Some of the differences
     * include how dates are formatted and null values are represented. Also, Bulk API
     * 2.0 doesn't transfer Salesforce compound fields.</p> <p>By choosing this option,
     * you optimize flow performance for both small and large data transfers, but the
     * tradeoff is inconsistent formatting in the output.</p> </dd> <dt>BULKV2</dt>
     * <dd> <p>Amazon AppFlow uses only Salesforce Bulk API 2.0. This API runs
     * asynchronous data transfers, and it's optimal for large sets of data. By
     * choosing this option, you ensure that your flow writes consistent output, but
     * you optimize performance only for large data transfers.</p> <p>Note that Bulk
     * API 2.0 does not transfer Salesforce compound fields.</p> </dd>
     * <dt>REST_SYNC</dt> <dd> <p>Amazon AppFlow uses only Salesforce REST API. By
     * choosing this option, you ensure that your flow writes consistent output, but
     * you decrease performance for large data transfers that are better suited for
     * Bulk API 2.0. In some cases, if your flow attempts to transfer a vary large set
     * of data, it might fail with a timed out error.</p> </dd> </dl>
     */
    inline void SetDataTransferApi(SalesforceDataTransferApi&& value) { m_dataTransferApiHasBeenSet = true; m_dataTransferApi = std::move(value); }

    /**
     * <p>Specifies which Salesforce API is used by Amazon AppFlow when your flow
     * transfers data to Salesforce.</p> <dl> <dt>AUTOMATIC</dt> <dd> <p>The default.
     * Amazon AppFlow selects which API to use based on the number of records that your
     * flow transfers to Salesforce. If your flow transfers fewer than 1,000 records,
     * Amazon AppFlow uses Salesforce REST API. If your flow transfers 1,000 records or
     * more, Amazon AppFlow uses Salesforce Bulk API 2.0.</p> <p>Each of these
     * Salesforce APIs structures data differently. If Amazon AppFlow selects the API
     * automatically, be aware that, for recurring flows, the data output might vary
     * from one flow run to the next. For example, if a flow runs daily, it might use
     * REST API on one day to transfer 900 records, and it might use Bulk API 2.0 on
     * the next day to transfer 1,100 records. For each of these flow runs, the
     * respective Salesforce API formats the data differently. Some of the differences
     * include how dates are formatted and null values are represented. Also, Bulk API
     * 2.0 doesn't transfer Salesforce compound fields.</p> <p>By choosing this option,
     * you optimize flow performance for both small and large data transfers, but the
     * tradeoff is inconsistent formatting in the output.</p> </dd> <dt>BULKV2</dt>
     * <dd> <p>Amazon AppFlow uses only Salesforce Bulk API 2.0. This API runs
     * asynchronous data transfers, and it's optimal for large sets of data. By
     * choosing this option, you ensure that your flow writes consistent output, but
     * you optimize performance only for large data transfers.</p> <p>Note that Bulk
     * API 2.0 does not transfer Salesforce compound fields.</p> </dd>
     * <dt>REST_SYNC</dt> <dd> <p>Amazon AppFlow uses only Salesforce REST API. By
     * choosing this option, you ensure that your flow writes consistent output, but
     * you decrease performance for large data transfers that are better suited for
     * Bulk API 2.0. In some cases, if your flow attempts to transfer a vary large set
     * of data, it might fail with a timed out error.</p> </dd> </dl>
     */
    inline SalesforceDestinationProperties& WithDataTransferApi(const SalesforceDataTransferApi& value) { SetDataTransferApi(value); return *this;}

    /**
     * <p>Specifies which Salesforce API is used by Amazon AppFlow when your flow
     * transfers data to Salesforce.</p> <dl> <dt>AUTOMATIC</dt> <dd> <p>The default.
     * Amazon AppFlow selects which API to use based on the number of records that your
     * flow transfers to Salesforce. If your flow transfers fewer than 1,000 records,
     * Amazon AppFlow uses Salesforce REST API. If your flow transfers 1,000 records or
     * more, Amazon AppFlow uses Salesforce Bulk API 2.0.</p> <p>Each of these
     * Salesforce APIs structures data differently. If Amazon AppFlow selects the API
     * automatically, be aware that, for recurring flows, the data output might vary
     * from one flow run to the next. For example, if a flow runs daily, it might use
     * REST API on one day to transfer 900 records, and it might use Bulk API 2.0 on
     * the next day to transfer 1,100 records. For each of these flow runs, the
     * respective Salesforce API formats the data differently. Some of the differences
     * include how dates are formatted and null values are represented. Also, Bulk API
     * 2.0 doesn't transfer Salesforce compound fields.</p> <p>By choosing this option,
     * you optimize flow performance for both small and large data transfers, but the
     * tradeoff is inconsistent formatting in the output.</p> </dd> <dt>BULKV2</dt>
     * <dd> <p>Amazon AppFlow uses only Salesforce Bulk API 2.0. This API runs
     * asynchronous data transfers, and it's optimal for large sets of data. By
     * choosing this option, you ensure that your flow writes consistent output, but
     * you optimize performance only for large data transfers.</p> <p>Note that Bulk
     * API 2.0 does not transfer Salesforce compound fields.</p> </dd>
     * <dt>REST_SYNC</dt> <dd> <p>Amazon AppFlow uses only Salesforce REST API. By
     * choosing this option, you ensure that your flow writes consistent output, but
     * you decrease performance for large data transfers that are better suited for
     * Bulk API 2.0. In some cases, if your flow attempts to transfer a vary large set
     * of data, it might fail with a timed out error.</p> </dd> </dl>
     */
    inline SalesforceDestinationProperties& WithDataTransferApi(SalesforceDataTransferApi&& value) { SetDataTransferApi(std::move(value)); return *this;}

  private:

    Aws::String m_object;
    bool m_objectHasBeenSet = false;

    Aws::Vector<Aws::String> m_idFieldNames;
    bool m_idFieldNamesHasBeenSet = false;

    ErrorHandlingConfig m_errorHandlingConfig;
    bool m_errorHandlingConfigHasBeenSet = false;

    WriteOperationType m_writeOperationType;
    bool m_writeOperationTypeHasBeenSet = false;

    SalesforceDataTransferApi m_dataTransferApi;
    bool m_dataTransferApiHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
