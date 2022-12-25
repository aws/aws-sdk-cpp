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
   * <p>Name of a readiness check to describe.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateReadinessCheckRequest">AWS
   * API Reference</a></p>
   */
  class UpdateReadinessCheckRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API UpdateReadinessCheckRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReadinessCheck"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>Name of a readiness check.</p>
     */
    inline const Aws::String& GetReadinessCheckName() const{ return m_readinessCheckName; }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline bool ReadinessCheckNameHasBeenSet() const { return m_readinessCheckNameHasBeenSet; }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline void SetReadinessCheckName(const Aws::String& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = value; }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline void SetReadinessCheckName(Aws::String&& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = std::move(value); }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline void SetReadinessCheckName(const char* value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName.assign(value); }

    /**
     * <p>Name of a readiness check.</p>
     */
    inline UpdateReadinessCheckRequest& WithReadinessCheckName(const Aws::String& value) { SetReadinessCheckName(value); return *this;}

    /**
     * <p>Name of a readiness check.</p>
     */
    inline UpdateReadinessCheckRequest& WithReadinessCheckName(Aws::String&& value) { SetReadinessCheckName(std::move(value)); return *this;}

    /**
     * <p>Name of a readiness check.</p>
     */
    inline UpdateReadinessCheckRequest& WithReadinessCheckName(const char* value) { SetReadinessCheckName(value); return *this;}


    /**
     * <p>The name of the resource set to be checked.</p>
     */
    inline const Aws::String& GetResourceSetName() const{ return m_resourceSetName; }

    /**
     * <p>The name of the resource set to be checked.</p>
     */
    inline bool ResourceSetNameHasBeenSet() const { return m_resourceSetNameHasBeenSet; }

    /**
     * <p>The name of the resource set to be checked.</p>
     */
    inline void SetResourceSetName(const Aws::String& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = value; }

    /**
     * <p>The name of the resource set to be checked.</p>
     */
    inline void SetResourceSetName(Aws::String&& value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName = std::move(value); }

    /**
     * <p>The name of the resource set to be checked.</p>
     */
    inline void SetResourceSetName(const char* value) { m_resourceSetNameHasBeenSet = true; m_resourceSetName.assign(value); }

    /**
     * <p>The name of the resource set to be checked.</p>
     */
    inline UpdateReadinessCheckRequest& WithResourceSetName(const Aws::String& value) { SetResourceSetName(value); return *this;}

    /**
     * <p>The name of the resource set to be checked.</p>
     */
    inline UpdateReadinessCheckRequest& WithResourceSetName(Aws::String&& value) { SetResourceSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource set to be checked.</p>
     */
    inline UpdateReadinessCheckRequest& WithResourceSetName(const char* value) { SetResourceSetName(value); return *this;}

  private:

    Aws::String m_readinessCheckName;
    bool m_readinessCheckNameHasBeenSet = false;

    Aws::String m_resourceSetName;
    bool m_resourceSetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
