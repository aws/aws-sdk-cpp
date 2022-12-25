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
  class CreateDataflowEndpointGroupResult
  {
  public:
    AWS_GROUNDSTATION_API CreateDataflowEndpointGroupResult();
    AWS_GROUNDSTATION_API CreateDataflowEndpointGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API CreateDataflowEndpointGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateDataflowEndpointGroupResult& WithDataflowEndpointGroupId(const Aws::String& value) { SetDataflowEndpointGroupId(value); return *this;}

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline CreateDataflowEndpointGroupResult& WithDataflowEndpointGroupId(Aws::String&& value) { SetDataflowEndpointGroupId(std::move(value)); return *this;}

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline CreateDataflowEndpointGroupResult& WithDataflowEndpointGroupId(const char* value) { SetDataflowEndpointGroupId(value); return *this;}

  private:

    Aws::String m_dataflowEndpointGroupId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
