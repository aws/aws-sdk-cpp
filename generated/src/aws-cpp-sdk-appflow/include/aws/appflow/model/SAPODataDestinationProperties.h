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
    AWS_APPFLOW_API SAPODataDestinationProperties() = default;
    AWS_APPFLOW_API SAPODataDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SAPODataDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The object path specified in the SAPOData flow destination.</p>
     */
    inline const Aws::String& GetObjectPath() const { return m_objectPath; }
    inline bool ObjectPathHasBeenSet() const { return m_objectPathHasBeenSet; }
    template<typename ObjectPathT = Aws::String>
    void SetObjectPath(ObjectPathT&& value) { m_objectPathHasBeenSet = true; m_objectPath = std::forward<ObjectPathT>(value); }
    template<typename ObjectPathT = Aws::String>
    SAPODataDestinationProperties& WithObjectPath(ObjectPathT&& value) { SetObjectPath(std::forward<ObjectPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines how Amazon AppFlow handles the success response that it gets from
     * the connector after placing data.</p> <p>For example, this setting would
     * determine where to write the response from a destination connector upon a
     * successful insert operation.</p>
     */
    inline const SuccessResponseHandlingConfig& GetSuccessResponseHandlingConfig() const { return m_successResponseHandlingConfig; }
    inline bool SuccessResponseHandlingConfigHasBeenSet() const { return m_successResponseHandlingConfigHasBeenSet; }
    template<typename SuccessResponseHandlingConfigT = SuccessResponseHandlingConfig>
    void SetSuccessResponseHandlingConfig(SuccessResponseHandlingConfigT&& value) { m_successResponseHandlingConfigHasBeenSet = true; m_successResponseHandlingConfig = std::forward<SuccessResponseHandlingConfigT>(value); }
    template<typename SuccessResponseHandlingConfigT = SuccessResponseHandlingConfig>
    SAPODataDestinationProperties& WithSuccessResponseHandlingConfig(SuccessResponseHandlingConfigT&& value) { SetSuccessResponseHandlingConfig(std::forward<SuccessResponseHandlingConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetIdFieldNames() const { return m_idFieldNames; }
    inline bool IdFieldNamesHasBeenSet() const { return m_idFieldNamesHasBeenSet; }
    template<typename IdFieldNamesT = Aws::Vector<Aws::String>>
    void SetIdFieldNames(IdFieldNamesT&& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames = std::forward<IdFieldNamesT>(value); }
    template<typename IdFieldNamesT = Aws::Vector<Aws::String>>
    SAPODataDestinationProperties& WithIdFieldNames(IdFieldNamesT&& value) { SetIdFieldNames(std::forward<IdFieldNamesT>(value)); return *this;}
    template<typename IdFieldNamesT = Aws::String>
    SAPODataDestinationProperties& AddIdFieldNames(IdFieldNamesT&& value) { m_idFieldNamesHasBeenSet = true; m_idFieldNames.emplace_back(std::forward<IdFieldNamesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ErrorHandlingConfig& GetErrorHandlingConfig() const { return m_errorHandlingConfig; }
    inline bool ErrorHandlingConfigHasBeenSet() const { return m_errorHandlingConfigHasBeenSet; }
    template<typename ErrorHandlingConfigT = ErrorHandlingConfig>
    void SetErrorHandlingConfig(ErrorHandlingConfigT&& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = std::forward<ErrorHandlingConfigT>(value); }
    template<typename ErrorHandlingConfigT = ErrorHandlingConfig>
    SAPODataDestinationProperties& WithErrorHandlingConfig(ErrorHandlingConfigT&& value) { SetErrorHandlingConfig(std::forward<ErrorHandlingConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline WriteOperationType GetWriteOperationType() const { return m_writeOperationType; }
    inline bool WriteOperationTypeHasBeenSet() const { return m_writeOperationTypeHasBeenSet; }
    inline void SetWriteOperationType(WriteOperationType value) { m_writeOperationTypeHasBeenSet = true; m_writeOperationType = value; }
    inline SAPODataDestinationProperties& WithWriteOperationType(WriteOperationType value) { SetWriteOperationType(value); return *this;}
    ///@}
  private:

    Aws::String m_objectPath;
    bool m_objectPathHasBeenSet = false;

    SuccessResponseHandlingConfig m_successResponseHandlingConfig;
    bool m_successResponseHandlingConfigHasBeenSet = false;

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
