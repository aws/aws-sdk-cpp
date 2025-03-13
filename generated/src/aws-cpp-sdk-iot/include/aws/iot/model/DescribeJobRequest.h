/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class DescribeJobRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DescribeJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeJob"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    DescribeJobRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a view of the job document before and after the substitution
     * parameters have been resolved with their exact values.</p>
     */
    inline bool GetBeforeSubstitution() const { return m_beforeSubstitution; }
    inline bool BeforeSubstitutionHasBeenSet() const { return m_beforeSubstitutionHasBeenSet; }
    inline void SetBeforeSubstitution(bool value) { m_beforeSubstitutionHasBeenSet = true; m_beforeSubstitution = value; }
    inline DescribeJobRequest& WithBeforeSubstitution(bool value) { SetBeforeSubstitution(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    bool m_beforeSubstitution{false};
    bool m_beforeSubstitutionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
