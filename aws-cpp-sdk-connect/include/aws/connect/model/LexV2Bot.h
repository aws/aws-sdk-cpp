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
   * <p>Configuration information of an Amazon Lex V2 bot.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/LexV2Bot">AWS
   * API Reference</a></p>
   */
  class LexV2Bot
  {
  public:
    AWS_CONNECT_API LexV2Bot();
    AWS_CONNECT_API LexV2Bot(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API LexV2Bot& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Lex V2 bot.</p>
     */
    inline const Aws::String& GetAliasArn() const{ return m_aliasArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Lex V2 bot.</p>
     */
    inline bool AliasArnHasBeenSet() const { return m_aliasArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Lex V2 bot.</p>
     */
    inline void SetAliasArn(const Aws::String& value) { m_aliasArnHasBeenSet = true; m_aliasArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Lex V2 bot.</p>
     */
    inline void SetAliasArn(Aws::String&& value) { m_aliasArnHasBeenSet = true; m_aliasArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Lex V2 bot.</p>
     */
    inline void SetAliasArn(const char* value) { m_aliasArnHasBeenSet = true; m_aliasArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Lex V2 bot.</p>
     */
    inline LexV2Bot& WithAliasArn(const Aws::String& value) { SetAliasArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Lex V2 bot.</p>
     */
    inline LexV2Bot& WithAliasArn(Aws::String&& value) { SetAliasArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Lex V2 bot.</p>
     */
    inline LexV2Bot& WithAliasArn(const char* value) { SetAliasArn(value); return *this;}

  private:

    Aws::String m_aliasArn;
    bool m_aliasArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
