/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/RotationsListEntry.h>
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
  class ListKeyRotationsResult
  {
  public:
    AWS_KMS_API ListKeyRotationsResult();
    AWS_KMS_API ListKeyRotationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API ListKeyRotationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of completed key material rotations.</p>
     */
    inline const Aws::Vector<RotationsListEntry>& GetRotations() const{ return m_rotations; }

    /**
     * <p>A list of completed key material rotations.</p>
     */
    inline void SetRotations(const Aws::Vector<RotationsListEntry>& value) { m_rotations = value; }

    /**
     * <p>A list of completed key material rotations.</p>
     */
    inline void SetRotations(Aws::Vector<RotationsListEntry>&& value) { m_rotations = std::move(value); }

    /**
     * <p>A list of completed key material rotations.</p>
     */
    inline ListKeyRotationsResult& WithRotations(const Aws::Vector<RotationsListEntry>& value) { SetRotations(value); return *this;}

    /**
     * <p>A list of completed key material rotations.</p>
     */
    inline ListKeyRotationsResult& WithRotations(Aws::Vector<RotationsListEntry>&& value) { SetRotations(std::move(value)); return *this;}

    /**
     * <p>A list of completed key material rotations.</p>
     */
    inline ListKeyRotationsResult& AddRotations(const RotationsListEntry& value) { m_rotations.push_back(value); return *this; }

    /**
     * <p>A list of completed key material rotations.</p>
     */
    inline ListKeyRotationsResult& AddRotations(RotationsListEntry&& value) { m_rotations.push_back(std::move(value)); return *this; }


    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline ListKeyRotationsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline ListKeyRotationsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline ListKeyRotationsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>A flag that indicates whether there are more items in the list. When this
     * value is true, the list in this response is truncated. To get more items, pass
     * the value of the <code>NextMarker</code> element in this response to the
     * <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline bool GetTruncated() const{ return m_truncated; }

    /**
     * <p>A flag that indicates whether there are more items in the list. When this
     * value is true, the list in this response is truncated. To get more items, pass
     * the value of the <code>NextMarker</code> element in this response to the
     * <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline void SetTruncated(bool value) { m_truncated = value; }

    /**
     * <p>A flag that indicates whether there are more items in the list. When this
     * value is true, the list in this response is truncated. To get more items, pass
     * the value of the <code>NextMarker</code> element in this response to the
     * <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline ListKeyRotationsResult& WithTruncated(bool value) { SetTruncated(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListKeyRotationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListKeyRotationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListKeyRotationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<RotationsListEntry> m_rotations;

    Aws::String m_nextMarker;

    bool m_truncated;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
