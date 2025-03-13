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
    AWS_CODECATALYST_API DevEnvironmentAccessDetails() = default;
    AWS_CODECATALYST_API DevEnvironmentAccessDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API DevEnvironmentAccessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL used to send commands to and from the Dev Environment.</p>
     */
    inline const Aws::String& GetStreamUrl() const { return m_streamUrl; }
    inline bool StreamUrlHasBeenSet() const { return m_streamUrlHasBeenSet; }
    template<typename StreamUrlT = Aws::String>
    void SetStreamUrl(StreamUrlT&& value) { m_streamUrlHasBeenSet = true; m_streamUrl = std::forward<StreamUrlT>(value); }
    template<typename StreamUrlT = Aws::String>
    DevEnvironmentAccessDetails& WithStreamUrl(StreamUrlT&& value) { SetStreamUrl(std::forward<StreamUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encrypted token value that contains session and caller information used to
     * authenticate the connection.</p>
     */
    inline const Aws::String& GetTokenValue() const { return m_tokenValue; }
    inline bool TokenValueHasBeenSet() const { return m_tokenValueHasBeenSet; }
    template<typename TokenValueT = Aws::String>
    void SetTokenValue(TokenValueT&& value) { m_tokenValueHasBeenSet = true; m_tokenValue = std::forward<TokenValueT>(value); }
    template<typename TokenValueT = Aws::String>
    DevEnvironmentAccessDetails& WithTokenValue(TokenValueT&& value) { SetTokenValue(std::forward<TokenValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamUrl;
    bool m_streamUrlHasBeenSet = false;

    Aws::String m_tokenValue;
    bool m_tokenValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
