/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/RuntimeHints.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/ActiveContext.h>
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
   * <p>Specifications for the current state of the dialog between the user and the
   * bot in the test set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/InputSessionStateSpecification">AWS
   * API Reference</a></p>
   */
  class InputSessionStateSpecification
  {
  public:
    AWS_LEXMODELSV2_API InputSessionStateSpecification();
    AWS_LEXMODELSV2_API InputSessionStateSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API InputSessionStateSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Session attributes for the session state.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSessionAttributes() const{ return m_sessionAttributes; }

    /**
     * <p>Session attributes for the session state.</p>
     */
    inline bool SessionAttributesHasBeenSet() const { return m_sessionAttributesHasBeenSet; }

    /**
     * <p>Session attributes for the session state.</p>
     */
    inline void SetSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = value; }

    /**
     * <p>Session attributes for the session state.</p>
     */
    inline void SetSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes = std::move(value); }

    /**
     * <p>Session attributes for the session state.</p>
     */
    inline InputSessionStateSpecification& WithSessionAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetSessionAttributes(value); return *this;}

    /**
     * <p>Session attributes for the session state.</p>
     */
    inline InputSessionStateSpecification& WithSessionAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetSessionAttributes(std::move(value)); return *this;}

    /**
     * <p>Session attributes for the session state.</p>
     */
    inline InputSessionStateSpecification& AddSessionAttributes(const Aws::String& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }

    /**
     * <p>Session attributes for the session state.</p>
     */
    inline InputSessionStateSpecification& AddSessionAttributes(Aws::String&& key, const Aws::String& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Session attributes for the session state.</p>
     */
    inline InputSessionStateSpecification& AddSessionAttributes(const Aws::String& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Session attributes for the session state.</p>
     */
    inline InputSessionStateSpecification& AddSessionAttributes(Aws::String&& key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Session attributes for the session state.</p>
     */
    inline InputSessionStateSpecification& AddSessionAttributes(const char* key, Aws::String&& value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Session attributes for the session state.</p>
     */
    inline InputSessionStateSpecification& AddSessionAttributes(Aws::String&& key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Session attributes for the session state.</p>
     */
    inline InputSessionStateSpecification& AddSessionAttributes(const char* key, const char* value) { m_sessionAttributesHasBeenSet = true; m_sessionAttributes.emplace(key, value); return *this; }


    /**
     * <p>Active contexts for the session state.</p>
     */
    inline const Aws::Vector<ActiveContext>& GetActiveContexts() const{ return m_activeContexts; }

    /**
     * <p>Active contexts for the session state.</p>
     */
    inline bool ActiveContextsHasBeenSet() const { return m_activeContextsHasBeenSet; }

    /**
     * <p>Active contexts for the session state.</p>
     */
    inline void SetActiveContexts(const Aws::Vector<ActiveContext>& value) { m_activeContextsHasBeenSet = true; m_activeContexts = value; }

    /**
     * <p>Active contexts for the session state.</p>
     */
    inline void SetActiveContexts(Aws::Vector<ActiveContext>&& value) { m_activeContextsHasBeenSet = true; m_activeContexts = std::move(value); }

    /**
     * <p>Active contexts for the session state.</p>
     */
    inline InputSessionStateSpecification& WithActiveContexts(const Aws::Vector<ActiveContext>& value) { SetActiveContexts(value); return *this;}

    /**
     * <p>Active contexts for the session state.</p>
     */
    inline InputSessionStateSpecification& WithActiveContexts(Aws::Vector<ActiveContext>&& value) { SetActiveContexts(std::move(value)); return *this;}

    /**
     * <p>Active contexts for the session state.</p>
     */
    inline InputSessionStateSpecification& AddActiveContexts(const ActiveContext& value) { m_activeContextsHasBeenSet = true; m_activeContexts.push_back(value); return *this; }

    /**
     * <p>Active contexts for the session state.</p>
     */
    inline InputSessionStateSpecification& AddActiveContexts(ActiveContext&& value) { m_activeContextsHasBeenSet = true; m_activeContexts.push_back(std::move(value)); return *this; }


    /**
     * <p>Runtime hints for the session state.</p>
     */
    inline const RuntimeHints& GetRuntimeHints() const{ return m_runtimeHints; }

    /**
     * <p>Runtime hints for the session state.</p>
     */
    inline bool RuntimeHintsHasBeenSet() const { return m_runtimeHintsHasBeenSet; }

    /**
     * <p>Runtime hints for the session state.</p>
     */
    inline void SetRuntimeHints(const RuntimeHints& value) { m_runtimeHintsHasBeenSet = true; m_runtimeHints = value; }

    /**
     * <p>Runtime hints for the session state.</p>
     */
    inline void SetRuntimeHints(RuntimeHints&& value) { m_runtimeHintsHasBeenSet = true; m_runtimeHints = std::move(value); }

    /**
     * <p>Runtime hints for the session state.</p>
     */
    inline InputSessionStateSpecification& WithRuntimeHints(const RuntimeHints& value) { SetRuntimeHints(value); return *this;}

    /**
     * <p>Runtime hints for the session state.</p>
     */
    inline InputSessionStateSpecification& WithRuntimeHints(RuntimeHints&& value) { SetRuntimeHints(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_sessionAttributes;
    bool m_sessionAttributesHasBeenSet = false;

    Aws::Vector<ActiveContext> m_activeContexts;
    bool m_activeContextsHasBeenSet = false;

    RuntimeHints m_runtimeHints;
    bool m_runtimeHintsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
