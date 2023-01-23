/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/SuccessResponseHandlingConfig.h>
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
   * <p>The properties that are applied when using SAPOData as a flow
   * destination</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SAPODataDestinationProperties">AWS
   * API Reference</a></p>
   */
  class SAPODataDestinationProperties
  {
  public:
    AWS_APPFLOW_API SAPODataDestinationProperties();
    AWS_APPFLOW_API SAPODataDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SAPODataDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The object path specified in the SAPOData flow destination.</p>
     */
    inline const Aws::String& GetObjectPath() const{ return m_objectPath; }

    /**
     * <p>The object path specified in the SAPOData flow destination.</p>
     */
    inline bool ObjectPathHasBeenSet() const { return m_objectPathHasBeenSet; }

    /**
     * <p>The object path specified in the SAPOData flow destination.</p>
     */
    inline void SetObjectPath(const Aws::String& value) { m_objectPathHasBeenSet = true; m_objectPath = value; }

    /**
     * <p>The object path specified in the SAPOData flow destination.</p>
     */
    inline void SetObjectPath(Aws::String&& value) { m_objectPathHasBeenSet = true; m_objectPath = std::move(value); }

    /**
     * <p>The object path specified in the SAPOData flow destination.</p>
     */
    inline void SetObjectPath(const char* value) { m_objectPathHasBeenSet = true; m_objectPath.assign(value); }

    /**
     * <p>The object path specified in the SAPOData flow destination.</p>
     */
    inline SAPODataDestinationProperties& WithObjectPath(const Aws::String& value) { SetObjectPath(value); return *this;}

    /**
     * <p>The object path specified in the SAPOData flow destination.</p>
     */
    inline SAPODataDestinationProperties& WithObjectPath(Aws::String&& value) { SetObjectPath(std::move(value)); return *this;}

    /**
     * <p>The object path specified in the SAPOData flow destination.</p>
     */
    inline SAPODataDestinationProperties& WithObjectPath(const char* value) { SetObjectPath(value); return *this;}


    /**
     * <p>Determines how Amazon AppFlow handles the success response that it gets from
     * the connector after placing data.</p> <p>For example, this setting would
     * determine where to write the response from a destination connector upon a
     * successful insert operation.</p>
     */
    inline const SuccessResponseHandlingConfig& GetSuccessResponseHandlingConfig() const{ return m_successResponseHandlingConfig; }

    /**
     * <p>Determines how Amazon AppFlow handles the success response that it gets from
     * the connector after placing data.</p> <p>For example, this setting would
     * determine where to write the response from a destination connector upon a
     * successful insert operation.</p>
     */
    inline bool SuccessResponseHandlingConfigHasBeenSet() const { return m_successResponseHandlingConfigHasBeenSet; }

    /**
     * <p>Determines how Amazon AppFlow handles the success response that it gets from
     * the connector after placing data.</p> <p>For example, this setting would
     * determine where to write the response from a destination connector upon a
     * successful insert operation.</p>
     */
    inline void SetSuccessResponseHandlingConfig(const SuccessResponseHandlingConfig& value) { m_successResponseHandlingConfigHasBeenSet = true; m_successResponseHandlingConfig = value; }

    /**
     * <p>Determines how Amazon AppFlow handles the success response that it gets from
     * the connector after placing data.</p> <p>For example, this setting would
     * determine where to write the response from a destination connector upon a
     * successful insert operation.</p>
     */
    inline void SetSuccessResponseHandlingConfig(SuccessResponseHandlingConfig&& value) { m_successResponseHandlingConfigHasBeenSet = true; m_successResponseHandlingConfig = std::move(value); }

    /**
     * <p>Determines how Amazon AppFlow handles the success response that it gets from
     * the connector after placing data.</p> <p>For example, this setting would
     * determine where to write the response from a destination connector upon a
     * successful insert operation.</p>
     */
    inline SAPODataDestinationProperties& WithSuccessResponseHandlingConfig(const SuccessResponseHandlingConfig& value) { SetSuccessResponseHandlingConfig(value); return *this;}

    /**
     * <p>Determines how Amazon AppFlow handles the success response that it gets from
     * the connector after placing data.</p> <p>For example, this setting would
     * determine where to write the response from a destination connector upon a
     * successful insert operation.</p>
     */
    inline SAPODataDestinationProperties& WithSuccessResponseHandlingConfig(SuccessResponseHandlingConfig&& value) { SetSuccessResponseHandlingConfig(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetIdFieldNames() const{ return m_idFieldNames; }

    
    inline bool IdFieldNamesHasBeenSet() const { return m_idFieldNamesHasBeenSet; }

    
    inline void SetIdFieldNames(const Aws::Vector<Aws::String>& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames = value; }

    
    inline void SetIdFieldNames(Aws::Vector<Aws::String>&& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames = std::move(value); }

    
    inline SAPODataDestinationProperties& WithIdFieldNames(const Aws::Vector<Aws::String>& value) { SetIdFieldNames(value); return *this;}

    
    inline SAPODataDestinationProperties& WithIdFieldNames(Aws::Vector<Aws::String>&& value) { SetIdFieldNames(std::move(value)); return *this;}

    
    inline SAPODataDestinationProperties& AddIdFieldNames(const Aws::String& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames.push_back(value); return *this; }

    
    inline SAPODataDestinationProperties& AddIdFieldNames(Aws::String&& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames.push_back(std::move(value)); return *this; }

    
    inline SAPODataDestinationProperties& AddIdFieldNames(const char* value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames.push_back(value); return *this; }


    
    inline const ErrorHandlingConfig& GetErrorHandlingConfig() const{ return m_errorHandlingConfig; }

    
    inline bool ErrorHandlingConfigHasBeenSet() const { return m_errorHandlingConfigHasBeenSet; }

    
    inline void SetErrorHandlingConfig(const ErrorHandlingConfig& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = value; }

    
    inline void SetErrorHandlingConfig(ErrorHandlingConfig&& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = std::move(value); }

    
    inline SAPODataDestinationProperties& WithErrorHandlingConfig(const ErrorHandlingConfig& value) { SetErrorHandlingConfig(value); return *this;}

    
    inline SAPODataDestinationProperties& WithErrorHandlingConfig(ErrorHandlingConfig&& value) { SetErrorHandlingConfig(std::move(value)); return *this;}


    
    inline const WriteOperationType& GetWriteOperationType() const{ return m_writeOperationType; }

    
    inline bool WriteOperationTypeHasBeenSet() const { return m_writeOperationTypeHasBeenSet; }

    
    inline void SetWriteOperationType(const WriteOperationType& value) { m_writeOperationTypeHasBeenSet = true; m_writeOperationType = value; }

    
    inline void SetWriteOperationType(WriteOperationType&& value) { m_writeOperationTypeHasBeenSet = true; m_writeOperationType = std::move(value); }

    
    inline SAPODataDestinationProperties& WithWriteOperationType(const WriteOperationType& value) { SetWriteOperationType(value); return *this;}

    
    inline SAPODataDestinationProperties& WithWriteOperationType(WriteOperationType&& value) { SetWriteOperationType(std::move(value)); return *this;}

  private:

    Aws::String m_objectPath;
    bool m_objectPathHasBeenSet = false;

    SuccessResponseHandlingConfig m_successResponseHandlingConfig;
    bool m_successResponseHandlingConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_idFieldNames;
    bool m_idFieldNamesHasBeenSet = false;

    ErrorHandlingConfig m_errorHandlingConfig;
    bool m_errorHandlingConfigHasBeenSet = false;

    WriteOperationType m_writeOperationType;
    bool m_writeOperationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
