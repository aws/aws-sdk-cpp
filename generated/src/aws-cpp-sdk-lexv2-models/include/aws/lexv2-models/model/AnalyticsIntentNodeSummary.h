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
    AWS_LEXMODELSV2_API AnalyticsIntentNodeSummary();
    AWS_LEXMODELSV2_API AnalyticsIntentNodeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AnalyticsIntentNodeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the intent at the end of the requested path.</p>
     */
    inline const Aws::String& GetIntentName() const{ return m_intentName; }
    inline bool IntentNameHasBeenSet() const { return m_intentNameHasBeenSet; }
    inline void SetIntentName(const Aws::String& value) { m_intentNameHasBeenSet = true; m_intentName = value; }
    inline void SetIntentName(Aws::String&& value) { m_intentNameHasBeenSet = true; m_intentName = std::move(value); }
    inline void SetIntentName(const char* value) { m_intentNameHasBeenSet = true; m_intentName.assign(value); }
    inline AnalyticsIntentNodeSummary& WithIntentName(const Aws::String& value) { SetIntentName(value); return *this;}
    inline AnalyticsIntentNodeSummary& WithIntentName(Aws::String&& value) { SetIntentName(std::move(value)); return *this;}
    inline AnalyticsIntentNodeSummary& WithIntentName(const char* value) { SetIntentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path.</p>
     */
    inline const Aws::String& GetIntentPath() const{ return m_intentPath; }
    inline bool IntentPathHasBeenSet() const { return m_intentPathHasBeenSet; }
    inline void SetIntentPath(const Aws::String& value) { m_intentPathHasBeenSet = true; m_intentPath = value; }
    inline void SetIntentPath(Aws::String&& value) { m_intentPathHasBeenSet = true; m_intentPath = std::move(value); }
    inline void SetIntentPath(const char* value) { m_intentPathHasBeenSet = true; m_intentPath.assign(value); }
    inline AnalyticsIntentNodeSummary& WithIntentPath(const Aws::String& value) { SetIntentPath(value); return *this;}
    inline AnalyticsIntentNodeSummary& WithIntentPath(Aws::String&& value) { SetIntentPath(std::move(value)); return *this;}
    inline AnalyticsIntentNodeSummary& WithIntentPath(const char* value) { SetIntentPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of sessions that follow the given path to the given
     * intent.</p>
     */
    inline int GetIntentCount() const{ return m_intentCount; }
    inline bool IntentCountHasBeenSet() const { return m_intentCountHasBeenSet; }
    inline void SetIntentCount(int value) { m_intentCountHasBeenSet = true; m_intentCount = value; }
    inline AnalyticsIntentNodeSummary& WithIntentCount(int value) { SetIntentCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of intents up to and including the requested path.</p>
     */
    inline int GetIntentLevel() const{ return m_intentLevel; }
    inline bool IntentLevelHasBeenSet() const { return m_intentLevelHasBeenSet; }
    inline void SetIntentLevel(int value) { m_intentLevelHasBeenSet = true; m_intentLevel = value; }
    inline AnalyticsIntentNodeSummary& WithIntentLevel(int value) { SetIntentLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the node is the end of a path (<code>Exit</code>) or not
     * (<code>Inner</code>).</p>
     */
    inline const AnalyticsNodeType& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const AnalyticsNodeType& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(AnalyticsNodeType&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline AnalyticsIntentNodeSummary& WithNodeType(const AnalyticsNodeType& value) { SetNodeType(value); return *this;}
    inline AnalyticsIntentNodeSummary& WithNodeType(AnalyticsNodeType&& value) { SetNodeType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_intentName;
    bool m_intentNameHasBeenSet = false;

    Aws::String m_intentPath;
    bool m_intentPathHasBeenSet = false;

    int m_intentCount;
    bool m_intentCountHasBeenSet = false;

    int m_intentLevel;
    bool m_intentLevelHasBeenSet = false;

    AnalyticsNodeType m_nodeType;
    bool m_nodeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
