/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-data-automation/model/DocumentExtractionGranularityType.h>
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
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Granularity of Document Extraction</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DocumentExtractionGranularity">AWS
   * API Reference</a></p>
   */
  class DocumentExtractionGranularity
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API DocumentExtractionGranularity() = default;
    AWS_BEDROCKDATAAUTOMATION_API DocumentExtractionGranularity(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API DocumentExtractionGranularity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<DocumentExtractionGranularityType>& GetTypes() const { return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    template<typename TypesT = Aws::Vector<DocumentExtractionGranularityType>>
    void SetTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types = std::forward<TypesT>(value); }
    template<typename TypesT = Aws::Vector<DocumentExtractionGranularityType>>
    DocumentExtractionGranularity& WithTypes(TypesT&& value) { SetTypes(std::forward<TypesT>(value)); return *this;}
    inline DocumentExtractionGranularity& AddTypes(DocumentExtractionGranularityType value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<DocumentExtractionGranularityType> m_types;
    bool m_typesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
