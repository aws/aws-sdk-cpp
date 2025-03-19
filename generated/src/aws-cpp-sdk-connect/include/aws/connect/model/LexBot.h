/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Configuration information of an Amazon Lex bot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/LexBot">AWS API
   * Reference</a></p>
   */
  class LexBot
  {
  public:
    AWS_CONNECT_API LexBot() = default;
    AWS_CONNECT_API LexBot(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API LexBot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    LexBot& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the Amazon Lex bot was created.</p>
     */
    inline const Aws::String& GetLexRegion() const { return m_lexRegion; }
    inline bool LexRegionHasBeenSet() const { return m_lexRegionHasBeenSet; }
    template<typename LexRegionT = Aws::String>
    void SetLexRegion(LexRegionT&& value) { m_lexRegionHasBeenSet = true; m_lexRegion = std::forward<LexRegionT>(value); }
    template<typename LexRegionT = Aws::String>
    LexBot& WithLexRegion(LexRegionT&& value) { SetLexRegion(std::forward<LexRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_lexRegion;
    bool m_lexRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
