/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/SplitterConfiguration.h>
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
   * <p>Override Configuration of Document</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DocumentOverrideConfiguration">AWS
   * API Reference</a></p>
   */
  class DocumentOverrideConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API DocumentOverrideConfiguration();
    AWS_BEDROCKDATAAUTOMATION_API DocumentOverrideConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API DocumentOverrideConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const SplitterConfiguration& GetSplitter() const{ return m_splitter; }
    inline bool SplitterHasBeenSet() const { return m_splitterHasBeenSet; }
    inline void SetSplitter(const SplitterConfiguration& value) { m_splitterHasBeenSet = true; m_splitter = value; }
    inline void SetSplitter(SplitterConfiguration&& value) { m_splitterHasBeenSet = true; m_splitter = std::move(value); }
    inline DocumentOverrideConfiguration& WithSplitter(const SplitterConfiguration& value) { SetSplitter(value); return *this;}
    inline DocumentOverrideConfiguration& WithSplitter(SplitterConfiguration&& value) { SetSplitter(std::move(value)); return *this;}
    ///@}
  private:

    SplitterConfiguration m_splitter;
    bool m_splitterHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
