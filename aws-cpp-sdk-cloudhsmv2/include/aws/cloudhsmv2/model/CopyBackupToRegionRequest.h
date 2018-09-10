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
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class AWS_CLOUDHSMV2_API CopyBackupToRegionRequest : public CloudHSMV2Request
  {
  public:
    CopyBackupToRegionRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyBackupToRegion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }

    
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }

    
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::move(value); }

    
    inline void SetDestinationRegion(const char* value) { m_destinationRegionHasBeenSet = true; m_destinationRegion.assign(value); }

    
    inline CopyBackupToRegionRequest& WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}

    
    inline CopyBackupToRegionRequest& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(std::move(value)); return *this;}

    
    inline CopyBackupToRegionRequest& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}


    
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }

    
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    
    inline CopyBackupToRegionRequest& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    
    inline CopyBackupToRegionRequest& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    
    inline CopyBackupToRegionRequest& WithBackupId(const char* value) { SetBackupId(value); return *this;}

  private:

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet;

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
