/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DataflowEndpointGroupIdResponse">AWS
   * API Reference</a></p>
   */
  class DeleteDataflowEndpointGroupResult
  {
  public:
    AWS_GROUNDSTATION_API DeleteDataflowEndpointGroupResult();
    AWS_GROUNDSTATION_API DeleteDataflowEndpointGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API DeleteDataflowEndpointGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline const Aws::String& GetDataflowEndpointGroupId() const{ return m_dataflowEndpointGroupId; }

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline void SetDataflowEndpointGroupId(const Aws::String& value) { m_dataflowEndpointGroupId = value; }

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline void SetDataflowEndpointGroupId(Aws::String&& value) { m_dataflowEndpointGroupId = std::move(value); }

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline void SetDataflowEndpointGroupId(const char* value) { m_dataflowEndpointGroupId.assign(value); }

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline DeleteDataflowEndpointGroupResult& WithDataflowEndpointGroupId(const Aws::String& value) { SetDataflowEndpointGroupId(value); return *this;}

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline DeleteDataflowEndpointGroupResult& WithDataflowEndpointGroupId(Aws::String&& value) { SetDataflowEndpointGroupId(std::move(value)); return *this;}

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline DeleteDataflowEndpointGroupResult& WithDataflowEndpointGroupId(const char* value) { SetDataflowEndpointGroupId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteDataflowEndpointGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteDataflowEndpointGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteDataflowEndpointGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_dataflowEndpointGroupId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
