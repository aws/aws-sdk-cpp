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
   * <p>Specifies the audio input specifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AudioSpecification">AWS
   * API Reference</a></p>
   */
  class AudioSpecification
  {
  public:
    AWS_LEXMODELSV2_API AudioSpecification();
    AWS_LEXMODELSV2_API AudioSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AudioSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Time for how long Amazon Lex waits before speech input is truncated and the
     * speech is returned to application.</p>
     */
    inline int GetMaxLengthMs() const{ return m_maxLengthMs; }

    /**
     * <p>Time for how long Amazon Lex waits before speech input is truncated and the
     * speech is returned to application.</p>
     */
    inline bool MaxLengthMsHasBeenSet() const { return m_maxLengthMsHasBeenSet; }

    /**
     * <p>Time for how long Amazon Lex waits before speech input is truncated and the
     * speech is returned to application.</p>
     */
    inline void SetMaxLengthMs(int value) { m_maxLengthMsHasBeenSet = true; m_maxLengthMs = value; }

    /**
     * <p>Time for how long Amazon Lex waits before speech input is truncated and the
     * speech is returned to application.</p>
     */
    inline AudioSpecification& WithMaxLengthMs(int value) { SetMaxLengthMs(value); return *this;}


    /**
     * <p>Time for which a bot waits after the customer stops speaking to assume the
     * utterance is finished.</p>
     */
    inline int GetEndTimeoutMs() const{ return m_endTimeoutMs; }

    /**
     * <p>Time for which a bot waits after the customer stops speaking to assume the
     * utterance is finished.</p>
     */
    inline bool EndTimeoutMsHasBeenSet() const { return m_endTimeoutMsHasBeenSet; }

    /**
     * <p>Time for which a bot waits after the customer stops speaking to assume the
     * utterance is finished.</p>
     */
    inline void SetEndTimeoutMs(int value) { m_endTimeoutMsHasBeenSet = true; m_endTimeoutMs = value; }

    /**
     * <p>Time for which a bot waits after the customer stops speaking to assume the
     * utterance is finished.</p>
     */
    inline AudioSpecification& WithEndTimeoutMs(int value) { SetEndTimeoutMs(value); return *this;}

  private:

    int m_maxLengthMs;
    bool m_maxLengthMsHasBeenSet = false;

    int m_endTimeoutMs;
    bool m_endTimeoutMsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
