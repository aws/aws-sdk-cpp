/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/LexConfiguration.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   * <p>A structure that contains configuration data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/Configuration">AWS
   * API Reference</a></p>
   */
  class Configuration
  {
  public:
    AWS_CHIMESDKIDENTITY_API Configuration() = default;
    AWS_CHIMESDKIDENTITY_API Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for an Amazon Lex V2 bot.</p>
     */
    inline const LexConfiguration& GetLex() const { return m_lex; }
    inline bool LexHasBeenSet() const { return m_lexHasBeenSet; }
    template<typename LexT = LexConfiguration>
    void SetLex(LexT&& value) { m_lexHasBeenSet = true; m_lex = std::forward<LexT>(value); }
    template<typename LexT = LexConfiguration>
    Configuration& WithLex(LexT&& value) { SetLex(std::forward<LexT>(value)); return *this;}
    ///@}
  private:

    LexConfiguration m_lex;
    bool m_lexHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
