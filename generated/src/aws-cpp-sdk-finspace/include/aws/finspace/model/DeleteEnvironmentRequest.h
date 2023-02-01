/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace finspace
{
namespace Model
{

  /**
   */
  class DeleteEnvironmentRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API DeleteEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteEnvironment"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for the FinSpace environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The identifier for the FinSpace environment.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The identifier for the FinSpace environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The identifier for the FinSpace environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The identifier for the FinSpace environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The identifier for the FinSpace environment.</p>
     */
    inline DeleteEnvironmentRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The identifier for the FinSpace environment.</p>
     */
    inline DeleteEnvironmentRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the FinSpace environment.</p>
     */
    inline DeleteEnvironmentRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}

  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
