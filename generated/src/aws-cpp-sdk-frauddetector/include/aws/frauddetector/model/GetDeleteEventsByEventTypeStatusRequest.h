/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class GetDeleteEventsByEventTypeStatusRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API GetDeleteEventsByEventTypeStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeleteEventsByEventTypeStatus"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of event type for which to get the deletion status.</p>
     */
    inline const Aws::String& GetEventTypeName() const{ return m_eventTypeName; }
    inline bool EventTypeNameHasBeenSet() const { return m_eventTypeNameHasBeenSet; }
    inline void SetEventTypeName(const Aws::String& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = value; }
    inline void SetEventTypeName(Aws::String&& value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName = std::move(value); }
    inline void SetEventTypeName(const char* value) { m_eventTypeNameHasBeenSet = true; m_eventTypeName.assign(value); }
    inline GetDeleteEventsByEventTypeStatusRequest& WithEventTypeName(const Aws::String& value) { SetEventTypeName(value); return *this;}
    inline GetDeleteEventsByEventTypeStatusRequest& WithEventTypeName(Aws::String&& value) { SetEventTypeName(std::move(value)); return *this;}
    inline GetDeleteEventsByEventTypeStatusRequest& WithEventTypeName(const char* value) { SetEventTypeName(value); return *this;}
    ///@}
  private:

    Aws::String m_eventTypeName;
    bool m_eventTypeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
