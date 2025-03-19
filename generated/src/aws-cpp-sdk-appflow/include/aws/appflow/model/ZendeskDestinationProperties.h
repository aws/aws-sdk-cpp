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
    AWS_APPFLOW_API ZendeskDestinationProperties() = default;
    AWS_APPFLOW_API ZendeskDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ZendeskDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The object specified in the Zendesk flow destination.</p>
     */
    inline const Aws::String& GetObject() const { return m_object; }
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }
    template<typename ObjectT = Aws::String>
    void SetObject(ObjectT&& value) { m_objectHasBeenSet = true; m_object = std::forward<ObjectT>(value); }
    template<typename ObjectT = Aws::String>
    ZendeskDestinationProperties& WithObject(ObjectT&& value) { SetObject(std::forward<ObjectT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetIdFieldNames() const { return m_idFieldNames; }
    inline bool IdFieldNamesHasBeenSet() const { return m_idFieldNamesHasBeenSet; }
    template<typename IdFieldNamesT = Aws::Vector<Aws::String>>
    void SetIdFieldNames(IdFieldNamesT&& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames = std::forward<IdFieldNamesT>(value); }
    template<typename IdFieldNamesT = Aws::Vector<Aws::String>>
    ZendeskDestinationProperties& WithIdFieldNames(IdFieldNamesT&& value) { SetIdFieldNames(std::forward<IdFieldNamesT>(value)); return *this;}
    template<typename IdFieldNamesT = Aws::String>
    ZendeskDestinationProperties& AddIdFieldNames(IdFieldNamesT&& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames.emplace_back(std::forward<IdFieldNamesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ErrorHandlingConfig& GetErrorHandlingConfig() const { return m_errorHandlingConfig; }
    inline bool ErrorHandlingConfigHasBeenSet() const { return m_errorHandlingConfigHasBeenSet; }
    template<typename ErrorHandlingConfigT = ErrorHandlingConfig>
    void SetErrorHandlingConfig(ErrorHandlingConfigT&& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = std::forward<ErrorHandlingConfigT>(value); }
    template<typename ErrorHandlingConfigT = ErrorHandlingConfig>
    ZendeskDestinationProperties& WithErrorHandlingConfig(ErrorHandlingConfigT&& value) { SetErrorHandlingConfig(std::forward<ErrorHandlingConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline WriteOperationType GetWriteOperationType() const { return m_writeOperationType; }
    inline bool WriteOperationTypeHasBeenSet() const { return m_writeOperationTypeHasBeenSet; }
    inline void SetWriteOperationType(WriteOperationType value) { m_writeOperationTypeHasBeenSet = true; m_writeOperationType = value; }
    inline ZendeskDestinationProperties& WithWriteOperationType(WriteOperationType value) { SetWriteOperationType(value); return *this;}
    ///@}
  private:

    Aws::String m_object;
    bool m_objectHasBeenSet = false;

    Aws::Vector<Aws::String> m_idFieldNames;
    bool m_idFieldNamesHasBeenSet = false;

    ErrorHandlingConfig m_errorHandlingConfig;
    bool m_errorHandlingConfigHasBeenSet = false;

    WriteOperationType m_writeOperationType{WriteOperationType::NOT_SET};
    bool m_writeOperationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
