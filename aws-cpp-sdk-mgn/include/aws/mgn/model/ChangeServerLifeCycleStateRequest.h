/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/model/ChangeServerLifeCycleStateSourceServerLifecycle.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class ChangeServerLifeCycleStateRequest : public MgnRequest
  {
  public:
    AWS_MGN_API ChangeServerLifeCycleStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ChangeServerLifeCycleState"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>The request to change the source server migration lifecycle state.</p>
     */
    inline const ChangeServerLifeCycleStateSourceServerLifecycle& GetLifeCycle() const{ return m_lifeCycle; }

    /**
     * <p>The request to change the source server migration lifecycle state.</p>
     */
    inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }

    /**
     * <p>The request to change the source server migration lifecycle state.</p>
     */
    inline void SetLifeCycle(const ChangeServerLifeCycleStateSourceServerLifecycle& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = value; }

    /**
     * <p>The request to change the source server migration lifecycle state.</p>
     */
    inline void SetLifeCycle(ChangeServerLifeCycleStateSourceServerLifecycle&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::move(value); }

    /**
     * <p>The request to change the source server migration lifecycle state.</p>
     */
    inline ChangeServerLifeCycleStateRequest& WithLifeCycle(const ChangeServerLifeCycleStateSourceServerLifecycle& value) { SetLifeCycle(value); return *this;}

    /**
     * <p>The request to change the source server migration lifecycle state.</p>
     */
    inline ChangeServerLifeCycleStateRequest& WithLifeCycle(ChangeServerLifeCycleStateSourceServerLifecycle&& value) { SetLifeCycle(std::move(value)); return *this;}


    /**
     * <p>The request to change the source server migration lifecycle state by source
     * server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>The request to change the source server migration lifecycle state by source
     * server ID.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>The request to change the source server migration lifecycle state by source
     * server ID.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>The request to change the source server migration lifecycle state by source
     * server ID.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>The request to change the source server migration lifecycle state by source
     * server ID.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>The request to change the source server migration lifecycle state by source
     * server ID.</p>
     */
    inline ChangeServerLifeCycleStateRequest& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>The request to change the source server migration lifecycle state by source
     * server ID.</p>
     */
    inline ChangeServerLifeCycleStateRequest& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>The request to change the source server migration lifecycle state by source
     * server ID.</p>
     */
    inline ChangeServerLifeCycleStateRequest& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}

  private:

    ChangeServerLifeCycleStateSourceServerLifecycle m_lifeCycle;
    bool m_lifeCycleHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
