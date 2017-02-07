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
  class AWS_CLOUDDIRECTORY_API UpdateObjectAttributesResult
  {
  public:
    UpdateObjectAttributesResult();
    UpdateObjectAttributesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateObjectAttributesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>ObjectIdentifier of the updated object.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const{ return m_objectIdentifier; }

    /**
     * <p>ObjectIdentifier of the updated object.</p>
     */
    inline void SetObjectIdentifier(const Aws::String& value) { m_objectIdentifier = value; }

    /**
     * <p>ObjectIdentifier of the updated object.</p>
     */
    inline void SetObjectIdentifier(Aws::String&& value) { m_objectIdentifier = value; }

    /**
     * <p>ObjectIdentifier of the updated object.</p>
     */
    inline void SetObjectIdentifier(const char* value) { m_objectIdentifier.assign(value); }

    /**
     * <p>ObjectIdentifier of the updated object.</p>
     */
    inline UpdateObjectAttributesResult& WithObjectIdentifier(const Aws::String& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>ObjectIdentifier of the updated object.</p>
     */
    inline UpdateObjectAttributesResult& WithObjectIdentifier(Aws::String&& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>ObjectIdentifier of the updated object.</p>
     */
    inline UpdateObjectAttributesResult& WithObjectIdentifier(const char* value) { SetObjectIdentifier(value); return *this;}

  private:
    Aws::String m_objectIdentifier;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
