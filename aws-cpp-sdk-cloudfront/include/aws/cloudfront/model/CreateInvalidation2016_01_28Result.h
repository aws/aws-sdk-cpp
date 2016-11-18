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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/Invalidation.h>

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
   * The returned result of the corresponding request.
   */
  class AWS_CLOUDFRONT_API CreateInvalidation2016_01_28Result
  {
  public:
    CreateInvalidation2016_01_28Result();
    CreateInvalidation2016_01_28Result(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateInvalidation2016_01_28Result& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * The fully qualified URI of the distribution and invalidation batch request,
     * including the Invalidation ID.
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * The fully qualified URI of the distribution and invalidation batch request,
     * including the Invalidation ID.
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * The fully qualified URI of the distribution and invalidation batch request,
     * including the Invalidation ID.
     */
    inline void SetLocation(Aws::String&& value) { m_location = value; }

    /**
     * The fully qualified URI of the distribution and invalidation batch request,
     * including the Invalidation ID.
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * The fully qualified URI of the distribution and invalidation batch request,
     * including the Invalidation ID.
     */
    inline CreateInvalidation2016_01_28Result& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * The fully qualified URI of the distribution and invalidation batch request,
     * including the Invalidation ID.
     */
    inline CreateInvalidation2016_01_28Result& WithLocation(Aws::String&& value) { SetLocation(value); return *this;}

    /**
     * The fully qualified URI of the distribution and invalidation batch request,
     * including the Invalidation ID.
     */
    inline CreateInvalidation2016_01_28Result& WithLocation(const char* value) { SetLocation(value); return *this;}

    /**
     * The invalidation's information.
     */
    inline const Invalidation& GetInvalidation() const{ return m_invalidation; }

    /**
     * The invalidation's information.
     */
    inline void SetInvalidation(const Invalidation& value) { m_invalidation = value; }

    /**
     * The invalidation's information.
     */
    inline void SetInvalidation(Invalidation&& value) { m_invalidation = value; }

    /**
     * The invalidation's information.
     */
    inline CreateInvalidation2016_01_28Result& WithInvalidation(const Invalidation& value) { SetInvalidation(value); return *this;}

    /**
     * The invalidation's information.
     */
    inline CreateInvalidation2016_01_28Result& WithInvalidation(Invalidation&& value) { SetInvalidation(value); return *this;}

  private:
    Aws::String m_location;
    Invalidation m_invalidation;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws