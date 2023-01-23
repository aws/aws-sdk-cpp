/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class DescribePiiEntitiesDetectionJobRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API DescribePiiEntitiesDetectionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePiiEntitiesDetectionJob"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier that Amazon Comprehend generated for the job. The operation
     * returns this identifier in its response.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier that Amazon Comprehend generated for the job. The operation
     * returns this identifier in its response.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The identifier that Amazon Comprehend generated for the job. The operation
     * returns this identifier in its response.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The identifier that Amazon Comprehend generated for the job. The operation
     * returns this identifier in its response.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The identifier that Amazon Comprehend generated for the job. The operation
     * returns this identifier in its response.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The identifier that Amazon Comprehend generated for the job. The operation
     * returns this identifier in its response.</p>
     */
    inline DescribePiiEntitiesDetectionJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier that Amazon Comprehend generated for the job. The operation
     * returns this identifier in its response.</p>
     */
    inline DescribePiiEntitiesDetectionJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier that Amazon Comprehend generated for the job. The operation
     * returns this identifier in its response.</p>
     */
    inline DescribePiiEntitiesDetectionJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
