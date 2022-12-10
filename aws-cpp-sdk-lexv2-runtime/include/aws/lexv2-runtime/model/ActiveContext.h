/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-runtime/model/ActiveContextTimeToLive.h>
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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>Contains information about the contexts that a user is using in a session.
   * You can configure Amazon Lex V2 to set a context when an intent is fulfilled, or
   * you can set a context using the , , or operations.</p> <p>Use a context to
   * indicate to Amazon Lex V2 intents that should be used as follow-up intents. For
   * example, if the active context is <code>order-fulfilled</code>, only intents
   * that have <code>order-fulfilled</code> configured as a trigger are considered
   * for follow up.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/ActiveContext">AWS
   * API Reference</a></p>
   */
  class ActiveContext
  {
  public:
    AWS_LEXRUNTIMEV2_API ActiveContext();
    AWS_LEXRUNTIMEV2_API ActiveContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API ActiveContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>Indicates the number of turns or seconds that the context is active. Once the
     * time to live expires, the context is no longer returned in a response.</p>
     */
    inline const ActiveContextTimeToLive& GetTimeToLive() const{ return m_timeToLive; }

    /**
     * <p>Indicates the number of turns or seconds that the context is active. Once the
     * time to live expires, the context is no longer returned in a response.</p>
     */
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }

    /**
     * <p>Indicates the number of turns or seconds that the context is active. Once the
     * time to live expires, the context is no longer returned in a response.</p>
     */
    inline void SetTimeToLive(const ActiveContextTimeToLive& value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }

    /**
     * <p>Indicates the number of turns or seconds that the context is active. Once the
     * time to live expires, the context is no longer returned in a response.</p>
     */
    inline void SetTimeToLive(ActiveContextTimeToLive&& value) { m_timeToLiveHasBeenSet = true; m_timeToLive = std::move(value); }

    /**
     * <p>Indicates the number of turns or seconds that the context is active. Once the
     * time to live expires, the context is no longer returned in a response.</p>
     */
    inline ActiveContext& WithTimeToLive(const ActiveContextTimeToLive& value) { SetTimeToLive(value); return *this;}

    /**
     * <p>Indicates the number of turns or seconds that the context is active. Once the
     * time to live expires, the context is no longer returned in a response.</p>
     */
    inline ActiveContext& WithTimeToLive(ActiveContextTimeToLive&& value) { SetTimeToLive(std::move(value)); return *this;}


    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request.</p>
     * <p>If you don't specify a list of contexts, Amazon Lex V2 will use the current
     * list of contexts for the session. If you specify an empty list, all contexts for
     * the session are cleared. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContextAttributes() const{ return m_contextAttributes; }

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request.</p>
     * <p>If you don't specify a list of contexts, Amazon Lex V2 will use the current
     * list of contexts for the session. If you specify an empty list, all contexts for
     * the session are cleared. </p>
     */
    inline bool ContextAttributesHasBeenSet() const { return m_contextAttributesHasBeenSet; }

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request.</p>
     * <p>If you don't specify a list of contexts, Amazon Lex V2 will use the current
     * list of contexts for the session. If you specify an empty list, all contexts for
     * the session are cleared. </p>
     */
    inline void SetContextAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_contextAttributesHasBeenSet = true; m_contextAttributes = value; }

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request.</p>
     * <p>If you don't specify a list of contexts, Amazon Lex V2 will use the current
     * list of contexts for the session. If you specify an empty list, all contexts for
     * the session are cleared. </p>
     */
    inline void SetContextAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_contextAttributesHasBeenSet = true; m_contextAttributes = std::move(value); }

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request.</p>
     * <p>If you don't specify a list of contexts, Amazon Lex V2 will use the current
     * list of contexts for the session. If you specify an empty list, all contexts for
     * the session are cleared. </p>
     */
    inline ActiveContext& WithContextAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetContextAttributes(value); return *this;}

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request.</p>
     * <p>If you don't specify a list of contexts, Amazon Lex V2 will use the current
     * list of contexts for the session. If you specify an empty list, all contexts for
     * the session are cleared. </p>
     */
    inline ActiveContext& WithContextAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetContextAttributes(std::move(value)); return *this;}

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request.</p>
     * <p>If you don't specify a list of contexts, Amazon Lex V2 will use the current
     * list of contexts for the session. If you specify an empty list, all contexts for
     * the session are cleared. </p>
     */
    inline ActiveContext& AddContextAttributes(const Aws::String& key, const Aws::String& value) { m_contextAttributesHasBeenSet = true; m_contextAttributes.emplace(key, value); return *this; }

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request.</p>
     * <p>If you don't specify a list of contexts, Amazon Lex V2 will use the current
     * list of contexts for the session. If you specify an empty list, all contexts for
     * the session are cleared. </p>
     */
    inline ActiveContext& AddContextAttributes(Aws::String&& key, const Aws::String& value) { m_contextAttributesHasBeenSet = true; m_contextAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request.</p>
     * <p>If you don't specify a list of contexts, Amazon Lex V2 will use the current
     * list of contexts for the session. If you specify an empty list, all contexts for
     * the session are cleared. </p>
     */
    inline ActiveContext& AddContextAttributes(const Aws::String& key, Aws::String&& value) { m_contextAttributesHasBeenSet = true; m_contextAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request.</p>
     * <p>If you don't specify a list of contexts, Amazon Lex V2 will use the current
     * list of contexts for the session. If you specify an empty list, all contexts for
     * the session are cleared. </p>
     */
    inline ActiveContext& AddContextAttributes(Aws::String&& key, Aws::String&& value) { m_contextAttributesHasBeenSet = true; m_contextAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request.</p>
     * <p>If you don't specify a list of contexts, Amazon Lex V2 will use the current
     * list of contexts for the session. If you specify an empty list, all contexts for
     * the session are cleared. </p>
     */
    inline ActiveContext& AddContextAttributes(const char* key, Aws::String&& value) { m_contextAttributesHasBeenSet = true; m_contextAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request.</p>
     * <p>If you don't specify a list of contexts, Amazon Lex V2 will use the current
     * list of contexts for the session. If you specify an empty list, all contexts for
     * the session are cleared. </p>
     */
    inline ActiveContext& AddContextAttributes(Aws::String&& key, const char* value) { m_contextAttributesHasBeenSet = true; m_contextAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request.</p>
     * <p>If you don't specify a list of contexts, Amazon Lex V2 will use the current
     * list of contexts for the session. If you specify an empty list, all contexts for
     * the session are cleared. </p>
     */
    inline ActiveContext& AddContextAttributes(const char* key, const char* value) { m_contextAttributesHasBeenSet = true; m_contextAttributes.emplace(key, value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ActiveContextTimeToLive m_timeToLive;
    bool m_timeToLiveHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_contextAttributes;
    bool m_contextAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
