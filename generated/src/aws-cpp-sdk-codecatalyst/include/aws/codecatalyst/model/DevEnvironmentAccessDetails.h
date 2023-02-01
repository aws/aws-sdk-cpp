/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about connection details for a Dev Environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/DevEnvironmentAccessDetails">AWS
   * API Reference</a></p>
   */
  class DevEnvironmentAccessDetails
  {
  public:
    AWS_CODECATALYST_API DevEnvironmentAccessDetails();
    AWS_CODECATALYST_API DevEnvironmentAccessDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API DevEnvironmentAccessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL used to send commands to and from the Dev Environment.</p>
     */
    inline const Aws::String& GetStreamUrl() const{ return m_streamUrl; }

    /**
     * <p>The URL used to send commands to and from the Dev Environment.</p>
     */
    inline bool StreamUrlHasBeenSet() const { return m_streamUrlHasBeenSet; }

    /**
     * <p>The URL used to send commands to and from the Dev Environment.</p>
     */
    inline void SetStreamUrl(const Aws::String& value) { m_streamUrlHasBeenSet = true; m_streamUrl = value; }

    /**
     * <p>The URL used to send commands to and from the Dev Environment.</p>
     */
    inline void SetStreamUrl(Aws::String&& value) { m_streamUrlHasBeenSet = true; m_streamUrl = std::move(value); }

    /**
     * <p>The URL used to send commands to and from the Dev Environment.</p>
     */
    inline void SetStreamUrl(const char* value) { m_streamUrlHasBeenSet = true; m_streamUrl.assign(value); }

    /**
     * <p>The URL used to send commands to and from the Dev Environment.</p>
     */
    inline DevEnvironmentAccessDetails& WithStreamUrl(const Aws::String& value) { SetStreamUrl(value); return *this;}

    /**
     * <p>The URL used to send commands to and from the Dev Environment.</p>
     */
    inline DevEnvironmentAccessDetails& WithStreamUrl(Aws::String&& value) { SetStreamUrl(std::move(value)); return *this;}

    /**
     * <p>The URL used to send commands to and from the Dev Environment.</p>
     */
    inline DevEnvironmentAccessDetails& WithStreamUrl(const char* value) { SetStreamUrl(value); return *this;}


    /**
     * <p>An encrypted token value that contains session and caller information used to
     * authenticate the connection.</p>
     */
    inline const Aws::String& GetTokenValue() const{ return m_tokenValue; }

    /**
     * <p>An encrypted token value that contains session and caller information used to
     * authenticate the connection.</p>
     */
    inline bool TokenValueHasBeenSet() const { return m_tokenValueHasBeenSet; }

    /**
     * <p>An encrypted token value that contains session and caller information used to
     * authenticate the connection.</p>
     */
    inline void SetTokenValue(const Aws::String& value) { m_tokenValueHasBeenSet = true; m_tokenValue = value; }

    /**
     * <p>An encrypted token value that contains session and caller information used to
     * authenticate the connection.</p>
     */
    inline void SetTokenValue(Aws::String&& value) { m_tokenValueHasBeenSet = true; m_tokenValue = std::move(value); }

    /**
     * <p>An encrypted token value that contains session and caller information used to
     * authenticate the connection.</p>
     */
    inline void SetTokenValue(const char* value) { m_tokenValueHasBeenSet = true; m_tokenValue.assign(value); }

    /**
     * <p>An encrypted token value that contains session and caller information used to
     * authenticate the connection.</p>
     */
    inline DevEnvironmentAccessDetails& WithTokenValue(const Aws::String& value) { SetTokenValue(value); return *this;}

    /**
     * <p>An encrypted token value that contains session and caller information used to
     * authenticate the connection.</p>
     */
    inline DevEnvironmentAccessDetails& WithTokenValue(Aws::String&& value) { SetTokenValue(std::move(value)); return *this;}

    /**
     * <p>An encrypted token value that contains session and caller information used to
     * authenticate the connection.</p>
     */
    inline DevEnvironmentAccessDetails& WithTokenValue(const char* value) { SetTokenValue(value); return *this;}

  private:

    Aws::String m_streamUrl;
    bool m_streamUrlHasBeenSet = false;

    Aws::String m_tokenValue;
    bool m_tokenValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
