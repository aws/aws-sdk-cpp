﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/TypeConfigurationIdentifier.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFORMATION_API BatchDescribeTypeConfigurationsRequest : public CloudFormationRequest
  {
  public:
    BatchDescribeTypeConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDescribeTypeConfigurations"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The list of identifiers for the desired extension configurations.</p>
     */
    inline const Aws::Vector<TypeConfigurationIdentifier>& GetTypeConfigurationIdentifiers() const{ return m_typeConfigurationIdentifiers; }

    /**
     * <p>The list of identifiers for the desired extension configurations.</p>
     */
    inline bool TypeConfigurationIdentifiersHasBeenSet() const { return m_typeConfigurationIdentifiersHasBeenSet; }

    /**
     * <p>The list of identifiers for the desired extension configurations.</p>
     */
    inline void SetTypeConfigurationIdentifiers(const Aws::Vector<TypeConfigurationIdentifier>& value) { m_typeConfigurationIdentifiersHasBeenSet = true; m_typeConfigurationIdentifiers = value; }

    /**
     * <p>The list of identifiers for the desired extension configurations.</p>
     */
    inline void SetTypeConfigurationIdentifiers(Aws::Vector<TypeConfigurationIdentifier>&& value) { m_typeConfigurationIdentifiersHasBeenSet = true; m_typeConfigurationIdentifiers = std::move(value); }

    /**
     * <p>The list of identifiers for the desired extension configurations.</p>
     */
    inline BatchDescribeTypeConfigurationsRequest& WithTypeConfigurationIdentifiers(const Aws::Vector<TypeConfigurationIdentifier>& value) { SetTypeConfigurationIdentifiers(value); return *this;}

    /**
     * <p>The list of identifiers for the desired extension configurations.</p>
     */
    inline BatchDescribeTypeConfigurationsRequest& WithTypeConfigurationIdentifiers(Aws::Vector<TypeConfigurationIdentifier>&& value) { SetTypeConfigurationIdentifiers(std::move(value)); return *this;}

    /**
     * <p>The list of identifiers for the desired extension configurations.</p>
     */
    inline BatchDescribeTypeConfigurationsRequest& AddTypeConfigurationIdentifiers(const TypeConfigurationIdentifier& value) { m_typeConfigurationIdentifiersHasBeenSet = true; m_typeConfigurationIdentifiers.push_back(value); return *this; }

    /**
     * <p>The list of identifiers for the desired extension configurations.</p>
     */
    inline BatchDescribeTypeConfigurationsRequest& AddTypeConfigurationIdentifiers(TypeConfigurationIdentifier&& value) { m_typeConfigurationIdentifiersHasBeenSet = true; m_typeConfigurationIdentifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TypeConfigurationIdentifier> m_typeConfigurationIdentifiers;
    bool m_typeConfigurationIdentifiersHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
