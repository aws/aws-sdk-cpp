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
  class AWS_GROUNDSTATION_API GetDataflowEndpointGroupResult
  {
  public:
    GetDataflowEndpointGroupResult();
    GetDataflowEndpointGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDataflowEndpointGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline const Aws::String& GetDataflowEndpointGroupArn() const{ return m_dataflowEndpointGroupArn; }

    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline void SetDataflowEndpointGroupArn(const Aws::String& value) { m_dataflowEndpointGroupArn = value; }

    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline void SetDataflowEndpointGroupArn(Aws::String&& value) { m_dataflowEndpointGroupArn = std::move(value); }

    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline void SetDataflowEndpointGroupArn(const char* value) { m_dataflowEndpointGroupArn.assign(value); }

    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline GetDataflowEndpointGroupResult& WithDataflowEndpointGroupArn(const Aws::String& value) { SetDataflowEndpointGroupArn(value); return *this;}

    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline GetDataflowEndpointGroupResult& WithDataflowEndpointGroupArn(Aws::String&& value) { SetDataflowEndpointGroupArn(std::move(value)); return *this;}

    /**
     * <p>ARN of a dataflow endpoint group.</p>
     */
    inline GetDataflowEndpointGroupResult& WithDataflowEndpointGroupArn(const char* value) { SetDataflowEndpointGroupArn(value); return *this;}


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
    inline GetDataflowEndpointGroupResult& WithDataflowEndpointGroupId(const Aws::String& value) { SetDataflowEndpointGroupId(value); return *this;}

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline GetDataflowEndpointGroupResult& WithDataflowEndpointGroupId(Aws::String&& value) { SetDataflowEndpointGroupId(std::move(value)); return *this;}

    /**
     * <p>UUID of a dataflow endpoint group.</p>
     */
    inline GetDataflowEndpointGroupResult& WithDataflowEndpointGroupId(const char* value) { SetDataflowEndpointGroupId(value); return *this;}


    /**
     * <p>Details of a dataflow endpoint.</p>
     */
    inline const Aws::Vector<EndpointDetails>& GetEndpointsDetails() const{ return m_endpointsDetails; }

    /**
     * <p>Details of a dataflow endpoint.</p>
     */
    inline void SetEndpointsDetails(const Aws::Vector<EndpointDetails>& value) { m_endpointsDetails = value; }

    /**
     * <p>Details of a dataflow endpoint.</p>
     */
    inline void SetEndpointsDetails(Aws::Vector<EndpointDetails>&& value) { m_endpointsDetails = std::move(value); }

    /**
     * <p>Details of a dataflow endpoint.</p>
     */
    inline GetDataflowEndpointGroupResult& WithEndpointsDetails(const Aws::Vector<EndpointDetails>& value) { SetEndpointsDetails(value); return *this;}

    /**
     * <p>Details of a dataflow endpoint.</p>
     */
    inline GetDataflowEndpointGroupResult& WithEndpointsDetails(Aws::Vector<EndpointDetails>&& value) { SetEndpointsDetails(std::move(value)); return *this;}

    /**
     * <p>Details of a dataflow endpoint.</p>
     */
    inline GetDataflowEndpointGroupResult& AddEndpointsDetails(const EndpointDetails& value) { m_endpointsDetails.push_back(value); return *this; }

    /**
     * <p>Details of a dataflow endpoint.</p>
     */
    inline GetDataflowEndpointGroupResult& AddEndpointsDetails(EndpointDetails&& value) { m_endpointsDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>Tags assigned to a dataflow endpoint group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags assigned to a dataflow endpoint group.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags assigned to a dataflow endpoint group.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags assigned to a dataflow endpoint group.</p>
     */
    inline GetDataflowEndpointGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags assigned to a dataflow endpoint group.</p>
     */
    inline GetDataflowEndpointGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags assigned to a dataflow endpoint group.</p>
     */
    inline GetDataflowEndpointGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags assigned to a dataflow endpoint group.</p>
     */
    inline GetDataflowEndpointGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to a dataflow endpoint group.</p>
     */
    inline GetDataflowEndpointGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a dataflow endpoint group.</p>
     */
    inline GetDataflowEndpointGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a dataflow endpoint group.</p>
     */
    inline GetDataflowEndpointGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a dataflow endpoint group.</p>
     */
    inline GetDataflowEndpointGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to a dataflow endpoint group.</p>
     */
    inline GetDataflowEndpointGroupResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_dataflowEndpointGroupArn;

    Aws::String m_dataflowEndpointGroupId;

    Aws::Vector<EndpointDetails> m_endpointsDetails;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
