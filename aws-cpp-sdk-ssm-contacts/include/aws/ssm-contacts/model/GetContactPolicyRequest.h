/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class GetContactPolicyRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API GetContactPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetContactPolicy"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline const Aws::String& GetContactArn() const{ return m_contactArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline bool ContactArnHasBeenSet() const { return m_contactArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline void SetContactArn(const Aws::String& value) { m_contactArnHasBeenSet = true; m_contactArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline void SetContactArn(Aws::String&& value) { m_contactArnHasBeenSet = true; m_contactArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline void SetContactArn(const char* value) { m_contactArnHasBeenSet = true; m_contactArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline GetContactPolicyRequest& WithContactArn(const Aws::String& value) { SetContactArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline GetContactPolicyRequest& WithContactArn(Aws::String&& value) { SetContactArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact or escalation plan.</p>
     */
    inline GetContactPolicyRequest& WithContactArn(const char* value) { SetContactArn(value); return *this;}

  private:

    Aws::String m_contactArn;
    bool m_contactArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
