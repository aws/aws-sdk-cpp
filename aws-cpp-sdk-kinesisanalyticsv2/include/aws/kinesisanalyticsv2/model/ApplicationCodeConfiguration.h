/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Describes code configuration for a Java-based Kinesis Data Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationCodeConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API ApplicationCodeConfiguration
  {
  public:
    ApplicationCodeConfiguration();
    ApplicationCodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ApplicationCodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location and type of the application code.</p>
     */
    inline const CodeContent& GetCodeContent() const{ return m_codeContent; }

    /**
     * <p>The location and type of the application code.</p>
     */
    inline bool CodeContentHasBeenSet() const { return m_codeContentHasBeenSet; }

    /**
     * <p>The location and type of the application code.</p>
     */
    inline void SetCodeContent(const CodeContent& value) { m_codeContentHasBeenSet = true; m_codeContent = value; }

    /**
     * <p>The location and type of the application code.</p>
     */
    inline void SetCodeContent(CodeContent&& value) { m_codeContentHasBeenSet = true; m_codeContent = std::move(value); }

    /**
     * <p>The location and type of the application code.</p>
     */
    inline ApplicationCodeConfiguration& WithCodeContent(const CodeContent& value) { SetCodeContent(value); return *this;}

    /**
     * <p>The location and type of the application code.</p>
     */
    inline ApplicationCodeConfiguration& WithCodeContent(CodeContent&& value) { SetCodeContent(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the code content is in text or zip format.</p>
     */
    inline const CodeContentType& GetCodeContentType() const{ return m_codeContentType; }

    /**
     * <p>Specifies whether the code content is in text or zip format.</p>
     */
    inline bool CodeContentTypeHasBeenSet() const { return m_codeContentTypeHasBeenSet; }

    /**
     * <p>Specifies whether the code content is in text or zip format.</p>
     */
    inline void SetCodeContentType(const CodeContentType& value) { m_codeContentTypeHasBeenSet = true; m_codeContentType = value; }

    /**
     * <p>Specifies whether the code content is in text or zip format.</p>
     */
    inline void SetCodeContentType(CodeContentType&& value) { m_codeContentTypeHasBeenSet = true; m_codeContentType = std::move(value); }

    /**
     * <p>Specifies whether the code content is in text or zip format.</p>
     */
    inline ApplicationCodeConfiguration& WithCodeContentType(const CodeContentType& value) { SetCodeContentType(value); return *this;}

    /**
     * <p>Specifies whether the code content is in text or zip format.</p>
     */
    inline ApplicationCodeConfiguration& WithCodeContentType(CodeContentType&& value) { SetCodeContentType(std::move(value)); return *this;}

  private:

    CodeContent m_codeContent;
    bool m_codeContentHasBeenSet;

    CodeContentType m_codeContentType;
    bool m_codeContentTypeHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
