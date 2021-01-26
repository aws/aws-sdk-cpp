/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/ShippingLabelStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Snowball
{
namespace Model
{
  class AWS_SNOWBALL_API DescribeReturnShippingLabelResult
  {
  public:
    DescribeReturnShippingLabelResult();
    DescribeReturnShippingLabelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeReturnShippingLabelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * AWS.</p>
     */
    inline const ShippingLabelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * AWS.</p>
     */
    inline void SetStatus(const ShippingLabelStatus& value) { m_status = value; }

    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * AWS.</p>
     */
    inline void SetStatus(ShippingLabelStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * AWS.</p>
     */
    inline DescribeReturnShippingLabelResult& WithStatus(const ShippingLabelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * AWS.</p>
     */
    inline DescribeReturnShippingLabelResult& WithStatus(ShippingLabelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The expiration date of the current return shipping label.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p>The expiration date of the current return shipping label.</p>
     */
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDate = value; }

    /**
     * <p>The expiration date of the current return shipping label.</p>
     */
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDate = std::move(value); }

    /**
     * <p>The expiration date of the current return shipping label.</p>
     */
    inline DescribeReturnShippingLabelResult& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    /**
     * <p>The expiration date of the current return shipping label.</p>
     */
    inline DescribeReturnShippingLabelResult& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}

  private:

    ShippingLabelStatus m_status;

    Aws::Utils::DateTime m_expirationDate;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
