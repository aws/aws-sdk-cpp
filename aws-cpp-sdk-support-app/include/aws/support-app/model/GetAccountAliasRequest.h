/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/support-app/SupportAppRequest.h>

namespace Aws
{
namespace SupportApp
{
namespace Model
{

  /**
   */
  class AWS_SUPPORTAPP_API GetAccountAliasRequest : public SupportAppRequest
  {
  public:
    GetAccountAliasRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<GetAccountAliasRequest> Clone() const
    {
      return Aws::MakeUnique<GetAccountAliasRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccountAlias"; }

    Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
