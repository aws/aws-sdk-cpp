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
    AWS_CLOUDWATCHLOGS_API ConfigurationTemplate() = default;
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
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    ConfigurationTemplate& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string specifying which log type this configuration template applies
     * to.</p>
     */
    inline const Aws::String& GetLogType() const { return m_logType; }
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }
    template<typename LogTypeT = Aws::String>
    void SetLogType(LogTypeT&& value) { m_logTypeHasBeenSet = true; m_logType = std::forward<LogTypeT>(value); }
    template<typename LogTypeT = Aws::String>
    ConfigurationTemplate& WithLogType(LogTypeT&& value) { SetLogType(std::forward<LogTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string specifying which resource type this configuration template applies
     * to.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ConfigurationTemplate& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string specifying which destination type this configuration template
     * applies to.</p>
     */
    inline DeliveryDestinationType GetDeliveryDestinationType() const { return m_deliveryDestinationType; }
    inline bool DeliveryDestinationTypeHasBeenSet() const { return m_deliveryDestinationTypeHasBeenSet; }
    inline void SetDeliveryDestinationType(DeliveryDestinationType value) { m_deliveryDestinationTypeHasBeenSet = true; m_deliveryDestinationType = value; }
    inline ConfigurationTemplate& WithDeliveryDestinationType(DeliveryDestinationType value) { SetDeliveryDestinationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mapping that displays the default value of each property within a
     * delivery's configuration, if it is not specified in the request.</p>
     */
    inline const ConfigurationTemplateDeliveryConfigValues& GetDefaultDeliveryConfigValues() const { return m_defaultDeliveryConfigValues; }
    inline bool DefaultDeliveryConfigValuesHasBeenSet() const { return m_defaultDeliveryConfigValuesHasBeenSet; }
    template<typename DefaultDeliveryConfigValuesT = ConfigurationTemplateDeliveryConfigValues>
    void SetDefaultDeliveryConfigValues(DefaultDeliveryConfigValuesT&& value) { m_defaultDeliveryConfigValuesHasBeenSet = true; m_defaultDeliveryConfigValues = std::forward<DefaultDeliveryConfigValuesT>(value); }
    template<typename DefaultDeliveryConfigValuesT = ConfigurationTemplateDeliveryConfigValues>
    ConfigurationTemplate& WithDefaultDeliveryConfigValues(DefaultDeliveryConfigValuesT&& value) { SetDefaultDeliveryConfigValues(std::forward<DefaultDeliveryConfigValuesT>(value)); return *this;}
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
    inline const Aws::Vector<RecordField>& GetAllowedFields() const { return m_allowedFields; }
    inline bool AllowedFieldsHasBeenSet() const { return m_allowedFieldsHasBeenSet; }
    template<typename AllowedFieldsT = Aws::Vector<RecordField>>
    void SetAllowedFields(AllowedFieldsT&& value) { m_allowedFieldsHasBeenSet = true; m_allowedFields = std::forward<AllowedFieldsT>(value); }
    template<typename AllowedFieldsT = Aws::Vector<RecordField>>
    ConfigurationTemplate& WithAllowedFields(AllowedFieldsT&& value) { SetAllowedFields(std::forward<AllowedFieldsT>(value)); return *this;}
    template<typename AllowedFieldsT = RecordField>
    ConfigurationTemplate& AddAllowedFields(AllowedFieldsT&& value) { m_allowedFieldsHasBeenSet = true; m_allowedFields.emplace_back(std::forward<AllowedFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of delivery destination output formats that are supported by this
     * log source.</p>
     */
    inline const Aws::Vector<OutputFormat>& GetAllowedOutputFormats() const { return m_allowedOutputFormats; }
    inline bool AllowedOutputFormatsHasBeenSet() const { return m_allowedOutputFormatsHasBeenSet; }
    template<typename AllowedOutputFormatsT = Aws::Vector<OutputFormat>>
    void SetAllowedOutputFormats(AllowedOutputFormatsT&& value) { m_allowedOutputFormatsHasBeenSet = true; m_allowedOutputFormats = std::forward<AllowedOutputFormatsT>(value); }
    template<typename AllowedOutputFormatsT = Aws::Vector<OutputFormat>>
    ConfigurationTemplate& WithAllowedOutputFormats(AllowedOutputFormatsT&& value) { SetAllowedOutputFormats(std::forward<AllowedOutputFormatsT>(value)); return *this;}
    inline ConfigurationTemplate& AddAllowedOutputFormats(OutputFormat value) { m_allowedOutputFormatsHasBeenSet = true; m_allowedOutputFormats.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The action permissions that a caller needs to have to be able to successfully
     * create a delivery source on the desired resource type when calling <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDeliverySource.html">PutDeliverySource</a>.</p>
     */
    inline const Aws::String& GetAllowedActionForAllowVendedLogsDeliveryForResource() const { return m_allowedActionForAllowVendedLogsDeliveryForResource; }
    inline bool AllowedActionForAllowVendedLogsDeliveryForResourceHasBeenSet() const { return m_allowedActionForAllowVendedLogsDeliveryForResourceHasBeenSet; }
    template<typename AllowedActionForAllowVendedLogsDeliveryForResourceT = Aws::String>
    void SetAllowedActionForAllowVendedLogsDeliveryForResource(AllowedActionForAllowVendedLogsDeliveryForResourceT&& value) { m_allowedActionForAllowVendedLogsDeliveryForResourceHasBeenSet = true; m_allowedActionForAllowVendedLogsDeliveryForResource = std::forward<AllowedActionForAllowVendedLogsDeliveryForResourceT>(value); }
    template<typename AllowedActionForAllowVendedLogsDeliveryForResourceT = Aws::String>
    ConfigurationTemplate& WithAllowedActionForAllowVendedLogsDeliveryForResource(AllowedActionForAllowVendedLogsDeliveryForResourceT&& value) { SetAllowedActionForAllowVendedLogsDeliveryForResource(std::forward<AllowedActionForAllowVendedLogsDeliveryForResourceT>(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetAllowedFieldDelimiters() const { return m_allowedFieldDelimiters; }
    inline bool AllowedFieldDelimitersHasBeenSet() const { return m_allowedFieldDelimitersHasBeenSet; }
    template<typename AllowedFieldDelimitersT = Aws::Vector<Aws::String>>
    void SetAllowedFieldDelimiters(AllowedFieldDelimitersT&& value) { m_allowedFieldDelimitersHasBeenSet = true; m_allowedFieldDelimiters = std::forward<AllowedFieldDelimitersT>(value); }
    template<typename AllowedFieldDelimitersT = Aws::Vector<Aws::String>>
    ConfigurationTemplate& WithAllowedFieldDelimiters(AllowedFieldDelimitersT&& value) { SetAllowedFieldDelimiters(std::forward<AllowedFieldDelimitersT>(value)); return *this;}
    template<typename AllowedFieldDelimitersT = Aws::String>
    ConfigurationTemplate& AddAllowedFieldDelimiters(AllowedFieldDelimitersT&& value) { m_allowedFieldDelimitersHasBeenSet = true; m_allowedFieldDelimiters.emplace_back(std::forward<AllowedFieldDelimitersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of variable fields that can be used in the suffix path of a delivery
     * that delivers to an S3 bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedSuffixPathFields() const { return m_allowedSuffixPathFields; }
    inline bool AllowedSuffixPathFieldsHasBeenSet() const { return m_allowedSuffixPathFieldsHasBeenSet; }
    template<typename AllowedSuffixPathFieldsT = Aws::Vector<Aws::String>>
    void SetAllowedSuffixPathFields(AllowedSuffixPathFieldsT&& value) { m_allowedSuffixPathFieldsHasBeenSet = true; m_allowedSuffixPathFields = std::forward<AllowedSuffixPathFieldsT>(value); }
    template<typename AllowedSuffixPathFieldsT = Aws::Vector<Aws::String>>
    ConfigurationTemplate& WithAllowedSuffixPathFields(AllowedSuffixPathFieldsT&& value) { SetAllowedSuffixPathFields(std::forward<AllowedSuffixPathFieldsT>(value)); return *this;}
    template<typename AllowedSuffixPathFieldsT = Aws::String>
    ConfigurationTemplate& AddAllowedSuffixPathFields(AllowedSuffixPathFieldsT&& value) { m_allowedSuffixPathFieldsHasBeenSet = true; m_allowedSuffixPathFields.emplace_back(std::forward<AllowedSuffixPathFieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_logType;
    bool m_logTypeHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    DeliveryDestinationType m_deliveryDestinationType{DeliveryDestinationType::NOT_SET};
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
