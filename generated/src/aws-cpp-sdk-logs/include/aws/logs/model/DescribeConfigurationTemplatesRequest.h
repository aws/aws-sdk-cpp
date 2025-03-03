/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/model/DeliveryDestinationType.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class DescribeConfigurationTemplatesRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeConfigurationTemplatesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationTemplates"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Use this parameter to filter the response to include only the configuration
     * templates that apply to the Amazon Web Services service that you specify
     * here.</p>
     */
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    DescribeConfigurationTemplatesRequest& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to filter the response to include only the configuration
     * templates that apply to the log types that you specify here.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogTypes() const { return m_logTypes; }
    inline bool LogTypesHasBeenSet() const { return m_logTypesHasBeenSet; }
    template<typename LogTypesT = Aws::Vector<Aws::String>>
    void SetLogTypes(LogTypesT&& value) { m_logTypesHasBeenSet = true; m_logTypes = std::forward<LogTypesT>(value); }
    template<typename LogTypesT = Aws::Vector<Aws::String>>
    DescribeConfigurationTemplatesRequest& WithLogTypes(LogTypesT&& value) { SetLogTypes(std::forward<LogTypesT>(value)); return *this;}
    template<typename LogTypesT = Aws::String>
    DescribeConfigurationTemplatesRequest& AddLogTypes(LogTypesT&& value) { m_logTypesHasBeenSet = true; m_logTypes.emplace_back(std::forward<LogTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use this parameter to filter the response to include only the configuration
     * templates that apply to the resource types that you specify here.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<Aws::String>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<Aws::String>>
    DescribeConfigurationTemplatesRequest& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    template<typename ResourceTypesT = Aws::String>
    DescribeConfigurationTemplatesRequest& AddResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.emplace_back(std::forward<ResourceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use this parameter to filter the response to include only the configuration
     * templates that apply to the delivery destination types that you specify
     * here.</p>
     */
    inline const Aws::Vector<DeliveryDestinationType>& GetDeliveryDestinationTypes() const { return m_deliveryDestinationTypes; }
    inline bool DeliveryDestinationTypesHasBeenSet() const { return m_deliveryDestinationTypesHasBeenSet; }
    template<typename DeliveryDestinationTypesT = Aws::Vector<DeliveryDestinationType>>
    void SetDeliveryDestinationTypes(DeliveryDestinationTypesT&& value) { m_deliveryDestinationTypesHasBeenSet = true; m_deliveryDestinationTypes = std::forward<DeliveryDestinationTypesT>(value); }
    template<typename DeliveryDestinationTypesT = Aws::Vector<DeliveryDestinationType>>
    DescribeConfigurationTemplatesRequest& WithDeliveryDestinationTypes(DeliveryDestinationTypesT&& value) { SetDeliveryDestinationTypes(std::forward<DeliveryDestinationTypesT>(value)); return *this;}
    inline DescribeConfigurationTemplatesRequest& AddDeliveryDestinationTypes(DeliveryDestinationType value) { m_deliveryDestinationTypesHasBeenSet = true; m_deliveryDestinationTypes.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeConfigurationTemplatesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to limit the number of configuration templates that are
     * returned in the response.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeConfigurationTemplatesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::Vector<Aws::String> m_logTypes;
    bool m_logTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::Vector<DeliveryDestinationType> m_deliveryDestinationTypes;
    bool m_deliveryDestinationTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
