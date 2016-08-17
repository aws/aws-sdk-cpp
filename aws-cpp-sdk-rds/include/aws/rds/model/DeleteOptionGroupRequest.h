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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_RDS_API DeleteOptionGroupRequest : public RDSRequest
  {
  public:
    DeleteOptionGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the option group to be deleted.</p> <note> <p>You cannot delete
     * default option groups.</p> </note>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The name of the option group to be deleted.</p> <note> <p>You cannot delete
     * default option groups.</p> </note>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to be deleted.</p> <note> <p>You cannot delete
     * default option groups.</p> </note>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to be deleted.</p> <note> <p>You cannot delete
     * default option groups.</p> </note>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The name of the option group to be deleted.</p> <note> <p>You cannot delete
     * default option groups.</p> </note>
     */
    inline DeleteOptionGroupRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to be deleted.</p> <note> <p>You cannot delete
     * default option groups.</p> </note>
     */
    inline DeleteOptionGroupRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to be deleted.</p> <note> <p>You cannot delete
     * default option groups.</p> </note>
     */
    inline DeleteOptionGroupRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

  private:
    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
