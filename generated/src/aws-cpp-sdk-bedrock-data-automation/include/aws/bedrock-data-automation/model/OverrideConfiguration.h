/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/DocumentOverrideConfiguration.h>
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
   * <p>Override configuration</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/OverrideConfiguration">AWS
   * API Reference</a></p>
   */
  class OverrideConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API OverrideConfiguration();
    AWS_BEDROCKDATAAUTOMATION_API OverrideConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API OverrideConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DocumentOverrideConfiguration& GetDocument() const{ return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    inline void SetDocument(const DocumentOverrideConfiguration& value) { m_documentHasBeenSet = true; m_document = value; }
    inline void SetDocument(DocumentOverrideConfiguration&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }
    inline OverrideConfiguration& WithDocument(const DocumentOverrideConfiguration& value) { SetDocument(value); return *this;}
    inline OverrideConfiguration& WithDocument(DocumentOverrideConfiguration&& value) { SetDocument(std::move(value)); return *this;}
    ///@}
  private:

    DocumentOverrideConfiguration m_document;
    bool m_documentHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
