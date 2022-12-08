/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DeleteWorkteamRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteWorkteamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWorkteam"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the work team to delete.</p>
     */
    inline const Aws::String& GetWorkteamName() const{ return m_workteamName; }

    /**
     * <p>The name of the work team to delete.</p>
     */
    inline bool WorkteamNameHasBeenSet() const { return m_workteamNameHasBeenSet; }

    /**
     * <p>The name of the work team to delete.</p>
     */
    inline void SetWorkteamName(const Aws::String& value) { m_workteamNameHasBeenSet = true; m_workteamName = value; }

    /**
     * <p>The name of the work team to delete.</p>
     */
    inline void SetWorkteamName(Aws::String&& value) { m_workteamNameHasBeenSet = true; m_workteamName = std::move(value); }

    /**
     * <p>The name of the work team to delete.</p>
     */
    inline void SetWorkteamName(const char* value) { m_workteamNameHasBeenSet = true; m_workteamName.assign(value); }

    /**
     * <p>The name of the work team to delete.</p>
     */
    inline DeleteWorkteamRequest& WithWorkteamName(const Aws::String& value) { SetWorkteamName(value); return *this;}

    /**
     * <p>The name of the work team to delete.</p>
     */
    inline DeleteWorkteamRequest& WithWorkteamName(Aws::String&& value) { SetWorkteamName(std::move(value)); return *this;}

    /**
     * <p>The name of the work team to delete.</p>
     */
    inline DeleteWorkteamRequest& WithWorkteamName(const char* value) { SetWorkteamName(value); return *this;}

  private:

    Aws::String m_workteamName;
    bool m_workteamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
