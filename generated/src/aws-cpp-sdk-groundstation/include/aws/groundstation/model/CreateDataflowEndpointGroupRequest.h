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
    AWS_GROUNDSTATION_API CreateDataflowEndpointGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataflowEndpointGroup"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    /**
     * <p>Amount of time, in seconds, after a contact ends that the Ground Station
     * Dataflow Endpoint Group will be in a <code>POSTPASS</code> state. A Ground
     * Station Dataflow Endpoint Group State Change event will be emitted when the
     * Dataflow Endpoint Group enters and exits the <code>POSTPASS</code> state.</p>
     */
    inline int GetContactPostPassDurationSeconds() const{ return m_contactPostPassDurationSeconds; }

    /**
     * <p>Amount of time, in seconds, after a contact ends that the Ground Station
     * Dataflow Endpoint Group will be in a <code>POSTPASS</code> state. A Ground
     * Station Dataflow Endpoint Group State Change event will be emitted when the
     * Dataflow Endpoint Group enters and exits the <code>POSTPASS</code> state.</p>
     */
    inline bool ContactPostPassDurationSecondsHasBeenSet() const { return m_contactPostPassDurationSecondsHasBeenSet; }

    /**
     * <p>Amount of time, in seconds, after a contact ends that the Ground Station
     * Dataflow Endpoint Group will be in a <code>POSTPASS</code> state. A Ground
     * Station Dataflow Endpoint Group State Change event will be emitted when the
     * Dataflow Endpoint Group enters and exits the <code>POSTPASS</code> state.</p>
     */
    inline void SetContactPostPassDurationSeconds(int value) { m_contactPostPassDurationSecondsHasBeenSet = true; m_contactPostPassDurationSeconds = value; }

    /**
     * <p>Amount of time, in seconds, after a contact ends that the Ground Station
     * Dataflow Endpoint Group will be in a <code>POSTPASS</code> state. A Ground
     * Station Dataflow Endpoint Group State Change event will be emitted when the
     * Dataflow Endpoint Group enters and exits the <code>POSTPASS</code> state.</p>
     */
    inline CreateDataflowEndpointGroupRequest& WithContactPostPassDurationSeconds(int value) { SetContactPostPassDurationSeconds(value); return *this;}


    /**
     * <p>Amount of time, in seconds, before a contact starts that the Ground Station
     * Dataflow Endpoint Group will be in a <code>PREPASS</code> state. A Ground
     * Station Dataflow Endpoint Group State Change event will be emitted when the
     * Dataflow Endpoint Group enters and exits the <code>PREPASS</code> state.</p>
     */
    inline int GetContactPrePassDurationSeconds() const{ return m_contactPrePassDurationSeconds; }

    /**
     * <p>Amount of time, in seconds, before a contact starts that the Ground Station
     * Dataflow Endpoint Group will be in a <code>PREPASS</code> state. A Ground
     * Station Dataflow Endpoint Group State Change event will be emitted when the
     * Dataflow Endpoint Group enters and exits the <code>PREPASS</code> state.</p>
     */
    inline bool ContactPrePassDurationSecondsHasBeenSet() const { return m_contactPrePassDurationSecondsHasBeenSet; }

    /**
     * <p>Amount of time, in seconds, before a contact starts that the Ground Station
     * Dataflow Endpoint Group will be in a <code>PREPASS</code> state. A Ground
     * Station Dataflow Endpoint Group State Change event will be emitted when the
     * Dataflow Endpoint Group enters and exits the <code>PREPASS</code> state.</p>
     */
    inline void SetContactPrePassDurationSeconds(int value) { m_contactPrePassDurationSecondsHasBeenSet = true; m_contactPrePassDurationSeconds = value; }

    /**
     * <p>Amount of time, in seconds, before a contact starts that the Ground Station
     * Dataflow Endpoint Group will be in a <code>PREPASS</code> state. A Ground
     * Station Dataflow Endpoint Group State Change event will be emitted when the
     * Dataflow Endpoint Group enters and exits the <code>PREPASS</code> state.</p>
     */
    inline CreateDataflowEndpointGroupRequest& WithContactPrePassDurationSeconds(int value) { SetContactPrePassDurationSeconds(value); return *this;}


    /**
     * <p>Endpoint details of each endpoint in the dataflow endpoint group.</p>
     */
    inline const Aws::Vector<EndpointDetails>& GetEndpointDetails() const{ return m_endpointDetails; }

    /**
     * <p>Endpoint details of each endpoint in the dataflow endpoint group.</p>
     */
    inline bool EndpointDetailsHasBeenSet() const { return m_endpointDetailsHasBeenSet; }

    /**
     * <p>Endpoint details of each endpoint in the dataflow endpoint group.</p>
     */
    inline void SetEndpointDetails(const Aws::Vector<EndpointDetails>& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = value; }

    /**
     * <p>Endpoint details of each endpoint in the dataflow endpoint group.</p>
     */
    inline void SetEndpointDetails(Aws::Vector<EndpointDetails>&& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = std::move(value); }

    /**
     * <p>Endpoint details of each endpoint in the dataflow endpoint group.</p>
     */
    inline CreateDataflowEndpointGroupRequest& WithEndpointDetails(const Aws::Vector<EndpointDetails>& value) { SetEndpointDetails(value); return *this;}

    /**
     * <p>Endpoint details of each endpoint in the dataflow endpoint group.</p>
     */
    inline CreateDataflowEndpointGroupRequest& WithEndpointDetails(Aws::Vector<EndpointDetails>&& value) { SetEndpointDetails(std::move(value)); return *this;}

    /**
     * <p>Endpoint details of each endpoint in the dataflow endpoint group.</p>
     */
    inline CreateDataflowEndpointGroupRequest& AddEndpointDetails(const EndpointDetails& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails.push_back(value); return *this; }

    /**
     * <p>Endpoint details of each endpoint in the dataflow endpoint group.</p>
     */
    inline CreateDataflowEndpointGroupRequest& AddEndpointDetails(EndpointDetails&& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>Tags of a dataflow endpoint group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags of a dataflow endpoint group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags of a dataflow endpoint group.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags of a dataflow endpoint group.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags of a dataflow endpoint group.</p>
     */
    inline CreateDataflowEndpointGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags of a dataflow endpoint group.</p>
     */
    inline CreateDataflowEndpointGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags of a dataflow endpoint group.</p>
     */
    inline CreateDataflowEndpointGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags of a dataflow endpoint group.</p>
     */
    inline CreateDataflowEndpointGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags of a dataflow endpoint group.</p>
     */
    inline CreateDataflowEndpointGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags of a dataflow endpoint group.</p>
     */
    inline CreateDataflowEndpointGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags of a dataflow endpoint group.</p>
     */
    inline CreateDataflowEndpointGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags of a dataflow endpoint group.</p>
     */
    inline CreateDataflowEndpointGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags of a dataflow endpoint group.</p>
     */
    inline CreateDataflowEndpointGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    int m_contactPostPassDurationSeconds;
    bool m_contactPostPassDurationSecondsHasBeenSet = false;

    int m_contactPrePassDurationSeconds;
    bool m_contactPrePassDurationSecondsHasBeenSet = false;

    Aws::Vector<EndpointDetails> m_endpointDetails;
    bool m_endpointDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
