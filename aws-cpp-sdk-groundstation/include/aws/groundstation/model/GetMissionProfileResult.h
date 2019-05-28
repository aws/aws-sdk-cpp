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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMissionProfileResponse">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API GetMissionProfileResult
  {
  public:
    GetMissionProfileResult();
    GetMissionProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetMissionProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline int GetContactPostPassDurationSeconds() const{ return m_contactPostPassDurationSeconds; }

    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline void SetContactPostPassDurationSeconds(int value) { m_contactPostPassDurationSeconds = value; }

    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline GetMissionProfileResult& WithContactPostPassDurationSeconds(int value) { SetContactPostPassDurationSeconds(value); return *this;}


    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline int GetContactPrePassDurationSeconds() const{ return m_contactPrePassDurationSeconds; }

    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline void SetContactPrePassDurationSeconds(int value) { m_contactPrePassDurationSeconds = value; }

    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline GetMissionProfileResult& WithContactPrePassDurationSeconds(int value) { SetContactPrePassDurationSeconds(value); return *this;}


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
    inline void SetDataflowEdges(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_dataflowEdges = value; }

    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a from
     * <code>Config</code> and a to 
         <code>Config</code>.</p>
     */
    inline void SetDataflowEdges(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_dataflowEdges = std::move(value); }

    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a from
     * <code>Config</code> and a to 
         <code>Config</code>.</p>
     */
    inline GetMissionProfileResult& WithDataflowEdges(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetDataflowEdges(value); return *this;}

    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a from
     * <code>Config</code> and a to 
         <code>Config</code>.</p>
     */
    inline GetMissionProfileResult& WithDataflowEdges(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetDataflowEdges(std::move(value)); return *this;}

    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a from
     * <code>Config</code> and a to 
         <code>Config</code>.</p>
     */
    inline GetMissionProfileResult& AddDataflowEdges(const Aws::Vector<Aws::String>& value) { m_dataflowEdges.push_back(value); return *this; }

    /**
     * <p>A list of lists of ARNs. Each list of ARNs is an edge, with a from
     * <code>Config</code> and a to 
         <code>Config</code>.</p>
     */
    inline GetMissionProfileResult& AddDataflowEdges(Aws::Vector<Aws::String>&& value) { m_dataflowEdges.push_back(std::move(value)); return *this; }


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
    inline void SetMinimumViableContactDurationSeconds(int value) { m_minimumViableContactDurationSeconds = value; }

    /**
     * <p>Smallest amount of time in seconds that you’d like to see for an available
     * contact. AWS Ground Station will not present you with contacts shorter than this
     * duration.</p>
     */
    inline GetMissionProfileResult& WithMinimumViableContactDurationSeconds(int value) { SetMinimumViableContactDurationSeconds(value); return *this;}


    /**
     * <p>ARN of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileArn() const{ return m_missionProfileArn; }

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline void SetMissionProfileArn(const Aws::String& value) { m_missionProfileArn = value; }

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline void SetMissionProfileArn(Aws::String&& value) { m_missionProfileArn = std::move(value); }

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline void SetMissionProfileArn(const char* value) { m_missionProfileArn.assign(value); }

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline GetMissionProfileResult& WithMissionProfileArn(const Aws::String& value) { SetMissionProfileArn(value); return *this;}

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline GetMissionProfileResult& WithMissionProfileArn(Aws::String&& value) { SetMissionProfileArn(std::move(value)); return *this;}

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline GetMissionProfileResult& WithMissionProfileArn(const char* value) { SetMissionProfileArn(value); return *this;}


    /**
     * <p>ID of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileId() const{ return m_missionProfileId; }

    /**
     * <p>ID of a mission profile.</p>
     */
    inline void SetMissionProfileId(const Aws::String& value) { m_missionProfileId = value; }

    /**
     * <p>ID of a mission profile.</p>
     */
    inline void SetMissionProfileId(Aws::String&& value) { m_missionProfileId = std::move(value); }

    /**
     * <p>ID of a mission profile.</p>
     */
    inline void SetMissionProfileId(const char* value) { m_missionProfileId.assign(value); }

    /**
     * <p>ID of a mission profile.</p>
     */
    inline GetMissionProfileResult& WithMissionProfileId(const Aws::String& value) { SetMissionProfileId(value); return *this;}

    /**
     * <p>ID of a mission profile.</p>
     */
    inline GetMissionProfileResult& WithMissionProfileId(Aws::String&& value) { SetMissionProfileId(std::move(value)); return *this;}

    /**
     * <p>ID of a mission profile.</p>
     */
    inline GetMissionProfileResult& WithMissionProfileId(const char* value) { SetMissionProfileId(value); return *this;}


    /**
     * <p>Name of a mission profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of a mission profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Name of a mission profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Name of a mission profile.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Name of a mission profile.</p>
     */
    inline GetMissionProfileResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of a mission profile.</p>
     */
    inline GetMissionProfileResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of a mission profile.</p>
     */
    inline GetMissionProfileResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Region of a mission profile.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>Region of a mission profile.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_region = value; }

    /**
     * <p>Region of a mission profile.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }

    /**
     * <p>Region of a mission profile.</p>
     */
    inline void SetRegion(const char* value) { m_region.assign(value); }

    /**
     * <p>Region of a mission profile.</p>
     */
    inline GetMissionProfileResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>Region of a mission profile.</p>
     */
    inline GetMissionProfileResult& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>Region of a mission profile.</p>
     */
    inline GetMissionProfileResult& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline GetMissionProfileResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline GetMissionProfileResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline GetMissionProfileResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline GetMissionProfileResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline GetMissionProfileResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline GetMissionProfileResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline GetMissionProfileResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline GetMissionProfileResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to a mission profile.</p>
     */
    inline GetMissionProfileResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline const Aws::String& GetTrackingConfigArn() const{ return m_trackingConfigArn; }

    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline void SetTrackingConfigArn(const Aws::String& value) { m_trackingConfigArn = value; }

    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline void SetTrackingConfigArn(Aws::String&& value) { m_trackingConfigArn = std::move(value); }

    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline void SetTrackingConfigArn(const char* value) { m_trackingConfigArn.assign(value); }

    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline GetMissionProfileResult& WithTrackingConfigArn(const Aws::String& value) { SetTrackingConfigArn(value); return *this;}

    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline GetMissionProfileResult& WithTrackingConfigArn(Aws::String&& value) { SetTrackingConfigArn(std::move(value)); return *this;}

    /**
     * <p>ARN of a tracking <code>Config</code>.</p>
     */
    inline GetMissionProfileResult& WithTrackingConfigArn(const char* value) { SetTrackingConfigArn(value); return *this;}

  private:

    int m_contactPostPassDurationSeconds;

    int m_contactPrePassDurationSeconds;

    Aws::Vector<Aws::Vector<Aws::String>> m_dataflowEdges;

    int m_minimumViableContactDurationSeconds;

    Aws::String m_missionProfileArn;

    Aws::String m_missionProfileId;

    Aws::String m_name;

    Aws::String m_region;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_trackingConfigArn;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
