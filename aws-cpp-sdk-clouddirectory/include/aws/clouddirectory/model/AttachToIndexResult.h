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
  class AWS_CLOUDDIRECTORY_API AttachToIndexResult
  {
  public:
    AttachToIndexResult();
    AttachToIndexResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AttachToIndexResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The ObjectIdentifier of the object that was attached to the index.</p>
     */
    inline const Aws::String& GetAttachedObjectIdentifier() const{ return m_attachedObjectIdentifier; }

    /**
     * <p>The ObjectIdentifier of the object that was attached to the index.</p>
     */
    inline void SetAttachedObjectIdentifier(const Aws::String& value) { m_attachedObjectIdentifier = value; }

    /**
     * <p>The ObjectIdentifier of the object that was attached to the index.</p>
     */
    inline void SetAttachedObjectIdentifier(Aws::String&& value) { m_attachedObjectIdentifier = value; }

    /**
     * <p>The ObjectIdentifier of the object that was attached to the index.</p>
     */
    inline void SetAttachedObjectIdentifier(const char* value) { m_attachedObjectIdentifier.assign(value); }

    /**
     * <p>The ObjectIdentifier of the object that was attached to the index.</p>
     */
    inline AttachToIndexResult& WithAttachedObjectIdentifier(const Aws::String& value) { SetAttachedObjectIdentifier(value); return *this;}

    /**
     * <p>The ObjectIdentifier of the object that was attached to the index.</p>
     */
    inline AttachToIndexResult& WithAttachedObjectIdentifier(Aws::String&& value) { SetAttachedObjectIdentifier(value); return *this;}

    /**
     * <p>The ObjectIdentifier of the object that was attached to the index.</p>
     */
    inline AttachToIndexResult& WithAttachedObjectIdentifier(const char* value) { SetAttachedObjectIdentifier(value); return *this;}

  private:
    Aws::String m_attachedObjectIdentifier;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
