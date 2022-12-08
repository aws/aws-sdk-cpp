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
   * <p>Specifies the text input specifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/TextInputSpecification">AWS
   * API Reference</a></p>
   */
  class TextInputSpecification
  {
  public:
    AWS_LEXMODELSV2_API TextInputSpecification();
    AWS_LEXMODELSV2_API TextInputSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API TextInputSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Time for which a bot waits before re-prompting a customer for text input.</p>
     */
    inline int GetStartTimeoutMs() const{ return m_startTimeoutMs; }

    /**
     * <p>Time for which a bot waits before re-prompting a customer for text input.</p>
     */
    inline bool StartTimeoutMsHasBeenSet() const { return m_startTimeoutMsHasBeenSet; }

    /**
     * <p>Time for which a bot waits before re-prompting a customer for text input.</p>
     */
    inline void SetStartTimeoutMs(int value) { m_startTimeoutMsHasBeenSet = true; m_startTimeoutMs = value; }

    /**
     * <p>Time for which a bot waits before re-prompting a customer for text input.</p>
     */
    inline TextInputSpecification& WithStartTimeoutMs(int value) { SetStartTimeoutMs(value); return *this;}

  private:

    int m_startTimeoutMs;
    bool m_startTimeoutMsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
