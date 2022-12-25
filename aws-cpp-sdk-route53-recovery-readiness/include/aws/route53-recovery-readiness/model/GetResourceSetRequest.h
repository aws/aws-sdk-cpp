/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   */
  class GetResourceSetRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API GetResourceSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceSet"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>Name of a resource set.</p>
     */
    inline const Aws::String& GetResourceSetName() const{ return m_resourceSetName; }

    /**
     * <p>Name of a resource set.</p>
     */
    inline bool ResourceSetNameHasBeenSet() const { return m_resourceSetNameHasBeenSet; }

    /**
     * <p>Name of a resource set.</p>
     */
    inline void SetResourceSetName(const Aws::String& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = value; }

    /**
     * <p>Name of a resource set.</p>
     */
    inline void SetResourceSetName(Aws::String&& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = std::move(value); }

    /**
     * <p>Name of a resource set.</p>
     */
    inline void SetResourceSetName(const char* value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName.assign(value); }

    /**
     * <p>Name of a resource set.</p>
     */
    inline GetResourceSetRequest& WithResourceSetName(const Aws::String& value) { SetResourceSetName(value); return *this;}

    /**
     * <p>Name of a resource set.</p>
     */
    inline GetResourceSetRequest& WithResourceSetName(Aws::String&& value) { SetResourceSetName(std::move(value)); return *this;}

    /**
     * <p>Name of a resource set.</p>
     */
    inline GetResourceSetRequest& WithResourceSetName(const char* value) { SetResourceSetName(value); return *this;}

  private:

    Aws::String m_resourceSetName;
    bool m_resourceSetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
