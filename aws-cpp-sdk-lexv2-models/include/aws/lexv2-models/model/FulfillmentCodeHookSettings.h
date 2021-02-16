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
   * <p>Determines if a Lambda function should be invoked for a specific
   * intent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/FulfillmentCodeHookSettings">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELSV2_API FulfillmentCodeHookSettings
  {
  public:
    FulfillmentCodeHookSettings();
    FulfillmentCodeHookSettings(Aws::Utils::Json::JsonView jsonValue);
    FulfillmentCodeHookSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether a Lambda function should be invoked to fulfill a specific
     * intent.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether a Lambda function should be invoked to fulfill a specific
     * intent.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether a Lambda function should be invoked to fulfill a specific
     * intent.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether a Lambda function should be invoked to fulfill a specific
     * intent.</p>
     */
    inline FulfillmentCodeHookSettings& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
