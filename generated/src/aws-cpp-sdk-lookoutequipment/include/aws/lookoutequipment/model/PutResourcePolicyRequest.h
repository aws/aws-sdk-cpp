/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class PutResourcePolicyRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy is being
     * created.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy is being
     * created.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy is being
     * created.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy is being
     * created.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy is being
     * created.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy is being
     * created.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy is being
     * created.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource for which the policy is being
     * created.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The JSON-formatted resource policy to create.</p>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p>The JSON-formatted resource policy to create.</p>
     */
    inline bool ResourcePolicyHasBeenSet() const { return m_resourcePolicyHasBeenSet; }

    /**
     * <p>The JSON-formatted resource policy to create.</p>
     */
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = value; }

    /**
     * <p>The JSON-formatted resource policy to create.</p>
     */
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = std::move(value); }

    /**
     * <p>The JSON-formatted resource policy to create.</p>
     */
    inline void SetResourcePolicy(const char* value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy.assign(value); }

    /**
     * <p>The JSON-formatted resource policy to create.</p>
     */
    inline PutResourcePolicyRequest& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>The JSON-formatted resource policy to create.</p>
     */
    inline PutResourcePolicyRequest& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(std::move(value)); return *this;}

    /**
     * <p>The JSON-formatted resource policy to create.</p>
     */
    inline PutResourcePolicyRequest& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}


    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline const Aws::String& GetPolicyRevisionId() const{ return m_policyRevisionId; }

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline bool PolicyRevisionIdHasBeenSet() const { return m_policyRevisionIdHasBeenSet; }

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline void SetPolicyRevisionId(const Aws::String& value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId = value; }

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline void SetPolicyRevisionId(Aws::String&& value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId = std::move(value); }

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline void SetPolicyRevisionId(const char* value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId.assign(value); }

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyRevisionId(const Aws::String& value) { SetPolicyRevisionId(value); return *this;}

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyRevisionId(Aws::String&& value) { SetPolicyRevisionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a revision of the resource policy.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyRevisionId(const char* value) { SetPolicyRevisionId(value); return *this;}


    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline PutResourcePolicyRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline PutResourcePolicyRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the request. If you do not set the client request
     * token, Amazon Lookout for Equipment generates one. </p>
     */
    inline PutResourcePolicyRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourcePolicy;
    bool m_resourcePolicyHasBeenSet = false;

    Aws::String m_policyRevisionId;
    bool m_policyRevisionIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
