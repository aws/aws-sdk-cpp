/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/EventSelector.h>
#include <aws/cloudtrail/model/AdvancedEventSelector.h>
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
  class PutEventSelectorsResult
  {
  public:
    AWS_CLOUDTRAIL_API PutEventSelectorsResult();
    AWS_CLOUDTRAIL_API PutEventSelectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API PutEventSelectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the ARN of the trail that was updated with event selectors. The
     * following is the format of a trail ARN.</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline const Aws::String& GetTrailARN() const{ return m_trailARN; }

    /**
     * <p>Specifies the ARN of the trail that was updated with event selectors. The
     * following is the format of a trail ARN.</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetTrailARN(const Aws::String& value) { m_trailARN = value; }

    /**
     * <p>Specifies the ARN of the trail that was updated with event selectors. The
     * following is the format of a trail ARN.</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetTrailARN(Aws::String&& value) { m_trailARN = std::move(value); }

    /**
     * <p>Specifies the ARN of the trail that was updated with event selectors. The
     * following is the format of a trail ARN.</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline void SetTrailARN(const char* value) { m_trailARN.assign(value); }

    /**
     * <p>Specifies the ARN of the trail that was updated with event selectors. The
     * following is the format of a trail ARN.</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline PutEventSelectorsResult& WithTrailARN(const Aws::String& value) { SetTrailARN(value); return *this;}

    /**
     * <p>Specifies the ARN of the trail that was updated with event selectors. The
     * following is the format of a trail ARN.</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p>
     */
    inline PutEventSelectorsResult& WithTrailARN(Aws::String&& value) { SetTrailARN(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the trail that was updated with event selectors. The
     * following is the format of a trail ARN.</p> <p>
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


    /**
     * <p>Specifies the advanced event selectors configured for your trail.</p>
     */
    inline const Aws::Vector<AdvancedEventSelector>& GetAdvancedEventSelectors() const{ return m_advancedEventSelectors; }

    /**
     * <p>Specifies the advanced event selectors configured for your trail.</p>
     */
    inline void SetAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { m_advancedEventSelectors = value; }

    /**
     * <p>Specifies the advanced event selectors configured for your trail.</p>
     */
    inline void SetAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { m_advancedEventSelectors = std::move(value); }

    /**
     * <p>Specifies the advanced event selectors configured for your trail.</p>
     */
    inline PutEventSelectorsResult& WithAdvancedEventSelectors(const Aws::Vector<AdvancedEventSelector>& value) { SetAdvancedEventSelectors(value); return *this;}

    /**
     * <p>Specifies the advanced event selectors configured for your trail.</p>
     */
    inline PutEventSelectorsResult& WithAdvancedEventSelectors(Aws::Vector<AdvancedEventSelector>&& value) { SetAdvancedEventSelectors(std::move(value)); return *this;}

    /**
     * <p>Specifies the advanced event selectors configured for your trail.</p>
     */
    inline PutEventSelectorsResult& AddAdvancedEventSelectors(const AdvancedEventSelector& value) { m_advancedEventSelectors.push_back(value); return *this; }

    /**
     * <p>Specifies the advanced event selectors configured for your trail.</p>
     */
    inline PutEventSelectorsResult& AddAdvancedEventSelectors(AdvancedEventSelector&& value) { m_advancedEventSelectors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trailARN;

    Aws::Vector<EventSelector> m_eventSelectors;

    Aws::Vector<AdvancedEventSelector> m_advancedEventSelectors;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
