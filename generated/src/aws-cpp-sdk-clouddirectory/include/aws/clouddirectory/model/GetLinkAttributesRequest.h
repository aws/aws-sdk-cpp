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
#include <aws/clouddirectory/model/ConsistencyLevel.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class GetLinkAttributesRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API GetLinkAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLinkAttributes"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the Directory where
     * the typed link resides. For more information, see <a>arns</a> or <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/directory_objects_links.html#directory_objects_links_typedlink">Typed
     * Links</a>.</p>
     */
    inline const Aws::String& GetDirectoryArn() const { return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    template<typename DirectoryArnT = Aws::String>
    void SetDirectoryArn(DirectoryArnT&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::forward<DirectoryArnT>(value); }
    template<typename DirectoryArnT = Aws::String>
    GetLinkAttributesRequest& WithDirectoryArn(DirectoryArnT&& value) { SetDirectoryArn(std::forward<DirectoryArnT>(value)); return *this;}
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
    GetLinkAttributesRequest& WithTypedLinkSpecifier(TypedLinkSpecifierT&& value) { SetTypedLinkSpecifier(std::forward<TypedLinkSpecifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of attribute names whose values will be retrieved.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeNames() const { return m_attributeNames; }
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }
    template<typename AttributeNamesT = Aws::Vector<Aws::String>>
    void SetAttributeNames(AttributeNamesT&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::forward<AttributeNamesT>(value); }
    template<typename AttributeNamesT = Aws::Vector<Aws::String>>
    GetLinkAttributesRequest& WithAttributeNames(AttributeNamesT&& value) { SetAttributeNames(std::forward<AttributeNamesT>(value)); return *this;}
    template<typename AttributeNamesT = Aws::String>
    GetLinkAttributesRequest& AddAttributeNames(AttributeNamesT&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.emplace_back(std::forward<AttributeNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The consistency level at which to retrieve the attributes on a typed
     * link.</p>
     */
    inline ConsistencyLevel GetConsistencyLevel() const { return m_consistencyLevel; }
    inline bool ConsistencyLevelHasBeenSet() const { return m_consistencyLevelHasBeenSet; }
    inline void SetConsistencyLevel(ConsistencyLevel value) { m_consistencyLevelHasBeenSet = true; m_consistencyLevel = value; }
    inline GetLinkAttributesRequest& WithConsistencyLevel(ConsistencyLevel value) { SetConsistencyLevel(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    TypedLinkSpecifier m_typedLinkSpecifier;
    bool m_typedLinkSpecifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributeNames;
    bool m_attributeNamesHasBeenSet = false;

    ConsistencyLevel m_consistencyLevel{ConsistencyLevel::NOT_SET};
    bool m_consistencyLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
