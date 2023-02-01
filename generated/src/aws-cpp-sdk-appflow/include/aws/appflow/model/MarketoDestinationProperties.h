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
    AWS_APPFLOW_API MarketoDestinationProperties();
    AWS_APPFLOW_API MarketoDestinationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API MarketoDestinationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The object specified in the Marketo flow destination.</p>
     */
    inline const Aws::String& GetObject() const{ return m_object; }

    /**
     * <p>The object specified in the Marketo flow destination.</p>
     */
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }

    /**
     * <p>The object specified in the Marketo flow destination.</p>
     */
    inline void SetObject(const Aws::String& value) { m_objectHasBeenSet = true; m_object = value; }

    /**
     * <p>The object specified in the Marketo flow destination.</p>
     */
    inline void SetObject(Aws::String&& value) { m_objectHasBeenSet = true; m_object = std::move(value); }

    /**
     * <p>The object specified in the Marketo flow destination.</p>
     */
    inline void SetObject(const char* value) { m_objectHasBeenSet = true; m_object.assign(value); }

    /**
     * <p>The object specified in the Marketo flow destination.</p>
     */
    inline MarketoDestinationProperties& WithObject(const Aws::String& value) { SetObject(value); return *this;}

    /**
     * <p>The object specified in the Marketo flow destination.</p>
     */
    inline MarketoDestinationProperties& WithObject(Aws::String&& value) { SetObject(std::move(value)); return *this;}

    /**
     * <p>The object specified in the Marketo flow destination.</p>
     */
    inline MarketoDestinationProperties& WithObject(const char* value) { SetObject(value); return *this;}


    
    inline const ErrorHandlingConfig& GetErrorHandlingConfig() const{ return m_errorHandlingConfig; }

    
    inline bool ErrorHandlingConfigHasBeenSet() const { return m_errorHandlingConfigHasBeenSet; }

    
    inline void SetErrorHandlingConfig(const ErrorHandlingConfig& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = value; }

    
    inline void SetErrorHandlingConfig(ErrorHandlingConfig&& value) { m_errorHandlingConfigHasBeenSet = true; m_errorHandlingConfig = std::move(value); }

    
    inline MarketoDestinationProperties& WithErrorHandlingConfig(const ErrorHandlingConfig& value) { SetErrorHandlingConfig(value); return *this;}

    
    inline MarketoDestinationProperties& WithErrorHandlingConfig(ErrorHandlingConfig&& value) { SetErrorHandlingConfig(std::move(value)); return *this;}

  private:

    Aws::String m_object;
    bool m_objectHasBeenSet = false;

    ErrorHandlingConfig m_errorHandlingConfig;
    bool m_errorHandlingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
