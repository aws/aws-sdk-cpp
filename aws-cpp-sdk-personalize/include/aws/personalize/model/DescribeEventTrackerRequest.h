/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class DescribeEventTrackerRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API DescribeEventTrackerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEventTracker"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker to describe.</p>
     */
    inline const Aws::String& GetEventTrackerArn() const{ return m_eventTrackerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker to describe.</p>
     */
    inline bool EventTrackerArnHasBeenSet() const { return m_eventTrackerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker to describe.</p>
     */
    inline void SetEventTrackerArn(const Aws::String& value) { m_eventTrackerArnHasBeenSet = true; m_eventTrackerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker to describe.</p>
     */
    inline void SetEventTrackerArn(Aws::String&& value) { m_eventTrackerArnHasBeenSet = true; m_eventTrackerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker to describe.</p>
     */
    inline void SetEventTrackerArn(const char* value) { m_eventTrackerArnHasBeenSet = true; m_eventTrackerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker to describe.</p>
     */
    inline DescribeEventTrackerRequest& WithEventTrackerArn(const Aws::String& value) { SetEventTrackerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker to describe.</p>
     */
    inline DescribeEventTrackerRequest& WithEventTrackerArn(Aws::String&& value) { SetEventTrackerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event tracker to describe.</p>
     */
    inline DescribeEventTrackerRequest& WithEventTrackerArn(const char* value) { SetEventTrackerArn(value); return *this;}

  private:

    Aws::String m_eventTrackerArn;
    bool m_eventTrackerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
