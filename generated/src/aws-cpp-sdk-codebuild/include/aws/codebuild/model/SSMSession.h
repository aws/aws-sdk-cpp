/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Contains information about the Session Manager session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/SSMSession">AWS
   * API Reference</a></p>
   */
  class SSMSession
  {
  public:
    AWS_CODEBUILD_API SSMSession() = default;
    AWS_CODEBUILD_API SSMSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API SSMSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    SSMSession& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encrypted token value containing session and caller information.</p>
     */
    inline const Aws::String& GetTokenValue() const { return m_tokenValue; }
    inline bool TokenValueHasBeenSet() const { return m_tokenValueHasBeenSet; }
    template<typename TokenValueT = Aws::String>
    void SetTokenValue(TokenValueT&& value) { m_tokenValueHasBeenSet = true; m_tokenValue = std::forward<TokenValueT>(value); }
    template<typename TokenValueT = Aws::String>
    SSMSession& WithTokenValue(TokenValueT&& value) { SetTokenValue(std::forward<TokenValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL back to SSM Agent on the managed node that the Session Manager client
     * uses to send commands and receive output from the node.</p>
     */
    inline const Aws::String& GetStreamUrl() const { return m_streamUrl; }
    inline bool StreamUrlHasBeenSet() const { return m_streamUrlHasBeenSet; }
    template<typename StreamUrlT = Aws::String>
    void SetStreamUrl(StreamUrlT&& value) { m_streamUrlHasBeenSet = true; m_streamUrl = std::forward<StreamUrlT>(value); }
    template<typename StreamUrlT = Aws::String>
    SSMSession& WithStreamUrl(StreamUrlT&& value) { SetStreamUrl(std::forward<StreamUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_tokenValue;
    bool m_tokenValueHasBeenSet = false;

    Aws::String m_streamUrl;
    bool m_streamUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
