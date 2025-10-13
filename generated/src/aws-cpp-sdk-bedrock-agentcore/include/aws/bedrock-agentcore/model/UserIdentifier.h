/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
namespace BedrockAgentCore
{
namespace Model
{

  /**
   * <p>The OAuth2.0 token or user ID that was used to generate the workload access
   * token used for initiating the user authorization flow to retrieve OAuth2.0
   * tokens.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/UserIdentifier">AWS
   * API Reference</a></p>
   */
  class UserIdentifier
  {
  public:
    AWS_BEDROCKAGENTCORE_API UserIdentifier() = default;
    AWS_BEDROCKAGENTCORE_API UserIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API UserIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The OAuth2.0 token issued by the user’s identity provider</p>
     */
    inline const Aws::String& GetUserToken() const { return m_userToken; }
    inline bool UserTokenHasBeenSet() const { return m_userTokenHasBeenSet; }
    template<typename UserTokenT = Aws::String>
    void SetUserToken(UserTokenT&& value) { m_userTokenHasBeenSet = true; m_userToken = std::forward<UserTokenT>(value); }
    template<typename UserTokenT = Aws::String>
    UserIdentifier& WithUserToken(UserTokenT&& value) { SetUserToken(std::forward<UserTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user for whom you have retrieved a workload access token
     * for</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    UserIdentifier& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userToken;
    bool m_userTokenHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
