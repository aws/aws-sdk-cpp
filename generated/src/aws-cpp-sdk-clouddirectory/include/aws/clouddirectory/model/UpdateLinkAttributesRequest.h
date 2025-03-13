/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/TypedLinkSpecifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/LinkAttributeUpdate.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class UpdateLinkAttributesRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API UpdateLinkAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLinkAttributes"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the Directory where
     * the updated typed link resides. For more information, see <a>arns</a> or <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const { return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    template<typename DirectoryArnT = Aws::String>
    void SetDirectoryArn(DirectoryArnT&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::forward<DirectoryArnT>(value); }
    template<typename DirectoryArnT = Aws::String>
    UpdateLinkAttributesRequest& WithDirectoryArn(DirectoryArnT&& value) { SetDirectoryArn(std::forward<DirectoryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows a typed link specifier to be accepted as input.</p>
     */
    inline const TypedLinkSpecifier& GetTypedLinkSpecifier() const { return m_typedLinkSpecifier; }
    inline bool TypedLinkSpecifierHasBeenSet() const { return m_typedLinkSpecifierHasBeenSet; }
    template<typename TypedLinkSpecifierT = TypedLinkSpecifier>
    void SetTypedLinkSpecifier(TypedLinkSpecifierT&& value) { m_typedLinkSpecifierHasBeenSet = true; m_typedLinkSpecifier = std::forward<TypedLinkSpecifierT>(value); }
    template<typename TypedLinkSpecifierT = TypedLinkSpecifier>
    UpdateLinkAttributesRequest& WithTypedLinkSpecifier(TypedLinkSpecifierT&& value) { SetTypedLinkSpecifier(std::forward<TypedLinkSpecifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes update structure.</p>
     */
    inline const Aws::Vector<LinkAttributeUpdate>& GetAttributeUpdates() const { return m_attributeUpdates; }
    inline bool AttributeUpdatesHasBeenSet() const { return m_attributeUpdatesHasBeenSet; }
    template<typename AttributeUpdatesT = Aws::Vector<LinkAttributeUpdate>>
    void SetAttributeUpdates(AttributeUpdatesT&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates = std::forward<AttributeUpdatesT>(value); }
    template<typename AttributeUpdatesT = Aws::Vector<LinkAttributeUpdate>>
    UpdateLinkAttributesRequest& WithAttributeUpdates(AttributeUpdatesT&& value) { SetAttributeUpdates(std::forward<AttributeUpdatesT>(value)); return *this;}
    template<typename AttributeUpdatesT = LinkAttributeUpdate>
    UpdateLinkAttributesRequest& AddAttributeUpdates(AttributeUpdatesT&& value) { m_attributeUpdatesHasBeenSet = true; m_attributeUpdates.emplace_back(std::forward<AttributeUpdatesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    TypedLinkSpecifier m_typedLinkSpecifier;
    bool m_typedLinkSpecifierHasBeenSet = false;

    Aws::Vector<LinkAttributeUpdate> m_attributeUpdates;
    bool m_attributeUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
