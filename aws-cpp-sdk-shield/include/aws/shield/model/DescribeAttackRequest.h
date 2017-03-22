/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class AWS_SHIELD_API DescribeAttackRequest : public ShieldRequest
  {
  public:
    DescribeAttackRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) for the attack that to be described.</p>
     */
    inline const Aws::String& GetAttackId() const{ return m_attackId; }

    /**
     * <p>The unique identifier (ID) for the attack that to be described.</p>
     */
    inline void SetAttackId(const Aws::String& value) { m_attackIdHasBeenSet = true; m_attackId = value; }

    /**
     * <p>The unique identifier (ID) for the attack that to be described.</p>
     */
    inline void SetAttackId(Aws::String&& value) { m_attackIdHasBeenSet = true; m_attackId = value; }

    /**
     * <p>The unique identifier (ID) for the attack that to be described.</p>
     */
    inline void SetAttackId(const char* value) { m_attackIdHasBeenSet = true; m_attackId.assign(value); }

    /**
     * <p>The unique identifier (ID) for the attack that to be described.</p>
     */
    inline DescribeAttackRequest& WithAttackId(const Aws::String& value) { SetAttackId(value); return *this;}

    /**
     * <p>The unique identifier (ID) for the attack that to be described.</p>
     */
    inline DescribeAttackRequest& WithAttackId(Aws::String&& value) { SetAttackId(value); return *this;}

    /**
     * <p>The unique identifier (ID) for the attack that to be described.</p>
     */
    inline DescribeAttackRequest& WithAttackId(const char* value) { SetAttackId(value); return *this;}

  private:
    Aws::String m_attackId;
    bool m_attackIdHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
