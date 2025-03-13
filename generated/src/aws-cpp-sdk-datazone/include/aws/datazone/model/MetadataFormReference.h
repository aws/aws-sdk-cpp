/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The reference of a metadata form.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/MetadataFormReference">AWS
   * API Reference</a></p>
   */
  class MetadataFormReference
  {
  public:
    AWS_DATAZONE_API MetadataFormReference() = default;
    AWS_DATAZONE_API MetadataFormReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API MetadataFormReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type ID of the metadata form reference.</p>
     */
    inline const Aws::String& GetTypeIdentifier() const { return m_typeIdentifier; }
    inline bool TypeIdentifierHasBeenSet() const { return m_typeIdentifierHasBeenSet; }
    template<typename TypeIdentifierT = Aws::String>
    void SetTypeIdentifier(TypeIdentifierT&& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = std::forward<TypeIdentifierT>(value); }
    template<typename TypeIdentifierT = Aws::String>
    MetadataFormReference& WithTypeIdentifier(TypeIdentifierT&& value) { SetTypeIdentifier(std::forward<TypeIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type revision of the metadata form reference.</p>
     */
    inline const Aws::String& GetTypeRevision() const { return m_typeRevision; }
    inline bool TypeRevisionHasBeenSet() const { return m_typeRevisionHasBeenSet; }
    template<typename TypeRevisionT = Aws::String>
    void SetTypeRevision(TypeRevisionT&& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = std::forward<TypeRevisionT>(value); }
    template<typename TypeRevisionT = Aws::String>
    MetadataFormReference& WithTypeRevision(TypeRevisionT&& value) { SetTypeRevision(std::forward<TypeRevisionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_typeIdentifier;
    bool m_typeIdentifierHasBeenSet = false;

    Aws::String m_typeRevision;
    bool m_typeRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
