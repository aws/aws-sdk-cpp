/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/CodeContent.h>
#include <aws/kinesisanalyticsv2/model/CodeContentType.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationCodeConfiguration">AWS
   * API Reference</a></p>
   */
  class ApplicationCodeConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationCodeConfiguration();
    AWS_KINESISANALYTICSV2_API ApplicationCodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationCodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location and type of the application code.</p>
     */
    inline const CodeContent& GetCodeContent() const{ return m_codeContent; }
    inline bool CodeContentHasBeenSet() const { return m_codeContentHasBeenSet; }
    inline void SetCodeContent(const CodeContent& value) { m_codeContentHasBeenSet = true; m_codeContent = value; }
    inline void SetCodeContent(CodeContent&& value) { m_codeContentHasBeenSet = true; m_codeContent = std::move(value); }
    inline ApplicationCodeConfiguration& WithCodeContent(const CodeContent& value) { SetCodeContent(value); return *this;}
    inline ApplicationCodeConfiguration& WithCodeContent(CodeContent&& value) { SetCodeContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the code content is in text or zip format.</p>
     */
    inline const CodeContentType& GetCodeContentType() const{ return m_codeContentType; }
    inline bool CodeContentTypeHasBeenSet() const { return m_codeContentTypeHasBeenSet; }
    inline void SetCodeContentType(const CodeContentType& value) { m_codeContentTypeHasBeenSet = true; m_codeContentType = value; }
    inline void SetCodeContentType(CodeContentType&& value) { m_codeContentTypeHasBeenSet = true; m_codeContentType = std::move(value); }
    inline ApplicationCodeConfiguration& WithCodeContentType(const CodeContentType& value) { SetCodeContentType(value); return *this;}
    inline ApplicationCodeConfiguration& WithCodeContentType(CodeContentType&& value) { SetCodeContentType(std::move(value)); return *this;}
    ///@}
  private:

    CodeContent m_codeContent;
    bool m_codeContentHasBeenSet = false;

    CodeContentType m_codeContentType;
    bool m_codeContentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
