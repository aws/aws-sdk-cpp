/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to obtain information about the email-sending capabilities of your
   * Amazon SES account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetAccountRequest">AWS
   * API Reference</a></p>
   */
  class GetAccountRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API GetAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccount"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
