/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Attribute.h>
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
namespace Connect
{
namespace Model
{
  class DescribeInstanceAttributeResult
  {
  public:
    AWS_CONNECT_API DescribeInstanceAttributeResult();
    AWS_CONNECT_API DescribeInstanceAttributeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeInstanceAttributeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The type of attribute.</p>
     */
    inline const Attribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The type of attribute.</p>
     */
    inline void SetAttribute(const Attribute& value) { m_attribute = value; }

    /**
     * <p>The type of attribute.</p>
     */
    inline void SetAttribute(Attribute&& value) { m_attribute = std::move(value); }

    /**
     * <p>The type of attribute.</p>
     */
    inline DescribeInstanceAttributeResult& WithAttribute(const Attribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>The type of attribute.</p>
     */
    inline DescribeInstanceAttributeResult& WithAttribute(Attribute&& value) { SetAttribute(std::move(value)); return *this;}

  private:

    Attribute m_attribute;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
