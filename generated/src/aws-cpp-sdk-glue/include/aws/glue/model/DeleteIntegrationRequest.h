/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class DeleteIntegrationRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API DeleteIntegrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIntegration"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the integration.</p>
     */
    inline const Aws::String& GetIntegrationIdentifier() const { return m_integrationIdentifier; }
    inline bool IntegrationIdentifierHasBeenSet() const { return m_integrationIdentifierHasBeenSet; }
    template<typename IntegrationIdentifierT = Aws::String>
    void SetIntegrationIdentifier(IntegrationIdentifierT&& value) { m_integrationIdentifierHasBeenSet = true; m_integrationIdentifier = std::forward<IntegrationIdentifierT>(value); }
    template<typename IntegrationIdentifierT = Aws::String>
    DeleteIntegrationRequest& WithIntegrationIdentifier(IntegrationIdentifierT&& value) { SetIntegrationIdentifier(std::forward<IntegrationIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_integrationIdentifier;
    bool m_integrationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
