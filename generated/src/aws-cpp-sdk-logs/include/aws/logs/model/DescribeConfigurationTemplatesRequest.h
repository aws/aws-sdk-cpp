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
    AWS_CLOUDWATCHLOGS_API DescribeConfigurationTemplatesRequest();

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
    inline const Aws::String& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }
    inline DescribeConfigurationTemplatesRequest& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline DescribeConfigurationTemplatesRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline DescribeConfigurationTemplatesRequest& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to filter the response to include only the configuration
     * templates that apply to the log types that you specify here.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogTypes() const{ return m_logTypes; }
    inline bool LogTypesHasBeenSet() const { return m_logTypesHasBeenSet; }
    inline void SetLogTypes(const Aws::Vector<Aws::String>& value) { m_logTypesHasBeenSet = true; m_logTypes = value; }
    inline void SetLogTypes(Aws::Vector<Aws::String>&& value) { m_logTypesHasBeenSet = true; m_logTypes = std::move(value); }
    inline DescribeConfigurationTemplatesRequest& WithLogTypes(const Aws::Vector<Aws::String>& value) { SetLogTypes(value); return *this;}
    inline DescribeConfigurationTemplatesRequest& WithLogTypes(Aws::Vector<Aws::String>&& value) { SetLogTypes(std::move(value)); return *this;}
    inline DescribeConfigurationTemplatesRequest& AddLogTypes(const Aws::String& value) { m_logTypesHasBeenSet = true; m_logTypes.push_back(value); return *this; }
    inline DescribeConfigurationTemplatesRequest& AddLogTypes(Aws::String&& value) { m_logTypesHasBeenSet = true; m_logTypes.push_back(std::move(value)); return *this; }
    inline DescribeConfigurationTemplatesRequest& AddLogTypes(const char* value) { m_logTypesHasBeenSet = true; m_logTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use this parameter to filter the response to include only the configuration
     * templates that apply to the resource types that you specify here.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }
    inline DescribeConfigurationTemplatesRequest& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}
    inline DescribeConfigurationTemplatesRequest& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(std::move(value)); return *this;}
    inline DescribeConfigurationTemplatesRequest& AddResourceTypes(const Aws::String& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    inline DescribeConfigurationTemplatesRequest& AddResourceTypes(Aws::String&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }
    inline DescribeConfigurationTemplatesRequest& AddResourceTypes(const char* value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use this parameter to filter the response to include only the configuration
     * templates that apply to the delivery destination types that you specify
     * here.</p>
     */
    inline const Aws::Vector<DeliveryDestinationType>& GetDeliveryDestinationTypes() const{ return m_deliveryDestinationTypes; }
    inline bool DeliveryDestinationTypesHasBeenSet() const { return m_deliveryDestinationTypesHasBeenSet; }
    inline void SetDeliveryDestinationTypes(const Aws::Vector<DeliveryDestinationType>& value) { m_deliveryDestinationTypesHasBeenSet = true; m_deliveryDestinationTypes = value; }
    inline void SetDeliveryDestinationTypes(Aws::Vector<DeliveryDestinationType>&& value) { m_deliveryDestinationTypesHasBeenSet = true; m_deliveryDestinationTypes = std::move(value); }
    inline DescribeConfigurationTemplatesRequest& WithDeliveryDestinationTypes(const Aws::Vector<DeliveryDestinationType>& value) { SetDeliveryDestinationTypes(value); return *this;}
    inline DescribeConfigurationTemplatesRequest& WithDeliveryDestinationTypes(Aws::Vector<DeliveryDestinationType>&& value) { SetDeliveryDestinationTypes(std::move(value)); return *this;}
    inline DescribeConfigurationTemplatesRequest& AddDeliveryDestinationTypes(const DeliveryDestinationType& value) { m_deliveryDestinationTypesHasBeenSet = true; m_deliveryDestinationTypes.push_back(value); return *this; }
    inline DescribeConfigurationTemplatesRequest& AddDeliveryDestinationTypes(DeliveryDestinationType&& value) { m_deliveryDestinationTypesHasBeenSet = true; m_deliveryDestinationTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeConfigurationTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeConfigurationTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeConfigurationTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to limit the number of configuration templates that are
     * returned in the response.</p>
     */
    inline int GetLimit() const{ return m_limit; }
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

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
