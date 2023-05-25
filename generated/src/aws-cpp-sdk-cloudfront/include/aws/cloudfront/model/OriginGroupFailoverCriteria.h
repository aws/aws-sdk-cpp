/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginGroupFailoverCriteria">AWS
   * API Reference</a></p>
   */
  class OriginGroupFailoverCriteria
  {
  public:
    AWS_CLOUDFRONT_API OriginGroupFailoverCriteria();
    AWS_CLOUDFRONT_API OriginGroupFailoverCriteria(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginGroupFailoverCriteria& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


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
    bool m_statusCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
