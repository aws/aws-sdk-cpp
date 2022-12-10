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
    AWS_LEXMODELBUILDINGSERVICE_API StartImportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartImport"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>A zip archive in binary format. The archive should contain one file, a JSON
     * file containing the resource to import. The resource should match the type
     * specified in the <code>resourceType</code> field.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetPayload() const{ return m_payload; }

    /**
     * <p>A zip archive in binary format. The archive should contain one file, a JSON
     * file containing the resource to import. The resource should match the type
     * specified in the <code>resourceType</code> field.</p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>A zip archive in binary format. The archive should contain one file, a JSON
     * file containing the resource to import. The resource should match the type
     * specified in the <code>resourceType</code> field.</p>
     */
    inline void SetPayload(const Aws::Utils::ByteBuffer& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>A zip archive in binary format. The archive should contain one file, a JSON
     * file containing the resource to import. The resource should match the type
     * specified in the <code>resourceType</code> field.</p>
     */
    inline void SetPayload(Aws::Utils::ByteBuffer&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>A zip archive in binary format. The archive should contain one file, a JSON
     * file containing the resource to import. The resource should match the type
     * specified in the <code>resourceType</code> field.</p>
     */
    inline StartImportRequest& WithPayload(const Aws::Utils::ByteBuffer& value) { SetPayload(value); return *this;}

    /**
     * <p>A zip archive in binary format. The archive should contain one file, a JSON
     * file containing the resource to import. The resource should match the type
     * specified in the <code>resourceType</code> field.</p>
     */
    inline StartImportRequest& WithPayload(Aws::Utils::ByteBuffer&& value) { SetPayload(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of resource to export. Each resource also exports any
     * resources that it depends on. </p> <ul> <li> <p>A bot exports dependent
     * intents.</p> </li> <li> <p>An intent exports dependent slot types.</p> </li>
     * </ul>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Specifies the type of resource to export. Each resource also exports any
     * resources that it depends on. </p> <ul> <li> <p>A bot exports dependent
     * intents.</p> </li> <li> <p>An intent exports dependent slot types.</p> </li>
     * </ul>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Specifies the type of resource to export. Each resource also exports any
     * resources that it depends on. </p> <ul> <li> <p>A bot exports dependent
     * intents.</p> </li> <li> <p>An intent exports dependent slot types.</p> </li>
     * </ul>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Specifies the type of resource to export. Each resource also exports any
     * resources that it depends on. </p> <ul> <li> <p>A bot exports dependent
     * intents.</p> </li> <li> <p>An intent exports dependent slot types.</p> </li>
     * </ul>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Specifies the type of resource to export. Each resource also exports any
     * resources that it depends on. </p> <ul> <li> <p>A bot exports dependent
     * intents.</p> </li> <li> <p>An intent exports dependent slot types.</p> </li>
     * </ul>
     */
    inline StartImportRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Specifies the type of resource to export. Each resource also exports any
     * resources that it depends on. </p> <ul> <li> <p>A bot exports dependent
     * intents.</p> </li> <li> <p>An intent exports dependent slot types.</p> </li>
     * </ul>
     */
    inline StartImportRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


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
    inline const MergeStrategy& GetMergeStrategy() const{ return m_mergeStrategy; }

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
    inline bool MergeStrategyHasBeenSet() const { return m_mergeStrategyHasBeenSet; }

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
    inline void SetMergeStrategy(const MergeStrategy& value) { m_mergeStrategyHasBeenSet = true; m_mergeStrategy = value; }

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
    inline void SetMergeStrategy(MergeStrategy&& value) { m_mergeStrategyHasBeenSet = true; m_mergeStrategy = std::move(value); }

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
    inline StartImportRequest& WithMergeStrategy(const MergeStrategy& value) { SetMergeStrategy(value); return *this;}

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
    inline StartImportRequest& WithMergeStrategy(MergeStrategy&& value) { SetMergeStrategy(std::move(value)); return *this;}


    /**
     * <p>A list of tags to add to the imported bot. You can only add tags when you
     * import a bot, you can't add tags to an intent or slot type.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to add to the imported bot. You can only add tags when you
     * import a bot, you can't add tags to an intent or slot type.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to add to the imported bot. You can only add tags when you
     * import a bot, you can't add tags to an intent or slot type.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to add to the imported bot. You can only add tags when you
     * import a bot, you can't add tags to an intent or slot type.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to add to the imported bot. You can only add tags when you
     * import a bot, you can't add tags to an intent or slot type.</p>
     */
    inline StartImportRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to add to the imported bot. You can only add tags when you
     * import a bot, you can't add tags to an intent or slot type.</p>
     */
    inline StartImportRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to add to the imported bot. You can only add tags when you
     * import a bot, you can't add tags to an intent or slot type.</p>
     */
    inline StartImportRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to add to the imported bot. You can only add tags when you
     * import a bot, you can't add tags to an intent or slot type.</p>
     */
    inline StartImportRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Utils::ByteBuffer m_payload;
    bool m_payloadHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    MergeStrategy m_mergeStrategy;
    bool m_mergeStrategyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
