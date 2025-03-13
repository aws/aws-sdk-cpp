/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/Array.h>
#include <aws/lex-models/model/ResourceType.h>
#include <aws/lex-models/model/MergeStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/Tag.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class StartImportRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API StartImportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartImport"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A zip archive in binary format. The archive should contain one file, a JSON
     * file containing the resource to import. The resource should match the type
     * specified in the <code>resourceType</code> field.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Aws::Utils::ByteBuffer>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Aws::Utils::ByteBuffer>
    StartImportRequest& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of resource to export. Each resource also exports any
     * resources that it depends on. </p> <ul> <li> <p>A bot exports dependent
     * intents.</p> </li> <li> <p>An intent exports dependent slot types.</p> </li>
     * </ul>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline StartImportRequest& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the action that the <code>StartImport</code> operation should take
     * when there is an existing resource with the same name.</p> <ul> <li>
     * <p>FAIL_ON_CONFLICT - The import operation is stopped on the first conflict
     * between a resource in the import file and an existing resource. The name of the
     * resource causing the conflict is in the <code>failureReason</code> field of the
     * response to the <code>GetImport</code> operation.</p> <p>OVERWRITE_LATEST - The
     * import operation proceeds even if there is a conflict with an existing resource.
     * The $LASTEST version of the existing resource is overwritten with the data from
     * the import file.</p> </li> </ul>
     */
    inline MergeStrategy GetMergeStrategy() const { return m_mergeStrategy; }
    inline bool MergeStrategyHasBeenSet() const { return m_mergeStrategyHasBeenSet; }
    inline void SetMergeStrategy(MergeStrategy value) { m_mergeStrategyHasBeenSet = true; m_mergeStrategy = value; }
    inline StartImportRequest& WithMergeStrategy(MergeStrategy value) { SetMergeStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to add to the imported bot. You can only add tags when you
     * import a bot, you can't add tags to an intent or slot type.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    StartImportRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    StartImportRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Utils::ByteBuffer m_payload{};
    bool m_payloadHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    MergeStrategy m_mergeStrategy{MergeStrategy::NOT_SET};
    bool m_mergeStrategyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
