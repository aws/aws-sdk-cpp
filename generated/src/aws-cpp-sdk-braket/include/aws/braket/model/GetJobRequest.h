/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/BraketRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Braket
{
namespace Model
{

  /**
   */
  class GetJobRequest : public BraketRequest
  {
  public:
    AWS_BRAKET_API GetJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetJob"; }

    AWS_BRAKET_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }

    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }

    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }

    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }

    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline GetJobRequest& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline GetJobRequest& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the job to retrieve.</p>
     */
    inline GetJobRequest& WithJobArn(const char* value) { SetJobArn(value); return *this;}

  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
