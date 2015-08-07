/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /*
  */
  class AWS_KMS_API ScheduleKeyDeletionRequest : public KMSRequest
  {
  public:
    ScheduleKeyDeletionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    
    inline ScheduleKeyDeletionRequest&  WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    
    inline ScheduleKeyDeletionRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    
    inline long GetPendingWindowInDays() const{ return m_pendingWindowInDays; }
    
    inline void SetPendingWindowInDays(long value) { m_pendingWindowInDaysHasBeenSet = true; m_pendingWindowInDays = value; }

    
    inline ScheduleKeyDeletionRequest&  WithPendingWindowInDays(long value) { SetPendingWindowInDays(value); return *this;}

  private:
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    long m_pendingWindowInDays;
    bool m_pendingWindowInDaysHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
