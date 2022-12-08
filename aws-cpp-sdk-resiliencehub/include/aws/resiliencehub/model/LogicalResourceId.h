/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a logical resource identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/LogicalResourceId">AWS
   * API Reference</a></p>
   */
  class LogicalResourceId
  {
  public:
    AWS_RESILIENCEHUB_API LogicalResourceId();
    AWS_RESILIENCEHUB_API LogicalResourceId(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API LogicalResourceId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the resource.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline LogicalResourceId& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the resource.</p>
     */
    inline LogicalResourceId& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the resource.</p>
     */
    inline LogicalResourceId& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The name of the CloudFormation stack this resource belongs to.</p>
     */
    inline const Aws::String& GetLogicalStackName() const{ return m_logicalStackName; }

    /**
     * <p>The name of the CloudFormation stack this resource belongs to.</p>
     */
    inline bool LogicalStackNameHasBeenSet() const { return m_logicalStackNameHasBeenSet; }

    /**
     * <p>The name of the CloudFormation stack this resource belongs to.</p>
     */
    inline void SetLogicalStackName(const Aws::String& value) { m_logicalStackNameHasBeenSet = true; m_logicalStackName = value; }

    /**
     * <p>The name of the CloudFormation stack this resource belongs to.</p>
     */
    inline void SetLogicalStackName(Aws::String&& value) { m_logicalStackNameHasBeenSet = true; m_logicalStackName = std::move(value); }

    /**
     * <p>The name of the CloudFormation stack this resource belongs to.</p>
     */
    inline void SetLogicalStackName(const char* value) { m_logicalStackNameHasBeenSet = true; m_logicalStackName.assign(value); }

    /**
     * <p>The name of the CloudFormation stack this resource belongs to.</p>
     */
    inline LogicalResourceId& WithLogicalStackName(const Aws::String& value) { SetLogicalStackName(value); return *this;}

    /**
     * <p>The name of the CloudFormation stack this resource belongs to.</p>
     */
    inline LogicalResourceId& WithLogicalStackName(Aws::String&& value) { SetLogicalStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudFormation stack this resource belongs to.</p>
     */
    inline LogicalResourceId& WithLogicalStackName(const char* value) { SetLogicalStackName(value); return *this;}


    /**
     * <p>The name of the resource group that this resource belongs to.</p>
     */
    inline const Aws::String& GetResourceGroupName() const{ return m_resourceGroupName; }

    /**
     * <p>The name of the resource group that this resource belongs to.</p>
     */
    inline bool ResourceGroupNameHasBeenSet() const { return m_resourceGroupNameHasBeenSet; }

    /**
     * <p>The name of the resource group that this resource belongs to.</p>
     */
    inline void SetResourceGroupName(const Aws::String& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = value; }

    /**
     * <p>The name of the resource group that this resource belongs to.</p>
     */
    inline void SetResourceGroupName(Aws::String&& value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName = std::move(value); }

    /**
     * <p>The name of the resource group that this resource belongs to.</p>
     */
    inline void SetResourceGroupName(const char* value) { m_resourceGroupNameHasBeenSet = true; m_resourceGroupName.assign(value); }

    /**
     * <p>The name of the resource group that this resource belongs to.</p>
     */
    inline LogicalResourceId& WithResourceGroupName(const Aws::String& value) { SetResourceGroupName(value); return *this;}

    /**
     * <p>The name of the resource group that this resource belongs to.</p>
     */
    inline LogicalResourceId& WithResourceGroupName(Aws::String&& value) { SetResourceGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource group that this resource belongs to.</p>
     */
    inline LogicalResourceId& WithResourceGroupName(const char* value) { SetResourceGroupName(value); return *this;}


    /**
     * <p> The name of the Terraform S3 state file this resource belongs to. </p>
     */
    inline const Aws::String& GetTerraformSourceName() const{ return m_terraformSourceName; }

    /**
     * <p> The name of the Terraform S3 state file this resource belongs to. </p>
     */
    inline bool TerraformSourceNameHasBeenSet() const { return m_terraformSourceNameHasBeenSet; }

    /**
     * <p> The name of the Terraform S3 state file this resource belongs to. </p>
     */
    inline void SetTerraformSourceName(const Aws::String& value) { m_terraformSourceNameHasBeenSet = true; m_terraformSourceName = value; }

    /**
     * <p> The name of the Terraform S3 state file this resource belongs to. </p>
     */
    inline void SetTerraformSourceName(Aws::String&& value) { m_terraformSourceNameHasBeenSet = true; m_terraformSourceName = std::move(value); }

    /**
     * <p> The name of the Terraform S3 state file this resource belongs to. </p>
     */
    inline void SetTerraformSourceName(const char* value) { m_terraformSourceNameHasBeenSet = true; m_terraformSourceName.assign(value); }

    /**
     * <p> The name of the Terraform S3 state file this resource belongs to. </p>
     */
    inline LogicalResourceId& WithTerraformSourceName(const Aws::String& value) { SetTerraformSourceName(value); return *this;}

    /**
     * <p> The name of the Terraform S3 state file this resource belongs to. </p>
     */
    inline LogicalResourceId& WithTerraformSourceName(Aws::String&& value) { SetTerraformSourceName(std::move(value)); return *this;}

    /**
     * <p> The name of the Terraform S3 state file this resource belongs to. </p>
     */
    inline LogicalResourceId& WithTerraformSourceName(const char* value) { SetTerraformSourceName(value); return *this;}

  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_logicalStackName;
    bool m_logicalStackNameHasBeenSet = false;

    Aws::String m_resourceGroupName;
    bool m_resourceGroupNameHasBeenSet = false;

    Aws::String m_terraformSourceName;
    bool m_terraformSourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
