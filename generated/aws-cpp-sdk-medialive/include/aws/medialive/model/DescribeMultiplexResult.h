﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/MultiplexSettings.h>
#include <aws/medialive/model/MultiplexState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/MultiplexOutputDestination.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DescribeMultiplexResponse<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeMultiplexResponse">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API DescribeMultiplexResult
  {
  public:
    DescribeMultiplexResult();
    DescribeMultiplexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeMultiplexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The unique arn of the multiplex.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The unique arn of the multiplex.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The unique arn of the multiplex.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The unique arn of the multiplex.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The unique arn of the multiplex.
     */
    inline DescribeMultiplexResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The unique arn of the multiplex.
     */
    inline DescribeMultiplexResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The unique arn of the multiplex.
     */
    inline DescribeMultiplexResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * A list of availability zones for the multiplex.
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * A list of availability zones for the multiplex.
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZones = value; }

    /**
     * A list of availability zones for the multiplex.
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZones = std::move(value); }

    /**
     * A list of availability zones for the multiplex.
     */
    inline DescribeMultiplexResult& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * A list of availability zones for the multiplex.
     */
    inline DescribeMultiplexResult& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * A list of availability zones for the multiplex.
     */
    inline DescribeMultiplexResult& AddAvailabilityZones(const Aws::String& value) { m_availabilityZones.push_back(value); return *this; }

    /**
     * A list of availability zones for the multiplex.
     */
    inline DescribeMultiplexResult& AddAvailabilityZones(Aws::String&& value) { m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * A list of availability zones for the multiplex.
     */
    inline DescribeMultiplexResult& AddAvailabilityZones(const char* value) { m_availabilityZones.push_back(value); return *this; }


    /**
     * A list of the multiplex output destinations.
     */
    inline const Aws::Vector<MultiplexOutputDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * A list of the multiplex output destinations.
     */
    inline void SetDestinations(const Aws::Vector<MultiplexOutputDestination>& value) { m_destinations = value; }

    /**
     * A list of the multiplex output destinations.
     */
    inline void SetDestinations(Aws::Vector<MultiplexOutputDestination>&& value) { m_destinations = std::move(value); }

    /**
     * A list of the multiplex output destinations.
     */
    inline DescribeMultiplexResult& WithDestinations(const Aws::Vector<MultiplexOutputDestination>& value) { SetDestinations(value); return *this;}

    /**
     * A list of the multiplex output destinations.
     */
    inline DescribeMultiplexResult& WithDestinations(Aws::Vector<MultiplexOutputDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * A list of the multiplex output destinations.
     */
    inline DescribeMultiplexResult& AddDestinations(const MultiplexOutputDestination& value) { m_destinations.push_back(value); return *this; }

    /**
     * A list of the multiplex output destinations.
     */
    inline DescribeMultiplexResult& AddDestinations(MultiplexOutputDestination&& value) { m_destinations.push_back(std::move(value)); return *this; }


    /**
     * The unique id of the multiplex.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The unique id of the multiplex.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The unique id of the multiplex.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The unique id of the multiplex.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The unique id of the multiplex.
     */
    inline DescribeMultiplexResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The unique id of the multiplex.
     */
    inline DescribeMultiplexResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The unique id of the multiplex.
     */
    inline DescribeMultiplexResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Configuration for a multiplex event.
     */
    inline const MultiplexSettings& GetMultiplexSettings() const{ return m_multiplexSettings; }

    /**
     * Configuration for a multiplex event.
     */
    inline void SetMultiplexSettings(const MultiplexSettings& value) { m_multiplexSettings = value; }

    /**
     * Configuration for a multiplex event.
     */
    inline void SetMultiplexSettings(MultiplexSettings&& value) { m_multiplexSettings = std::move(value); }

    /**
     * Configuration for a multiplex event.
     */
    inline DescribeMultiplexResult& WithMultiplexSettings(const MultiplexSettings& value) { SetMultiplexSettings(value); return *this;}

    /**
     * Configuration for a multiplex event.
     */
    inline DescribeMultiplexResult& WithMultiplexSettings(MultiplexSettings&& value) { SetMultiplexSettings(std::move(value)); return *this;}


    /**
     * The name of the multiplex.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the multiplex.
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * The name of the multiplex.
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * The name of the multiplex.
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * The name of the multiplex.
     */
    inline DescribeMultiplexResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the multiplex.
     */
    inline DescribeMultiplexResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the multiplex.
     */
    inline DescribeMultiplexResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The number of currently healthy pipelines.
     */
    inline int GetPipelinesRunningCount() const{ return m_pipelinesRunningCount; }

    /**
     * The number of currently healthy pipelines.
     */
    inline void SetPipelinesRunningCount(int value) { m_pipelinesRunningCount = value; }

    /**
     * The number of currently healthy pipelines.
     */
    inline DescribeMultiplexResult& WithPipelinesRunningCount(int value) { SetPipelinesRunningCount(value); return *this;}


    /**
     * The number of programs in the multiplex.
     */
    inline int GetProgramCount() const{ return m_programCount; }

    /**
     * The number of programs in the multiplex.
     */
    inline void SetProgramCount(int value) { m_programCount = value; }

    /**
     * The number of programs in the multiplex.
     */
    inline DescribeMultiplexResult& WithProgramCount(int value) { SetProgramCount(value); return *this;}


    /**
     * The current state of the multiplex.
     */
    inline const MultiplexState& GetState() const{ return m_state; }

    /**
     * The current state of the multiplex.
     */
    inline void SetState(const MultiplexState& value) { m_state = value; }

    /**
     * The current state of the multiplex.
     */
    inline void SetState(MultiplexState&& value) { m_state = std::move(value); }

    /**
     * The current state of the multiplex.
     */
    inline DescribeMultiplexResult& WithState(const MultiplexState& value) { SetState(value); return *this;}

    /**
     * The current state of the multiplex.
     */
    inline DescribeMultiplexResult& WithState(MultiplexState&& value) { SetState(std::move(value)); return *this;}


    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * A collection of key-value pairs.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * A collection of key-value pairs.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeMultiplexResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline DescribeMultiplexResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * A collection of key-value pairs.
     */
    inline DescribeMultiplexResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeMultiplexResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeMultiplexResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeMultiplexResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeMultiplexResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeMultiplexResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A collection of key-value pairs.
     */
    inline DescribeMultiplexResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    Aws::Vector<Aws::String> m_availabilityZones;

    Aws::Vector<MultiplexOutputDestination> m_destinations;

    Aws::String m_id;

    MultiplexSettings m_multiplexSettings;

    Aws::String m_name;

    int m_pipelinesRunningCount;

    int m_programCount;

    MultiplexState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
