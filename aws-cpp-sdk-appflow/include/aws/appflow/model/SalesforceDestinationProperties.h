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

  private:

    Aws::String m_object;
    bool m_objectHasBeenSet;

    ErrorHandlingConfig m_errorHandlingConfig;
    bool m_errorHandlingConfigHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
