/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class AWS_WELLARCHITECTED_API ListTagsForResourceRequest : public WellArchitectedRequest
  {
  public:
    ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetWorkloadArn() const{ return m_workloadArn; }

    
    inline bool WorkloadArnHasBeenSet() const { return m_workloadArnHasBeenSet; }

    
    inline void SetWorkloadArn(const Aws::String& value) { m_workloadArnHasBeenSet = true; m_workloadArn = value; }

    
    inline void SetWorkloadArn(Aws::String&& value) { m_workloadArnHasBeenSet = true; m_workloadArn = std::move(value); }

    
    inline void SetWorkloadArn(const char* value) { m_workloadArnHasBeenSet = true; m_workloadArn.assign(value); }

    
    inline ListTagsForResourceRequest& WithWorkloadArn(const Aws::String& value) { SetWorkloadArn(value); return *this;}

    
    inline ListTagsForResourceRequest& WithWorkloadArn(Aws::String&& value) { SetWorkloadArn(std::move(value)); return *this;}

    
    inline ListTagsForResourceRequest& WithWorkloadArn(const char* value) { SetWorkloadArn(value); return *this;}

  private:

    Aws::String m_workloadArn;
    bool m_workloadArnHasBeenSet;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
