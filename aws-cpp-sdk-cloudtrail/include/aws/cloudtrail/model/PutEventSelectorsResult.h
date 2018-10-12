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
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/EventSelector.h>
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
namespace CloudTrail
{
namespace Model
{
  class AWS_CLOUDTRAIL_API PutEventSelectorsResult
  {
  public:
    PutEventSelectorsResult();
    PutEventSelectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutEventSelectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the ARN of the trail that was updated with event selectors. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline const Aws::String& GetTrailARN() const{ return m_trailARN; }

    /**
     * <p>Specifies the ARN of the trail that was updated with event selectors. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetTrailARN(const Aws::String& value) { m_trailARN = value; }

    /**
     * <p>Specifies the ARN of the trail that was updated with event selectors. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetTrailARN(Aws::String&& value) { m_trailARN = std::move(value); }

    /**
     * <p>Specifies the ARN of the trail that was updated with event selectors. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetTrailARN(const char* value) { m_trailARN.assign(value); }

    /**
     * <p>Specifies the ARN of the trail that was updated with event selectors. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline PutEventSelectorsResult& WithTrailARN(const Aws::String& value) { SetTrailARN(value); return *this;}

    /**
     * <p>Specifies the ARN of the trail that was updated with event selectors. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline PutEventSelectorsResult& WithTrailARN(Aws::String&& value) { SetTrailARN(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the trail that was updated with event selectors. The
     * format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline PutEventSelectorsResult& WithTrailARN(const char* value) { SetTrailARN(value); return *this;}


    /**
     * <p>Specifies the event selectors configured for your trail.</p>
     */
    inline const Aws::Vector<EventSelector>& GetEventSelectors() const{ return m_eventSelectors; }

    /**
     * <p>Specifies the event selectors configured for your trail.</p>
     */
    inline void SetEventSelectors(const Aws::Vector<EventSelector>& value) { m_eventSelectors = value; }

    /**
     * <p>Specifies the event selectors configured for your trail.</p>
     */
    inline void SetEventSelectors(Aws::Vector<EventSelector>&& value) { m_eventSelectors = std::move(value); }

    /**
     * <p>Specifies the event selectors configured for your trail.</p>
     */
    inline PutEventSelectorsResult& WithEventSelectors(const Aws::Vector<EventSelector>& value) { SetEventSelectors(value); return *this;}

    /**
     * <p>Specifies the event selectors configured for your trail.</p>
     */
    inline PutEventSelectorsResult& WithEventSelectors(Aws::Vector<EventSelector>&& value) { SetEventSelectors(std::move(value)); return *this;}

    /**
     * <p>Specifies the event selectors configured for your trail.</p>
     */
    inline PutEventSelectorsResult& AddEventSelectors(const EventSelector& value) { m_eventSelectors.push_back(value); return *this; }

    /**
     * <p>Specifies the event selectors configured for your trail.</p>
     */
    inline PutEventSelectorsResult& AddEventSelectors(EventSelector&& value) { m_eventSelectors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trailARN;

    Aws::Vector<EventSelector> m_eventSelectors;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
