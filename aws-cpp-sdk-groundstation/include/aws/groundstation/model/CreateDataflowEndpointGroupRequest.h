/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GROUNDSTATION_API CreateDataflowEndpointGroupRequest : public GroundStationRequest
  {
  public:
    CreateDataflowEndpointGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataflowEndpointGroup"; }

    Aws::String SerializePayload() const override;


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

    Aws::Vector<EndpointDetails> m_endpointDetails;
    bool m_endpointDetailsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
