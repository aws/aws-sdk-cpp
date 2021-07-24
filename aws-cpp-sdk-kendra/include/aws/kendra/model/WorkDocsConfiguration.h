﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/DataSourceToIndexFieldMapping.h>
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
   * <p>Provides the configuration information to connect to Amazon WorkDocs as your
   * data source.</p> <p>Amazon WorkDocs connector is available in Oregon, North
   * Virginia, Sydney, Singapore and Ireland regions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/WorkDocsConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API WorkDocsConfiguration
  {
  public:
    WorkDocsConfiguration();
    WorkDocsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    WorkDocsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">AWS Directory
     * Service</a> by going to <b>Active Directory</b>, then <b>Directories</b>. Your
     * Amazon WorkDocs site directory has an ID, which is the organization ID. You can
     * also set up a new Amazon WorkDocs directory in the AWS Directory Service console
     * and enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
     * console.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">AWS Directory
     * Service</a> by going to <b>Active Directory</b>, then <b>Directories</b>. Your
     * Amazon WorkDocs site directory has an ID, which is the organization ID. You can
     * also set up a new Amazon WorkDocs directory in the AWS Directory Service console
     * and enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
     * console.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">AWS Directory
     * Service</a> by going to <b>Active Directory</b>, then <b>Directories</b>. Your
     * Amazon WorkDocs site directory has an ID, which is the organization ID. You can
     * also set up a new Amazon WorkDocs directory in the AWS Directory Service console
     * and enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
     * console.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">AWS Directory
     * Service</a> by going to <b>Active Directory</b>, then <b>Directories</b>. Your
     * Amazon WorkDocs site directory has an ID, which is the organization ID. You can
     * also set up a new Amazon WorkDocs directory in the AWS Directory Service console
     * and enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
     * console.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">AWS Directory
     * Service</a> by going to <b>Active Directory</b>, then <b>Directories</b>. Your
     * Amazon WorkDocs site directory has an ID, which is the organization ID. You can
     * also set up a new Amazon WorkDocs directory in the AWS Directory Service console
     * and enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
     * console.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">AWS Directory
     * Service</a> by going to <b>Active Directory</b>, then <b>Directories</b>. Your
     * Amazon WorkDocs site directory has an ID, which is the organization ID. You can
     * also set up a new Amazon WorkDocs directory in the AWS Directory Service console
     * and enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
     * console.</p>
     */
    inline WorkDocsConfiguration& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">AWS Directory
     * Service</a> by going to <b>Active Directory</b>, then <b>Directories</b>. Your
     * Amazon WorkDocs site directory has an ID, which is the organization ID. You can
     * also set up a new Amazon WorkDocs directory in the AWS Directory Service console
     * and enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
     * console.</p>
     */
    inline WorkDocsConfiguration& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">AWS Directory
     * Service</a> by going to <b>Active Directory</b>, then <b>Directories</b>. Your
     * Amazon WorkDocs site directory has an ID, which is the organization ID. You can
     * also set up a new Amazon WorkDocs directory in the AWS Directory Service console
     * and enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
     * console.</p>
     */
    inline WorkDocsConfiguration& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p> <code>TRUE</code> to include comments on documents in your index. Including
     * comments in your index means each comment is a document that can be searched
     * on.</p> <p>The default is set to <code>FALSE</code>.</p>
     */
    inline bool GetCrawlComments() const{ return m_crawlComments; }

    /**
     * <p> <code>TRUE</code> to include comments on documents in your index. Including
     * comments in your index means each comment is a document that can be searched
     * on.</p> <p>The default is set to <code>FALSE</code>.</p>
     */
    inline bool CrawlCommentsHasBeenSet() const { return m_crawlCommentsHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to include comments on documents in your index. Including
     * comments in your index means each comment is a document that can be searched
     * on.</p> <p>The default is set to <code>FALSE</code>.</p>
     */
    inline void SetCrawlComments(bool value) { m_crawlCommentsHasBeenSet = true; m_crawlComments = value; }

    /**
     * <p> <code>TRUE</code> to include comments on documents in your index. Including
     * comments in your index means each comment is a document that can be searched
     * on.</p> <p>The default is set to <code>FALSE</code>.</p>
     */
    inline WorkDocsConfiguration& WithCrawlComments(bool value) { SetCrawlComments(value); return *this;}


    /**
     * <p> <code>TRUE</code> to use the change logs to update documents in your index
     * instead of scanning all documents.</p> <p>If you are syncing your Amazon
     * WorkDocs data source with your index for the first time, all documents are
     * scanned. After your first sync, you can use the change logs to update your
     * documents in your index for future syncs.</p> <p>The default is set to
     * <code>FALSE</code>.</p>
     */
    inline bool GetUseChangeLog() const{ return m_useChangeLog; }

    /**
     * <p> <code>TRUE</code> to use the change logs to update documents in your index
     * instead of scanning all documents.</p> <p>If you are syncing your Amazon
     * WorkDocs data source with your index for the first time, all documents are
     * scanned. After your first sync, you can use the change logs to update your
     * documents in your index for future syncs.</p> <p>The default is set to
     * <code>FALSE</code>.</p>
     */
    inline bool UseChangeLogHasBeenSet() const { return m_useChangeLogHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to use the change logs to update documents in your index
     * instead of scanning all documents.</p> <p>If you are syncing your Amazon
     * WorkDocs data source with your index for the first time, all documents are
     * scanned. After your first sync, you can use the change logs to update your
     * documents in your index for future syncs.</p> <p>The default is set to
     * <code>FALSE</code>.</p>
     */
    inline void SetUseChangeLog(bool value) { m_useChangeLogHasBeenSet = true; m_useChangeLog = value; }

    /**
     * <p> <code>TRUE</code> to use the change logs to update documents in your index
     * instead of scanning all documents.</p> <p>If you are syncing your Amazon
     * WorkDocs data source with your index for the first time, all documents are
     * scanned. After your first sync, you can use the change logs to update your
     * documents in your index for future syncs.</p> <p>The default is set to
     * <code>FALSE</code>.</p>
     */
    inline WorkDocsConfiguration& WithUseChangeLog(bool value) { SetUseChangeLog(value); return *this;}


    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline WorkDocsConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline WorkDocsConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline WorkDocsConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline WorkDocsConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline WorkDocsConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline WorkDocsConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline WorkDocsConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline WorkDocsConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline WorkDocsConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion pattern and an exclusion pattern, the exclusion
     * pattern takes precedence and the file isn’t included in the index.</p>
     */
    inline WorkDocsConfiguration& AddExclusionPatterns(const char* value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs field names to custom index field names in Amazon Kendra. You must
     * first create the custom index fields using the <code>UpdateIndex</code>
     * operation before you map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>. The Amazon WorkDocs data source field names need to
     * exist in your Amazon WorkDocs custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const{ return m_fieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs field names to custom index field names in Amazon Kendra. You must
     * first create the custom index fields using the <code>UpdateIndex</code>
     * operation before you map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>. The Amazon WorkDocs data source field names need to
     * exist in your Amazon WorkDocs custom metadata.</p>
     */
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs field names to custom index field names in Amazon Kendra. You must
     * first create the custom index fields using the <code>UpdateIndex</code>
     * operation before you map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>. The Amazon WorkDocs data source field names need to
     * exist in your Amazon WorkDocs custom metadata.</p>
     */
    inline void SetFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs field names to custom index field names in Amazon Kendra. You must
     * first create the custom index fields using the <code>UpdateIndex</code>
     * operation before you map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>. The Amazon WorkDocs data source field names need to
     * exist in your Amazon WorkDocs custom metadata.</p>
     */
    inline void SetFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs field names to custom index field names in Amazon Kendra. You must
     * first create the custom index fields using the <code>UpdateIndex</code>
     * operation before you map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>. The Amazon WorkDocs data source field names need to
     * exist in your Amazon WorkDocs custom metadata.</p>
     */
    inline WorkDocsConfiguration& WithFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs field names to custom index field names in Amazon Kendra. You must
     * first create the custom index fields using the <code>UpdateIndex</code>
     * operation before you map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>. The Amazon WorkDocs data source field names need to
     * exist in your Amazon WorkDocs custom metadata.</p>
     */
    inline WorkDocsConfiguration& WithFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs field names to custom index field names in Amazon Kendra. You must
     * first create the custom index fields using the <code>UpdateIndex</code>
     * operation before you map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>. The Amazon WorkDocs data source field names need to
     * exist in your Amazon WorkDocs custom metadata.</p>
     */
    inline WorkDocsConfiguration& AddFieldMappings(const DataSourceToIndexFieldMapping& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs field names to custom index field names in Amazon Kendra. You must
     * first create the custom index fields using the <code>UpdateIndex</code>
     * operation before you map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * Data Source Fields</a>. The Amazon WorkDocs data source field names need to
     * exist in your Amazon WorkDocs custom metadata.</p>
     */
    inline WorkDocsConfiguration& AddFieldMappings(DataSourceToIndexFieldMapping&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet;

    bool m_crawlComments;
    bool m_crawlCommentsHasBeenSet;

    bool m_useChangeLog;
    bool m_useChangeLogHasBeenSet;

    Aws::Vector<Aws::String> m_inclusionPatterns;
    bool m_inclusionPatternsHasBeenSet;

    Aws::Vector<Aws::String> m_exclusionPatterns;
    bool m_exclusionPatternsHasBeenSet;

    Aws::Vector<DataSourceToIndexFieldMapping> m_fieldMappings;
    bool m_fieldMappingsHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
