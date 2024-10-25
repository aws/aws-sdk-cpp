/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/DeliveryDestinationType.h>
#include <aws/logs/model/ConfigurationTemplateDeliveryConfigValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/RecordField.h>
#include <aws/logs/model/OutputFormat.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>A structure containing information about the deafult settings and available
   * settings that you can use to configure a <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_Delivery.html">delivery</a>
   * or a <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DeliveryDestination.html">delivery
   * destination</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ConfigurationTemplate">AWS
   * API Reference</a></p>
   */
  class ConfigurationTemplate
  {
  public:
    AWS_CLOUDWATCHLOGS_API ConfigurationTemplate();
    AWS_CLOUDWATCHLOGS_API ConfigurationTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ConfigurationTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string specifying which service this configuration template applies to. For
     * more information about supported services see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AWS-logs-and-resource-policy.html">Enable
     * logging from Amazon Web Services services.</a>.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }
    inline ConfigurationTemplate& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline ConfigurationTemplate& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline ConfigurationTemplate& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string specifying which log type this configuration template applies
     * to.</p>
     */
    inline const Aws::String& GetLogType() const{ return m_logType; }
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }
    inline void SetLogType(const Aws::String& value) { m_logTypeHasBeenSet = true; m_logType = value; }
    inline void SetLogType(Aws::String&& value) { m_logTypeHasBeenSet = true; m_logType = std::move(value); }
    inline void SetLogType(const char* value) { m_logTypeHasBeenSet = true; m_logType.assign(value); }
    inline ConfigurationTemplate& WithLogType(const Aws::String& value) { SetLogType(value); return *this;}
    inline ConfigurationTemplate& WithLogType(Aws::String&& value) { SetLogType(std::move(value)); return *this;}
    inline ConfigurationTemplate& WithLogType(const char* value) { SetLogType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string specifying which resource type this configuration template applies
     * to.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ConfigurationTemplate& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ConfigurationTemplate& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ConfigurationTemplate& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string specifying which destination type this configuration template
     * applies to.</p>
     */
    inline const DeliveryDestinationType& GetDeliveryDestinationType() const{ return m_deliveryDestinationType; }
    inline bool DeliveryDestinationTypeHasBeenSet() const { return m_deliveryDestinationTypeHasBeenSet; }
    inline void SetDeliveryDestinationType(const DeliveryDestinationType& value) { m_deliveryDestinationTypeHasBeenSet = true; m_deliveryDestinationType = value; }
    inline void SetDeliveryDestinationType(DeliveryDestinationType&& value) { m_deliveryDestinationTypeHasBeenSet = true; m_deliveryDestinationType = std::move(value); }
    inline ConfigurationTemplate& WithDeliveryDestinationType(const DeliveryDestinationType& value) { SetDeliveryDestinationType(value); return *this;}
    inline ConfigurationTemplate& WithDeliveryDestinationType(DeliveryDestinationType&& value) { SetDeliveryDestinationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mapping that displays the default value of each property within a
     * delivery's configuration, if it is not specified in the request.</p>
     */
    inline const ConfigurationTemplateDeliveryConfigValues& GetDefaultDeliveryConfigValues() const{ return m_defaultDeliveryConfigValues; }
    inline bool DefaultDeliveryConfigValuesHasBeenSet() const { return m_defaultDeliveryConfigValuesHasBeenSet; }
    inline void SetDefaultDeliveryConfigValues(const ConfigurationTemplateDeliveryConfigValues& value) { m_defaultDeliveryConfigValuesHasBeenSet = true; m_defaultDeliveryConfigValues = value; }
    inline void SetDefaultDeliveryConfigValues(ConfigurationTemplateDeliveryConfigValues&& value) { m_defaultDeliveryConfigValuesHasBeenSet = true; m_defaultDeliveryConfigValues = std::move(value); }
    inline ConfigurationTemplate& WithDefaultDeliveryConfigValues(const ConfigurationTemplateDeliveryConfigValues& value) { SetDefaultDeliveryConfigValues(value); return *this;}
    inline ConfigurationTemplate& WithDefaultDeliveryConfigValues(ConfigurationTemplateDeliveryConfigValues&& value) { SetDefaultDeliveryConfigValues(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allowed fields that a caller can use in the <code>recordFields</code>
     * parameter of a <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CreateDelivery.html">CreateDelivery</a>
     * or <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateDeliveryConfiguration.html">UpdateDeliveryConfiguration</a>
     * operation.</p>
     */
    inline const Aws::Vector<RecordField>& GetAllowedFields() const{ return m_allowedFields; }
    inline bool AllowedFieldsHasBeenSet() const { return m_allowedFieldsHasBeenSet; }
    inline void SetAllowedFields(const Aws::Vector<RecordField>& value) { m_allowedFieldsHasBeenSet = true; m_allowedFields = value; }
    inline void SetAllowedFields(Aws::Vector<RecordField>&& value) { m_allowedFieldsHasBeenSet = true; m_allowedFields = std::move(value); }
    inline ConfigurationTemplate& WithAllowedFields(const Aws::Vector<RecordField>& value) { SetAllowedFields(value); return *this;}
    inline ConfigurationTemplate& WithAllowedFields(Aws::Vector<RecordField>&& value) { SetAllowedFields(std::move(value)); return *this;}
    inline ConfigurationTemplate& AddAllowedFields(const RecordField& value) { m_allowedFieldsHasBeenSet = true; m_allowedFields.push_back(value); return *this; }
    inline ConfigurationTemplate& AddAllowedFields(RecordField&& value) { m_allowedFieldsHasBeenSet = true; m_allowedFields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of delivery destination output formats that are supported by this
     * log source.</p>
     */
    inline const Aws::Vector<OutputFormat>& GetAllowedOutputFormats() const{ return m_allowedOutputFormats; }
    inline bool AllowedOutputFormatsHasBeenSet() const { return m_allowedOutputFormatsHasBeenSet; }
    inline void SetAllowedOutputFormats(const Aws::Vector<OutputFormat>& value) { m_allowedOutputFormatsHasBeenSet = true; m_allowedOutputFormats = value; }
    inline void SetAllowedOutputFormats(Aws::Vector<OutputFormat>&& value) { m_allowedOutputFormatsHasBeenSet = true; m_allowedOutputFormats = std::move(value); }
    inline ConfigurationTemplate& WithAllowedOutputFormats(const Aws::Vector<OutputFormat>& value) { SetAllowedOutputFormats(value); return *this;}
    inline ConfigurationTemplate& WithAllowedOutputFormats(Aws::Vector<OutputFormat>&& value) { SetAllowedOutputFormats(std::move(value)); return *this;}
    inline ConfigurationTemplate& AddAllowedOutputFormats(const OutputFormat& value) { m_allowedOutputFormatsHasBeenSet = true; m_allowedOutputFormats.push_back(value); return *this; }
    inline ConfigurationTemplate& AddAllowedOutputFormats(OutputFormat&& value) { m_allowedOutputFormatsHasBeenSet = true; m_allowedOutputFormats.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The action permissions that a caller needs to have to be able to successfully
     * create a delivery source on the desired resource type when calling <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDeliverySource.html">PutDeliverySource</a>.</p>
     */
    inline const Aws::String& GetAllowedActionForAllowVendedLogsDeliveryForResource() const{ return m_allowedActionForAllowVendedLogsDeliveryForResource; }
    inline bool AllowedActionForAllowVendedLogsDeliveryForResourceHasBeenSet() const { return m_allowedActionForAllowVendedLogsDeliveryForResourceHasBeenSet; }
    inline void SetAllowedActionForAllowVendedLogsDeliveryForResource(const Aws::String& value) { m_allowedActionForAllowVendedLogsDeliveryForResourceHasBeenSet = true; m_allowedActionForAllowVendedLogsDeliveryForResource = value; }
    inline void SetAllowedActionForAllowVendedLogsDeliveryForResource(Aws::String&& value) { m_allowedActionForAllowVendedLogsDeliveryForResourceHasBeenSet = true; m_allowedActionForAllowVendedLogsDeliveryForResource = std::move(value); }
    inline void SetAllowedActionForAllowVendedLogsDeliveryForResource(const char* value) { m_allowedActionForAllowVendedLogsDeliveryForResourceHasBeenSet = true; m_allowedActionForAllowVendedLogsDeliveryForResource.assign(value); }
    inline ConfigurationTemplate& WithAllowedActionForAllowVendedLogsDeliveryForResource(const Aws::String& value) { SetAllowedActionForAllowVendedLogsDeliveryForResource(value); return *this;}
    inline ConfigurationTemplate& WithAllowedActionForAllowVendedLogsDeliveryForResource(Aws::String&& value) { SetAllowedActionForAllowVendedLogsDeliveryForResource(std::move(value)); return *this;}
    inline ConfigurationTemplate& WithAllowedActionForAllowVendedLogsDeliveryForResource(const char* value) { SetAllowedActionForAllowVendedLogsDeliveryForResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid values that a caller can use as field delimiters when calling <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CreateDelivery.html">CreateDelivery</a>
     * or <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_UpdateDeliveryConfiguration.html">UpdateDeliveryConfiguration</a>
     * on a delivery that delivers in <code>Plain</code>, <code>W3C</code>, or
     * <code>Raw</code> format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedFieldDelimiters() const{ return m_allowedFieldDelimiters; }
    inline bool AllowedFieldDelimitersHasBeenSet() const { return m_allowedFieldDelimitersHasBeenSet; }
    inline void SetAllowedFieldDelimiters(const Aws::Vector<Aws::String>& value) { m_allowedFieldDelimitersHasBeenSet = true; m_allowedFieldDelimiters = value; }
    inline void SetAllowedFieldDelimiters(Aws::Vector<Aws::String>&& value) { m_allowedFieldDelimitersHasBeenSet = true; m_allowedFieldDelimiters = std::move(value); }
    inline ConfigurationTemplate& WithAllowedFieldDelimiters(const Aws::Vector<Aws::String>& value) { SetAllowedFieldDelimiters(value); return *this;}
    inline ConfigurationTemplate& WithAllowedFieldDelimiters(Aws::Vector<Aws::String>&& value) { SetAllowedFieldDelimiters(std::move(value)); return *this;}
    inline ConfigurationTemplate& AddAllowedFieldDelimiters(const Aws::String& value) { m_allowedFieldDelimitersHasBeenSet = true; m_allowedFieldDelimiters.push_back(value); return *this; }
    inline ConfigurationTemplate& AddAllowedFieldDelimiters(Aws::String&& value) { m_allowedFieldDelimitersHasBeenSet = true; m_allowedFieldDelimiters.push_back(std::move(value)); return *this; }
    inline ConfigurationTemplate& AddAllowedFieldDelimiters(const char* value) { m_allowedFieldDelimitersHasBeenSet = true; m_allowedFieldDelimiters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of variable fields that can be used in the suffix path of a delivery
     * that delivers to an S3 bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedSuffixPathFields() const{ return m_allowedSuffixPathFields; }
    inline bool AllowedSuffixPathFieldsHasBeenSet() const { return m_allowedSuffixPathFieldsHasBeenSet; }
    inline void SetAllowedSuffixPathFields(const Aws::Vector<Aws::String>& value) { m_allowedSuffixPathFieldsHasBeenSet = true; m_allowedSuffixPathFields = value; }
    inline void SetAllowedSuffixPathFields(Aws::Vector<Aws::String>&& value) { m_allowedSuffixPathFieldsHasBeenSet = true; m_allowedSuffixPathFields = std::move(value); }
    inline ConfigurationTemplate& WithAllowedSuffixPathFields(const Aws::Vector<Aws::String>& value) { SetAllowedSuffixPathFields(value); return *this;}
    inline ConfigurationTemplate& WithAllowedSuffixPathFields(Aws::Vector<Aws::String>&& value) { SetAllowedSuffixPathFields(std::move(value)); return *this;}
    inline ConfigurationTemplate& AddAllowedSuffixPathFields(const Aws::String& value) { m_allowedSuffixPathFieldsHasBeenSet = true; m_allowedSuffixPathFields.push_back(value); return *this; }
    inline ConfigurationTemplate& AddAllowedSuffixPathFields(Aws::String&& value) { m_allowedSuffixPathFieldsHasBeenSet = true; m_allowedSuffixPathFields.push_back(std::move(value)); return *this; }
    inline ConfigurationTemplate& AddAllowedSuffixPathFields(const char* value) { m_allowedSuffixPathFieldsHasBeenSet = true; m_allowedSuffixPathFields.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_logType;
    bool m_logTypeHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    DeliveryDestinationType m_deliveryDestinationType;
    bool m_deliveryDestinationTypeHasBeenSet = false;

    ConfigurationTemplateDeliveryConfigValues m_defaultDeliveryConfigValues;
    bool m_defaultDeliveryConfigValuesHasBeenSet = false;

    Aws::Vector<RecordField> m_allowedFields;
    bool m_allowedFieldsHasBeenSet = false;

    Aws::Vector<OutputFormat> m_allowedOutputFormats;
    bool m_allowedOutputFormatsHasBeenSet = false;

    Aws::String m_allowedActionForAllowVendedLogsDeliveryForResource;
    bool m_allowedActionForAllowVendedLogsDeliveryForResourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedFieldDelimiters;
    bool m_allowedFieldDelimitersHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedSuffixPathFields;
    bool m_allowedSuffixPathFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
