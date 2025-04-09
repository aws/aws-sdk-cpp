/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/groundstation/model/EndpointDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateDataflowEndpointGroupRequest">AWS
   * API Reference</a></p>
   */
  class CreateDataflowEndpointGroupRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API CreateDataflowEndpointGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataflowEndpointGroup"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Amount of time, in seconds, after a contact ends that the Ground Station
     * Dataflow Endpoint Group will be in a <code>POSTPASS</code> state. A Ground
     * Station Dataflow Endpoint Group State Change event will be emitted when the
     * Dataflow Endpoint Group enters and exits the <code>POSTPASS</code> state.</p>
     */
    inline int GetContactPostPassDurationSeconds() const { return m_contactPostPassDurationSeconds; }
    inline bool ContactPostPassDurationSecondsHasBeenSet() const { return m_contactPostPassDurationSecondsHasBeenSet; }
    inline void SetContactPostPassDurationSeconds(int value) { m_contactPostPassDurationSecondsHasBeenSet = true; m_contactPostPassDurationSeconds = value; }
    inline CreateDataflowEndpointGroupRequest& WithContactPostPassDurationSeconds(int value) { SetContactPostPassDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amount of time, in seconds, before a contact starts that the Ground Station
     * Dataflow Endpoint Group will be in a <code>PREPASS</code> state. A Ground
     * Station Dataflow Endpoint Group State Change event will be emitted when the
     * Dataflow Endpoint Group enters and exits the <code>PREPASS</code> state.</p>
     */
    inline int GetContactPrePassDurationSeconds() const { return m_contactPrePassDurationSeconds; }
    inline bool ContactPrePassDurationSecondsHasBeenSet() const { return m_contactPrePassDurationSecondsHasBeenSet; }
    inline void SetContactPrePassDurationSeconds(int value) { m_contactPrePassDurationSecondsHasBeenSet = true; m_contactPrePassDurationSeconds = value; }
    inline CreateDataflowEndpointGroupRequest& WithContactPrePassDurationSeconds(int value) { SetContactPrePassDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Endpoint details of each endpoint in the dataflow endpoint group. <pre><code>
     * All dataflow endpoints within a single dataflow endpoint group must be of the
     * same type. You cannot mix &lt;a
     * href=&quot;https://docs.aws.amazon.com/ground-station/latest/APIReference/API_AwsGroundStationAgentEndpoint.html&quot;&gt;
     * AWS Ground Station Agent endpoints&lt;/a&gt; with &lt;a
     * href=&quot;https://docs.aws.amazon.com/ground-station/latest/APIReference/API_DataflowEndpoint.html&quot;&gt;Dataflow
     * endpoints&lt;/a&gt; in the same group. If your use case requires both types of
     * endpoints, you must create separate dataflow endpoint groups for each type.
     * &lt;/p&gt; </code></pre>
     */
    inline const Aws::Vector<EndpointDetails>& GetEndpointDetails() const { return m_endpointDetails; }
    inline bool EndpointDetailsHasBeenSet() const { return m_endpointDetailsHasBeenSet; }
    template<typename EndpointDetailsT = Aws::Vector<EndpointDetails>>
    void SetEndpointDetails(EndpointDetailsT&& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = std::forward<EndpointDetailsT>(value); }
    template<typename EndpointDetailsT = Aws::Vector<EndpointDetails>>
    CreateDataflowEndpointGroupRequest& WithEndpointDetails(EndpointDetailsT&& value) { SetEndpointDetails(std::forward<EndpointDetailsT>(value)); return *this;}
    template<typename EndpointDetailsT = EndpointDetails>
    CreateDataflowEndpointGroupRequest& AddEndpointDetails(EndpointDetailsT&& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails.emplace_back(std::forward<EndpointDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags of a dataflow endpoint group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDataflowEndpointGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDataflowEndpointGroupRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    int m_contactPostPassDurationSeconds{0};
    bool m_contactPostPassDurationSecondsHasBeenSet = false;

    int m_contactPrePassDurationSeconds{0};
    bool m_contactPrePassDurationSecondsHasBeenSet = false;

    Aws::Vector<EndpointDetails> m_endpointDetails;
    bool m_endpointDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
