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
    AWS_DATAZONE_API MetadataGenerationRunTarget();
    AWS_DATAZONE_API MetadataGenerationRunTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API MetadataGenerationRunTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the metadata generation run's target.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline MetadataGenerationRunTarget& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline MetadataGenerationRunTarget& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline MetadataGenerationRunTarget& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the asset for which metadata was generated.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }
    inline MetadataGenerationRunTarget& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline MetadataGenerationRunTarget& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline MetadataGenerationRunTarget& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the asset for which metadata was generated.</p>
     */
    inline const MetadataGenerationTargetType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const MetadataGenerationTargetType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(MetadataGenerationTargetType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline MetadataGenerationRunTarget& WithType(const MetadataGenerationTargetType& value) { SetType(value); return *this;}
    inline MetadataGenerationRunTarget& WithType(MetadataGenerationTargetType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;

    MetadataGenerationTargetType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
