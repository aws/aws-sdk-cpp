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
   * <p>The properties that are applied when Zendesk is used as a
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ZendeskDestinationProperties">AWS
   * API Reference</a></p>
   */
  class ZendeskDestinationProperties
  {
  public:
    AWS_APPFLOW_API ZendeskDestinationProperties();
    AWS_APPFLOW_API ZendeskDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ZendeskDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The object specified in the Zendesk flow destination.</p>
     */
    inline const Aws::String& GetObject() const{ return m_object; }

    /**
     * <p>The object specified in the Zendesk flow destination.</p>
     */
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }

    /**
     * <p>The object specified in the Zendesk flow destination.</p>
     */
    inline void SetObject(const Aws::String& value) { m_objectHasBeenSet = true; m_object = value; }

    /**
     * <p>The object specified in the Zendesk flow destination.</p>
     */
    inline void SetObject(Aws::String&& value) { m_objectHasBeenSet = true; m_object = std::move(value); }

    /**
     * <p>The object specified in the Zendesk flow destination.</p>
     */
    inline void SetObject(const char* value) { m_objectHasBeenSet = true; m_object.assign(value); }

    /**
     * <p>The object specified in the Zendesk flow destination.</p>
     */
    inline ZendeskDestinationProperties& WithObject(const Aws::String& value) { SetObject(value); return *this;}

    /**
     * <p>The object specified in the Zendesk flow destination.</p>
     */
    inline ZendeskDestinationProperties& WithObject(Aws::String&& value) { SetObject(std::move(value)); return *this;}

    /**
     * <p>The object specified in the Zendesk flow destination.</p>
     */
    inline ZendeskDestinationProperties& WithObject(const char* value) { SetObject(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetIdFieldNames() const{ return m_idFieldNames; }

    
    inline bool IdFieldNamesHasBeenSet() const { return m_idFieldNamesHasBeenSet; }

    
    inline void SetIdFieldNames(const Aws::Vector<Aws::String>& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames = value; }

    
    inline void SetIdFieldNames(Aws::Vector<Aws::String>&& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames = std::move(value); }

    
    inline ZendeskDestinationProperties& WithIdFieldNames(const Aws::Vector<Aws::String>& value) { SetIdFieldNames(value); return *this;}

    
    inline ZendeskDestinationProperties& WithIdFieldNames(Aws::Vector<Aws::String>&& value) { SetIdFieldNames(std::move(value)); return *this;}

    
    inline ZendeskDestinationProperties& AddIdFieldNames(const Aws::String& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames.push_back(value); return *this; }

    
    inline ZendeskDestinationProperties& AddIdFieldNames(Aws::String&& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames.push_back(std::move(value)); return *this; }

    
    inline ZendeskDestinationProperties& AddIdFieldNames(const char* value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames.push_back(value); return *this; }


    
    inline const ErrorHandlingConfig& GetErrorHandlingConfig() const{ return m_errorHandlingConfig; }

    
    inline bool ErrorHandlingConfigHasBeenSet() const { return m_errorHandlingConfigHasBeenSet; }

    
    inline void SetErrorHandlingConfig(const ErrorHandlingConfig& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = value; }

    
    inline void SetErrorHandlingConfig(ErrorHandlingConfig&& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = std::move(value); }

    
    inline ZendeskDestinationProperties& WithErrorHandlingConfig(const ErrorHandlingConfig& value) { SetErrorHandlingConfig(value); return *this;}

    
    inline ZendeskDestinationProperties& WithErrorHandlingConfig(ErrorHandlingConfig&& value) { SetErrorHandlingConfig(std::move(value)); return *this;}


    
    inline const WriteOperationType& GetWriteOperationType() const{ return m_writeOperationType; }

    
    inline bool WriteOperationTypeHasBeenSet() const { return m_writeOperationTypeHasBeenSet; }

    
    inline void SetWriteOperationType(const WriteOperationType& value) { m_writeOperationTypeHasBeenSet = true; m_writeOperationType = value; }

    
    inline void SetWriteOperationType(WriteOperationType&& value) { m_writeOperationTypeHasBeenSet = true; m_writeOperationType = std::move(value); }

    
    inline ZendeskDestinationProperties& WithWriteOperationType(const WriteOperationType& value) { SetWriteOperationType(value); return *this;}

    
    inline ZendeskDestinationProperties& WithWriteOperationType(WriteOperationType&& value) { SetWriteOperationType(std::move(value)); return *this;}

  private:

    Aws::String m_object;
    bool m_objectHasBeenSet = false;

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
