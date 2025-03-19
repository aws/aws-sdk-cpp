/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/AnalyticsNodeType.h>
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
   * <p>An object containing information about the requested path.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AnalyticsIntentNodeSummary">AWS
   * API Reference</a></p>
   */
  class AnalyticsIntentNodeSummary
  {
  public:
    AWS_LEXMODELSV2_API AnalyticsIntentNodeSummary() = default;
    AWS_LEXMODELSV2_API AnalyticsIntentNodeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsIntentNodeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the intent at the end of the requested path.</p>
     */
    inline const Aws::String& GetIntentName() const { return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    template<typename IntentNameT = Aws::String>
    void SetIntentName(IntentNameT&& value) { m_intentNameHasBeenSet = true; m_intentName = std::forward<IntentNameT>(value); }
    template<typename IntentNameT = Aws::String>
    AnalyticsIntentNodeSummary& WithIntentName(IntentNameT&& value) { SetIntentName(std::forward<IntentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path.</p>
     */
    inline const Aws::String& GetIntentPath() const { return m_intentPath; }
    inline bool IntentPathHasBeenSet() const { return m_intentPathHasBeenSet; }
    template<typename IntentPathT = Aws::String>
    void SetIntentPath(IntentPathT&& value) { m_intentPathHasBeenSet = true; m_intentPath = std::forward<IntentPathT>(value); }
    template<typename IntentPathT = Aws::String>
    AnalyticsIntentNodeSummary& WithIntentPath(IntentPathT&& value) { SetIntentPath(std::forward<IntentPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of sessions that follow the given path to the given
     * intent.</p>
     */
    inline int GetIntentCount() const { return m_intentCount; }
    inline bool IntentCountHasBeenSet() const { return m_intentCountHasBeenSet; }
    inline void SetIntentCount(int value) { m_intentCountHasBeenSet = true; m_intentCount = value; }
    inline AnalyticsIntentNodeSummary& WithIntentCount(int value) { SetIntentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of intents up to and including the requested path.</p>
     */
    inline int GetIntentLevel() const { return m_intentLevel; }
    inline bool IntentLevelHasBeenSet() const { return m_intentLevelHasBeenSet; }
    inline void SetIntentLevel(int value) { m_intentLevelHasBeenSet = true; m_intentLevel = value; }
    inline AnalyticsIntentNodeSummary& WithIntentLevel(int value) { SetIntentLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the node is the end of a path (<code>Exit</code>) or not
     * (<code>Inner</code>).</p>
     */
    inline AnalyticsNodeType GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(AnalyticsNodeType value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline AnalyticsIntentNodeSummary& WithNodeType(AnalyticsNodeType value) { SetNodeType(value); return *this;}
    ///@}
  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    Aws::String m_intentPath;
    bool m_intentPathHasBeenSet = false;

    int m_intentCount{0};
    bool m_intentCountHasBeenSet = false;

    int m_intentLevel{0};
    bool m_intentLevelHasBeenSet = false;

    AnalyticsNodeType m_nodeType{AnalyticsNodeType::NOT_SET};
    bool m_nodeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
