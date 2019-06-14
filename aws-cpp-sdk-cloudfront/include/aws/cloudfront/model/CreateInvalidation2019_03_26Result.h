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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/Invalidation.h>
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
namespace CloudFront
{
namespace Model
{
  /**
   * <p>The returned result of the corresponding request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/CreateInvalidationResult">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API CreateInvalidation2019_03_26Result
  {
  public:
    CreateInvalidation2019_03_26Result();
    CreateInvalidation2019_03_26Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateInvalidation2019_03_26Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The fully qualified URI of the distribution and invalidation batch request,
     * including the <code>Invalidation ID</code>.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The fully qualified URI of the distribution and invalidation batch request,
     * including the <code>Invalidation ID</code>.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The fully qualified URI of the distribution and invalidation batch request,
     * including the <code>Invalidation ID</code>.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The fully qualified URI of the distribution and invalidation batch request,
     * including the <code>Invalidation ID</code>.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The fully qualified URI of the distribution and invalidation batch request,
     * including the <code>Invalidation ID</code>.</p>
     */
    inline CreateInvalidation2019_03_26Result& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The fully qualified URI of the distribution and invalidation batch request,
     * including the <code>Invalidation ID</code>.</p>
     */
    inline CreateInvalidation2019_03_26Result& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The fully qualified URI of the distribution and invalidation batch request,
     * including the <code>Invalidation ID</code>.</p>
     */
    inline CreateInvalidation2019_03_26Result& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The invalidation's information.</p>
     */
    inline const Invalidation& GetInvalidation() const{ return m_invalidation; }

    /**
     * <p>The invalidation's information.</p>
     */
    inline void SetInvalidation(const Invalidation& value) { m_invalidation = value; }

    /**
     * <p>The invalidation's information.</p>
     */
    inline void SetInvalidation(Invalidation&& value) { m_invalidation = std::move(value); }

    /**
     * <p>The invalidation's information.</p>
     */
    inline CreateInvalidation2019_03_26Result& WithInvalidation(const Invalidation& value) { SetInvalidation(value); return *this;}

    /**
     * <p>The invalidation's information.</p>
     */
    inline CreateInvalidation2019_03_26Result& WithInvalidation(Invalidation&& value) { SetInvalidation(std::move(value)); return *this;}

  private:

    Aws::String m_location;

    Invalidation m_invalidation;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
