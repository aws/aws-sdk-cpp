/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Appflow
{
namespace Model
{

  /**
   * <p> The connector metadata specific to Slack. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/SlackMetadata">AWS
   * API Reference</a></p>
   */
  class SlackMetadata
  {
  public:
    AWS_APPFLOW_API SlackMetadata() = default;
    AWS_APPFLOW_API SlackMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API SlackMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The desired authorization scope for the Slack account. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOAuthScopes() const { return m_oAuthScopes; }
    inline bool OAuthScopesHasBeenSet() const { return m_oAuthScopesHasBeenSet; }
    template<typename OAuthScopesT = Aws::Vector<Aws::String>>
    void SetOAuthScopes(OAuthScopesT&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes = std::forward<OAuthScopesT>(value); }
    template<typename OAuthScopesT = Aws::Vector<Aws::String>>
    SlackMetadata& WithOAuthScopes(OAuthScopesT&& value) { SetOAuthScopes(std::forward<OAuthScopesT>(value)); return *this;}
    template<typename OAuthScopesT = Aws::String>
    SlackMetadata& AddOAuthScopes(OAuthScopesT&& value) { m_oAuthScopesHasBeenSet = true; m_oAuthScopes.emplace_back(std::forward<OAuthScopesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_oAuthScopes;
    bool m_oAuthScopesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
