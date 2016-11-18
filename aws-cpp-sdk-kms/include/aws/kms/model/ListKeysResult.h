﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/KeyListEntry.h>

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
  class AWS_KMS_API ListKeysResult
  {
  public:
    ListKeysResult();
    ListKeysResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListKeysResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of keys.</p>
     */
    inline const Aws::Vector<KeyListEntry>& GetKeys() const{ return m_keys; }

    /**
     * <p>A list of keys.</p>
     */
    inline void SetKeys(const Aws::Vector<KeyListEntry>& value) { m_keys = value; }

    /**
     * <p>A list of keys.</p>
     */
    inline void SetKeys(Aws::Vector<KeyListEntry>&& value) { m_keys = value; }

    /**
     * <p>A list of keys.</p>
     */
    inline ListKeysResult& WithKeys(const Aws::Vector<KeyListEntry>& value) { SetKeys(value); return *this;}

    /**
     * <p>A list of keys.</p>
     */
    inline ListKeysResult& WithKeys(Aws::Vector<KeyListEntry>&& value) { SetKeys(value); return *this;}

    /**
     * <p>A list of keys.</p>
     */
    inline ListKeysResult& AddKeys(const KeyListEntry& value) { m_keys.push_back(value); return *this; }

    /**
     * <p>A list of keys.</p>
     */
    inline ListKeysResult& AddKeys(KeyListEntry&& value) { m_keys.push_back(value); return *this; }

    /**
     * <p>When <code>Truncated</code> is true, this value is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent pagination
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>When <code>Truncated</code> is true, this value is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent pagination
     * request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>When <code>Truncated</code> is true, this value is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent pagination
     * request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = value; }

    /**
     * <p>When <code>Truncated</code> is true, this value is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent pagination
     * request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>When <code>Truncated</code> is true, this value is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent pagination
     * request.</p>
     */
    inline ListKeysResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>When <code>Truncated</code> is true, this value is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent pagination
     * request.</p>
     */
    inline ListKeysResult& WithNextMarker(Aws::String&& value) { SetNextMarker(value); return *this;}

    /**
     * <p>When <code>Truncated</code> is true, this value is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent pagination
     * request.</p>
     */
    inline ListKeysResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

    /**
     * <p>A flag that indicates whether there are more items in the list. If your
     * results were truncated, you can use the <code>Marker</code> parameter to make a
     * subsequent pagination request to retrieve more items in the list.</p>
     */
    inline bool GetTruncated() const{ return m_truncated; }

    /**
     * <p>A flag that indicates whether there are more items in the list. If your
     * results were truncated, you can use the <code>Marker</code> parameter to make a
     * subsequent pagination request to retrieve more items in the list.</p>
     */
    inline void SetTruncated(bool value) { m_truncated = value; }

    /**
     * <p>A flag that indicates whether there are more items in the list. If your
     * results were truncated, you can use the <code>Marker</code> parameter to make a
     * subsequent pagination request to retrieve more items in the list.</p>
     */
    inline ListKeysResult& WithTruncated(bool value) { SetTruncated(value); return *this;}

  private:
    Aws::Vector<KeyListEntry> m_keys;
    Aws::String m_nextMarker;
    bool m_truncated;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
