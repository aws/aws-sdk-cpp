/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/CachePointType.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Indicates where a cache checkpoint is located. All information before this
   * checkpoint is cached to be accessed on subsequent requests.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/CachePointBlock">AWS
   * API Reference</a></p>
   */
  class CachePointBlock
  {
  public:
    AWS_BEDROCKAGENT_API CachePointBlock() = default;
    AWS_BEDROCKAGENT_API CachePointBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API CachePointBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates that the CachePointBlock is of the default type</p>
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
} // namespace BedrockAgent
} // namespace Aws
