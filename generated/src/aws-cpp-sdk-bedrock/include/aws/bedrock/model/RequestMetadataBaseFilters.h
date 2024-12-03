/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>A mapping of a metadata key to a value that it should or should not
   * equal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/RequestMetadataBaseFilters">AWS
   * API Reference</a></p>
   */
  class RequestMetadataBaseFilters
  {
  public:
    AWS_BEDROCK_API RequestMetadataBaseFilters();
    AWS_BEDROCK_API RequestMetadataBaseFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API RequestMetadataBaseFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Include results where the key equals the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEquals() const{ return m_equals; }
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }
    inline void SetEquals(const Aws::Map<Aws::String, Aws::String>& value) { m_equalsHasBeenSet = true; m_equals = value; }
    inline void SetEquals(Aws::Map<Aws::String, Aws::String>&& value) { m_equalsHasBeenSet = true; m_equals = std::move(value); }
    inline RequestMetadataBaseFilters& WithEquals(const Aws::Map<Aws::String, Aws::String>& value) { SetEquals(value); return *this;}
    inline RequestMetadataBaseFilters& WithEquals(Aws::Map<Aws::String, Aws::String>&& value) { SetEquals(std::move(value)); return *this;}
    inline RequestMetadataBaseFilters& AddEquals(const Aws::String& key, const Aws::String& value) { m_equalsHasBeenSet = true; m_equals.emplace(key, value); return *this; }
    inline RequestMetadataBaseFilters& AddEquals(Aws::String&& key, const Aws::String& value) { m_equalsHasBeenSet = true; m_equals.emplace(std::move(key), value); return *this; }
    inline RequestMetadataBaseFilters& AddEquals(const Aws::String& key, Aws::String&& value) { m_equalsHasBeenSet = true; m_equals.emplace(key, std::move(value)); return *this; }
    inline RequestMetadataBaseFilters& AddEquals(Aws::String&& key, Aws::String&& value) { m_equalsHasBeenSet = true; m_equals.emplace(std::move(key), std::move(value)); return *this; }
    inline RequestMetadataBaseFilters& AddEquals(const char* key, Aws::String&& value) { m_equalsHasBeenSet = true; m_equals.emplace(key, std::move(value)); return *this; }
    inline RequestMetadataBaseFilters& AddEquals(Aws::String&& key, const char* value) { m_equalsHasBeenSet = true; m_equals.emplace(std::move(key), value); return *this; }
    inline RequestMetadataBaseFilters& AddEquals(const char* key, const char* value) { m_equalsHasBeenSet = true; m_equals.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include results where the key does not equal the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetNotEquals() const{ return m_notEquals; }
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }
    inline void SetNotEquals(const Aws::Map<Aws::String, Aws::String>& value) { m_notEqualsHasBeenSet = true; m_notEquals = value; }
    inline void SetNotEquals(Aws::Map<Aws::String, Aws::String>&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::move(value); }
    inline RequestMetadataBaseFilters& WithNotEquals(const Aws::Map<Aws::String, Aws::String>& value) { SetNotEquals(value); return *this;}
    inline RequestMetadataBaseFilters& WithNotEquals(Aws::Map<Aws::String, Aws::String>&& value) { SetNotEquals(std::move(value)); return *this;}
    inline RequestMetadataBaseFilters& AddNotEquals(const Aws::String& key, const Aws::String& value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace(key, value); return *this; }
    inline RequestMetadataBaseFilters& AddNotEquals(Aws::String&& key, const Aws::String& value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace(std::move(key), value); return *this; }
    inline RequestMetadataBaseFilters& AddNotEquals(const Aws::String& key, Aws::String&& value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace(key, std::move(value)); return *this; }
    inline RequestMetadataBaseFilters& AddNotEquals(Aws::String&& key, Aws::String&& value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace(std::move(key), std::move(value)); return *this; }
    inline RequestMetadataBaseFilters& AddNotEquals(const char* key, Aws::String&& value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace(key, std::move(value)); return *this; }
    inline RequestMetadataBaseFilters& AddNotEquals(Aws::String&& key, const char* value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace(std::move(key), value); return *this; }
    inline RequestMetadataBaseFilters& AddNotEquals(const char* key, const char* value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_equals;
    bool m_equalsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_notEquals;
    bool m_notEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
