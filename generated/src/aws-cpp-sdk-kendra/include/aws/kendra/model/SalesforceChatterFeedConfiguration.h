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
    AWS_KENDRA_API SalesforceChatterFeedConfiguration();
    AWS_KENDRA_API SalesforceChatterFeedConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SalesforceChatterFeedConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * content to index. Typically this is the <code>Body</code> column.</p>
     */
    inline const Aws::String& GetDocumentDataFieldName() const{ return m_documentDataFieldName; }

    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * content to index. Typically this is the <code>Body</code> column.</p>
     */
    inline bool DocumentDataFieldNameHasBeenSet() const { return m_documentDataFieldNameHasBeenSet; }

    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * content to index. Typically this is the <code>Body</code> column.</p>
     */
    inline void SetDocumentDataFieldName(const Aws::String& value) { m_documentDataFieldNameHasBeenSet = true; m_documentDataFieldName = value; }

    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * content to index. Typically this is the <code>Body</code> column.</p>
     */
    inline void SetDocumentDataFieldName(Aws::String&& value) { m_documentDataFieldNameHasBeenSet = true; m_documentDataFieldName = std::move(value); }

    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * content to index. Typically this is the <code>Body</code> column.</p>
     */
    inline void SetDocumentDataFieldName(const char* value) { m_documentDataFieldNameHasBeenSet = true; m_documentDataFieldName.assign(value); }

    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * content to index. Typically this is the <code>Body</code> column.</p>
     */
    inline SalesforceChatterFeedConfiguration& WithDocumentDataFieldName(const Aws::String& value) { SetDocumentDataFieldName(value); return *this;}

    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * content to index. Typically this is the <code>Body</code> column.</p>
     */
    inline SalesforceChatterFeedConfiguration& WithDocumentDataFieldName(Aws::String&& value) { SetDocumentDataFieldName(std::move(value)); return *this;}

    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * content to index. Typically this is the <code>Body</code> column.</p>
     */
    inline SalesforceChatterFeedConfiguration& WithDocumentDataFieldName(const char* value) { SetDocumentDataFieldName(value); return *this;}


    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * title of the document. This is typically the <code>Title</code> column.</p>
     */
    inline const Aws::String& GetDocumentTitleFieldName() const{ return m_documentTitleFieldName; }

    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * title of the document. This is typically the <code>Title</code> column.</p>
     */
    inline bool DocumentTitleFieldNameHasBeenSet() const { return m_documentTitleFieldNameHasBeenSet; }

    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * title of the document. This is typically the <code>Title</code> column.</p>
     */
    inline void SetDocumentTitleFieldName(const Aws::String& value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName = value; }

    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * title of the document. This is typically the <code>Title</code> column.</p>
     */
    inline void SetDocumentTitleFieldName(Aws::String&& value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName = std::move(value); }

    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * title of the document. This is typically the <code>Title</code> column.</p>
     */
    inline void SetDocumentTitleFieldName(const char* value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName.assign(value); }

    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * title of the document. This is typically the <code>Title</code> column.</p>
     */
    inline SalesforceChatterFeedConfiguration& WithDocumentTitleFieldName(const Aws::String& value) { SetDocumentTitleFieldName(value); return *this;}

    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * title of the document. This is typically the <code>Title</code> column.</p>
     */
    inline SalesforceChatterFeedConfiguration& WithDocumentTitleFieldName(Aws::String&& value) { SetDocumentTitleFieldName(std::move(value)); return *this;}

    /**
     * <p>The name of the column in the Salesforce FeedItem table that contains the
     * title of the document. This is typically the <code>Title</code> column.</p>
     */
    inline SalesforceChatterFeedConfiguration& WithDocumentTitleFieldName(const char* value) { SetDocumentTitleFieldName(value); return *this;}


    /**
     * <p>Maps fields from a Salesforce chatter feed into Amazon Kendra index
     * fields.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const{ return m_fieldMappings; }

    /**
     * <p>Maps fields from a Salesforce chatter feed into Amazon Kendra index
     * fields.</p>
     */
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }

    /**
     * <p>Maps fields from a Salesforce chatter feed into Amazon Kendra index
     * fields.</p>
     */
    inline void SetFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = value; }

    /**
     * <p>Maps fields from a Salesforce chatter feed into Amazon Kendra index
     * fields.</p>
     */
    inline void SetFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::move(value); }

    /**
     * <p>Maps fields from a Salesforce chatter feed into Amazon Kendra index
     * fields.</p>
     */
    inline SalesforceChatterFeedConfiguration& WithFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetFieldMappings(value); return *this;}

    /**
     * <p>Maps fields from a Salesforce chatter feed into Amazon Kendra index
     * fields.</p>
     */
    inline SalesforceChatterFeedConfiguration& WithFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetFieldMappings(std::move(value)); return *this;}

    /**
     * <p>Maps fields from a Salesforce chatter feed into Amazon Kendra index
     * fields.</p>
     */
    inline SalesforceChatterFeedConfiguration& AddFieldMappings(const DataSourceToIndexFieldMapping& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(value); return *this; }

    /**
     * <p>Maps fields from a Salesforce chatter feed into Amazon Kendra index
     * fields.</p>
     */
    inline SalesforceChatterFeedConfiguration& AddFieldMappings(DataSourceToIndexFieldMapping&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters the documents in the feed based on status of the user. When you
     * specify <code>ACTIVE_USERS</code> only documents from users who have an active
     * account are indexed. When you specify <code>STANDARD_USER</code> only documents
     * for Salesforce standard users are documented. You can specify both.</p>
     */
    inline const Aws::Vector<SalesforceChatterFeedIncludeFilterType>& GetIncludeFilterTypes() const{ return m_includeFilterTypes; }

    /**
     * <p>Filters the documents in the feed based on status of the user. When you
     * specify <code>ACTIVE_USERS</code> only documents from users who have an active
     * account are indexed. When you specify <code>STANDARD_USER</code> only documents
     * for Salesforce standard users are documented. You can specify both.</p>
     */
    inline bool IncludeFilterTypesHasBeenSet() const { return m_includeFilterTypesHasBeenSet; }

    /**
     * <p>Filters the documents in the feed based on status of the user. When you
     * specify <code>ACTIVE_USERS</code> only documents from users who have an active
     * account are indexed. When you specify <code>STANDARD_USER</code> only documents
     * for Salesforce standard users are documented. You can specify both.</p>
     */
    inline void SetIncludeFilterTypes(const Aws::Vector<SalesforceChatterFeedIncludeFilterType>& value) { m_includeFilterTypesHasBeenSet = true; m_includeFilterTypes = value; }

    /**
     * <p>Filters the documents in the feed based on status of the user. When you
     * specify <code>ACTIVE_USERS</code> only documents from users who have an active
     * account are indexed. When you specify <code>STANDARD_USER</code> only documents
     * for Salesforce standard users are documented. You can specify both.</p>
     */
    inline void SetIncludeFilterTypes(Aws::Vector<SalesforceChatterFeedIncludeFilterType>&& value) { m_includeFilterTypesHasBeenSet = true; m_includeFilterTypes = std::move(value); }

    /**
     * <p>Filters the documents in the feed based on status of the user. When you
     * specify <code>ACTIVE_USERS</code> only documents from users who have an active
     * account are indexed. When you specify <code>STANDARD_USER</code> only documents
     * for Salesforce standard users are documented. You can specify both.</p>
     */
    inline SalesforceChatterFeedConfiguration& WithIncludeFilterTypes(const Aws::Vector<SalesforceChatterFeedIncludeFilterType>& value) { SetIncludeFilterTypes(value); return *this;}

    /**
     * <p>Filters the documents in the feed based on status of the user. When you
     * specify <code>ACTIVE_USERS</code> only documents from users who have an active
     * account are indexed. When you specify <code>STANDARD_USER</code> only documents
     * for Salesforce standard users are documented. You can specify both.</p>
     */
    inline SalesforceChatterFeedConfiguration& WithIncludeFilterTypes(Aws::Vector<SalesforceChatterFeedIncludeFilterType>&& value) { SetIncludeFilterTypes(std::move(value)); return *this;}

    /**
     * <p>Filters the documents in the feed based on status of the user. When you
     * specify <code>ACTIVE_USERS</code> only documents from users who have an active
     * account are indexed. When you specify <code>STANDARD_USER</code> only documents
     * for Salesforce standard users are documented. You can specify both.</p>
     */
    inline SalesforceChatterFeedConfiguration& AddIncludeFilterTypes(const SalesforceChatterFeedIncludeFilterType& value) { m_includeFilterTypesHasBeenSet = true; m_includeFilterTypes.push_back(value); return *this; }

    /**
     * <p>Filters the documents in the feed based on status of the user. When you
     * specify <code>ACTIVE_USERS</code> only documents from users who have an active
     * account are indexed. When you specify <code>STANDARD_USER</code> only documents
     * for Salesforce standard users are documented. You can specify both.</p>
     */
    inline SalesforceChatterFeedConfiguration& AddIncludeFilterTypes(SalesforceChatterFeedIncludeFilterType&& value) { m_includeFilterTypesHasBeenSet = true; m_includeFilterTypes.push_back(std::move(value)); return *this; }

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
