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
#include <aws/cloudfront/model/StatusCodes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A complex data type that includes information about the failover criteria for
   * an origin group, including the status codes for which CloudFront will failover
   * from the primary origin to the second origin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/OriginGroupFailoverCriteria">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API OriginGroupFailoverCriteria
  {
  public:
    OriginGroupFailoverCriteria();
    OriginGroupFailoverCriteria(const Aws::Utils::Xml::XmlNode& xmlNode);
    OriginGroupFailoverCriteria& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The status codes that, when returned from the primary origin, will trigger
     * CloudFront to failover to the second origin.</p>
     */
    inline const StatusCodes& GetStatusCodes() const{ return m_statusCodes; }

    /**
     * <p>The status codes that, when returned from the primary origin, will trigger
     * CloudFront to failover to the second origin.</p>
     */
    inline bool StatusCodesHasBeenSet() const { return m_statusCodesHasBeenSet; }

    /**
     * <p>The status codes that, when returned from the primary origin, will trigger
     * CloudFront to failover to the second origin.</p>
     */
    inline void SetStatusCodes(const StatusCodes& value) { m_statusCodesHasBeenSet = true; m_statusCodes = value; }

    /**
     * <p>The status codes that, when returned from the primary origin, will trigger
     * CloudFront to failover to the second origin.</p>
     */
    inline void SetStatusCodes(StatusCodes&& value) { m_statusCodesHasBeenSet = true; m_statusCodes = std::move(value); }

    /**
     * <p>The status codes that, when returned from the primary origin, will trigger
     * CloudFront to failover to the second origin.</p>
     */
    inline OriginGroupFailoverCriteria& WithStatusCodes(const StatusCodes& value) { SetStatusCodes(value); return *this;}

    /**
     * <p>The status codes that, when returned from the primary origin, will trigger
     * CloudFront to failover to the second origin.</p>
     */
    inline OriginGroupFailoverCriteria& WithStatusCodes(StatusCodes&& value) { SetStatusCodes(std::move(value)); return *this;}

  private:

    StatusCodes m_statusCodes;
    bool m_statusCodesHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
