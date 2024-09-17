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
    AWS_ECS_API Session();
    AWS_ECS_API Session(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Session& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the execute command session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline Session& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline Session& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline Session& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL to the managed agent on the container that the SSM Session Manager
     * client uses to send commands and receive output from the container.</p>
     */
    inline const Aws::String& GetStreamUrl() const{ return m_streamUrl; }
    inline bool StreamUrlHasBeenSet() const { return m_streamUrlHasBeenSet; }
    inline void SetStreamUrl(const Aws::String& value) { m_streamUrlHasBeenSet = true; m_streamUrl = value; }
    inline void SetStreamUrl(Aws::String&& value) { m_streamUrlHasBeenSet = true; m_streamUrl = std::move(value); }
    inline void SetStreamUrl(const char* value) { m_streamUrlHasBeenSet = true; m_streamUrl.assign(value); }
    inline Session& WithStreamUrl(const Aws::String& value) { SetStreamUrl(value); return *this;}
    inline Session& WithStreamUrl(Aws::String&& value) { SetStreamUrl(std::move(value)); return *this;}
    inline Session& WithStreamUrl(const char* value) { SetStreamUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encrypted token value containing session and caller information. It's used
     * to authenticate the connection to the container.</p>
     */
    inline const Aws::String& GetTokenValue() const{ return m_tokenValue; }
    inline bool TokenValueHasBeenSet() const { return m_tokenValueHasBeenSet; }
    inline void SetTokenValue(const Aws::String& value) { m_tokenValueHasBeenSet = true; m_tokenValue = value; }
    inline void SetTokenValue(Aws::String&& value) { m_tokenValueHasBeenSet = true; m_tokenValue = std::move(value); }
    inline void SetTokenValue(const char* value) { m_tokenValueHasBeenSet = true; m_tokenValue.assign(value); }
    inline Session& WithTokenValue(const Aws::String& value) { SetTokenValue(value); return *this;}
    inline Session& WithTokenValue(Aws::String&& value) { SetTokenValue(std::move(value)); return *this;}
    inline Session& WithTokenValue(const char* value) { SetTokenValue(value); return *this;}
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
