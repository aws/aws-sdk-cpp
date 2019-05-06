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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class AWS_ATHENA_API DeleteWorkGroupRequest : public AthenaRequest
  {
  public:
    DeleteWorkGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWorkGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique name of the workgroup to delete.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }

    /**
     * <p>The unique name of the workgroup to delete.</p>
     */
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }

    /**
     * <p>The unique name of the workgroup to delete.</p>
     */
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }

    /**
     * <p>The unique name of the workgroup to delete.</p>
     */
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }

    /**
     * <p>The unique name of the workgroup to delete.</p>
     */
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }

    /**
     * <p>The unique name of the workgroup to delete.</p>
     */
    inline DeleteWorkGroupRequest& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}

    /**
     * <p>The unique name of the workgroup to delete.</p>
     */
    inline DeleteWorkGroupRequest& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}

    /**
     * <p>The unique name of the workgroup to delete.</p>
     */
    inline DeleteWorkGroupRequest& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}


    /**
     * <p>The option to delete the workgroup and its contents even if the workgroup
     * contains any named queries.</p>
     */
    inline bool GetRecursiveDeleteOption() const{ return m_recursiveDeleteOption; }

    /**
     * <p>The option to delete the workgroup and its contents even if the workgroup
     * contains any named queries.</p>
     */
    inline bool RecursiveDeleteOptionHasBeenSet() const { return m_recursiveDeleteOptionHasBeenSet; }

    /**
     * <p>The option to delete the workgroup and its contents even if the workgroup
     * contains any named queries.</p>
     */
    inline void SetRecursiveDeleteOption(bool value) { m_recursiveDeleteOptionHasBeenSet = true; m_recursiveDeleteOption = value; }

    /**
     * <p>The option to delete the workgroup and its contents even if the workgroup
     * contains any named queries.</p>
     */
    inline DeleteWorkGroupRequest& WithRecursiveDeleteOption(bool value) { SetRecursiveDeleteOption(value); return *this;}

  private:

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet;

    bool m_recursiveDeleteOption;
    bool m_recursiveDeleteOptionHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
