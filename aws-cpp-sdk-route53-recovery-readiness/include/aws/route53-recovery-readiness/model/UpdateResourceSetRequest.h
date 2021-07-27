/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/Resource.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * configuration for the desired<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateResourceSetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API UpdateResourceSetRequest : public Route53RecoveryReadinessRequest
  {
  public:
    UpdateResourceSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceSet"; }

    Aws::String SerializePayload() const override;


    /**
     * The ResourceSet to update
     */
    inline const Aws::String& GetResourceSetName() const{ return m_resourceSetName; }

    /**
     * The ResourceSet to update
     */
    inline bool ResourceSetNameHasBeenSet() const { return m_resourceSetNameHasBeenSet; }

    /**
     * The ResourceSet to update
     */
    inline void SetResourceSetName(const Aws::String& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = value; }

    /**
     * The ResourceSet to update
     */
    inline void SetResourceSetName(Aws::String&& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = std::move(value); }

    /**
     * The ResourceSet to update
     */
    inline void SetResourceSetName(const char* value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName.assign(value); }

    /**
     * The ResourceSet to update
     */
    inline UpdateResourceSetRequest& WithResourceSetName(const Aws::String& value) { SetResourceSetName(value); return *this;}

    /**
     * The ResourceSet to update
     */
    inline UpdateResourceSetRequest& WithResourceSetName(Aws::String&& value) { SetResourceSetName(std::move(value)); return *this;}

    /**
     * The ResourceSet to update
     */
    inline UpdateResourceSetRequest& WithResourceSetName(const char* value) { SetResourceSetName(value); return *this;}


    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline const Aws::String& GetResourceSetType() const{ return m_resourceSetType; }

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline bool ResourceSetTypeHasBeenSet() const { return m_resourceSetTypeHasBeenSet; }

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline void SetResourceSetType(const Aws::String& value) { m_resourceSetTypeHasBeenSet = true; m_resourceSetType = value; }

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline void SetResourceSetType(Aws::String&& value) { m_resourceSetTypeHasBeenSet = true; m_resourceSetType = std::move(value); }

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline void SetResourceSetType(const char* value) { m_resourceSetTypeHasBeenSet = true; m_resourceSetType.assign(value); }

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline UpdateResourceSetRequest& WithResourceSetType(const Aws::String& value) { SetResourceSetType(value); return *this;}

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline UpdateResourceSetRequest& WithResourceSetType(Aws::String&& value) { SetResourceSetType(std::move(value)); return *this;}

    /**
     * AWS Resource Type of the resources in the ResourceSet
     */
    inline UpdateResourceSetRequest& WithResourceSetType(const char* value) { SetResourceSetType(value); return *this;}


    /**
     * A list of Resource objects
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    /**
     * A list of Resource objects
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * A list of Resource objects
     */
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * A list of Resource objects
     */
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * A list of Resource objects
     */
    inline UpdateResourceSetRequest& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    /**
     * A list of Resource objects
     */
    inline UpdateResourceSetRequest& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * A list of Resource objects
     */
    inline UpdateResourceSetRequest& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * A list of Resource objects
     */
    inline UpdateResourceSetRequest& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceSetName;
    bool m_resourceSetNameHasBeenSet;

    Aws::String m_resourceSetType;
    bool m_resourceSetTypeHasBeenSet;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
