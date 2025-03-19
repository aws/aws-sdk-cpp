/**
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
  class BatchDescribeTypeConfigurationsRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API BatchDescribeTypeConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDescribeTypeConfigurations"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The list of identifiers for the desired extension configurations.</p>
     */
    inline const Aws::Vector<TypeConfigurationIdentifier>& GetTypeConfigurationIdentifiers() const { return m_typeConfigurationIdentifiers; }
    inline bool TypeConfigurationIdentifiersHasBeenSet() const { return m_typeConfigurationIdentifiersHasBeenSet; }
    template<typename TypeConfigurationIdentifiersT = Aws::Vector<TypeConfigurationIdentifier>>
    void SetTypeConfigurationIdentifiers(TypeConfigurationIdentifiersT&& value) { m_typeConfigurationIdentifiersHasBeenSet = true; m_typeConfigurationIdentifiers = std::forward<TypeConfigurationIdentifiersT>(value); }
    template<typename TypeConfigurationIdentifiersT = Aws::Vector<TypeConfigurationIdentifier>>
    BatchDescribeTypeConfigurationsRequest& WithTypeConfigurationIdentifiers(TypeConfigurationIdentifiersT&& value) { SetTypeConfigurationIdentifiers(std::forward<TypeConfigurationIdentifiersT>(value)); return *this;}
    template<typename TypeConfigurationIdentifiersT = TypeConfigurationIdentifier>
    BatchDescribeTypeConfigurationsRequest& AddTypeConfigurationIdentifiers(TypeConfigurationIdentifiersT&& value) { m_typeConfigurationIdentifiersHasBeenSet = true; m_typeConfigurationIdentifiers.emplace_back(std::forward<TypeConfigurationIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<TypeConfigurationIdentifier> m_typeConfigurationIdentifiers;
    bool m_typeConfigurationIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
