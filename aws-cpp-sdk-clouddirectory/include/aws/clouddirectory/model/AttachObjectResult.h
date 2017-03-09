/*
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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace CloudDirectory
{
namespace Model
{
  class AWS_CLOUDDIRECTORY_API AttachObjectResult
  {
  public:
    AttachObjectResult();
    AttachObjectResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AttachObjectResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Attached <code>ObjectIdentifier</code>, which is the child
     * <code>ObjectIdentifier</code>.</p>
     */
    inline const Aws::String& GetAttachedObjectIdentifier() const{ return m_attachedObjectIdentifier; }

    /**
     * <p>Attached <code>ObjectIdentifier</code>, which is the child
     * <code>ObjectIdentifier</code>.</p>
     */
    inline void SetAttachedObjectIdentifier(const Aws::String& value) { m_attachedObjectIdentifier = value; }

    /**
     * <p>Attached <code>ObjectIdentifier</code>, which is the child
     * <code>ObjectIdentifier</code>.</p>
     */
    inline void SetAttachedObjectIdentifier(Aws::String&& value) { m_attachedObjectIdentifier = value; }

    /**
     * <p>Attached <code>ObjectIdentifier</code>, which is the child
     * <code>ObjectIdentifier</code>.</p>
     */
    inline void SetAttachedObjectIdentifier(const char* value) { m_attachedObjectIdentifier.assign(value); }

    /**
     * <p>Attached <code>ObjectIdentifier</code>, which is the child
     * <code>ObjectIdentifier</code>.</p>
     */
    inline AttachObjectResult& WithAttachedObjectIdentifier(const Aws::String& value) { SetAttachedObjectIdentifier(value); return *this;}

    /**
     * <p>Attached <code>ObjectIdentifier</code>, which is the child
     * <code>ObjectIdentifier</code>.</p>
     */
    inline AttachObjectResult& WithAttachedObjectIdentifier(Aws::String&& value) { SetAttachedObjectIdentifier(value); return *this;}

    /**
     * <p>Attached <code>ObjectIdentifier</code>, which is the child
     * <code>ObjectIdentifier</code>.</p>
     */
    inline AttachObjectResult& WithAttachedObjectIdentifier(const char* value) { SetAttachedObjectIdentifier(value); return *this;}

  private:
    Aws::String m_attachedObjectIdentifier;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
