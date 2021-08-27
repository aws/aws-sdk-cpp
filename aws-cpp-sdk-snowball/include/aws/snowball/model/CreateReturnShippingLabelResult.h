/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/ShippingLabelStatus.h>
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
  class AWS_SNOWBALL_API CreateReturnShippingLabelResult
  {
  public:
    CreateReturnShippingLabelResult();
    CreateReturnShippingLabelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateReturnShippingLabelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateReturnShippingLabelResult& WithStatus(const ShippingLabelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status information of the task on a Snow device that is being returned to
     * AWS.</p>
     */
    inline CreateReturnShippingLabelResult& WithStatus(ShippingLabelStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ShippingLabelStatus m_status;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
