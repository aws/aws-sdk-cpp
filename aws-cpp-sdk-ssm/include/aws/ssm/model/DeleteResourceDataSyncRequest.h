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
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DeleteResourceDataSyncRequest : public SSMRequest
  {
  public:
    DeleteResourceDataSyncRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourceDataSync"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline const Aws::String& GetSyncName() const{ return m_syncName; }

    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline bool SyncNameHasBeenSet() const { return m_syncNameHasBeenSet; }

    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline void SetSyncName(const Aws::String& value) { m_syncNameHasBeenSet = true; m_syncName = value; }

    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline void SetSyncName(Aws::String&& value) { m_syncNameHasBeenSet = true; m_syncName = std::move(value); }

    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline void SetSyncName(const char* value) { m_syncNameHasBeenSet = true; m_syncName.assign(value); }

    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline DeleteResourceDataSyncRequest& WithSyncName(const Aws::String& value) { SetSyncName(value); return *this;}

    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline DeleteResourceDataSyncRequest& WithSyncName(Aws::String&& value) { SetSyncName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration to delete.</p>
     */
    inline DeleteResourceDataSyncRequest& WithSyncName(const char* value) { SetSyncName(value); return *this;}

  private:

    Aws::String m_syncName;
    bool m_syncNameHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
