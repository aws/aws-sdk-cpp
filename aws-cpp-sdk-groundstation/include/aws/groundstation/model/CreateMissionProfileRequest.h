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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateMissionProfileRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API CreateMissionProfileRequest : public GroundStationRequest
  {
  public:
    CreateMissionProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMissionProfile"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline int GetContactPostPassDurationSeconds() const{ return m_contactPostPassDurationSeconds; }

    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline bool ContactPostPassDurationSecondsHasBeenSet() const { return m_contactPostPassDurationSecondsHasBeenSet; }

    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline void SetContactPostPassDurationSeconds(int value) { m_contactPostPassDurationSecondsHasBeenSet = true; m_contactPostPassDurationSeconds = value; }

    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline CreateMissionProfileRequest& WithContactPostPassDurationSeconds(int value) { SetContactPostPassDurationSeconds(value); return *this;}


    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline int GetContactPrePassDurationSeconds() const{ return m_contactPrePassDurationSeconds; }

    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline bool ContactPrePassDurationSecondsHasBeenSet() const { return m_contactPrePassDurationSecondsHasBeenSet; }

    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline void SetContactPrePassDurationSeconds(int value) { m_contactPrePassDurationSecondsHasBeenSet = true; m_contactPrePassDurationSeconds = value; }

    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline CreateMissionProfileRequest& WithContactPrePassDurationSeconds(int value) { SetContactPrePassDurationSeconds(value); return *this;}


    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a from
     * <code>Config</code> and a to 
         <code>Config</code>.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetDataflowEdges() const{ return m_dataflowEdges; }

    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a from
     * <code>Config</code> and a to 
         <code>Config</code>.</p>
     */
    inline bool DataflowEdgesHasBeenSet() const { return m_dataflowEdgesHasBeenSet; }

    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a from
     * <code>Config</code> and a to 
         <code>Config</code>.</p>
     */
    inline void SetDataflowEdges(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_dataflowEdgesHasBeenSet = true; m_dataflowEdges = value; }

    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a from
     * <code>Config</code> and a to 
         <code>Config</code>.</p>
     */
    inline void SetDataflowEdges(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_dataflowEdgesHasBeenSet = true; m_dataflowEdges = std::move(value); }

    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a from
     * <code>Config</code> and a to 
         <code>Config</code>.</p>
     */
    inline CreateMissionProfileRequest& WithDataflowEdges(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetDataflowEdges(value); return *this;}

    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a from
     * <code>Config</code> and a to 
         <code>Config</code>.</p>
     */
    inline CreateMissionProfileRequest& WithDataflowEdges(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetDataflowEdges(std::move(value)); return *this;}

    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a from
     * <code>Config</code> and a to 
         <code>Config</code>.</p>
     */
    inline CreateMissionProfileRequest& AddDataflowEdges(const Aws::Vector<Aws::String>& value) { m_dataflowEdgesHasBeenSet = true; m_dataflowEdges.push_back(value); return *this; }

    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a from
     * <code>Config</code> and a to 
         <code>Config</code>.</p>
     */
    inline CreateMissionProfileRequest& AddDataflowEdges(Aws::Vector<Aws::String>&& value) { m_dataflowEdgesHasBeenSet = true; m_dataflowEdges.push_back(std::move(value)); return *this; }


    /**
     * <p>Smallest amount of time in seconds that you’d like to see for an available
     * contact. AWS Ground Station will not present you with contacts shorter than this
     * duration.</p>
     */
    inline int GetMinimumViableContactDurationSeconds() const{ return m_minimumViableContactDurationSeconds; }

    /**
     * <p>Smallest amount of time in seconds that you’d like to see for an available
     * contact. AWS Ground Station will not present you with contacts shorter than this
     * duration.</p>
     */
    inline bool MinimumViableContactDurationSecondsHasBeenSet() const { return m_minimumViableContactDurationSecondsHasBeenSet; }

    /**
     * <p>Smallest amount of time in seconds that you’d like to see for an available
     * contact. AWS Ground Station will not present you with contacts shorter than this
     * duration.</p>
     */
    inline void SetMinimumViableContactDurationSeconds(int value) { m_minimumViableContactDurationSecondsHasBeenSet = true; m_minimumViableContactDurationSeconds = value; }

    /**
     * <p>Smallest amount of time in seconds that you’d like to see for an available
     * contact. AWS Ground Station will not present you with contacts shorter than this
     * duration.</p>
     */
    inline CreateMissionProfileRequest& WithMinimumViableContactDurationSeconds(int value) { SetMinimumViableContactDurationSeconds(value); return *this;}


    /**
     * <p>Name of a mission profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of a mission profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of a mission profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of a mission profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of a mission profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of a mission profile.</p>
     */
    inline CreateMissionProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of a mission profile.</p>
     */
    inline CreateMissionProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of a mission profile.</p>
     */
    inline CreateMissionProfileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline CreateMissionProfileRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline CreateMissionProfileRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline CreateMissionProfileRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline CreateMissionProfileRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline CreateMissionProfileRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline CreateMissionProfileRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline CreateMissionProfileRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline CreateMissionProfileRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline CreateMissionProfileRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline const Aws::String& GetTrackingConfigArn() const{ return m_trackingConfigArn; }

    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline bool TrackingConfigArnHasBeenSet() const { return m_trackingConfigArnHasBeenSet; }

    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline void SetTrackingConfigArn(const Aws::String& value) { m_trackingConfigArnHasBeenSet = true; m_trackingConfigArn = value; }

    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline void SetTrackingConfigArn(Aws::String&& value) { m_trackingConfigArnHasBeenSet = true; m_trackingConfigArn = std::move(value); }

    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline void SetTrackingConfigArn(const char* value) { m_trackingConfigArnHasBeenSet = true; m_trackingConfigArn.assign(value); }

    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline CreateMissionProfileRequest& WithTrackingConfigArn(const Aws::String& value) { SetTrackingConfigArn(value); return *this;}

    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline CreateMissionProfileRequest& WithTrackingConfigArn(Aws::String&& value) { SetTrackingConfigArn(std::move(value)); return *this;}

    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline CreateMissionProfileRequest& WithTrackingConfigArn(const char* value) { SetTrackingConfigArn(value); return *this;}

  private:

    int m_contactPostPassDurationSeconds;
    bool m_contactPostPassDurationSecondsHasBeenSet;

    int m_contactPrePassDurationSeconds;
    bool m_contactPrePassDurationSecondsHasBeenSet;

    Aws::Vector<Aws::Vector<Aws::String>> m_dataflowEdges;
    bool m_dataflowEdgesHasBeenSet;

    int m_minimumViableContactDurationSeconds;
    bool m_minimumViableContactDurationSecondsHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_trackingConfigArn;
    bool m_trackingConfigArnHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
