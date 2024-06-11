/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/SuggestionValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/SourceDocument.h>
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
   * <p>A single query suggestion.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Suggestion">AWS
   * API Reference</a></p>
   */
  class Suggestion
  {
  public:
    AWS_KENDRA_API Suggestion();
    AWS_KENDRA_API Suggestion(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Suggestion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The UUID (universally unique identifier) of a single query suggestion.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Suggestion& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Suggestion& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Suggestion& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the UUID (universally unique identifier) of a single query
     * suggestion.</p> <p>The value is the text string of a suggestion.</p>
     */
    inline const SuggestionValue& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const SuggestionValue& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(SuggestionValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline Suggestion& WithValue(const SuggestionValue& value) { SetValue(value); return *this;}
    inline Suggestion& WithValue(SuggestionValue&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of document IDs and their fields/attributes that are used for a
     * single query suggestion, if document fields set to use for query
     * suggestions.</p>
     */
    inline const Aws::Vector<SourceDocument>& GetSourceDocuments() const{ return m_sourceDocuments; }
    inline bool SourceDocumentsHasBeenSet() const { return m_sourceDocumentsHasBeenSet; }
    inline void SetSourceDocuments(const Aws::Vector<SourceDocument>& value) { m_sourceDocumentsHasBeenSet = true; m_sourceDocuments = value; }
    inline void SetSourceDocuments(Aws::Vector<SourceDocument>&& value) { m_sourceDocumentsHasBeenSet = true; m_sourceDocuments = std::move(value); }
    inline Suggestion& WithSourceDocuments(const Aws::Vector<SourceDocument>& value) { SetSourceDocuments(value); return *this;}
    inline Suggestion& WithSourceDocuments(Aws::Vector<SourceDocument>&& value) { SetSourceDocuments(std::move(value)); return *this;}
    inline Suggestion& AddSourceDocuments(const SourceDocument& value) { m_sourceDocumentsHasBeenSet = true; m_sourceDocuments.push_back(value); return *this; }
    inline Suggestion& AddSourceDocuments(SourceDocument&& value) { m_sourceDocumentsHasBeenSet = true; m_sourceDocuments.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    SuggestionValue m_value;
    bool m_valueHasBeenSet = false;

    Aws::Vector<SourceDocument> m_sourceDocuments;
    bool m_sourceDocumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
