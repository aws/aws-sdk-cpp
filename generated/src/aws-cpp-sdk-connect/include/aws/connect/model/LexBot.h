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
    AWS_CONNECT_API LexBot();
    AWS_CONNECT_API LexBot(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API LexBot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline LexBot& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline LexBot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline LexBot& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Web Services Region where the Amazon Lex bot was created.</p>
     */
    inline const Aws::String& GetLexRegion() const{ return m_lexRegion; }

    /**
     * <p>The Amazon Web Services Region where the Amazon Lex bot was created.</p>
     */
    inline bool LexRegionHasBeenSet() const { return m_lexRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region where the Amazon Lex bot was created.</p>
     */
    inline void SetLexRegion(const Aws::String& value) { m_lexRegionHasBeenSet = true; m_lexRegion = value; }

    /**
     * <p>The Amazon Web Services Region where the Amazon Lex bot was created.</p>
     */
    inline void SetLexRegion(Aws::String&& value) { m_lexRegionHasBeenSet = true; m_lexRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region where the Amazon Lex bot was created.</p>
     */
    inline void SetLexRegion(const char* value) { m_lexRegionHasBeenSet = true; m_lexRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region where the Amazon Lex bot was created.</p>
     */
    inline LexBot& WithLexRegion(const Aws::String& value) { SetLexRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region where the Amazon Lex bot was created.</p>
     */
    inline LexBot& WithLexRegion(Aws::String&& value) { SetLexRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region where the Amazon Lex bot was created.</p>
     */
    inline LexBot& WithLexRegion(const char* value) { SetLexRegion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_lexRegion;
    bool m_lexRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
