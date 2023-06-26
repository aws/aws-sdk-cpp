/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/CodeGuruSecurityRequest.h>

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   */
  class GetAccountConfigurationRequest : public CodeGuruSecurityRequest
  {
  public:
    AWS_CODEGURUSECURITY_API GetAccountConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccountConfiguration"; }

    AWS_CODEGURUSECURITY_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
