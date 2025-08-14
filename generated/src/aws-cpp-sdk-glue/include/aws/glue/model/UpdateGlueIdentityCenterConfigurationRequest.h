/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   * <p>Request to update an existing Glue Identity Center
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateGlueIdentityCenterConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class UpdateGlueIdentityCenterConfigurationRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API UpdateGlueIdentityCenterConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGlueIdentityCenterConfiguration"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of Identity Center scopes that define the updated permissions and
     * access levels for the Glue configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
    template<typename ScopesT = Aws::Vector<Aws::String>>
    void SetScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes = std::forward<ScopesT>(value); }
    template<typename ScopesT = Aws::Vector<Aws::String>>
    UpdateGlueIdentityCenterConfigurationRequest& WithScopes(ScopesT&& value) { SetScopes(std::forward<ScopesT>(value)); return *this;}
    template<typename ScopesT = Aws::String>
    UpdateGlueIdentityCenterConfigurationRequest& AddScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes.emplace_back(std::forward<ScopesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_scopes;
    bool m_scopesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
