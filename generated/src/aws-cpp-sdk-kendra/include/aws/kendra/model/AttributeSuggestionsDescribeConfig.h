/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/AttributeSuggestionsMode.h>
#include <aws/kendra/model/SuggestableConfig.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Gets information on the configuration of document fields/attributes that you
   * want to base query suggestions on. To change your configuration, use <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/API_AttributeSuggestionsUpdateConfig.html">AttributeSuggestionsUpdateConfig</a>
   * and then call <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateQuerySuggestionsConfig.html">UpdateQuerySuggestionsConfig</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/AttributeSuggestionsDescribeConfig">AWS
   * API Reference</a></p>
   */
  class AttributeSuggestionsDescribeConfig
  {
  public:
    AWS_KENDRA_API AttributeSuggestionsDescribeConfig();
    AWS_KENDRA_API AttributeSuggestionsDescribeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API AttributeSuggestionsDescribeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of fields/attributes that you want to set as suggestible for query
     * suggestions.</p>
     */
    inline const Aws::Vector<SuggestableConfig>& GetSuggestableConfigList() const{ return m_suggestableConfigList; }

    /**
     * <p>The list of fields/attributes that you want to set as suggestible for query
     * suggestions.</p>
     */
    inline bool SuggestableConfigListHasBeenSet() const { return m_suggestableConfigListHasBeenSet; }

    /**
     * <p>The list of fields/attributes that you want to set as suggestible for query
     * suggestions.</p>
     */
    inline void SetSuggestableConfigList(const Aws::Vector<SuggestableConfig>& value) { m_suggestableConfigListHasBeenSet = true; m_suggestableConfigList = value; }

    /**
     * <p>The list of fields/attributes that you want to set as suggestible for query
     * suggestions.</p>
     */
    inline void SetSuggestableConfigList(Aws::Vector<SuggestableConfig>&& value) { m_suggestableConfigListHasBeenSet = true; m_suggestableConfigList = std::move(value); }

    /**
     * <p>The list of fields/attributes that you want to set as suggestible for query
     * suggestions.</p>
     */
    inline AttributeSuggestionsDescribeConfig& WithSuggestableConfigList(const Aws::Vector<SuggestableConfig>& value) { SetSuggestableConfigList(value); return *this;}

    /**
     * <p>The list of fields/attributes that you want to set as suggestible for query
     * suggestions.</p>
     */
    inline AttributeSuggestionsDescribeConfig& WithSuggestableConfigList(Aws::Vector<SuggestableConfig>&& value) { SetSuggestableConfigList(std::move(value)); return *this;}

    /**
     * <p>The list of fields/attributes that you want to set as suggestible for query
     * suggestions.</p>
     */
    inline AttributeSuggestionsDescribeConfig& AddSuggestableConfigList(const SuggestableConfig& value) { m_suggestableConfigListHasBeenSet = true; m_suggestableConfigList.push_back(value); return *this; }

    /**
     * <p>The list of fields/attributes that you want to set as suggestible for query
     * suggestions.</p>
     */
    inline AttributeSuggestionsDescribeConfig& AddSuggestableConfigList(SuggestableConfig&& value) { m_suggestableConfigListHasBeenSet = true; m_suggestableConfigList.push_back(std::move(value)); return *this; }


    /**
     * <p>The mode is set to either <code>ACTIVE</code> or <code>INACTIVE</code>. If
     * the <code>Mode</code> for query history is set to <code>ENABLED</code> when
     * calling <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateQuerySuggestionsConfig.html">UpdateQuerySuggestionsConfig</a>
     * and <code>AttributeSuggestionsMode</code> to use fields/attributes is set to
     * <code>ACTIVE</code>, and you haven't set your <code>SuggestionTypes</code>
     * preference to <code>DOCUMENT_ATTRIBUTES</code>, then Amazon Kendra uses the
     * query history.</p>
     */
    inline const AttributeSuggestionsMode& GetAttributeSuggestionsMode() const{ return m_attributeSuggestionsMode; }

    /**
     * <p>The mode is set to either <code>ACTIVE</code> or <code>INACTIVE</code>. If
     * the <code>Mode</code> for query history is set to <code>ENABLED</code> when
     * calling <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateQuerySuggestionsConfig.html">UpdateQuerySuggestionsConfig</a>
     * and <code>AttributeSuggestionsMode</code> to use fields/attributes is set to
     * <code>ACTIVE</code>, and you haven't set your <code>SuggestionTypes</code>
     * preference to <code>DOCUMENT_ATTRIBUTES</code>, then Amazon Kendra uses the
     * query history.</p>
     */
    inline bool AttributeSuggestionsModeHasBeenSet() const { return m_attributeSuggestionsModeHasBeenSet; }

    /**
     * <p>The mode is set to either <code>ACTIVE</code> or <code>INACTIVE</code>. If
     * the <code>Mode</code> for query history is set to <code>ENABLED</code> when
     * calling <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateQuerySuggestionsConfig.html">UpdateQuerySuggestionsConfig</a>
     * and <code>AttributeSuggestionsMode</code> to use fields/attributes is set to
     * <code>ACTIVE</code>, and you haven't set your <code>SuggestionTypes</code>
     * preference to <code>DOCUMENT_ATTRIBUTES</code>, then Amazon Kendra uses the
     * query history.</p>
     */
    inline void SetAttributeSuggestionsMode(const AttributeSuggestionsMode& value) { m_attributeSuggestionsModeHasBeenSet = true; m_attributeSuggestionsMode = value; }

    /**
     * <p>The mode is set to either <code>ACTIVE</code> or <code>INACTIVE</code>. If
     * the <code>Mode</code> for query history is set to <code>ENABLED</code> when
     * calling <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateQuerySuggestionsConfig.html">UpdateQuerySuggestionsConfig</a>
     * and <code>AttributeSuggestionsMode</code> to use fields/attributes is set to
     * <code>ACTIVE</code>, and you haven't set your <code>SuggestionTypes</code>
     * preference to <code>DOCUMENT_ATTRIBUTES</code>, then Amazon Kendra uses the
     * query history.</p>
     */
    inline void SetAttributeSuggestionsMode(AttributeSuggestionsMode&& value) { m_attributeSuggestionsModeHasBeenSet = true; m_attributeSuggestionsMode = std::move(value); }

    /**
     * <p>The mode is set to either <code>ACTIVE</code> or <code>INACTIVE</code>. If
     * the <code>Mode</code> for query history is set to <code>ENABLED</code> when
     * calling <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateQuerySuggestionsConfig.html">UpdateQuerySuggestionsConfig</a>
     * and <code>AttributeSuggestionsMode</code> to use fields/attributes is set to
     * <code>ACTIVE</code>, and you haven't set your <code>SuggestionTypes</code>
     * preference to <code>DOCUMENT_ATTRIBUTES</code>, then Amazon Kendra uses the
     * query history.</p>
     */
    inline AttributeSuggestionsDescribeConfig& WithAttributeSuggestionsMode(const AttributeSuggestionsMode& value) { SetAttributeSuggestionsMode(value); return *this;}

    /**
     * <p>The mode is set to either <code>ACTIVE</code> or <code>INACTIVE</code>. If
     * the <code>Mode</code> for query history is set to <code>ENABLED</code> when
     * calling <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_UpdateQuerySuggestionsConfig.html">UpdateQuerySuggestionsConfig</a>
     * and <code>AttributeSuggestionsMode</code> to use fields/attributes is set to
     * <code>ACTIVE</code>, and you haven't set your <code>SuggestionTypes</code>
     * preference to <code>DOCUMENT_ATTRIBUTES</code>, then Amazon Kendra uses the
     * query history.</p>
     */
    inline AttributeSuggestionsDescribeConfig& WithAttributeSuggestionsMode(AttributeSuggestionsMode&& value) { SetAttributeSuggestionsMode(std::move(value)); return *this;}

  private:

    Aws::Vector<SuggestableConfig> m_suggestableConfigList;
    bool m_suggestableConfigListHasBeenSet = false;

    AttributeSuggestionsMode m_attributeSuggestionsMode;
    bool m_attributeSuggestionsModeHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
