/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/AggregateResourceIdentifier.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class BatchGetAggregateResourceConfigRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API BatchGetAggregateResourceConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetAggregateResourceConfig"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorName() const{ return m_configurationAggregatorName; }
    inline bool ConfigurationAggregatorNameHasBeenSet() const { return m_configurationAggregatorNameHasBeenSet; }
    inline void SetConfigurationAggregatorName(const Aws::String& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = value; }
    inline void SetConfigurationAggregatorName(Aws::String&& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = std::move(value); }
    inline void SetConfigurationAggregatorName(const char* value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName.assign(value); }
    inline BatchGetAggregateResourceConfigRequest& WithConfigurationAggregatorName(const Aws::String& value) { SetConfigurationAggregatorName(value); return *this;}
    inline BatchGetAggregateResourceConfigRequest& WithConfigurationAggregatorName(Aws::String&& value) { SetConfigurationAggregatorName(std::move(value)); return *this;}
    inline BatchGetAggregateResourceConfigRequest& WithConfigurationAggregatorName(const char* value) { SetConfigurationAggregatorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of aggregate ResourceIdentifiers objects. </p>
     */
    inline const Aws::Vector<AggregateResourceIdentifier>& GetResourceIdentifiers() const{ return m_resourceIdentifiers; }
    inline bool ResourceIdentifiersHasBeenSet() const { return m_resourceIdentifiersHasBeenSet; }
    inline void SetResourceIdentifiers(const Aws::Vector<AggregateResourceIdentifier>& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers = value; }
    inline void SetResourceIdentifiers(Aws::Vector<AggregateResourceIdentifier>&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers = std::move(value); }
    inline BatchGetAggregateResourceConfigRequest& WithResourceIdentifiers(const Aws::Vector<AggregateResourceIdentifier>& value) { SetResourceIdentifiers(value); return *this;}
    inline BatchGetAggregateResourceConfigRequest& WithResourceIdentifiers(Aws::Vector<AggregateResourceIdentifier>&& value) { SetResourceIdentifiers(std::move(value)); return *this;}
    inline BatchGetAggregateResourceConfigRequest& AddResourceIdentifiers(const AggregateResourceIdentifier& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.push_back(value); return *this; }
    inline BatchGetAggregateResourceConfigRequest& AddResourceIdentifiers(AggregateResourceIdentifier&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_configurationAggregatorName;
    bool m_configurationAggregatorNameHasBeenSet = false;

    Aws::Vector<AggregateResourceIdentifier> m_resourceIdentifiers;
    bool m_resourceIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
