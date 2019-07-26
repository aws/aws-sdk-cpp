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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API GetCapacityReservationUsageRequest : public EC2Request
  {
  public:
    GetCapacityReservationUsageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCapacityReservationUsage"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }

    
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }

    
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = value; }

    
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::move(value); }

    
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId.assign(value); }

    
    inline GetCapacityReservationUsageRequest& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}

    
    inline GetCapacityReservationUsageRequest& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}

    
    inline GetCapacityReservationUsageRequest& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline GetCapacityReservationUsageRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline GetCapacityReservationUsageRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline GetCapacityReservationUsageRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline GetCapacityReservationUsageRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline bool GetDryRun() const{ return m_dryRun; }

    
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    
    inline GetCapacityReservationUsageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
