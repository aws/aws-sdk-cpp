/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex/model/ActiveContextTimeToLive.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace LexRuntimeService
{
namespace Model
{

  /**
   * <p>A context is a variable that contains information about the current state of
   * the conversation between a user and Amazon Lex. Context can be set automatically
   * by Amazon Lex when an intent is fulfilled, or it can be set at runtime using the
   * <code>PutContent</code>, <code>PutText</code>, or <code>PutSession</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/ActiveContext">AWS
   * API Reference</a></p>
   */
  class ActiveContext
  {
  public:
    AWS_LEXRUNTIMESERVICE_API ActiveContext();
    AWS_LEXRUNTIMESERVICE_API ActiveContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API ActiveContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the context.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the context.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the context.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the context.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the context.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the context.</p>
     */
    inline ActiveContext& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the context.</p>
     */
    inline ActiveContext& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the context.</p>
     */
    inline ActiveContext& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The length of time or number of turns that a context remains active.</p>
     */
    inline const ActiveContextTimeToLive& GetTimeToLive() const{ return m_timeToLive; }

    /**
     * <p>The length of time or number of turns that a context remains active.</p>
     */
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }

    /**
     * <p>The length of time or number of turns that a context remains active.</p>
     */
    inline void SetTimeToLive(const ActiveContextTimeToLive& value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }

    /**
     * <p>The length of time or number of turns that a context remains active.</p>
     */
    inline void SetTimeToLive(ActiveContextTimeToLive&& value) { m_timeToLiveHasBeenSet = true; m_timeToLive = std::move(value); }

    /**
     * <p>The length of time or number of turns that a context remains active.</p>
     */
    inline ActiveContext& WithTimeToLive(const ActiveContextTimeToLive& value) { SetTimeToLive(value); return *this;}

    /**
     * <p>The length of time or number of turns that a context remains active.</p>
     */
    inline ActiveContext& WithTimeToLive(ActiveContextTimeToLive&& value) { SetTimeToLive(std::move(value)); return *this;}


    /**
     * <p>State variables for the current context. You can use these values as default
     * values for slots in subsequent events.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>State variables for the current context. You can use these values as default
     * values for slots in subsequent events.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>State variables for the current context. You can use these values as default
     * values for slots in subsequent events.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>State variables for the current context. You can use these values as default
     * values for slots in subsequent events.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>State variables for the current context. You can use these values as default
     * values for slots in subsequent events.</p>
     */
    inline ActiveContext& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>State variables for the current context. You can use these values as default
     * values for slots in subsequent events.</p>
     */
    inline ActiveContext& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>State variables for the current context. You can use these values as default
     * values for slots in subsequent events.</p>
     */
    inline ActiveContext& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>State variables for the current context. You can use these values as default
     * values for slots in subsequent events.</p>
     */
    inline ActiveContext& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>State variables for the current context. You can use these values as default
     * values for slots in subsequent events.</p>
     */
    inline ActiveContext& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>State variables for the current context. You can use these values as default
     * values for slots in subsequent events.</p>
     */
    inline ActiveContext& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>State variables for the current context. You can use these values as default
     * values for slots in subsequent events.</p>
     */
    inline ActiveContext& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>State variables for the current context. You can use these values as default
     * values for slots in subsequent events.</p>
     */
    inline ActiveContext& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>State variables for the current context. You can use these values as default
     * values for slots in subsequent events.</p>
     */
    inline ActiveContext& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ActiveContextTimeToLive m_timeToLive;
    bool m_timeToLiveHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
