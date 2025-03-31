/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/CachePointType.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Defines a section of content to be cached for reuse in subsequent API
   * calls.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/CachePointBlock">AWS
   * API Reference</a></p>
   */
  class CachePointBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API CachePointBlock() = default;
    AWS_BEDROCKRUNTIME_API CachePointBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API CachePointBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the type of cache point within the CachePointBlock.</p>
     */
    inline CachePointType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CachePointType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CachePointBlock& WithType(CachePointType value) { SetType(value); return *this;}
    ///@}
  private:

    CachePointType m_type{CachePointType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
