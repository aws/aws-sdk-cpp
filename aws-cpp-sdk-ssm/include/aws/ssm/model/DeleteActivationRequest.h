/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DeleteActivationRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DeleteActivationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteActivation"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline const Aws::String& GetActivationId() const{ return m_activationId; }

    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline bool ActivationIdHasBeenSet() const { return m_activationIdHasBeenSet; }

    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline void SetActivationId(const Aws::String& value) { m_activationIdHasBeenSet = true; m_activationId = value; }

    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline void SetActivationId(Aws::String&& value) { m_activationIdHasBeenSet = true; m_activationId = std::move(value); }

    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline void SetActivationId(const char* value) { m_activationIdHasBeenSet = true; m_activationId.assign(value); }

    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline DeleteActivationRequest& WithActivationId(const Aws::String& value) { SetActivationId(value); return *this;}

    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline DeleteActivationRequest& WithActivationId(Aws::String&& value) { SetActivationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the activation that you want to delete.</p>
     */
    inline DeleteActivationRequest& WithActivationId(const char* value) { SetActivationId(value); return *this;}

  private:

    Aws::String m_activationId;
    bool m_activationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
