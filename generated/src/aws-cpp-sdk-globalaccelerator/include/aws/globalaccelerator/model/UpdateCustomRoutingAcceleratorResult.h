/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/CustomRoutingAccelerator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateCustomRoutingAcceleratorResult
  {
  public:
    AWS_GLOBALACCELERATOR_API UpdateCustomRoutingAcceleratorResult();
    AWS_GLOBALACCELERATOR_API UpdateCustomRoutingAcceleratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API UpdateCustomRoutingAcceleratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the updated custom routing accelerator.</p>
     */
    inline const CustomRoutingAccelerator& GetAccelerator() const{ return m_accelerator; }

    /**
     * <p>Information about the updated custom routing accelerator.</p>
     */
    inline void SetAccelerator(const CustomRoutingAccelerator& value) { m_accelerator = value; }

    /**
     * <p>Information about the updated custom routing accelerator.</p>
     */
    inline void SetAccelerator(CustomRoutingAccelerator&& value) { m_accelerator = std::move(value); }

    /**
     * <p>Information about the updated custom routing accelerator.</p>
     */
    inline UpdateCustomRoutingAcceleratorResult& WithAccelerator(const CustomRoutingAccelerator& value) { SetAccelerator(value); return *this;}

    /**
     * <p>Information about the updated custom routing accelerator.</p>
     */
    inline UpdateCustomRoutingAcceleratorResult& WithAccelerator(CustomRoutingAccelerator&& value) { SetAccelerator(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateCustomRoutingAcceleratorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateCustomRoutingAcceleratorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateCustomRoutingAcceleratorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CustomRoutingAccelerator m_accelerator;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
