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
    AWS_LEXRUNTIMEV2_API ActiveContext() = default;
    AWS_LEXRUNTIMEV2_API ActiveContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API ActiveContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the context.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ActiveContext& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the number of turns or seconds that the context is active. Once the
     * time to live expires, the context is no longer returned in a response.</p>
     */
    inline const ActiveContextTimeToLive& GetTimeToLive() const { return m_timeToLive; }
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }
    template<typename TimeToLiveT = ActiveContextTimeToLive>
    void SetTimeToLive(TimeToLiveT&& value) { m_timeToLiveHasBeenSet = true; m_timeToLive = std::forward<TimeToLiveT>(value); }
    template<typename TimeToLiveT = ActiveContextTimeToLive>
    ActiveContext& WithTimeToLive(TimeToLiveT&& value) { SetTimeToLive(std::forward<TimeToLiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of contexts active for the request. A context can be activated when a
     * previous intent is fulfilled, or by including the context in the request.</p>
     * <p>If you don't specify a list of contexts, Amazon Lex V2 will use the current
     * list of contexts for the session. If you specify an empty list, all contexts for
     * the session are cleared. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContextAttributes() const { return m_contextAttributes; }
    inline bool ContextAttributesHasBeenSet() const { return m_contextAttributesHasBeenSet; }
    template<typename ContextAttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetContextAttributes(ContextAttributesT&& value) { m_contextAttributesHasBeenSet = true; m_contextAttributes = std::forward<ContextAttributesT>(value); }
    template<typename ContextAttributesT = Aws::Map<Aws::String, Aws::String>>
    ActiveContext& WithContextAttributes(ContextAttributesT&& value) { SetContextAttributes(std::forward<ContextAttributesT>(value)); return *this;}
    template<typename ContextAttributesKeyT = Aws::String, typename ContextAttributesValueT = Aws::String>
    ActiveContext& AddContextAttributes(ContextAttributesKeyT&& key, ContextAttributesValueT&& value) {
      m_contextAttributesHasBeenSet = true; m_contextAttributes.emplace(std::forward<ContextAttributesKeyT>(key), std::forward<ContextAttributesValueT>(value)); return *this;
    }
    ///@}
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
