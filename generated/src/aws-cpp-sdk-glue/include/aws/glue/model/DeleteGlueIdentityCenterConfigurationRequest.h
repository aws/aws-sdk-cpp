/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   * <p>Request to delete the existing Glue Identity Center
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteGlueIdentityCenterConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class DeleteGlueIdentityCenterConfigurationRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API DeleteGlueIdentityCenterConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGlueIdentityCenterConfiguration"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  };

} // namespace Model
} // namespace Glue
} // namespace Aws
