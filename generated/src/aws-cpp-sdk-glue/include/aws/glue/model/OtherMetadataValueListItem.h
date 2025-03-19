/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure containing other metadata for a schema version belonging to the
   * same metadata key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/OtherMetadataValueListItem">AWS
   * API Reference</a></p>
   */
  class OtherMetadataValueListItem
  {
  public:
    AWS_GLUE_API OtherMetadataValueListItem() = default;
    AWS_GLUE_API OtherMetadataValueListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API OtherMetadataValueListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metadata key’s corresponding value for the other metadata belonging to
     * the same metadata key.</p>
     */
    inline const Aws::String& GetMetadataValue() const { return m_metadataValue; }
    inline bool MetadataValueHasBeenSet() const { return m_metadataValueHasBeenSet; }
    template<typename MetadataValueT = Aws::String>
    void SetMetadataValue(MetadataValueT&& value) { m_metadataValueHasBeenSet = true; m_metadataValue = std::forward<MetadataValueT>(value); }
    template<typename MetadataValueT = Aws::String>
    OtherMetadataValueListItem& WithMetadataValue(MetadataValueT&& value) { SetMetadataValue(std::forward<MetadataValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the entry was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::String>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::String>
    OtherMetadataValueListItem& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metadataValue;
    bool m_metadataValueHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
