/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetLinkAttributesResult
  {
  public:
    AWS_CLOUDDIRECTORY_API GetLinkAttributesResult();
    AWS_CLOUDDIRECTORY_API GetLinkAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API GetLinkAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attributes that are associated with the typed link.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes that are associated with the typed link.</p>
     */
    inline void SetAttributes(const Aws::Vector<AttributeKeyAndValue>& value) { m_attributes = value; }

    /**
     * <p>The attributes that are associated with the typed link.</p>
     */
    inline void SetAttributes(Aws::Vector<AttributeKeyAndValue>&& value) { m_attributes = std::move(value); }

    /**
     * <p>The attributes that are associated with the typed link.</p>
     */
    inline GetLinkAttributesResult& WithAttributes(const Aws::Vector<AttributeKeyAndValue>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes that are associated with the typed link.</p>
     */
    inline GetLinkAttributesResult& WithAttributes(Aws::Vector<AttributeKeyAndValue>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes that are associated with the typed link.</p>
     */
    inline GetLinkAttributesResult& AddAttributes(const AttributeKeyAndValue& value) { m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes that are associated with the typed link.</p>
     */
    inline GetLinkAttributesResult& AddAttributes(AttributeKeyAndValue&& value) { m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AttributeKeyAndValue> m_attributes;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
