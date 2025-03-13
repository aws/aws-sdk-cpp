/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/DataSourceToIndexFieldMapping.h>
#include <aws/kendra/model/SalesforceChatterFeedIncludeFilterType.h>
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
   * <p>The configuration information for syncing a Salesforce chatter feed. The
   * contents of the object comes from the Salesforce FeedItem table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SalesforceChatterFeedConfiguration">AWS
   * API Reference</a></p>
   */
  class SalesforceChatterFeedConfiguration
  {
  public:
    AWS_KENDRA_API SalesforceChatterFeedConfiguration() = default;
    AWS_KENDRA_API SalesforceChatterFeedConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SalesforceChatterFeedConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * content to index. Typically this is the <code>Body</code> column.</p>
     */
    inline const Aws::String& GetDocumentDataFieldName() const { return m_documentDataFieldName; }
    inline bool DocumentDataFieldNameHasBeenSet() const { return m_documentDataFieldNameHasBeenSet; }
    template<typename DocumentDataFieldNameT = Aws::String>
    void SetDocumentDataFieldName(DocumentDataFieldNameT&& value) { m_documentDataFieldNameHasBeenSet = true; m_documentDataFieldName = std::forward<DocumentDataFieldNameT>(value); }
    template<typename DocumentDataFieldNameT = Aws::String>
    SalesforceChatterFeedConfiguration& WithDocumentDataFieldName(DocumentDataFieldNameT&& value) { SetDocumentDataFieldName(std::forward<DocumentDataFieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * title of the document. This is typically the <code>Title</code> column.</p>
     */
    inline const Aws::String& GetDocumentTitleFieldName() const { return m_documentTitleFieldName; }
    inline bool DocumentTitleFieldNameHasBeenSet() const { return m_documentTitleFieldNameHasBeenSet; }
    template<typename DocumentTitleFieldNameT = Aws::String>
    void SetDocumentTitleFieldName(DocumentTitleFieldNameT&& value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName = std::forward<DocumentTitleFieldNameT>(value); }
    template<typename DocumentTitleFieldNameT = Aws::String>
    SalesforceChatterFeedConfiguration& WithDocumentTitleFieldName(DocumentTitleFieldNameT&& value) { SetDocumentTitleFieldName(std::forward<DocumentTitleFieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maps fields from a Salesforce chatter feed into Amazon Kendra index
     * fields.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const { return m_fieldMappings; }
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::forward<FieldMappingsT>(value); }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    SalesforceChatterFeedConfiguration& WithFieldMappings(FieldMappingsT&& value) { SetFieldMappings(std::forward<FieldMappingsT>(value)); return *this;}
    template<typename FieldMappingsT = DataSourceToIndexFieldMapping>
    SalesforceChatterFeedConfiguration& AddFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.emplace_back(std::forward<FieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the documents in the feed based on status of the user. When you
     * specify <code>ACTIVE_USERS</code> only documents from users who have an active
     * account are indexed. When you specify <code>STANDARD_USER</code> only documents
     * for Salesforce standard users are documented. You can specify both.</p>
     */
    inline const Aws::Vector<SalesforceChatterFeedIncludeFilterType>& GetIncludeFilterTypes() const { return m_includeFilterTypes; }
    inline bool IncludeFilterTypesHasBeenSet() const { return m_includeFilterTypesHasBeenSet; }
    template<typename IncludeFilterTypesT = Aws::Vector<SalesforceChatterFeedIncludeFilterType>>
    void SetIncludeFilterTypes(IncludeFilterTypesT&& value) { m_includeFilterTypesHasBeenSet = true; m_includeFilterTypes = std::forward<IncludeFilterTypesT>(value); }
    template<typename IncludeFilterTypesT = Aws::Vector<SalesforceChatterFeedIncludeFilterType>>
    SalesforceChatterFeedConfiguration& WithIncludeFilterTypes(IncludeFilterTypesT&& value) { SetIncludeFilterTypes(std::forward<IncludeFilterTypesT>(value)); return *this;}
    inline SalesforceChatterFeedConfiguration& AddIncludeFilterTypes(SalesforceChatterFeedIncludeFilterType value) { m_includeFilterTypesHasBeenSet = true; m_includeFilterTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_documentDataFieldName;
    bool m_documentDataFieldNameHasBeenSet = false;

    Aws::String m_documentTitleFieldName;
    bool m_documentTitleFieldNameHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_fieldMappings;
    bool m_fieldMappingsHasBeenSet = false;

    Aws::Vector<SalesforceChatterFeedIncludeFilterType> m_includeFilterTypes;
    bool m_includeFilterTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
