/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{
  class ListResourceTagsResult
  {
  public:
    AWS_KMS_API ListResourceTagsResult();
    AWS_KMS_API ListResourceTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API ListResourceTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of tags. Each tag consists of a tag key and a tag value.</p> 
     * <p>Tagging or untagging a KMS key can allow or deny permission to the KMS key.
     * For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags. Each tag consists of a tag key and a tag value.</p> 
     * <p>Tagging or untagging a KMS key can allow or deny permission to the KMS key.
     * For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>A list of tags. Each tag consists of a tag key and a tag value.</p> 
     * <p>Tagging or untagging a KMS key can allow or deny permission to the KMS key.
     * For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>A list of tags. Each tag consists of a tag key and a tag value.</p> 
     * <p>Tagging or untagging a KMS key can allow or deny permission to the KMS key.
     * For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
     */
    inline ListResourceTagsResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags. Each tag consists of a tag key and a tag value.</p> 
     * <p>Tagging or untagging a KMS key can allow or deny permission to the KMS key.
     * For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
     */
    inline ListResourceTagsResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags. Each tag consists of a tag key and a tag value.</p> 
     * <p>Tagging or untagging a KMS key can allow or deny permission to the KMS key.
     * For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
     */
    inline ListResourceTagsResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags. Each tag consists of a tag key and a tag value.</p> 
     * <p>Tagging or untagging a KMS key can allow or deny permission to the KMS key.
     * For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/abac.html">ABAC for
     * KMS</a> in the <i>Key Management Service Developer Guide</i>.</p> 
     */
    inline ListResourceTagsResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     * <p>Do not assume or infer any information from this value.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     * <p>Do not assume or infer any information from this value.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     * <p>Do not assume or infer any information from this value.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     * <p>Do not assume or infer any information from this value.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     * <p>Do not assume or infer any information from this value.</p>
     */
    inline ListResourceTagsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     * <p>Do not assume or infer any information from this value.</p>
     */
    inline ListResourceTagsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     * <p>Do not assume or infer any information from this value.</p>
     */
    inline ListResourceTagsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>A flag that indicates whether there are more items in the list. When this
     * value is true, the list in this response is truncated. To get more items, pass
     * the value of the <code>NextMarker</code> element in thisresponse to the
     * <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline bool GetTruncated() const{ return m_truncated; }

    /**
     * <p>A flag that indicates whether there are more items in the list. When this
     * value is true, the list in this response is truncated. To get more items, pass
     * the value of the <code>NextMarker</code> element in thisresponse to the
     * <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline void SetTruncated(bool value) { m_truncated = value; }

    /**
     * <p>A flag that indicates whether there are more items in the list. When this
     * value is true, the list in this response is truncated. To get more items, pass
     * the value of the <code>NextMarker</code> element in thisresponse to the
     * <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline ListResourceTagsResult& WithTruncated(bool value) { SetTruncated(value); return *this;}

  private:

    Aws::Vector<Tag> m_tags;

    Aws::String m_nextMarker;

    bool m_truncated;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
