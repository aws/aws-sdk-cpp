/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>A list of the part sizes of the multipart upload.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/PartListElement">AWS
   * API Reference</a></p>
   */
  class PartListElement
  {
  public:
    AWS_GLACIER_API PartListElement();
    AWS_GLACIER_API PartListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API PartListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The byte range of a part, inclusive of the upper value of the range.</p>
     */
    inline const Aws::String& GetRangeInBytes() const{ return m_rangeInBytes; }

    /**
     * <p>The byte range of a part, inclusive of the upper value of the range.</p>
     */
    inline bool RangeInBytesHasBeenSet() const { return m_rangeInBytesHasBeenSet; }

    /**
     * <p>The byte range of a part, inclusive of the upper value of the range.</p>
     */
    inline void SetRangeInBytes(const Aws::String& value) { m_rangeInBytesHasBeenSet = true; m_rangeInBytes = value; }

    /**
     * <p>The byte range of a part, inclusive of the upper value of the range.</p>
     */
    inline void SetRangeInBytes(Aws::String&& value) { m_rangeInBytesHasBeenSet = true; m_rangeInBytes = std::move(value); }

    /**
     * <p>The byte range of a part, inclusive of the upper value of the range.</p>
     */
    inline void SetRangeInBytes(const char* value) { m_rangeInBytesHasBeenSet = true; m_rangeInBytes.assign(value); }

    /**
     * <p>The byte range of a part, inclusive of the upper value of the range.</p>
     */
    inline PartListElement& WithRangeInBytes(const Aws::String& value) { SetRangeInBytes(value); return *this;}

    /**
     * <p>The byte range of a part, inclusive of the upper value of the range.</p>
     */
    inline PartListElement& WithRangeInBytes(Aws::String&& value) { SetRangeInBytes(std::move(value)); return *this;}

    /**
     * <p>The byte range of a part, inclusive of the upper value of the range.</p>
     */
    inline PartListElement& WithRangeInBytes(const char* value) { SetRangeInBytes(value); return *this;}


    /**
     * <p>The SHA256 tree hash value that Amazon S3 Glacier calculated for the part.
     * This field is never <code>null</code>.</p>
     */
    inline const Aws::String& GetSHA256TreeHash() const{ return m_sHA256TreeHash; }

    /**
     * <p>The SHA256 tree hash value that Amazon S3 Glacier calculated for the part.
     * This field is never <code>null</code>.</p>
     */
    inline bool SHA256TreeHashHasBeenSet() const { return m_sHA256TreeHashHasBeenSet; }

    /**
     * <p>The SHA256 tree hash value that Amazon S3 Glacier calculated for the part.
     * This field is never <code>null</code>.</p>
     */
    inline void SetSHA256TreeHash(const Aws::String& value) { m_sHA256TreeHashHasBeenSet = true; m_sHA256TreeHash = value; }

    /**
     * <p>The SHA256 tree hash value that Amazon S3 Glacier calculated for the part.
     * This field is never <code>null</code>.</p>
     */
    inline void SetSHA256TreeHash(Aws::String&& value) { m_sHA256TreeHashHasBeenSet = true; m_sHA256TreeHash = std::move(value); }

    /**
     * <p>The SHA256 tree hash value that Amazon S3 Glacier calculated for the part.
     * This field is never <code>null</code>.</p>
     */
    inline void SetSHA256TreeHash(const char* value) { m_sHA256TreeHashHasBeenSet = true; m_sHA256TreeHash.assign(value); }

    /**
     * <p>The SHA256 tree hash value that Amazon S3 Glacier calculated for the part.
     * This field is never <code>null</code>.</p>
     */
    inline PartListElement& WithSHA256TreeHash(const Aws::String& value) { SetSHA256TreeHash(value); return *this;}

    /**
     * <p>The SHA256 tree hash value that Amazon S3 Glacier calculated for the part.
     * This field is never <code>null</code>.</p>
     */
    inline PartListElement& WithSHA256TreeHash(Aws::String&& value) { SetSHA256TreeHash(std::move(value)); return *this;}

    /**
     * <p>The SHA256 tree hash value that Amazon S3 Glacier calculated for the part.
     * This field is never <code>null</code>.</p>
     */
    inline PartListElement& WithSHA256TreeHash(const char* value) { SetSHA256TreeHash(value); return *this;}

  private:

    Aws::String m_rangeInBytes;
    bool m_rangeInBytesHasBeenSet = false;

    Aws::String m_sHA256TreeHash;
    bool m_sHA256TreeHashHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
