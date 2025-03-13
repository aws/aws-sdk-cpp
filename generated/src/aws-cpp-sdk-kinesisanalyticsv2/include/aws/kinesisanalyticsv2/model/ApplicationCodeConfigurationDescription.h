/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/CodeContentType.h>
#include <aws/kinesisanalyticsv2/model/CodeContentDescription.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes code configuration for an application.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationCodeConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class ApplicationCodeConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationCodeConfigurationDescription() = default;
    AWS_KINESISANALYTICSV2_API ApplicationCodeConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationCodeConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the code content is in text or zip format.</p>
     */
    inline CodeContentType GetCodeContentType() const { return m_codeContentType; }
    inline bool CodeContentTypeHasBeenSet() const { return m_codeContentTypeHasBeenSet; }
    inline void SetCodeContentType(CodeContentType value) { m_codeContentTypeHasBeenSet = true; m_codeContentType = value; }
    inline ApplicationCodeConfigurationDescription& WithCodeContentType(CodeContentType value) { SetCodeContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes details about the location and format of the application code.</p>
     */
    inline const CodeContentDescription& GetCodeContentDescription() const { return m_codeContentDescription; }
    inline bool CodeContentDescriptionHasBeenSet() const { return m_codeContentDescriptionHasBeenSet; }
    template<typename CodeContentDescriptionT = CodeContentDescription>
    void SetCodeContentDescription(CodeContentDescriptionT&& value) { m_codeContentDescriptionHasBeenSet = true; m_codeContentDescription = std::forward<CodeContentDescriptionT>(value); }
    template<typename CodeContentDescriptionT = CodeContentDescription>
    ApplicationCodeConfigurationDescription& WithCodeContentDescription(CodeContentDescriptionT&& value) { SetCodeContentDescription(std::forward<CodeContentDescriptionT>(value)); return *this;}
    ///@}
  private:

    CodeContentType m_codeContentType{CodeContentType::NOT_SET};
    bool m_codeContentTypeHasBeenSet = false;

    CodeContentDescription m_codeContentDescription;
    bool m_codeContentDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
