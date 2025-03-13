/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/QueryTransformationType.h>
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
   * <p>The configuration details for transforming the prompt.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/QueryTransformationConfiguration">AWS
   * API Reference</a></p>
   */
  class QueryTransformationConfiguration
  {
  public:
    AWS_BEDROCK_API QueryTransformationConfiguration() = default;
    AWS_BEDROCK_API QueryTransformationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API QueryTransformationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of transformation to apply to the prompt.</p>
     */
    inline QueryTransformationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(QueryTransformationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline QueryTransformationConfiguration& WithType(QueryTransformationType value) { SetType(value); return *this;}
    ///@}
  private:

    QueryTransformationType m_type{QueryTransformationType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
