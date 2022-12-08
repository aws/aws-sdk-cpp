/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>The configuration details of a batch inference job.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/BatchInferenceJobConfig">AWS
   * API Reference</a></p>
   */
  class BatchInferenceJobConfig
  {
  public:
    AWS_PERSONALIZE_API BatchInferenceJobConfig();
    AWS_PERSONALIZE_API BatchInferenceJobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API BatchInferenceJobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string to string map specifying the exploration configuration
     * hyperparameters, including <code>explorationWeight</code> and
     * <code>explorationItemAgeCutOff</code>, you want to use to configure the amount
     * of item exploration Amazon Personalize uses when recommending items. See <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetItemExplorationConfig() const{ return m_itemExplorationConfig; }

    /**
     * <p>A string to string map specifying the exploration configuration
     * hyperparameters, including <code>explorationWeight</code> and
     * <code>explorationItemAgeCutOff</code>, you want to use to configure the amount
     * of item exploration Amazon Personalize uses when recommending items. See <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>.</p>
     */
    inline bool ItemExplorationConfigHasBeenSet() const { return m_itemExplorationConfigHasBeenSet; }

    /**
     * <p>A string to string map specifying the exploration configuration
     * hyperparameters, including <code>explorationWeight</code> and
     * <code>explorationItemAgeCutOff</code>, you want to use to configure the amount
     * of item exploration Amazon Personalize uses when recommending items. See <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>.</p>
     */
    inline void SetItemExplorationConfig(const Aws::Map<Aws::String, Aws::String>& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig = value; }

    /**
     * <p>A string to string map specifying the exploration configuration
     * hyperparameters, including <code>explorationWeight</code> and
     * <code>explorationItemAgeCutOff</code>, you want to use to configure the amount
     * of item exploration Amazon Personalize uses when recommending items. See <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>.</p>
     */
    inline void SetItemExplorationConfig(Aws::Map<Aws::String, Aws::String>&& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig = std::move(value); }

    /**
     * <p>A string to string map specifying the exploration configuration
     * hyperparameters, including <code>explorationWeight</code> and
     * <code>explorationItemAgeCutOff</code>, you want to use to configure the amount
     * of item exploration Amazon Personalize uses when recommending items. See <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>.</p>
     */
    inline BatchInferenceJobConfig& WithItemExplorationConfig(const Aws::Map<Aws::String, Aws::String>& value) { SetItemExplorationConfig(value); return *this;}

    /**
     * <p>A string to string map specifying the exploration configuration
     * hyperparameters, including <code>explorationWeight</code> and
     * <code>explorationItemAgeCutOff</code>, you want to use to configure the amount
     * of item exploration Amazon Personalize uses when recommending items. See <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>.</p>
     */
    inline BatchInferenceJobConfig& WithItemExplorationConfig(Aws::Map<Aws::String, Aws::String>&& value) { SetItemExplorationConfig(std::move(value)); return *this;}

    /**
     * <p>A string to string map specifying the exploration configuration
     * hyperparameters, including <code>explorationWeight</code> and
     * <code>explorationItemAgeCutOff</code>, you want to use to configure the amount
     * of item exploration Amazon Personalize uses when recommending items. See <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>.</p>
     */
    inline BatchInferenceJobConfig& AddItemExplorationConfig(const Aws::String& key, const Aws::String& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(key, value); return *this; }

    /**
     * <p>A string to string map specifying the exploration configuration
     * hyperparameters, including <code>explorationWeight</code> and
     * <code>explorationItemAgeCutOff</code>, you want to use to configure the amount
     * of item exploration Amazon Personalize uses when recommending items. See <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>.</p>
     */
    inline BatchInferenceJobConfig& AddItemExplorationConfig(Aws::String&& key, const Aws::String& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string to string map specifying the exploration configuration
     * hyperparameters, including <code>explorationWeight</code> and
     * <code>explorationItemAgeCutOff</code>, you want to use to configure the amount
     * of item exploration Amazon Personalize uses when recommending items. See <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>.</p>
     */
    inline BatchInferenceJobConfig& AddItemExplorationConfig(const Aws::String& key, Aws::String&& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string to string map specifying the exploration configuration
     * hyperparameters, including <code>explorationWeight</code> and
     * <code>explorationItemAgeCutOff</code>, you want to use to configure the amount
     * of item exploration Amazon Personalize uses when recommending items. See <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>.</p>
     */
    inline BatchInferenceJobConfig& AddItemExplorationConfig(Aws::String&& key, Aws::String&& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A string to string map specifying the exploration configuration
     * hyperparameters, including <code>explorationWeight</code> and
     * <code>explorationItemAgeCutOff</code>, you want to use to configure the amount
     * of item exploration Amazon Personalize uses when recommending items. See <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>.</p>
     */
    inline BatchInferenceJobConfig& AddItemExplorationConfig(const char* key, Aws::String&& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A string to string map specifying the exploration configuration
     * hyperparameters, including <code>explorationWeight</code> and
     * <code>explorationItemAgeCutOff</code>, you want to use to configure the amount
     * of item exploration Amazon Personalize uses when recommending items. See <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>.</p>
     */
    inline BatchInferenceJobConfig& AddItemExplorationConfig(Aws::String&& key, const char* value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(std::move(key), value); return *this; }

    /**
     * <p>A string to string map specifying the exploration configuration
     * hyperparameters, including <code>explorationWeight</code> and
     * <code>explorationItemAgeCutOff</code>, you want to use to configure the amount
     * of item exploration Amazon Personalize uses when recommending items. See <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>.</p>
     */
    inline BatchInferenceJobConfig& AddItemExplorationConfig(const char* key, const char* value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_itemExplorationConfig;
    bool m_itemExplorationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
