/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>An object containing the name of an intent that was invoked.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/InvokedIntentSample">AWS
   * API Reference</a></p>
   */
  class InvokedIntentSample
  {
  public:
    AWS_LEXMODELSV2_API InvokedIntentSample();
    AWS_LEXMODELSV2_API InvokedIntentSample(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API InvokedIntentSample& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an intent that was invoked.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }

    /**
     * <p>The name of an intent that was invoked.</p>
     */
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }

    /**
     * <p>The name of an intent that was invoked.</p>
     */
    inline void SetIntentName(const Aws::String& value) { m_intentNameHasBeenSet = true; m_intentName = value; }

    /**
     * <p>The name of an intent that was invoked.</p>
     */
    inline void SetIntentName(Aws::String&& value) { m_intentNameHasBeenSet = true; m_intentName = std::move(value); }

    /**
     * <p>The name of an intent that was invoked.</p>
     */
    inline void SetIntentName(const char* value) { m_intentNameHasBeenSet = true; m_intentName.assign(value); }

    /**
     * <p>The name of an intent that was invoked.</p>
     */
    inline InvokedIntentSample& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}

    /**
     * <p>The name of an intent that was invoked.</p>
     */
    inline InvokedIntentSample& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}

    /**
     * <p>The name of an intent that was invoked.</p>
     */
    inline InvokedIntentSample& WithIntentName(const char* value) { SetIntentName(value); return *this;}

  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
