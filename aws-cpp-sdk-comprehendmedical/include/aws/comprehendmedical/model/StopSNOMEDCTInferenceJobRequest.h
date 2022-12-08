/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/ComprehendMedicalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{

  /**
   */
  class StopSNOMEDCTInferenceJobRequest : public ComprehendMedicalRequest
  {
  public:
    AWS_COMPREHENDMEDICAL_API StopSNOMEDCTInferenceJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopSNOMEDCTInferenceJob"; }

    AWS_COMPREHENDMEDICAL_API Aws::String SerializePayload() const override;

    AWS_COMPREHENDMEDICAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The job id of the asynchronous InferSNOMEDCT job to be stopped. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p> The job id of the asynchronous InferSNOMEDCT job to be stopped. </p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p> The job id of the asynchronous InferSNOMEDCT job to be stopped. </p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p> The job id of the asynchronous InferSNOMEDCT job to be stopped. </p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p> The job id of the asynchronous InferSNOMEDCT job to be stopped. </p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p> The job id of the asynchronous InferSNOMEDCT job to be stopped. </p>
     */
    inline StopSNOMEDCTInferenceJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p> The job id of the asynchronous InferSNOMEDCT job to be stopped. </p>
     */
    inline StopSNOMEDCTInferenceJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p> The job id of the asynchronous InferSNOMEDCT job to be stopped. </p>
     */
    inline StopSNOMEDCTInferenceJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
