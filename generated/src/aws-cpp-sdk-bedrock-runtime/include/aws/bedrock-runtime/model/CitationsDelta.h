/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/CitationLocation.h>
#include <aws/bedrock-runtime/model/CitationSourceContentDelta.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Contains incremental updates to citation information during streaming
   * responses. This allows clients to build up citation data progressively as the
   * response is generated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/CitationsDelta">AWS
   * API Reference</a></p>
   */
  class CitationsDelta
  {
  public:
    AWS_BEDROCKRUNTIME_API CitationsDelta() = default;
    AWS_BEDROCKRUNTIME_API CitationsDelta(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API CitationsDelta& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title or identifier of the source document being cited.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    CitationsDelta& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific content from the source document that was referenced or cited in
     * the generated response.</p>
     */
    inline const Aws::Vector<CitationSourceContentDelta>& GetSourceContent() const { return m_sourceContent; }
    inline bool SourceContentHasBeenSet() const { return m_sourceContentHasBeenSet; }
    template<typename SourceContentT = Aws::Vector<CitationSourceContentDelta>>
    void SetSourceContent(SourceContentT&& value) { m_sourceContentHasBeenSet = true; m_sourceContent = std::forward<SourceContentT>(value); }
    template<typename SourceContentT = Aws::Vector<CitationSourceContentDelta>>
    CitationsDelta& WithSourceContent(SourceContentT&& value) { SetSourceContent(std::forward<SourceContentT>(value)); return *this;}
    template<typename SourceContentT = CitationSourceContentDelta>
    CitationsDelta& AddSourceContent(SourceContentT&& value) { m_sourceContentHasBeenSet = true; m_sourceContent.emplace_back(std::forward<SourceContentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the precise location within a source document where cited content
     * can be found. This can include character-level positions, page numbers, or
     * document chunks depending on the document type and indexing method.</p>
     */
    inline const CitationLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = CitationLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = CitationLocation>
    CitationsDelta& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Vector<CitationSourceContentDelta> m_sourceContent;
    bool m_sourceContentHasBeenSet = false;

    CitationLocation m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
