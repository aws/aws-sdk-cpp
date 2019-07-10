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
  class AWS_GLACIER_API PartListElement
  {
  public:
    PartListElement();
    PartListElement(Aws::Utils::Json::JsonView jsonValue);
    PartListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_rangeInBytesHasBeenSet;

    Aws::String m_sHA256TreeHash;
    bool m_sHA256TreeHashHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
