/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/ResourceType.h>
#include <aws/lex-models/model/MergeStrategy.h>
#include <aws/lex-models/model/ImportStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lex-models/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelBuildingService
{
namespace Model
{
  class StartImportResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API StartImportResult() = default;
    AWS_LEXMODELBUILDINGSERVICE_API StartImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API StartImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name given to the import job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartImportResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource to import.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline StartImportResult& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take when there is a merge conflict.</p>
     */
    inline MergeStrategy GetMergeStrategy() const { return m_mergeStrategy; }
    inline void SetMergeStrategy(MergeStrategy value) { m_mergeStrategyHasBeenSet = true; m_mergeStrategy = value; }
    inline StartImportResult& WithMergeStrategy(MergeStrategy value) { SetMergeStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the specific import job.</p>
     */
    inline const Aws::String& GetImportId() const { return m_importId; }
    template<typename ImportIdT = Aws::String>
    void SetImportId(ImportIdT&& value) { m_importIdHasBeenSet = true; m_importId = std::forward<ImportIdT>(value); }
    template<typename ImportIdT = Aws::String>
    StartImportResult& WithImportId(ImportIdT&& value) { SetImportId(std::forward<ImportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the import job. If the status is <code>FAILED</code>, you can
     * get the reason for the failure using the <code>GetImport</code> operation.</p>
     */
    inline ImportStatus GetImportStatus() const { return m_importStatus; }
    inline void SetImportStatus(ImportStatus value) { m_importStatusHasBeenSet = true; m_importStatus = value; }
    inline StartImportResult& WithImportStatus(ImportStatus value) { SetImportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags added to the imported bot.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    StartImportResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    StartImportResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp for the date and time that the import job was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    StartImportResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartImportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    MergeStrategy m_mergeStrategy{MergeStrategy::NOT_SET};
    bool m_mergeStrategyHasBeenSet = false;

    Aws::String m_importId;
    bool m_importIdHasBeenSet = false;

    ImportStatus m_importStatus{ImportStatus::NOT_SET};
    bool m_importStatusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
