/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/CommentBodyTextType.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Represents the content of a <code>Comment</code> to be returned to
   * agents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CommentContent">AWS
   * API Reference</a></p>
   */
  class CommentContent
  {
  public:
    AWS_CONNECTCASES_API CommentContent();
    AWS_CONNECTCASES_API CommentContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API CommentContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Text in the body of a <code>Comment</code> on a case.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>Text in the body of a <code>Comment</code> on a case.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>Text in the body of a <code>Comment</code> on a case.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>Text in the body of a <code>Comment</code> on a case.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>Text in the body of a <code>Comment</code> on a case.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>Text in the body of a <code>Comment</code> on a case.</p>
     */
    inline CommentContent& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>Text in the body of a <code>Comment</code> on a case.</p>
     */
    inline CommentContent& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>Text in the body of a <code>Comment</code> on a case.</p>
     */
    inline CommentContent& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>Type of the text in the box of a <code>Comment</code> on a case.</p>
     */
    inline const CommentBodyTextType& GetContentType() const{ return m_contentType; }

    /**
     * <p>Type of the text in the box of a <code>Comment</code> on a case.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>Type of the text in the box of a <code>Comment</code> on a case.</p>
     */
    inline void SetContentType(const CommentBodyTextType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>Type of the text in the box of a <code>Comment</code> on a case.</p>
     */
    inline void SetContentType(CommentBodyTextType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>Type of the text in the box of a <code>Comment</code> on a case.</p>
     */
    inline CommentContent& WithContentType(const CommentBodyTextType& value) { SetContentType(value); return *this;}

    /**
     * <p>Type of the text in the box of a <code>Comment</code> on a case.</p>
     */
    inline CommentContent& WithContentType(CommentBodyTextType&& value) { SetContentType(std::move(value)); return *this;}

  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    CommentBodyTextType m_contentType;
    bool m_contentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
