/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ImportSourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The import source for the key value store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ImportSource">AWS
   * API Reference</a></p>
   */
  class ImportSource
  {
  public:
    AWS_CLOUDFRONT_API ImportSource() = default;
    AWS_CLOUDFRONT_API ImportSource(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ImportSource& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The source type of the import source for the key value store.</p>
     */
    inline ImportSourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(ImportSourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline ImportSource& WithSourceType(ImportSourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the import source for the key value
     * store.</p>
     */
    inline const Aws::String& GetSourceARN() const { return m_sourceARN; }
    inline bool SourceARNHasBeenSet() const { return m_sourceARNHasBeenSet; }
    template<typename SourceARNT = Aws::String>
    void SetSourceARN(SourceARNT&& value) { m_sourceARNHasBeenSet = true; m_sourceARN = std::forward<SourceARNT>(value); }
    template<typename SourceARNT = Aws::String>
    ImportSource& WithSourceARN(SourceARNT&& value) { SetSourceARN(std::forward<SourceARNT>(value)); return *this;}
    ///@}
  private:

    ImportSourceType m_sourceType{ImportSourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_sourceARN;
    bool m_sourceARNHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
