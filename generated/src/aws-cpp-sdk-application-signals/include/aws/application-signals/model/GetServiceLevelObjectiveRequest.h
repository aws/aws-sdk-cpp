﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

  /**
   */
  class GetServiceLevelObjectiveRequest : public ApplicationSignalsRequest
  {
  public:
    AWS_APPLICATIONSIGNALS_API GetServiceLevelObjectiveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetServiceLevelObjective"; }

    AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN or name of the SLO that you want to retrieve information about. You
     * can find the ARNs of SLOs by using the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_ListServiceLevelObjectives.html">ListServiceLevelObjectives</a>
     * operation.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline GetServiceLevelObjectiveRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetServiceLevelObjectiveRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetServiceLevelObjectiveRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
