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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CancelCommandRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API CancelCommandRequest : public SSMRequest
  {
  public:
    CancelCommandRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelCommand"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the command you want to cancel.</p>
     */
    inline const Aws::String& GetCommandId() const{ return m_commandId; }

    /**
     * <p>The ID of the command you want to cancel.</p>
     */
    inline bool CommandIdHasBeenSet() const { return m_commandIdHasBeenSet; }

    /**
     * <p>The ID of the command you want to cancel.</p>
     */
    inline void SetCommandId(const Aws::String& value) { m_commandIdHasBeenSet = true; m_commandId = value; }

    /**
     * <p>The ID of the command you want to cancel.</p>
     */
    inline void SetCommandId(Aws::String&& value) { m_commandIdHasBeenSet = true; m_commandId = std::move(value); }

    /**
     * <p>The ID of the command you want to cancel.</p>
     */
    inline void SetCommandId(const char* value) { m_commandIdHasBeenSet = true; m_commandId.assign(value); }

    /**
     * <p>The ID of the command you want to cancel.</p>
     */
    inline CancelCommandRequest& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}

    /**
     * <p>The ID of the command you want to cancel.</p>
     */
    inline CancelCommandRequest& WithCommandId(Aws::String&& value) { SetCommandId(std::move(value)); return *this;}

    /**
     * <p>The ID of the command you want to cancel.</p>
     */
    inline CancelCommandRequest& WithCommandId(const char* value) { SetCommandId(value); return *this;}


    /**
     * <p>(Optional) A list of instance IDs on which you want to cancel the command. If
     * not provided, the command is canceled on every instance on which it was
     * requested.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>(Optional) A list of instance IDs on which you want to cancel the command. If
     * not provided, the command is canceled on every instance on which it was
     * requested.</p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>(Optional) A list of instance IDs on which you want to cancel the command. If
     * not provided, the command is canceled on every instance on which it was
     * requested.</p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>(Optional) A list of instance IDs on which you want to cancel the command. If
     * not provided, the command is canceled on every instance on which it was
     * requested.</p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>(Optional) A list of instance IDs on which you want to cancel the command. If
     * not provided, the command is canceled on every instance on which it was
     * requested.</p>
     */
    inline CancelCommandRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>(Optional) A list of instance IDs on which you want to cancel the command. If
     * not provided, the command is canceled on every instance on which it was
     * requested.</p>
     */
    inline CancelCommandRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>(Optional) A list of instance IDs on which you want to cancel the command. If
     * not provided, the command is canceled on every instance on which it was
     * requested.</p>
     */
    inline CancelCommandRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>(Optional) A list of instance IDs on which you want to cancel the command. If
     * not provided, the command is canceled on every instance on which it was
     * requested.</p>
     */
    inline CancelCommandRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Optional) A list of instance IDs on which you want to cancel the command. If
     * not provided, the command is canceled on every instance on which it was
     * requested.</p>
     */
    inline CancelCommandRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

  private:

    Aws::String m_commandId;
    bool m_commandIdHasBeenSet;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
