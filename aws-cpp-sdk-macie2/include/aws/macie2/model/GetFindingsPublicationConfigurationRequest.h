/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class GetFindingsPublicationConfigurationRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API GetFindingsPublicationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindingsPublicationConfiguration"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;

  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
