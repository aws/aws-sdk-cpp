/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-data-automation/model/DocumentOutputTextFormatType.h>
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
   * <p>Text Format of Document Output</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DocumentOutputTextFormat">AWS
   * API Reference</a></p>
   */
  class DocumentOutputTextFormat
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API DocumentOutputTextFormat();
    AWS_BEDROCKDATAAUTOMATION_API DocumentOutputTextFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API DocumentOutputTextFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<DocumentOutputTextFormatType>& GetTypes() const{ return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    inline void SetTypes(const Aws::Vector<DocumentOutputTextFormatType>& value) { m_typesHasBeenSet = true; m_types = value; }
    inline void SetTypes(Aws::Vector<DocumentOutputTextFormatType>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }
    inline DocumentOutputTextFormat& WithTypes(const Aws::Vector<DocumentOutputTextFormatType>& value) { SetTypes(value); return *this;}
    inline DocumentOutputTextFormat& WithTypes(Aws::Vector<DocumentOutputTextFormatType>&& value) { SetTypes(std::move(value)); return *this;}
    inline DocumentOutputTextFormat& AddTypes(const DocumentOutputTextFormatType& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }
    inline DocumentOutputTextFormat& AddTypes(DocumentOutputTextFormatType&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DocumentOutputTextFormatType> m_types;
    bool m_typesHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
