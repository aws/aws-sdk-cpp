/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CloudSearchDomain
{
namespace Model
{

  /**
   * <p>Information about a document that matches the search request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/Hit">AWS
   * API Reference</a></p>
   */
  class Hit
  {
  public:
    AWS_CLOUDSEARCHDOMAIN_API Hit() = default;
    AWS_CLOUDSEARCHDOMAIN_API Hit(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API Hit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDSEARCHDOMAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The document ID of a document that matches the search request.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Hit& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fields returned from a document that matches the search request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    Hit& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsKeyT = Aws::String, typename FieldsValueT = Aws::Vector<Aws::String>>
    Hit& AddFields(FieldsKeyT&& key, FieldsValueT&& value) {
      m_fieldsHasBeenSet = true; m_fields.emplace(std::forward<FieldsKeyT>(key), std::forward<FieldsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The expressions returned from a document that matches the search request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExprs() const { return m_exprs; }
    inline bool ExprsHasBeenSet() const { return m_exprsHasBeenSet; }
    template<typename ExprsT = Aws::Map<Aws::String, Aws::String>>
    void SetExprs(ExprsT&& value) { m_exprsHasBeenSet = true; m_exprs = std::forward<ExprsT>(value); }
    template<typename ExprsT = Aws::Map<Aws::String, Aws::String>>
    Hit& WithExprs(ExprsT&& value) { SetExprs(std::forward<ExprsT>(value)); return *this;}
    template<typename ExprsKeyT = Aws::String, typename ExprsValueT = Aws::String>
    Hit& AddExprs(ExprsKeyT&& key, ExprsValueT&& value) {
      m_exprsHasBeenSet = true; m_exprs.emplace(std::forward<ExprsKeyT>(key), std::forward<ExprsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The highlights returned from a document that matches the search request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHighlights() const { return m_highlights; }
    inline bool HighlightsHasBeenSet() const { return m_highlightsHasBeenSet; }
    template<typename HighlightsT = Aws::Map<Aws::String, Aws::String>>
    void SetHighlights(HighlightsT&& value) { m_highlightsHasBeenSet = true; m_highlights = std::forward<HighlightsT>(value); }
    template<typename HighlightsT = Aws::Map<Aws::String, Aws::String>>
    Hit& WithHighlights(HighlightsT&& value) { SetHighlights(std::forward<HighlightsT>(value)); return *this;}
    template<typename HighlightsKeyT = Aws::String, typename HighlightsValueT = Aws::String>
    Hit& AddHighlights(HighlightsKeyT&& key, HighlightsValueT&& value) {
      m_highlightsHasBeenSet = true; m_highlights.emplace(std::forward<HighlightsKeyT>(key), std::forward<HighlightsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_exprs;
    bool m_exprsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_highlights;
    bool m_highlightsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
