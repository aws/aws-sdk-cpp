/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/Attribute.h>
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
namespace ECS
{
namespace Model
{
  class PutAttributesResult
  {
  public:
    AWS_ECS_API PutAttributesResult();
    AWS_ECS_API PutAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API PutAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attributes applied to your resource.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes applied to your resource.</p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributes = value; }

    /**
     * <p>The attributes applied to your resource.</p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributes = std::move(value); }

    /**
     * <p>The attributes applied to your resource.</p>
     */
    inline PutAttributesResult& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes applied to your resource.</p>
     */
    inline PutAttributesResult& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes applied to your resource.</p>
     */
    inline PutAttributesResult& AddAttributes(const Attribute& value) { m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes applied to your resource.</p>
     */
    inline PutAttributesResult& AddAttributes(Attribute&& value) { m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Attribute> m_attributes;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
