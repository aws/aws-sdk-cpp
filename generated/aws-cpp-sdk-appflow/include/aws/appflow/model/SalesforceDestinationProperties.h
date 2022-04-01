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
  class AWS_APPFLOW_API SalesforceDestinationProperties
  {
  public:
    SalesforceDestinationProperties();
    SalesforceDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    SalesforceDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::String m_object;
    bool m_objectHasBeenSet;

    Aws::Vector<Aws::String> m_idFieldNames;
    bool m_idFieldNamesHasBeenSet;

    ErrorHandlingConfig m_errorHandlingConfig;
    bool m_errorHandlingConfigHasBeenSet;

    WriteOperationType m_writeOperationType;
    bool m_writeOperationTypeHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
