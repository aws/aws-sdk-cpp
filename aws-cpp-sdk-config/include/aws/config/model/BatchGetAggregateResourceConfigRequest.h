/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CONFIGSERVICE_API BatchGetAggregateResourceConfigRequest : public ConfigServiceRequest
  {
  public:
    BatchGetAggregateResourceConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetAggregateResourceConfig"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline const Aws::String& GetConfigurationAggregatorName() const{ return m_configurationAggregatorName; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline bool ConfigurationAggregatorNameHasBeenSet() const { return m_configurationAggregatorNameHasBeenSet; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(const Aws::String& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = value; }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(Aws::String&& value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName = std::move(value); }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline void SetConfigurationAggregatorName(const char* value) { m_configurationAggregatorNameHasBeenSet = true; m_configurationAggregatorName.assign(value); }

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline BatchGetAggregateResourceConfigRequest& WithConfigurationAggregatorName(const Aws::String& value) { SetConfigurationAggregatorName(value); return *this;}

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline BatchGetAggregateResourceConfigRequest& WithConfigurationAggregatorName(Aws::String&& value) { SetConfigurationAggregatorName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration aggregator.</p>
     */
    inline BatchGetAggregateResourceConfigRequest& WithConfigurationAggregatorName(const char* value) { SetConfigurationAggregatorName(value); return *this;}


    /**
     * <p>A list of aggregate ResourceIdentifiers objects. </p>
     */
    inline const Aws::Vector<AggregateResourceIdentifier>& GetResourceIdentifiers() const{ return m_resourceIdentifiers; }

    /**
     * <p>A list of aggregate ResourceIdentifiers objects. </p>
     */
    inline bool ResourceIdentifiersHasBeenSet() const { return m_resourceIdentifiersHasBeenSet; }

    /**
     * <p>A list of aggregate ResourceIdentifiers objects. </p>
     */
    inline void SetResourceIdentifiers(const Aws::Vector<AggregateResourceIdentifier>& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers = value; }

    /**
     * <p>A list of aggregate ResourceIdentifiers objects. </p>
     */
    inline void SetResourceIdentifiers(Aws::Vector<AggregateResourceIdentifier>&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers = std::move(value); }

    /**
     * <p>A list of aggregate ResourceIdentifiers objects. </p>
     */
    inline BatchGetAggregateResourceConfigRequest& WithResourceIdentifiers(const Aws::Vector<AggregateResourceIdentifier>& value) { SetResourceIdentifiers(value); return *this;}

    /**
     * <p>A list of aggregate ResourceIdentifiers objects. </p>
     */
    inline BatchGetAggregateResourceConfigRequest& WithResourceIdentifiers(Aws::Vector<AggregateResourceIdentifier>&& value) { SetResourceIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list of aggregate ResourceIdentifiers objects. </p>
     */
    inline BatchGetAggregateResourceConfigRequest& AddResourceIdentifiers(const AggregateResourceIdentifier& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.push_back(value); return *this; }

    /**
     * <p>A list of aggregate ResourceIdentifiers objects. </p>
     */
    inline BatchGetAggregateResourceConfigRequest& AddResourceIdentifiers(AggregateResourceIdentifier&& value) { m_resourceIdentifiersHasBeenSet = true; m_resourceIdentifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_configurationAggregatorName;
    bool m_configurationAggregatorNameHasBeenSet;

    Aws::Vector<AggregateResourceIdentifier> m_resourceIdentifiers;
    bool m_resourceIdentifiersHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
