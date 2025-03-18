/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> The properties that are applied when Salesforce is being used as a source.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SalesforceSourceProperties">AWS
   * API Reference</a></p>
   */
  class SalesforceSourceProperties
  {
  public:
    AWS_APPFLOW_API SalesforceSourceProperties() = default;
    AWS_APPFLOW_API SalesforceSourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SalesforceSourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The object specified in the Salesforce flow source. </p>
     */
    inline const Aws::String& GetObject() const { return m_object; }
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }
    template<typename ObjectT = Aws::String>
    void SetObject(ObjectT&& value) { m_objectHasBeenSet = true; m_object = std::forward<ObjectT>(value); }
    template<typename ObjectT = Aws::String>
    SalesforceSourceProperties& WithObject(ObjectT&& value) { SetObject(std::forward<ObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The flag that enables dynamic fetching of new (recently added) fields in the
     * Salesforce objects while running a flow. </p>
     */
    inline bool GetEnableDynamicFieldUpdate() const { return m_enableDynamicFieldUpdate; }
    inline bool EnableDynamicFieldUpdateHasBeenSet() const { return m_enableDynamicFieldUpdateHasBeenSet; }
    inline void SetEnableDynamicFieldUpdate(bool value) { m_enableDynamicFieldUpdateHasBeenSet = true; m_enableDynamicFieldUpdate = value; }
    inline SalesforceSourceProperties& WithEnableDynamicFieldUpdate(bool value) { SetEnableDynamicFieldUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether Amazon AppFlow includes deleted files in the flow run.
     * </p>
     */
    inline bool GetIncludeDeletedRecords() const { return m_includeDeletedRecords; }
    inline bool IncludeDeletedRecordsHasBeenSet() const { return m_includeDeletedRecordsHasBeenSet; }
    inline void SetIncludeDeletedRecords(bool value) { m_includeDeletedRecordsHasBeenSet = true; m_includeDeletedRecords = value; }
    inline SalesforceSourceProperties& WithIncludeDeletedRecords(bool value) { SetIncludeDeletedRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which Salesforce API is used by Amazon AppFlow when your flow
     * transfers data from Salesforce.</p> <dl> <dt>AUTOMATIC</dt> <dd> <p>The default.
     * Amazon AppFlow selects which API to use based on the number of records that your
     * flow transfers from Salesforce. If your flow transfers fewer than 1,000,000
     * records, Amazon AppFlow uses Salesforce REST API. If your flow transfers
     * 1,000,000 records or more, Amazon AppFlow uses Salesforce Bulk API 2.0.</p>
     * <p>Each of these Salesforce APIs structures data differently. If Amazon AppFlow
     * selects the API automatically, be aware that, for recurring flows, the data
     * output might vary from one flow run to the next. For example, if a flow runs
     * daily, it might use REST API on one day to transfer 900,000 records, and it
     * might use Bulk API 2.0 on the next day to transfer 1,100,000 records. For each
     * of these flow runs, the respective Salesforce API formats the data differently.
     * Some of the differences include how dates are formatted and null values are
     * represented. Also, Bulk API 2.0 doesn't transfer Salesforce compound fields.</p>
     * <p>By choosing this option, you optimize flow performance for both small and
     * large data transfers, but the tradeoff is inconsistent formatting in the
     * output.</p> </dd> <dt>BULKV2</dt> <dd> <p>Amazon AppFlow uses only Salesforce
     * Bulk API 2.0. This API runs asynchronous data transfers, and it's optimal for
     * large sets of data. By choosing this option, you ensure that your flow writes
     * consistent output, but you optimize performance only for large data
     * transfers.</p> <p>Note that Bulk API 2.0 does not transfer Salesforce compound
     * fields.</p> </dd> <dt>REST_SYNC</dt> <dd> <p>Amazon AppFlow uses only Salesforce
     * REST API. By choosing this option, you ensure that your flow writes consistent
     * output, but you decrease performance for large data transfers that are better
     * suited for Bulk API 2.0. In some cases, if your flow attempts to transfer a vary
     * large set of data, it might fail wituh a timed out error.</p> </dd> </dl>
     */
    inline SalesforceDataTransferApi GetDataTransferApi() const { return m_dataTransferApi; }
    inline bool DataTransferApiHasBeenSet() const { return m_dataTransferApiHasBeenSet; }
    inline void SetDataTransferApi(SalesforceDataTransferApi value) { m_dataTransferApiHasBeenSet = true; m_dataTransferApi = value; }
    inline SalesforceSourceProperties& WithDataTransferApi(SalesforceDataTransferApi value) { SetDataTransferApi(value); return *this;}
    ///@}
  private:

    Aws::String m_object;
    bool m_objectHasBeenSet = false;

    bool m_enableDynamicFieldUpdate{false};
    bool m_enableDynamicFieldUpdateHasBeenSet = false;

    bool m_includeDeletedRecords{false};
    bool m_includeDeletedRecordsHasBeenSet = false;

    SalesforceDataTransferApi m_dataTransferApi{SalesforceDataTransferApi::NOT_SET};
    bool m_dataTransferApiHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
