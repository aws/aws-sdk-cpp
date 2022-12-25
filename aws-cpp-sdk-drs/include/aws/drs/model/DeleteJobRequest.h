/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class DeleteJobRequest : public DrsRequest
  {
  public:
    AWS_DRS_API DeleteJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteJob"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Job to be deleted.</p>
     */
    inline const Aws::String& GetJobID() const{ return m_jobID; }

    /**
     * <p>The ID of the Job to be deleted.</p>
     */
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }

    /**
     * <p>The ID of the Job to be deleted.</p>
     */
    inline void SetJobID(const Aws::String& value) { m_jobIDHasBeenSet = true; m_jobID = value; }

    /**
     * <p>The ID of the Job to be deleted.</p>
     */
    inline void SetJobID(Aws::String&& value) { m_jobIDHasBeenSet = true; m_jobID = std::move(value); }

    /**
     * <p>The ID of the Job to be deleted.</p>
     */
    inline void SetJobID(const char* value) { m_jobIDHasBeenSet = true; m_jobID.assign(value); }

    /**
     * <p>The ID of the Job to be deleted.</p>
     */
    inline DeleteJobRequest& WithJobID(const Aws::String& value) { SetJobID(value); return *this;}

    /**
     * <p>The ID of the Job to be deleted.</p>
     */
    inline DeleteJobRequest& WithJobID(Aws::String&& value) { SetJobID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Job to be deleted.</p>
     */
    inline DeleteJobRequest& WithJobID(const char* value) { SetJobID(value); return *this;}

  private:

    Aws::String m_jobID;
    bool m_jobIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
