/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/MetadataGenerationTargetType.h>
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
   * <p>The asset for which metadata was generated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/MetadataGenerationRunTarget">AWS
   * API Reference</a></p>
   */
  class MetadataGenerationRunTarget
  {
  public:
    AWS_DATAZONE_API MetadataGenerationRunTarget() = default;
    AWS_DATAZONE_API MetadataGenerationRunTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API MetadataGenerationRunTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the metadata generation run's target.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    MetadataGenerationRunTarget& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the asset for which metadata was generated.</p>
     */
    inline const Aws::String& GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    template<typename RevisionT = Aws::String>
    void SetRevision(RevisionT&& value) { m_revisionHasBeenSet = true; m_revision = std::forward<RevisionT>(value); }
    template<typename RevisionT = Aws::String>
    MetadataGenerationRunTarget& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the asset for which metadata was generated.</p>
     */
    inline MetadataGenerationTargetType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MetadataGenerationTargetType value) { m_typeHasBeenSet = true; m_type = value; }
    inline MetadataGenerationRunTarget& WithType(MetadataGenerationTargetType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;

    MetadataGenerationTargetType m_type{MetadataGenerationTargetType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
