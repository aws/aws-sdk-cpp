﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class AWS_RESILIENCEHUB_API RemoveDraftAppVersionResourceMappingsRequest : public ResilienceHubRequest
  {
  public:
    RemoveDraftAppVersionResourceMappingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveDraftAppVersionResourceMappings"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:dcps:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:dcps:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:dcps:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:dcps:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:dcps:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:dcps:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:dcps:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application. The format for this ARN
     * is:
     * arn:<code>partition</code>:dcps:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>The names of the registered applications to remove from the resource
     * mappings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAppRegistryAppNames() const{ return m_appRegistryAppNames; }

    /**
     * <p>The names of the registered applications to remove from the resource
     * mappings.</p>
     */
    inline bool AppRegistryAppNamesHasBeenSet() const { return m_appRegistryAppNamesHasBeenSet; }

    /**
     * <p>The names of the registered applications to remove from the resource
     * mappings.</p>
     */
    inline void SetAppRegistryAppNames(const Aws::Vector<Aws::String>& value) { m_appRegistryAppNamesHasBeenSet = true; m_appRegistryAppNames = value; }

    /**
     * <p>The names of the registered applications to remove from the resource
     * mappings.</p>
     */
    inline void SetAppRegistryAppNames(Aws::Vector<Aws::String>&& value) { m_appRegistryAppNamesHasBeenSet = true; m_appRegistryAppNames = std::move(value); }

    /**
     * <p>The names of the registered applications to remove from the resource
     * mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& WithAppRegistryAppNames(const Aws::Vector<Aws::String>& value) { SetAppRegistryAppNames(value); return *this;}

    /**
     * <p>The names of the registered applications to remove from the resource
     * mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& WithAppRegistryAppNames(Aws::Vector<Aws::String>&& value) { SetAppRegistryAppNames(std::move(value)); return *this;}

    /**
     * <p>The names of the registered applications to remove from the resource
     * mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& AddAppRegistryAppNames(const Aws::String& value) { m_appRegistryAppNamesHasBeenSet = true; m_appRegistryAppNames.push_back(value); return *this; }

    /**
     * <p>The names of the registered applications to remove from the resource
     * mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& AddAppRegistryAppNames(Aws::String&& value) { m_appRegistryAppNamesHasBeenSet = true; m_appRegistryAppNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the registered applications to remove from the resource
     * mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& AddAppRegistryAppNames(const char* value) { m_appRegistryAppNamesHasBeenSet = true; m_appRegistryAppNames.push_back(value); return *this; }


    /**
     * <p>The names of the CloudFormation stacks to remove from the resource
     * mappings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogicalStackNames() const{ return m_logicalStackNames; }

    /**
     * <p>The names of the CloudFormation stacks to remove from the resource
     * mappings.</p>
     */
    inline bool LogicalStackNamesHasBeenSet() const { return m_logicalStackNamesHasBeenSet; }

    /**
     * <p>The names of the CloudFormation stacks to remove from the resource
     * mappings.</p>
     */
    inline void SetLogicalStackNames(const Aws::Vector<Aws::String>& value) { m_logicalStackNamesHasBeenSet = true; m_logicalStackNames = value; }

    /**
     * <p>The names of the CloudFormation stacks to remove from the resource
     * mappings.</p>
     */
    inline void SetLogicalStackNames(Aws::Vector<Aws::String>&& value) { m_logicalStackNamesHasBeenSet = true; m_logicalStackNames = std::move(value); }

    /**
     * <p>The names of the CloudFormation stacks to remove from the resource
     * mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& WithLogicalStackNames(const Aws::Vector<Aws::String>& value) { SetLogicalStackNames(value); return *this;}

    /**
     * <p>The names of the CloudFormation stacks to remove from the resource
     * mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& WithLogicalStackNames(Aws::Vector<Aws::String>&& value) { SetLogicalStackNames(std::move(value)); return *this;}

    /**
     * <p>The names of the CloudFormation stacks to remove from the resource
     * mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& AddLogicalStackNames(const Aws::String& value) { m_logicalStackNamesHasBeenSet = true; m_logicalStackNames.push_back(value); return *this; }

    /**
     * <p>The names of the CloudFormation stacks to remove from the resource
     * mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& AddLogicalStackNames(Aws::String&& value) { m_logicalStackNamesHasBeenSet = true; m_logicalStackNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the CloudFormation stacks to remove from the resource
     * mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& AddLogicalStackNames(const char* value) { m_logicalStackNamesHasBeenSet = true; m_logicalStackNames.push_back(value); return *this; }


    /**
     * <p>The names of the resource groups to remove from the resource mappings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceGroupNames() const{ return m_resourceGroupNames; }

    /**
     * <p>The names of the resource groups to remove from the resource mappings.</p>
     */
    inline bool ResourceGroupNamesHasBeenSet() const { return m_resourceGroupNamesHasBeenSet; }

    /**
     * <p>The names of the resource groups to remove from the resource mappings.</p>
     */
    inline void SetResourceGroupNames(const Aws::Vector<Aws::String>& value) { m_resourceGroupNamesHasBeenSet = true; m_resourceGroupNames = value; }

    /**
     * <p>The names of the resource groups to remove from the resource mappings.</p>
     */
    inline void SetResourceGroupNames(Aws::Vector<Aws::String>&& value) { m_resourceGroupNamesHasBeenSet = true; m_resourceGroupNames = std::move(value); }

    /**
     * <p>The names of the resource groups to remove from the resource mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& WithResourceGroupNames(const Aws::Vector<Aws::String>& value) { SetResourceGroupNames(value); return *this;}

    /**
     * <p>The names of the resource groups to remove from the resource mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& WithResourceGroupNames(Aws::Vector<Aws::String>&& value) { SetResourceGroupNames(std::move(value)); return *this;}

    /**
     * <p>The names of the resource groups to remove from the resource mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& AddResourceGroupNames(const Aws::String& value) { m_resourceGroupNamesHasBeenSet = true; m_resourceGroupNames.push_back(value); return *this; }

    /**
     * <p>The names of the resource groups to remove from the resource mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& AddResourceGroupNames(Aws::String&& value) { m_resourceGroupNamesHasBeenSet = true; m_resourceGroupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the resource groups to remove from the resource mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& AddResourceGroupNames(const char* value) { m_resourceGroupNamesHasBeenSet = true; m_resourceGroupNames.push_back(value); return *this; }


    /**
     * <p>The names of the resources to remove from the resource mappings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceNames() const{ return m_resourceNames; }

    /**
     * <p>The names of the resources to remove from the resource mappings.</p>
     */
    inline bool ResourceNamesHasBeenSet() const { return m_resourceNamesHasBeenSet; }

    /**
     * <p>The names of the resources to remove from the resource mappings.</p>
     */
    inline void SetResourceNames(const Aws::Vector<Aws::String>& value) { m_resourceNamesHasBeenSet = true; m_resourceNames = value; }

    /**
     * <p>The names of the resources to remove from the resource mappings.</p>
     */
    inline void SetResourceNames(Aws::Vector<Aws::String>&& value) { m_resourceNamesHasBeenSet = true; m_resourceNames = std::move(value); }

    /**
     * <p>The names of the resources to remove from the resource mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& WithResourceNames(const Aws::Vector<Aws::String>& value) { SetResourceNames(value); return *this;}

    /**
     * <p>The names of the resources to remove from the resource mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& WithResourceNames(Aws::Vector<Aws::String>&& value) { SetResourceNames(std::move(value)); return *this;}

    /**
     * <p>The names of the resources to remove from the resource mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& AddResourceNames(const Aws::String& value) { m_resourceNamesHasBeenSet = true; m_resourceNames.push_back(value); return *this; }

    /**
     * <p>The names of the resources to remove from the resource mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& AddResourceNames(Aws::String&& value) { m_resourceNamesHasBeenSet = true; m_resourceNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the resources to remove from the resource mappings.</p>
     */
    inline RemoveDraftAppVersionResourceMappingsRequest& AddResourceNames(const char* value) { m_resourceNamesHasBeenSet = true; m_resourceNames.push_back(value); return *this; }

  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet;

    Aws::Vector<Aws::String> m_appRegistryAppNames;
    bool m_appRegistryAppNamesHasBeenSet;

    Aws::Vector<Aws::String> m_logicalStackNames;
    bool m_logicalStackNamesHasBeenSet;

    Aws::Vector<Aws::String> m_resourceGroupNames;
    bool m_resourceGroupNamesHasBeenSet;

    Aws::Vector<Aws::String> m_resourceNames;
    bool m_resourceNamesHasBeenSet;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
