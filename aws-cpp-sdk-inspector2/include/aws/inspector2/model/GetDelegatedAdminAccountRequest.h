/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/Inspector2Request.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR2_API GetDelegatedAdminAccountRequest : public Inspector2Request
  {
  public:
    GetDelegatedAdminAccountRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<GetDelegatedAdminAccountRequest> Clone() const
    {
      return Aws::MakeUnique<GetDelegatedAdminAccountRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDelegatedAdminAccount"; }

    Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
