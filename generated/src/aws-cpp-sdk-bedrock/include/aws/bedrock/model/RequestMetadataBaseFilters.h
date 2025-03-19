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
    AWS_BEDROCK_API RequestMetadataBaseFilters() = default;
    AWS_BEDROCK_API RequestMetadataBaseFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API RequestMetadataBaseFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Include results where the key equals the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEquals() const { return m_equals; }
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }
    template<typename EqualsT = Aws::Map<Aws::String, Aws::String>>
    void SetEquals(EqualsT&& value) { m_equalsHasBeenSet = true; m_equals = std::forward<EqualsT>(value); }
    template<typename EqualsT = Aws::Map<Aws::String, Aws::String>>
    RequestMetadataBaseFilters& WithEquals(EqualsT&& value) { SetEquals(std::forward<EqualsT>(value)); return *this;}
    template<typename EqualsKeyT = Aws::String, typename EqualsValueT = Aws::String>
    RequestMetadataBaseFilters& AddEquals(EqualsKeyT&& key, EqualsValueT&& value) {
      m_equalsHasBeenSet = true; m_equals.emplace(std::forward<EqualsKeyT>(key), std::forward<EqualsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Include results where the key does not equal the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetNotEquals() const { return m_notEquals; }
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }
    template<typename NotEqualsT = Aws::Map<Aws::String, Aws::String>>
    void SetNotEquals(NotEqualsT&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::forward<NotEqualsT>(value); }
    template<typename NotEqualsT = Aws::Map<Aws::String, Aws::String>>
    RequestMetadataBaseFilters& WithNotEquals(NotEqualsT&& value) { SetNotEquals(std::forward<NotEqualsT>(value)); return *this;}
    template<typename NotEqualsKeyT = Aws::String, typename NotEqualsValueT = Aws::String>
    RequestMetadataBaseFilters& AddNotEquals(NotEqualsKeyT&& key, NotEqualsValueT&& value) {
      m_notEqualsHasBeenSet = true; m_notEquals.emplace(std::forward<NotEqualsKeyT>(key), std::forward<NotEqualsValueT>(value)); return *this;
    }
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
