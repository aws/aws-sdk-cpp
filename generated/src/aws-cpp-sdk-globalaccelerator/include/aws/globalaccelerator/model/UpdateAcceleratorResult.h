/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/Accelerator.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class UpdateAcceleratorResult
  {
  public:
    AWS_GLOBALACCELERATOR_API UpdateAcceleratorResult();
    AWS_GLOBALACCELERATOR_API UpdateAcceleratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API UpdateAcceleratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the updated accelerator.</p>
     */
    inline const Accelerator& GetAccelerator() const{ return m_accelerator; }

    /**
     * <p>Information about the updated accelerator.</p>
     */
    inline void SetAccelerator(const Accelerator& value) { m_accelerator = value; }

    /**
     * <p>Information about the updated accelerator.</p>
     */
    inline void SetAccelerator(Accelerator&& value) { m_accelerator = std::move(value); }

    /**
     * <p>Information about the updated accelerator.</p>
     */
    inline UpdateAcceleratorResult& WithAccelerator(const Accelerator& value) { SetAccelerator(value); return *this;}

    /**
     * <p>Information about the updated accelerator.</p>
     */
    inline UpdateAcceleratorResult& WithAccelerator(Accelerator&& value) { SetAccelerator(std::move(value)); return *this;}

  private:

    Accelerator m_accelerator;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
