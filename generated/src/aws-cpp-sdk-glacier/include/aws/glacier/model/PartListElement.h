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
    AWS_GLACIER_API PartListElement() = default;
    AWS_GLACIER_API PartListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API PartListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The byte range of a part, inclusive of the upper value of the range.</p>
     */
    inline const Aws::String& GetRangeInBytes() const { return m_rangeInBytes; }
    inline bool RangeInBytesHasBeenSet() const { return m_rangeInBytesHasBeenSet; }
    template<typename RangeInBytesT = Aws::String>
    void SetRangeInBytes(RangeInBytesT&& value) { m_rangeInBytesHasBeenSet = true; m_rangeInBytes = std::forward<RangeInBytesT>(value); }
    template<typename RangeInBytesT = Aws::String>
    PartListElement& WithRangeInBytes(RangeInBytesT&& value) { SetRangeInBytes(std::forward<RangeInBytesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA256 tree hash value that Amazon S3 Glacier calculated for the part.
     * This field is never <code>null</code>.</p>
     */
    inline const Aws::String& GetSHA256TreeHash() const { return m_sHA256TreeHash; }
    inline bool SHA256TreeHashHasBeenSet() const { return m_sHA256TreeHashHasBeenSet; }
    template<typename SHA256TreeHashT = Aws::String>
    void SetSHA256TreeHash(SHA256TreeHashT&& value) { m_sHA256TreeHashHasBeenSet = true; m_sHA256TreeHash = std::forward<SHA256TreeHashT>(value); }
    template<typename SHA256TreeHashT = Aws::String>
    PartListElement& WithSHA256TreeHash(SHA256TreeHashT&& value) { SetSHA256TreeHash(std::forward<SHA256TreeHashT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_rangeInBytes;
    bool m_rangeInBytesHasBeenSet = false;

    Aws::String m_sHA256TreeHash;
    bool m_sHA256TreeHashHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
