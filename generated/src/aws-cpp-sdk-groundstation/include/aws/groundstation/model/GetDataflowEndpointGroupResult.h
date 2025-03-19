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
    AWS_GROUNDSTATION_API GetDataflowEndpointGroupResult() = default;
    AWS_GROUNDSTATION_API GetDataflowEndpointGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API GetDataflowEndpointGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amount of time, in seconds, after a contact ends that the Ground Station
     * Dataflow Endpoint Group will be in a <code>POSTPASS</code> state. A Ground
     * Station Dataflow Endpoint Group State Change event will be emitted when the
     * Dataflow Endpoint Group enters and exits the <code>POSTPASS</code> state.</p>
     */
    inline int GetContactPostPassDurationSeconds() const { return m_contactPostPassDurationSeconds; }
    inline void SetContactPostPassDurationSeconds(int value) { m_contactPostPassDurationSecondsHasBeenSet = true; m_contactPostPassDurationSeconds = value; }
    inline GetDataflowEndpointGroupResult& WithContactPostPassDurationSeconds(int value) { SetContactPostPassDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amount of time, in seconds, before a contact starts that the Ground Station
     * Dataflow Endpoint Group will be in a <code>PREPASS</code> state. A Ground
     * Station Dataflow Endpoint Group State Change event will be emitted when the
     * Dataflow Endpoint Group enters and exits the <code>PREPASS</code> state.</p>
     */
    inline int GetContactPrePassDurationSeconds() const { return m_contactPrePassDurationSeconds; }
    inline void SetContactPrePassDurationSeconds(int value) { m_contactPrePassDurationSecondsHasBeenSet = true; m_contactPrePassDurationSeconds = value; }
    inline GetDataflowEndpointGroupResult& WithContactPrePassDurationSeconds(int value) { SetContactPrePassDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline const Aws::String& GetDataflowEndpointGroupArn() const { return m_dataflowEndpointGroupArn; }
    template<typename DataflowEndpointGroupArnT = Aws::String>
    void SetDataflowEndpointGroupArn(DataflowEndpointGroupArnT&& value) { m_dataflowEndpointGroupArnHasBeenSet = true; m_dataflowEndpointGroupArn = std::forward<DataflowEndpointGroupArnT>(value); }
    template<typename DataflowEndpointGroupArnT = Aws::String>
    GetDataflowEndpointGroupResult& WithDataflowEndpointGroupArn(DataflowEndpointGroupArnT&& value) { SetDataflowEndpointGroupArn(std::forward<DataflowEndpointGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline const Aws::String& GetDataflowEndpointGroupId() const { return m_dataflowEndpointGroupId; }
    template<typename DataflowEndpointGroupIdT = Aws::String>
    void SetDataflowEndpointGroupId(DataflowEndpointGroupIdT&& value) { m_dataflowEndpointGroupIdHasBeenSet = true; m_dataflowEndpointGroupId = std::forward<DataflowEndpointGroupIdT>(value); }
    template<typename DataflowEndpointGroupIdT = Aws::String>
    GetDataflowEndpointGroupResult& WithDataflowEndpointGroupId(DataflowEndpointGroupIdT&& value) { SetDataflowEndpointGroupId(std::forward<DataflowEndpointGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of a dataflow endpoint.</p>
     */
    inline const Aws::Vector<EndpointDetails>& GetEndpointsDetails() const { return m_endpointsDetails; }
    template<typename EndpointsDetailsT = Aws::Vector<EndpointDetails>>
    void SetEndpointsDetails(EndpointsDetailsT&& value) { m_endpointsDetailsHasBeenSet = true; m_endpointsDetails = std::forward<EndpointsDetailsT>(value); }
    template<typename EndpointsDetailsT = Aws::Vector<EndpointDetails>>
    GetDataflowEndpointGroupResult& WithEndpointsDetails(EndpointsDetailsT&& value) { SetEndpointsDetails(std::forward<EndpointsDetailsT>(value)); return *this;}
    template<typename EndpointsDetailsT = EndpointDetails>
    GetDataflowEndpointGroupResult& AddEndpointsDetails(EndpointsDetailsT&& value) { m_endpointsDetailsHasBeenSet = true; m_endpointsDetails.emplace_back(std::forward<EndpointsDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags assigned to a dataflow endpoint group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetDataflowEndpointGroupResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetDataflowEndpointGroupResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataflowEndpointGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_contactPostPassDurationSeconds{0};
    bool m_contactPostPassDurationSecondsHasBeenSet = false;

    int m_contactPrePassDurationSeconds{0};
    bool m_contactPrePassDurationSecondsHasBeenSet = false;

    Aws::String m_dataflowEndpointGroupArn;
    bool m_dataflowEndpointGroupArnHasBeenSet = false;

    Aws::String m_dataflowEndpointGroupId;
    bool m_dataflowEndpointGroupIdHasBeenSet = false;

    Aws::Vector<EndpointDetails> m_endpointsDetails;
    bool m_endpointsDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
