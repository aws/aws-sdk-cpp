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
    AWS_GLUE_API MetadataKeyValuePair();
    AWS_GLUE_API MetadataKeyValuePair(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API MetadataKeyValuePair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A metadata key.</p>
     */
    inline const Aws::String& GetMetadataKey() const{ return m_metadataKey; }

    /**
     * <p>A metadata key.</p>
     */
    inline bool MetadataKeyHasBeenSet() const { return m_metadataKeyHasBeenSet; }

    /**
     * <p>A metadata key.</p>
     */
    inline void SetMetadataKey(const Aws::String& value) { m_metadataKeyHasBeenSet = true; m_metadataKey = value; }

    /**
     * <p>A metadata key.</p>
     */
    inline void SetMetadataKey(Aws::String&& value) { m_metadataKeyHasBeenSet = true; m_metadataKey = std::move(value); }

    /**
     * <p>A metadata key.</p>
     */
    inline void SetMetadataKey(const char* value) { m_metadataKeyHasBeenSet = true; m_metadataKey.assign(value); }

    /**
     * <p>A metadata key.</p>
     */
    inline MetadataKeyValuePair& WithMetadataKey(const Aws::String& value) { SetMetadataKey(value); return *this;}

    /**
     * <p>A metadata key.</p>
     */
    inline MetadataKeyValuePair& WithMetadataKey(Aws::String&& value) { SetMetadataKey(std::move(value)); return *this;}

    /**
     * <p>A metadata key.</p>
     */
    inline MetadataKeyValuePair& WithMetadataKey(const char* value) { SetMetadataKey(value); return *this;}


    /**
     * <p>A metadata key’s corresponding value.</p>
     */
    inline const Aws::String& GetMetadataValue() const{ return m_metadataValue; }

    /**
     * <p>A metadata key’s corresponding value.</p>
     */
    inline bool MetadataValueHasBeenSet() const { return m_metadataValueHasBeenSet; }

    /**
     * <p>A metadata key’s corresponding value.</p>
     */
    inline void SetMetadataValue(const Aws::String& value) { m_metadataValueHasBeenSet = true; m_metadataValue = value; }

    /**
     * <p>A metadata key’s corresponding value.</p>
     */
    inline void SetMetadataValue(Aws::String&& value) { m_metadataValueHasBeenSet = true; m_metadataValue = std::move(value); }

    /**
     * <p>A metadata key’s corresponding value.</p>
     */
    inline void SetMetadataValue(const char* value) { m_metadataValueHasBeenSet = true; m_metadataValue.assign(value); }

    /**
     * <p>A metadata key’s corresponding value.</p>
     */
    inline MetadataKeyValuePair& WithMetadataValue(const Aws::String& value) { SetMetadataValue(value); return *this;}

    /**
     * <p>A metadata key’s corresponding value.</p>
     */
    inline MetadataKeyValuePair& WithMetadataValue(Aws::String&& value) { SetMetadataValue(std::move(value)); return *this;}

    /**
     * <p>A metadata key’s corresponding value.</p>
     */
    inline MetadataKeyValuePair& WithMetadataValue(const char* value) { SetMetadataValue(value); return *this;}

  private:

    Aws::String m_metadataKey;
    bool m_metadataKeyHasBeenSet = false;

    Aws::String m_metadataValue;
    bool m_metadataValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
