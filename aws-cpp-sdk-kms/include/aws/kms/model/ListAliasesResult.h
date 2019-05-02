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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/AliasListEntry.h>
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
  class AWS_KMS_API ListAliasesResult
  {
  public:
    ListAliasesResult();
    ListAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of aliases.</p>
     */
    inline const Aws::Vector<AliasListEntry>& GetAliases() const{ return m_aliases; }

    /**
     * <p>A list of aliases.</p>
     */
    inline void SetAliases(const Aws::Vector<AliasListEntry>& value) { m_aliases = value; }

    /**
     * <p>A list of aliases.</p>
     */
    inline void SetAliases(Aws::Vector<AliasListEntry>&& value) { m_aliases = std::move(value); }

    /**
     * <p>A list of aliases.</p>
     */
    inline ListAliasesResult& WithAliases(const Aws::Vector<AliasListEntry>& value) { SetAliases(value); return *this;}

    /**
     * <p>A list of aliases.</p>
     */
    inline ListAliasesResult& WithAliases(Aws::Vector<AliasListEntry>&& value) { SetAliases(std::move(value)); return *this;}

    /**
     * <p>A list of aliases.</p>
     */
    inline ListAliasesResult& AddAliases(const AliasListEntry& value) { m_aliases.push_back(value); return *this; }

    /**
     * <p>A list of aliases.</p>
     */
    inline ListAliasesResult& AddAliases(AliasListEntry&& value) { m_aliases.push_back(std::move(value)); return *this; }


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
    inline ListAliasesResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline ListAliasesResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>When <code>Truncated</code> is true, this element is present and contains the
     * value to use for the <code>Marker</code> parameter in a subsequent request.</p>
     */
    inline ListAliasesResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


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
    inline ListAliasesResult& WithTruncated(bool value) { SetTruncated(value); return *this;}

  private:

    Aws::Vector<AliasListEntry> m_aliases;

    Aws::String m_nextMarker;

    bool m_truncated;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
