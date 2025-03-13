/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The details for the execute command session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Session">AWS API
   * Reference</a></p>
   */
  class Session
  {
  public:
    AWS_ECS_API Session() = default;
    AWS_ECS_API Session(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the execute command session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    Session& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL to the managed agent on the container that the SSM Session Manager
     * client uses to send commands and receive output from the container.</p>
     */
    inline const Aws::String& GetStreamUrl() const { return m_streamUrl; }
    inline bool StreamUrlHasBeenSet() const { return m_streamUrlHasBeenSet; }
    template<typename StreamUrlT = Aws::String>
    void SetStreamUrl(StreamUrlT&& value) { m_streamUrlHasBeenSet = true; m_streamUrl = std::forward<StreamUrlT>(value); }
    template<typename StreamUrlT = Aws::String>
    Session& WithStreamUrl(StreamUrlT&& value) { SetStreamUrl(std::forward<StreamUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encrypted token value containing session and caller information. It's used
     * to authenticate the connection to the container.</p>
     */
    inline const Aws::String& GetTokenValue() const { return m_tokenValue; }
    inline bool TokenValueHasBeenSet() const { return m_tokenValueHasBeenSet; }
    template<typename TokenValueT = Aws::String>
    void SetTokenValue(TokenValueT&& value) { m_tokenValueHasBeenSet = true; m_tokenValue = std::forward<TokenValueT>(value); }
    template<typename TokenValueT = Aws::String>
    Session& WithTokenValue(TokenValueT&& value) { SetTokenValue(std::forward<TokenValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_streamUrl;
    bool m_streamUrlHasBeenSet = false;

    Aws::String m_tokenValue;
    bool m_tokenValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
