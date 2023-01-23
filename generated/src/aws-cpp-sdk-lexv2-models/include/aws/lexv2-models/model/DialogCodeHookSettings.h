/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Settings that determine the Lambda function that Amazon Lex uses for
   * processing user responses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DialogCodeHookSettings">AWS
   * API Reference</a></p>
   */
  class DialogCodeHookSettings
  {
  public:
    AWS_LEXMODELSV2_API DialogCodeHookSettings();
    AWS_LEXMODELSV2_API DialogCodeHookSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API DialogCodeHookSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables the dialog code hook so that it processes user requests.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Enables the dialog code hook so that it processes user requests.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Enables the dialog code hook so that it processes user requests.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Enables the dialog code hook so that it processes user requests.</p>
     */
    inline DialogCodeHookSettings& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
