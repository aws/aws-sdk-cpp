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


    /**
     * <p>The ID of the execute command session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The ID of the execute command session.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The ID of the execute command session.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The ID of the execute command session.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The ID of the execute command session.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The ID of the execute command session.</p>
     */
    inline Session& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The ID of the execute command session.</p>
     */
    inline Session& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the execute command session.</p>
     */
    inline Session& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>A URL to the managed agent on the container that the SSM Session Manager
     * client uses to send commands and receive output from the container.</p>
     */
    inline const Aws::String& GetStreamUrl() const{ return m_streamUrl; }

    /**
     * <p>A URL to the managed agent on the container that the SSM Session Manager
     * client uses to send commands and receive output from the container.</p>
     */
    inline bool StreamUrlHasBeenSet() const { return m_streamUrlHasBeenSet; }

    /**
     * <p>A URL to the managed agent on the container that the SSM Session Manager
     * client uses to send commands and receive output from the container.</p>
     */
    inline void SetStreamUrl(const Aws::String& value) { m_streamUrlHasBeenSet = true; m_streamUrl = value; }

    /**
     * <p>A URL to the managed agent on the container that the SSM Session Manager
     * client uses to send commands and receive output from the container.</p>
     */
    inline void SetStreamUrl(Aws::String&& value) { m_streamUrlHasBeenSet = true; m_streamUrl = std::move(value); }

    /**
     * <p>A URL to the managed agent on the container that the SSM Session Manager
     * client uses to send commands and receive output from the container.</p>
     */
    inline void SetStreamUrl(const char* value) { m_streamUrlHasBeenSet = true; m_streamUrl.assign(value); }

    /**
     * <p>A URL to the managed agent on the container that the SSM Session Manager
     * client uses to send commands and receive output from the container.</p>
     */
    inline Session& WithStreamUrl(const Aws::String& value) { SetStreamUrl(value); return *this;}

    /**
     * <p>A URL to the managed agent on the container that the SSM Session Manager
     * client uses to send commands and receive output from the container.</p>
     */
    inline Session& WithStreamUrl(Aws::String&& value) { SetStreamUrl(std::move(value)); return *this;}

    /**
     * <p>A URL to the managed agent on the container that the SSM Session Manager
     * client uses to send commands and receive output from the container.</p>
     */
    inline Session& WithStreamUrl(const char* value) { SetStreamUrl(value); return *this;}


    /**
     * <p>An encrypted token value containing session and caller information. It's used
     * to authenticate the connection to the container.</p>
     */
    inline const Aws::String& GetTokenValue() const{ return m_tokenValue; }

    /**
     * <p>An encrypted token value containing session and caller information. It's used
     * to authenticate the connection to the container.</p>
     */
    inline bool TokenValueHasBeenSet() const { return m_tokenValueHasBeenSet; }

    /**
     * <p>An encrypted token value containing session and caller information. It's used
     * to authenticate the connection to the container.</p>
     */
    inline void SetTokenValue(const Aws::String& value) { m_tokenValueHasBeenSet = true; m_tokenValue = value; }

    /**
     * <p>An encrypted token value containing session and caller information. It's used
     * to authenticate the connection to the container.</p>
     */
    inline void SetTokenValue(Aws::String&& value) { m_tokenValueHasBeenSet = true; m_tokenValue = std::move(value); }

    /**
     * <p>An encrypted token value containing session and caller information. It's used
     * to authenticate the connection to the container.</p>
     */
    inline void SetTokenValue(const char* value) { m_tokenValueHasBeenSet = true; m_tokenValue.assign(value); }

    /**
     * <p>An encrypted token value containing session and caller information. It's used
     * to authenticate the connection to the container.</p>
     */
    inline Session& WithTokenValue(const Aws::String& value) { SetTokenValue(value); return *this;}

    /**
     * <p>An encrypted token value containing session and caller information. It's used
     * to authenticate the connection to the container.</p>
     */
    inline Session& WithTokenValue(Aws::String&& value) { SetTokenValue(std::move(value)); return *this;}

    /**
     * <p>An encrypted token value containing session and caller information. It's used
     * to authenticate the connection to the container.</p>
     */
    inline Session& WithTokenValue(const char* value) { SetTokenValue(value); return *this;}

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
