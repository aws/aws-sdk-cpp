/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/groundstation/model/EndpointDetails.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetDataflowEndpointGroupResponse">AWS
   * API Reference</a></p>
   */
  class GetDataflowEndpointGroupResult
  {
  public:
    AWS_GROUNDSTATION_API GetDataflowEndpointGroupResult();
    AWS_GROUNDSTATION_API GetDataflowEndpointGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API GetDataflowEndpointGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amount of time, in seconds, after a contact ends that the Ground Station
     * Dataflow Endpoint Group will be in a <code>POSTPASS</code> state. A Ground
     * Station Dataflow Endpoint Group State Change event will be emitted when the
     * Dataflow Endpoint Group enters and exits the <code>POSTPASS</code> state.</p>
     */
    inline int GetContactPostPassDurationSeconds() const{ return m_contactPostPassDurationSeconds; }
    inline void SetContactPostPassDurationSeconds(int value) { m_contactPostPassDurationSeconds = value; }
    inline GetDataflowEndpointGroupResult& WithContactPostPassDurationSeconds(int value) { SetContactPostPassDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amount of time, in seconds, before a contact starts that the Ground Station
     * Dataflow Endpoint Group will be in a <code>PREPASS</code> state. A Ground
     * Station Dataflow Endpoint Group State Change event will be emitted when the
     * Dataflow Endpoint Group enters and exits the <code>PREPASS</code> state.</p>
     */
    inline int GetContactPrePassDurationSeconds() const{ return m_contactPrePassDurationSeconds; }
    inline void SetContactPrePassDurationSeconds(int value) { m_contactPrePassDurationSeconds = value; }
    inline GetDataflowEndpointGroupResult& WithContactPrePassDurationSeconds(int value) { SetContactPrePassDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline const Aws::String& GetDataflowEndpointGroupArn() const{ return m_dataflowEndpointGroupArn; }
    inline void SetDataflowEndpointGroupArn(const Aws::String& value) { m_dataflowEndpointGroupArn = value; }
    inline void SetDataflowEndpointGroupArn(Aws::String&& value) { m_dataflowEndpointGroupArn = std::move(value); }
    inline void SetDataflowEndpointGroupArn(const char* value) { m_dataflowEndpointGroupArn.assign(value); }
    inline GetDataflowEndpointGroupResult& WithDataflowEndpointGroupArn(const Aws::String& value) { SetDataflowEndpointGroupArn(value); return *this;}
    inline GetDataflowEndpointGroupResult& WithDataflowEndpointGroupArn(Aws::String&& value) { SetDataflowEndpointGroupArn(std::move(value)); return *this;}
    inline GetDataflowEndpointGroupResult& WithDataflowEndpointGroupArn(const char* value) { SetDataflowEndpointGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline const Aws::String& GetDataflowEndpointGroupId() const{ return m_dataflowEndpointGroupId; }
    inline void SetDataflowEndpointGroupId(const Aws::String& value) { m_dataflowEndpointGroupId = value; }
    inline void SetDataflowEndpointGroupId(Aws::String&& value) { m_dataflowEndpointGroupId = std::move(value); }
    inline void SetDataflowEndpointGroupId(const char* value) { m_dataflowEndpointGroupId.assign(value); }
    inline GetDataflowEndpointGroupResult& WithDataflowEndpointGroupId(const Aws::String& value) { SetDataflowEndpointGroupId(value); return *this;}
    inline GetDataflowEndpointGroupResult& WithDataflowEndpointGroupId(Aws::String&& value) { SetDataflowEndpointGroupId(std::move(value)); return *this;}
    inline GetDataflowEndpointGroupResult& WithDataflowEndpointGroupId(const char* value) { SetDataflowEndpointGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of a dataflow endpoint.</p>
     */
    inline const Aws::Vector<EndpointDetails>& GetEndpointsDetails() const{ return m_endpointsDetails; }
    inline void SetEndpointsDetails(const Aws::Vector<EndpointDetails>& value) { m_endpointsDetails = value; }
    inline void SetEndpointsDetails(Aws::Vector<EndpointDetails>&& value) { m_endpointsDetails = std::move(value); }
    inline GetDataflowEndpointGroupResult& WithEndpointsDetails(const Aws::Vector<EndpointDetails>& value) { SetEndpointsDetails(value); return *this;}
    inline GetDataflowEndpointGroupResult& WithEndpointsDetails(Aws::Vector<EndpointDetails>&& value) { SetEndpointsDetails(std::move(value)); return *this;}
    inline GetDataflowEndpointGroupResult& AddEndpointsDetails(const EndpointDetails& value) { m_endpointsDetails.push_back(value); return *this; }
    inline GetDataflowEndpointGroupResult& AddEndpointsDetails(EndpointDetails&& value) { m_endpointsDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags assigned to a dataflow endpoint group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetDataflowEndpointGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetDataflowEndpointGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetDataflowEndpointGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetDataflowEndpointGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetDataflowEndpointGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetDataflowEndpointGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetDataflowEndpointGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetDataflowEndpointGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetDataflowEndpointGroupResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataflowEndpointGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataflowEndpointGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataflowEndpointGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_contactPostPassDurationSeconds;

    int m_contactPrePassDurationSeconds;

    Aws::String m_dataflowEndpointGroupArn;

    Aws::String m_dataflowEndpointGroupId;

    Aws::Vector<EndpointDetails> m_endpointsDetails;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
