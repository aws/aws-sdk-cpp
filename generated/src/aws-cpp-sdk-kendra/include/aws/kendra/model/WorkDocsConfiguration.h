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
    AWS_KENDRA_API WorkDocsConfiguration() = default;
    AWS_KENDRA_API WorkDocsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API WorkDocsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    WorkDocsConfiguration& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to include comments on documents in your index. Including
     * comments in your index means each comment is a document that can be searched
     * on.</p> <p>The default is set to <code>FALSE</code>.</p>
     */
    inline bool GetCrawlComments() const { return m_crawlComments; }
    inline bool CrawlCommentsHasBeenSet() const { return m_crawlCommentsHasBeenSet; }
    inline void SetCrawlComments(bool value) { m_crawlCommentsHasBeenSet = true; m_crawlComments = value; }
    inline WorkDocsConfiguration& WithCrawlComments(bool value) { SetCrawlComments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to use the Amazon WorkDocs change log to determine which
     * documents require updating in the index. Depending on the change log's size, it
     * may take longer for Amazon Kendra to use the change log than to scan all of your
     * documents in Amazon WorkDocs.</p>
     */
    inline bool GetUseChangeLog() const { return m_useChangeLog; }
    inline bool UseChangeLogHasBeenSet() const { return m_useChangeLogHasBeenSet; }
    inline void SetUseChangeLog(bool value) { m_useChangeLogHasBeenSet = true; m_useChangeLog = value; }
    inline WorkDocsConfiguration& WithUseChangeLog(bool value) { SetUseChangeLog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are included in the
     * index. Files that don't match the patterns are excluded from the index. If a
     * file matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInclusionPatterns() const { return m_inclusionPatterns; }
    inline bool InclusionPatternsHasBeenSet() const { return m_inclusionPatternsHasBeenSet; }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    void SetInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns = std::forward<InclusionPatternsT>(value); }
    template<typename InclusionPatternsT = Aws::Vector<Aws::String>>
    WorkDocsConfiguration& WithInclusionPatterns(InclusionPatternsT&& value) { SetInclusionPatterns(std::forward<InclusionPatternsT>(value)); return *this;}
    template<typename InclusionPatternsT = Aws::String>
    WorkDocsConfiguration& AddInclusionPatterns(InclusionPatternsT&& value) { m_inclusionPatternsHasBeenSet = true; m_inclusionPatterns.emplace_back(std::forward<InclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain files in your Amazon
     * WorkDocs site repository. Files that match the patterns are excluded from the
     * index. Files that don’t match the patterns are included in the index. If a file
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the file isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionPatterns() const { return m_exclusionPatterns; }
    inline bool ExclusionPatternsHasBeenSet() const { return m_exclusionPatternsHasBeenSet; }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    void SetExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns = std::forward<ExclusionPatternsT>(value); }
    template<typename ExclusionPatternsT = Aws::Vector<Aws::String>>
    WorkDocsConfiguration& WithExclusionPatterns(ExclusionPatternsT&& value) { SetExclusionPatterns(std::forward<ExclusionPatternsT>(value)); return *this;}
    template<typename ExclusionPatternsT = Aws::String>
    WorkDocsConfiguration& AddExclusionPatterns(ExclusionPatternsT&& value) { m_exclusionPatternsHasBeenSet = true; m_exclusionPatterns.emplace_back(std::forward<ExclusionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DataSourceToIndexFieldMapping</code> objects that map Amazon
     * WorkDocs data source attributes or field names to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to Amazon WorkDocs fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Amazon WorkDocs data source field names must exist
     * in your Amazon WorkDocs custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const { return m_fieldMappings; }
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::forward<FieldMappingsT>(value); }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    WorkDocsConfiguration& WithFieldMappings(FieldMappingsT&& value) { SetFieldMappings(std::forward<FieldMappingsT>(value)); return *this;}
    template<typename FieldMappingsT = DataSourceToIndexFieldMapping>
    WorkDocsConfiguration& AddFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.emplace_back(std::forward<FieldMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    bool m_crawlComments{false};
    bool m_crawlCommentsHasBeenSet = false;

    bool m_useChangeLog{false};
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
