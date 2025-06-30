/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
   * <p>Specifies a field to be used during the reranking process in a Knowledge Base
   * vector search. This structure identifies metadata fields that should be
   * considered when reordering search results to improve relevance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/FieldForReranking">AWS
   * API Reference</a></p>
   */
  class FieldForReranking
  {
  public:
    AWS_BEDROCK_API FieldForReranking() = default;
    AWS_BEDROCK_API FieldForReranking(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API FieldForReranking& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metadata field to be used during the reranking process.</p>
     */
    inline const Aws::String& GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    template<typename FieldNameT = Aws::String>
    void SetFieldName(FieldNameT&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::forward<FieldNameT>(value); }
    template<typename FieldNameT = Aws::String>
    FieldForReranking& WithFieldName(FieldNameT&& value) { SetFieldName(std::forward<FieldNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
