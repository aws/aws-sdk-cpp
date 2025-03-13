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
    AWS_CONNECTCASES_API CommentContent() = default;
    AWS_CONNECTCASES_API CommentContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API CommentContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Text in the body of a <code>Comment</code> on a case.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    CommentContent& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the text in the box of a <code>Comment</code> on a case.</p>
     */
    inline CommentBodyTextType GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(CommentBodyTextType value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline CommentContent& WithContentType(CommentBodyTextType value) { SetContentType(value); return *this;}
    ///@}
  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    CommentBodyTextType m_contentType{CommentBodyTextType::NOT_SET};
    bool m_contentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
