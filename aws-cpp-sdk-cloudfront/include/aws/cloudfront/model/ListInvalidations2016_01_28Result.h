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
#include <aws/cloudfront/model/InvalidationList.h>

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
  class AWS_CLOUDFRONT_API ListInvalidations2016_01_28Result
  {
  public:
    ListInvalidations2016_01_28Result();
    ListInvalidations2016_01_28Result(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListInvalidations2016_01_28Result& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * Information about invalidation batches.
     */
    inline const InvalidationList& GetInvalidationList() const{ return m_invalidationList; }

    /**
     * Information about invalidation batches.
     */
    inline void SetInvalidationList(const InvalidationList& value) { m_invalidationList = value; }

    /**
     * Information about invalidation batches.
     */
    inline void SetInvalidationList(InvalidationList&& value) { m_invalidationList = value; }

    /**
     * Information about invalidation batches.
     */
    inline ListInvalidations2016_01_28Result& WithInvalidationList(const InvalidationList& value) { SetInvalidationList(value); return *this;}

    /**
     * Information about invalidation batches.
     */
    inline ListInvalidations2016_01_28Result& WithInvalidationList(InvalidationList&& value) { SetInvalidationList(value); return *this;}

  private:
    InvalidationList m_invalidationList;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws