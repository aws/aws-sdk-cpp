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
   * The cross account authorization<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/CreateCrossAccountAuthorizationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API CreateCrossAccountAuthorizationRequest : public Route53RecoveryReadinessRequest
  {
  public:
    CreateCrossAccountAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCrossAccountAuthorization"; }

    Aws::String SerializePayload() const override;


    /**
     * The cross account authorization
     */
    inline const Aws::String& GetCrossAccountAuthorization() const{ return m_crossAccountAuthorization; }

    /**
     * The cross account authorization
     */
    inline bool CrossAccountAuthorizationHasBeenSet() const { return m_crossAccountAuthorizationHasBeenSet; }

    /**
     * The cross account authorization
     */
    inline void SetCrossAccountAuthorization(const Aws::String& value) { m_crossAccountAuthorizationHasBeenSet = true; m_crossAccountAuthorization = value; }

    /**
     * The cross account authorization
     */
    inline void SetCrossAccountAuthorization(Aws::String&& value) { m_crossAccountAuthorizationHasBeenSet = true; m_crossAccountAuthorization = std::move(value); }

    /**
     * The cross account authorization
     */
    inline void SetCrossAccountAuthorization(const char* value) { m_crossAccountAuthorizationHasBeenSet = true; m_crossAccountAuthorization.assign(value); }

    /**
     * The cross account authorization
     */
    inline CreateCrossAccountAuthorizationRequest& WithCrossAccountAuthorization(const Aws::String& value) { SetCrossAccountAuthorization(value); return *this;}

    /**
     * The cross account authorization
     */
    inline CreateCrossAccountAuthorizationRequest& WithCrossAccountAuthorization(Aws::String&& value) { SetCrossAccountAuthorization(std::move(value)); return *this;}

    /**
     * The cross account authorization
     */
    inline CreateCrossAccountAuthorizationRequest& WithCrossAccountAuthorization(const char* value) { SetCrossAccountAuthorization(value); return *this;}

  private:

    Aws::String m_crossAccountAuthorization;
    bool m_crossAccountAuthorizationHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
