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
   * <p>A structure containing a key value pair for metadata.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/MetadataKeyValuePair">AWS
   * API Reference</a></p>
   */
  class MetadataKeyValuePair
  {
  public:
    AWS_GLUE_API MetadataKeyValuePair() = default;
    AWS_GLUE_API MetadataKeyValuePair(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API MetadataKeyValuePair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A metadata key.</p>
     */
    inline const Aws::String& GetMetadataKey() const { return m_metadataKey; }
    inline bool MetadataKeyHasBeenSet() const { return m_metadataKeyHasBeenSet; }
    template<typename MetadataKeyT = Aws::String>
    void SetMetadataKey(MetadataKeyT&& value) { m_metadataKeyHasBeenSet = true; m_metadataKey = std::forward<MetadataKeyT>(value); }
    template<typename MetadataKeyT = Aws::String>
    MetadataKeyValuePair& WithMetadataKey(MetadataKeyT&& value) { SetMetadataKey(std::forward<MetadataKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A metadata key’s corresponding value.</p>
     */
    inline const Aws::String& GetMetadataValue() const { return m_metadataValue; }
    inline bool MetadataValueHasBeenSet() const { return m_metadataValueHasBeenSet; }
    template<typename MetadataValueT = Aws::String>
    void SetMetadataValue(MetadataValueT&& value) { m_metadataValueHasBeenSet = true; m_metadataValue = std::forward<MetadataValueT>(value); }
    template<typename MetadataValueT = Aws::String>
    MetadataKeyValuePair& WithMetadataValue(MetadataValueT&& value) { SetMetadataValue(std::forward<MetadataValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metadataKey;
    bool m_metadataKeyHasBeenSet = false;

    Aws::String m_metadataValue;
    bool m_metadataValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
