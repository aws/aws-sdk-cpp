/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/AttributesResource.h>
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
namespace Pinpoint
{
namespace Model
{
  class RemoveAttributesResult
  {
  public:
    AWS_PINPOINT_API RemoveAttributesResult();
    AWS_PINPOINT_API RemoveAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API RemoveAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const AttributesResource& GetAttributesResource() const{ return m_attributesResource; }

    
    inline void SetAttributesResource(const AttributesResource& value) { m_attributesResource = value; }

    
    inline void SetAttributesResource(AttributesResource&& value) { m_attributesResource = std::move(value); }

    
    inline RemoveAttributesResult& WithAttributesResource(const AttributesResource& value) { SetAttributesResource(value); return *this;}

    
    inline RemoveAttributesResult& WithAttributesResource(AttributesResource&& value) { SetAttributesResource(std::move(value)); return *this;}

  private:

    AttributesResource m_attributesResource;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
