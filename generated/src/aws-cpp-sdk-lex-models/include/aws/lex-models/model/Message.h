/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Message
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API Message() = default;
    AWS_LEXMODELBUILDINGSERVICE_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The content type of the message string.</p>
     */
    inline ContentType GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(ContentType value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline Message& WithContentType(ContentType value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the message.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    Message& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the message group that the message belongs to. When a group is
     * assigned to a message, Amazon Lex returns one message from each group in the
     * response.</p>
     */
    inline int GetGroupNumber() const { return m_groupNumber; }
    inline bool GroupNumberHasBeenSet() const { return m_groupNumberHasBeenSet; }
    inline void SetGroupNumber(int value) { m_groupNumberHasBeenSet = true; m_groupNumber = value; }
    inline Message& WithGroupNumber(int value) { SetGroupNumber(value); return *this;}
    ///@}
  private:

    ContentType m_contentType{ContentType::NOT_SET};
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    int m_groupNumber{0};
    bool m_groupNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
