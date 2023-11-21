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
   * <p>The import source for the Key Value Store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ImportSource">AWS
   * API Reference</a></p>
   */
  class ImportSource
  {
  public:
    AWS_CLOUDFRONT_API ImportSource();
    AWS_CLOUDFRONT_API ImportSource(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ImportSource& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The source type of the import source for the Key Value Store.</p>
     */
    inline const ImportSourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source type of the import source for the Key Value Store.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The source type of the import source for the Key Value Store.</p>
     */
    inline void SetSourceType(const ImportSourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source type of the import source for the Key Value Store.</p>
     */
    inline void SetSourceType(ImportSourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The source type of the import source for the Key Value Store.</p>
     */
    inline ImportSource& WithSourceType(const ImportSourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source type of the import source for the Key Value Store.</p>
     */
    inline ImportSource& WithSourceType(ImportSourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the import source for the Key Value
     * Store.</p>
     */
    inline const Aws::String& GetSourceARN() const{ return m_sourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the import source for the Key Value
     * Store.</p>
     */
    inline bool SourceARNHasBeenSet() const { return m_sourceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the import source for the Key Value
     * Store.</p>
     */
    inline void SetSourceARN(const Aws::String& value) { m_sourceARNHasBeenSet = true; m_sourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the import source for the Key Value
     * Store.</p>
     */
    inline void SetSourceARN(Aws::String&& value) { m_sourceARNHasBeenSet = true; m_sourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the import source for the Key Value
     * Store.</p>
     */
    inline void SetSourceARN(const char* value) { m_sourceARNHasBeenSet = true; m_sourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the import source for the Key Value
     * Store.</p>
     */
    inline ImportSource& WithSourceARN(const Aws::String& value) { SetSourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the import source for the Key Value
     * Store.</p>
     */
    inline ImportSource& WithSourceARN(Aws::String&& value) { SetSourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the import source for the Key Value
     * Store.</p>
     */
    inline ImportSource& WithSourceARN(const char* value) { SetSourceARN(value); return *this;}

  private:

    ImportSourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_sourceARN;
    bool m_sourceARNHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
