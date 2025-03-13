/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ErrorHandlingConfig.h>
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
   * <p>The properties that Amazon AppFlow applies when you use Marketo as a flow
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/MarketoDestinationProperties">AWS
   * API Reference</a></p>
   */
  class MarketoDestinationProperties
  {
  public:
    AWS_APPFLOW_API MarketoDestinationProperties() = default;
    AWS_APPFLOW_API MarketoDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API MarketoDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The object specified in the Marketo flow destination.</p>
     */
    inline const Aws::String& GetObject() const { return m_object; }
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }
    template<typename ObjectT = Aws::String>
    void SetObject(ObjectT&& value) { m_objectHasBeenSet = true; m_object = std::forward<ObjectT>(value); }
    template<typename ObjectT = Aws::String>
    MarketoDestinationProperties& WithObject(ObjectT&& value) { SetObject(std::forward<ObjectT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ErrorHandlingConfig& GetErrorHandlingConfig() const { return m_errorHandlingConfig; }
    inline bool ErrorHandlingConfigHasBeenSet() const { return m_errorHandlingConfigHasBeenSet; }
    template<typename ErrorHandlingConfigT = ErrorHandlingConfig>
    void SetErrorHandlingConfig(ErrorHandlingConfigT&& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = std::forward<ErrorHandlingConfigT>(value); }
    template<typename ErrorHandlingConfigT = ErrorHandlingConfig>
    MarketoDestinationProperties& WithErrorHandlingConfig(ErrorHandlingConfigT&& value) { SetErrorHandlingConfig(std::forward<ErrorHandlingConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_object;
    bool m_objectHasBeenSet = false;

    ErrorHandlingConfig m_errorHandlingConfig;
    bool m_errorHandlingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
