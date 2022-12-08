/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  class ChangeCidrCollectionResult
  {
  public:
    AWS_ROUTE53_API ChangeCidrCollectionResult();
    AWS_ROUTE53_API ChangeCidrCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ChangeCidrCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID that is returned by <code>ChangeCidrCollection</code>. You can use it
     * as input to <code>GetChange</code> to see if a CIDR collection change has
     * propagated or not.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID that is returned by <code>ChangeCidrCollection</code>. You can use it
     * as input to <code>GetChange</code> to see if a CIDR collection change has
     * propagated or not.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID that is returned by <code>ChangeCidrCollection</code>. You can use it
     * as input to <code>GetChange</code> to see if a CIDR collection change has
     * propagated or not.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID that is returned by <code>ChangeCidrCollection</code>. You can use it
     * as input to <code>GetChange</code> to see if a CIDR collection change has
     * propagated or not.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID that is returned by <code>ChangeCidrCollection</code>. You can use it
     * as input to <code>GetChange</code> to see if a CIDR collection change has
     * propagated or not.</p>
     */
    inline ChangeCidrCollectionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID that is returned by <code>ChangeCidrCollection</code>. You can use it
     * as input to <code>GetChange</code> to see if a CIDR collection change has
     * propagated or not.</p>
     */
    inline ChangeCidrCollectionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID that is returned by <code>ChangeCidrCollection</code>. You can use it
     * as input to <code>GetChange</code> to see if a CIDR collection change has
     * propagated or not.</p>
     */
    inline ChangeCidrCollectionResult& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
