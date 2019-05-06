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
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
#include <aws/cloudhsm/CloudHSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudhsm/model/ClientVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudHSM
{
namespace Model
{

  /**
   */
  class AWS_CLOUDHSM_API GetConfigRequest : public CloudHSMRequest
  {
  public:
    GetConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConfig"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the client.</p>
     */
    inline const Aws::String& GetClientArn() const{ return m_clientArn; }

    /**
     * <p>The ARN of the client.</p>
     */
    inline bool ClientArnHasBeenSet() const { return m_clientArnHasBeenSet; }

    /**
     * <p>The ARN of the client.</p>
     */
    inline void SetClientArn(const Aws::String& value) { m_clientArnHasBeenSet = true; m_clientArn = value; }

    /**
     * <p>The ARN of the client.</p>
     */
    inline void SetClientArn(Aws::String&& value) { m_clientArnHasBeenSet = true; m_clientArn = std::move(value); }

    /**
     * <p>The ARN of the client.</p>
     */
    inline void SetClientArn(const char* value) { m_clientArnHasBeenSet = true; m_clientArn.assign(value); }

    /**
     * <p>The ARN of the client.</p>
     */
    inline GetConfigRequest& WithClientArn(const Aws::String& value) { SetClientArn(value); return *this;}

    /**
     * <p>The ARN of the client.</p>
     */
    inline GetConfigRequest& WithClientArn(Aws::String&& value) { SetClientArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the client.</p>
     */
    inline GetConfigRequest& WithClientArn(const char* value) { SetClientArn(value); return *this;}


    /**
     * <p>The client version.</p>
     */
    inline const ClientVersion& GetClientVersion() const{ return m_clientVersion; }

    /**
     * <p>The client version.</p>
     */
    inline bool ClientVersionHasBeenSet() const { return m_clientVersionHasBeenSet; }

    /**
     * <p>The client version.</p>
     */
    inline void SetClientVersion(const ClientVersion& value) { m_clientVersionHasBeenSet = true; m_clientVersion = value; }

    /**
     * <p>The client version.</p>
     */
    inline void SetClientVersion(ClientVersion&& value) { m_clientVersionHasBeenSet = true; m_clientVersion = std::move(value); }

    /**
     * <p>The client version.</p>
     */
    inline GetConfigRequest& WithClientVersion(const ClientVersion& value) { SetClientVersion(value); return *this;}

    /**
     * <p>The client version.</p>
     */
    inline GetConfigRequest& WithClientVersion(ClientVersion&& value) { SetClientVersion(std::move(value)); return *this;}


    /**
     * <p>A list of ARNs that identify the high-availability partition groups that are
     * associated with the client.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHapgList() const{ return m_hapgList; }

    /**
     * <p>A list of ARNs that identify the high-availability partition groups that are
     * associated with the client.</p>
     */
    inline bool HapgListHasBeenSet() const { return m_hapgListHasBeenSet; }

    /**
     * <p>A list of ARNs that identify the high-availability partition groups that are
     * associated with the client.</p>
     */
    inline void SetHapgList(const Aws::Vector<Aws::String>& value) { m_hapgListHasBeenSet = true; m_hapgList = value; }

    /**
     * <p>A list of ARNs that identify the high-availability partition groups that are
     * associated with the client.</p>
     */
    inline void SetHapgList(Aws::Vector<Aws::String>&& value) { m_hapgListHasBeenSet = true; m_hapgList = std::move(value); }

    /**
     * <p>A list of ARNs that identify the high-availability partition groups that are
     * associated with the client.</p>
     */
    inline GetConfigRequest& WithHapgList(const Aws::Vector<Aws::String>& value) { SetHapgList(value); return *this;}

    /**
     * <p>A list of ARNs that identify the high-availability partition groups that are
     * associated with the client.</p>
     */
    inline GetConfigRequest& WithHapgList(Aws::Vector<Aws::String>&& value) { SetHapgList(std::move(value)); return *this;}

    /**
     * <p>A list of ARNs that identify the high-availability partition groups that are
     * associated with the client.</p>
     */
    inline GetConfigRequest& AddHapgList(const Aws::String& value) { m_hapgListHasBeenSet = true; m_hapgList.push_back(value); return *this; }

    /**
     * <p>A list of ARNs that identify the high-availability partition groups that are
     * associated with the client.</p>
     */
    inline GetConfigRequest& AddHapgList(Aws::String&& value) { m_hapgListHasBeenSet = true; m_hapgList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of ARNs that identify the high-availability partition groups that are
     * associated with the client.</p>
     */
    inline GetConfigRequest& AddHapgList(const char* value) { m_hapgListHasBeenSet = true; m_hapgList.push_back(value); return *this; }

  private:

    Aws::String m_clientArn;
    bool m_clientArnHasBeenSet;

    ClientVersion m_clientVersion;
    bool m_clientVersionHasBeenSet;

    Aws::Vector<Aws::String> m_hapgList;
    bool m_hapgListHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
