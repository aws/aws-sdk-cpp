/**
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
  class WorkDocsConfiguration
  {
  public:
    AWS_KENDRA_API WorkDocsConfiguration();
    AWS_KENDRA_API WorkDocsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API WorkDocsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">Directory Service</a>
     * by going to <b>Active Directory</b>, then <b>Directories</b>. Your Amazon
     * WorkDocs site directory has an ID, which is the organization ID. You can also
     * set up a new Amazon WorkDocs directory in the Directory Service console and
     * enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
     * console.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">Directory Service</a>
     * by going to <b>Active Directory</b>, then <b>Directories</b>. Your Amazon
     * WorkDocs site directory has an ID, which is the organization ID. You can also
     * set up a new Amazon WorkDocs directory in the Directory Service console and
     * enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
     * console.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">Directory Service</a>
     * by going to <b>Active Directory</b>, then <b>Directories</b>. Your Amazon
     * WorkDocs site directory has an ID, which is the organization ID. You can also
     * set up a new Amazon WorkDocs directory in the Directory Service console and
     * enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
     * console.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">Directory Service</a>
     * by going to <b>Active Directory</b>, then <b>Directories</b>. Your Amazon
     * WorkDocs site directory has an ID, which is the organization ID. You can also
     * set up a new Amazon WorkDocs directory in the Directory Service console and
     * enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
     * console.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">Directory Service</a>
     * by going to <b>Active Directory</b>, then <b>Directories</b>. Your Amazon
     * WorkDocs site directory has an ID, which is the organization ID. You can also
     * set up a new Amazon WorkDocs directory in the Directory Service console and
     * enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
     * console.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">Directory Service</a>
     * by going to <b>Active Directory</b>, then <b>Directories</b>. Your Amazon
     * WorkDocs site directory has an ID, which is the organization ID. You can also
     * set up a new Amazon WorkDocs directory in the Directory Service console and
     * enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
     * console.</p>
     */
    inline WorkDocsConfiguration& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">Directory Service</a>
     * by going to <b>Active Directory</b>, then <b>Directories</b>. Your Amazon
     * WorkDocs site directory has an ID, which is the organization ID. You can also
     * set up a new Amazon WorkDocs directory in the Directory Service console and
     * enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
     * console.</p>
     */
    inline WorkDocsConfiguration& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory corresponding to your Amazon WorkDocs site
     * repository.</p> <p>You can find the organization ID in the <a
     * href="https://console.aws.amazon.com/directoryservicev2/">Directory Service</a>
     * by going to <b>Active Directory</b>, then <b>Directories</b>. Your Amazon
     * WorkDocs site directory has an ID, which is the organization ID. You can also
     * set up a new Amazon WorkDocs directory in the Directory Service console and
     * enable a Amazon WorkDocs site for the directory in the Amazon WorkDocs
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
     * <p> <code>TRUE</code> to use the Amazon WorkDocs change log to determine which
     * documents require updating in the index. Depending on the change log's size, it
     * may take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in Amazon WorkDocs.</p>
     */
    inline bool GetUseChangeLog() const{ return m_useChangeLog; }

    /**
     * <p> <code>TRUE</code> to use the Amazon WorkDocs change log to determine which
     * documents require updating in the index. Depending on the change log's size, it
     * may take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in Amazon WorkDocs.</p>
     */
    inline bool UseChangeLogHasBeenSet() const { return m_useChangeLogHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to use the Amazon WorkDocs change log to determine which
     * documents require updating in the index. Depending on the change log's size, it
     * may take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in Amazon WorkDocs.</p>
     */
    inline void SetUseChangeLog(bool value) { m_useChangeLogHasBeenSet = true; m_useChangeLog = value; }

    /**
     * <p> <code>TRUE</code> to use the Amazon WorkDocs change log to determine which
     * documents require updating in the index. Depending on the change log's size, it
     * may take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in Amazon WorkDocs.</p>
     */
    inline WorkDocsConfiguration& WithUseChangeLog(bool value) { SetUseChangeLog(value); return *this;}


    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const{ return m_inclusionPatterns; }

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline void SetInclusionPatterns(const Aws::Vector<Aws::String>& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline void SetInclusionPatterns(Aws::Vector<Aws::String>&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline WorkDocsConfiguration& WithInclusionPatterns(const Aws::Vector<Aws::String>& value) { SetInclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline WorkDocsConfiguration& WithInclusionPatterns(Aws::Vector<Aws::String>&& value) { SetInclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline WorkDocsConfiguration& AddInclusionPatterns(const Aws::String& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline WorkDocsConfiguration& AddInclusionPatterns(Aws::String&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline WorkDocsConfiguration& AddInclusionPatterns(const char* value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const{ return m_exclusionPatterns; }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline void SetExclusionPatterns(const Aws::Vector<Aws::String>& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = value; }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline void SetExclusionPatterns(Aws::Vector<Aws::String>&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline WorkDocsConfiguration& WithExclusionPatterns(const Aws::Vector<Aws::String>& value) { SetExclusionPatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline WorkDocsConfiguration& WithExclusionPatterns(Aws::Vector<Aws::String>&& value) { SetExclusionPatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline WorkDocsConfiguration& AddExclusionPatterns(const Aws::String& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline WorkDocsConfiguration& AddExclusionPatterns(Aws::String&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline WorkDocsConfiguration& AddExclusionPatterns(const char* value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.push_back(value); return *this; }


    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Amazon WorkDocs data source field names must exist
     * in your Amazon WorkDocs custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const{ return m_fieldMappings; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Amazon WorkDocs data source field names must exist
     * in your Amazon WorkDocs custom metadata.</p>
     */
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Amazon WorkDocs data source field names must exist
     * in your Amazon WorkDocs custom metadata.</p>
     */
    inline void SetFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = value; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Amazon WorkDocs data source field names must exist
     * in your Amazon WorkDocs custom metadata.</p>
     */
    inline void SetFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::move(value); }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Amazon WorkDocs data source field names must exist
     * in your Amazon WorkDocs custom metadata.</p>
     */
    inline WorkDocsConfiguration& WithFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetFieldMappings(value); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Amazon WorkDocs data source field names must exist
     * in your Amazon WorkDocs custom metadata.</p>
     */
    inline WorkDocsConfiguration& WithFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetFieldMappings(std::move(value)); return *this;}

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Amazon WorkDocs data source field names must exist
     * in your Amazon WorkDocs custom metadata.</p>
     */
    inline WorkDocsConfiguration& AddFieldMappings(const DataSourceToIndexFieldMapping& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(value); return *this; }

    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Amazon WorkDocs data source field names must exist
     * in your Amazon WorkDocs custom metadata.</p>
     */
    inline WorkDocsConfiguration& AddFieldMappings(DataSourceToIndexFieldMapping&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    bool m_crawlComments;
    bool m_crawlCommentsHasBeenSet = false;

    bool m_useChangeLog;
    bool m_useChangeLogHasBeenSet = false;

    Aws::Vector<Aws::String> m_inclusionPatterns;
    bool m_inclusionPatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusionPatterns;
    bool m_exclusionPatternsHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_fieldMappings;
    bool m_fieldMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
