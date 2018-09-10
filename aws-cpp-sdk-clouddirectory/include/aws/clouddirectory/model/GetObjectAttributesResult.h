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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/AttributeKeyAndValue.h>
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
namespace CloudDirectory
{
namespace Model
{
  class AWS_CLOUDDIRECTORY_API GetObjectAttributesResult
  {
  public:
    GetObjectAttributesResult();
    GetObjectAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetObjectAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attributes that are associated with the object.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes that are associated with the object.</p>
     */
    inline void SetAttributes(const Aws::Vector<AttributeKeyAndValue>& value) { m_attributes = value; }

    /**
     * <p>The attributes that are associated with the object.</p>
     */
    inline void SetAttributes(Aws::Vector<AttributeKeyAndValue>&& value) { m_attributes = std::move(value); }

    /**
     * <p>The attributes that are associated with the object.</p>
     */
    inline GetObjectAttributesResult& WithAttributes(const Aws::Vector<AttributeKeyAndValue>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes that are associated with the object.</p>
     */
    inline GetObjectAttributesResult& WithAttributes(Aws::Vector<AttributeKeyAndValue>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes that are associated with the object.</p>
     */
    inline GetObjectAttributesResult& AddAttributes(const AttributeKeyAndValue& value) { m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes that are associated with the object.</p>
     */
    inline GetObjectAttributesResult& AddAttributes(AttributeKeyAndValue&& value) { m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AttributeKeyAndValue> m_attributes;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
