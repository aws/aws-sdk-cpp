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
    AWS_CHIMESDKIDENTITY_API Configuration();
    AWS_CHIMESDKIDENTITY_API Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for an Amazon Lex V2 bot.</p>
     */
    inline const LexConfiguration& GetLex() const{ return m_lex; }

    /**
     * <p>The configuration for an Amazon Lex V2 bot.</p>
     */
    inline bool LexHasBeenSet() const { return m_lexHasBeenSet; }

    /**
     * <p>The configuration for an Amazon Lex V2 bot.</p>
     */
    inline void SetLex(const LexConfiguration& value) { m_lexHasBeenSet = true; m_lex = value; }

    /**
     * <p>The configuration for an Amazon Lex V2 bot.</p>
     */
    inline void SetLex(LexConfiguration&& value) { m_lexHasBeenSet = true; m_lex = std::move(value); }

    /**
     * <p>The configuration for an Amazon Lex V2 bot.</p>
     */
    inline Configuration& WithLex(const LexConfiguration& value) { SetLex(value); return *this;}

    /**
     * <p>The configuration for an Amazon Lex V2 bot.</p>
     */
    inline Configuration& WithLex(LexConfiguration&& value) { SetLex(std::move(value)); return *this;}

  private:

    LexConfiguration m_lex;
    bool m_lexHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
