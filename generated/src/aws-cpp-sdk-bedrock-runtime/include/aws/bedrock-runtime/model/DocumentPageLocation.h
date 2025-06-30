/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>

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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Specifies a page-level location within a document, providing positioning
   * information for cited content using page numbers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/DocumentPageLocation">AWS
   * API Reference</a></p>
   */
  class DocumentPageLocation
  {
  public:
    AWS_BEDROCKRUNTIME_API DocumentPageLocation() = default;
    AWS_BEDROCKRUNTIME_API DocumentPageLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API DocumentPageLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The index of the document within the array of documents provided in the
     * request.</p>
     */
    inline int GetDocumentIndex() const { return m_documentIndex; }
    inline bool DocumentIndexHasBeenSet() const { return m_documentIndexHasBeenSet; }
    inline void SetDocumentIndex(int value) { m_documentIndexHasBeenSet = true; m_documentIndex = value; }
    inline DocumentPageLocation& WithDocumentIndex(int value) { SetDocumentIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting page number of the cited content within the document.</p>
     */
    inline int GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(int value) { m_startHasBeenSet = true; m_start = value; }
    inline DocumentPageLocation& WithStart(int value) { SetStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ending page number of the cited content within the document.</p>
     */
    inline int GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    inline void SetEnd(int value) { m_endHasBeenSet = true; m_end = value; }
    inline DocumentPageLocation& WithEnd(int value) { SetEnd(value); return *this;}
    ///@}
  private:

    int m_documentIndex{0};
    bool m_documentIndexHasBeenSet = false;

    int m_start{0};
    bool m_startHasBeenSet = false;

    int m_end{0};
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
