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
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/model/ContentType.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>The message object that provides the message text and its type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/Message">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELBUILDINGSERVICE_API Message
  {
  public:
    Message();
    Message(Aws::Utils::Json::JsonView jsonValue);
    Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The content type of the message string.</p>
     */
    inline const ContentType& GetContentType() const{ return m_contentType; }

    /**
     * <p>The content type of the message string.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The content type of the message string.</p>
     */
    inline void SetContentType(const ContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The content type of the message string.</p>
     */
    inline void SetContentType(ContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The content type of the message string.</p>
     */
    inline Message& WithContentType(const ContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>The content type of the message string.</p>
     */
    inline Message& WithContentType(ContentType&& value) { SetContentType(std::move(value)); return *this;}


    /**
     * <p>The text of the message.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The text of the message.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The text of the message.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The text of the message.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The text of the message.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The text of the message.</p>
     */
    inline Message& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The text of the message.</p>
     */
    inline Message& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The text of the message.</p>
     */
    inline Message& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>Identifies the message group that the message belongs to. When a group is
     * assigned to a message, Amazon Lex returns one message from each group in the
     * response.</p>
     */
    inline int GetGroupNumber() const{ return m_groupNumber; }

    /**
     * <p>Identifies the message group that the message belongs to. When a group is
     * assigned to a message, Amazon Lex returns one message from each group in the
     * response.</p>
     */
    inline bool GroupNumberHasBeenSet() const { return m_groupNumberHasBeenSet; }

    /**
     * <p>Identifies the message group that the message belongs to. When a group is
     * assigned to a message, Amazon Lex returns one message from each group in the
     * response.</p>
     */
    inline void SetGroupNumber(int value) { m_groupNumberHasBeenSet = true; m_groupNumber = value; }

    /**
     * <p>Identifies the message group that the message belongs to. When a group is
     * assigned to a message, Amazon Lex returns one message from each group in the
     * response.</p>
     */
    inline Message& WithGroupNumber(int value) { SetGroupNumber(value); return *this;}

  private:

    ContentType m_contentType;
    bool m_contentTypeHasBeenSet;

    Aws::String m_content;
    bool m_contentHasBeenSet;

    int m_groupNumber;
    bool m_groupNumberHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
