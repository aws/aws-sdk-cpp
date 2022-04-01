﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input for milestone creation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateMilestoneInput">AWS
   * API Reference</a></p>
   */
  class AWS_WELLARCHITECTED_API CreateMilestoneRequest : public WellArchitectedRequest
  {
  public:
    CreateMilestoneRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMilestone"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline CreateMilestoneRequest& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline CreateMilestoneRequest& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline CreateMilestoneRequest& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::String& GetMilestoneName() const{ return m_milestoneName; }

    
    inline bool MilestoneNameHasBeenSet() const { return m_milestoneNameHasBeenSet; }

    
    inline void SetMilestoneName(const Aws::String& value) { m_milestoneNameHasBeenSet = true; m_milestoneName = value; }

    
    inline void SetMilestoneName(Aws::String&& value) { m_milestoneNameHasBeenSet = true; m_milestoneName = std::move(value); }

    
    inline void SetMilestoneName(const char* value) { m_milestoneNameHasBeenSet = true; m_milestoneName.assign(value); }

    
    inline CreateMilestoneRequest& WithMilestoneName(const Aws::String& value) { SetMilestoneName(value); return *this;}

    
    inline CreateMilestoneRequest& WithMilestoneName(Aws::String&& value) { SetMilestoneName(std::move(value)); return *this;}

    
    inline CreateMilestoneRequest& WithMilestoneName(const char* value) { SetMilestoneName(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline CreateMilestoneRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline CreateMilestoneRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline CreateMilestoneRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet;

    Aws::String m_milestoneName;
    bool m_milestoneNameHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
