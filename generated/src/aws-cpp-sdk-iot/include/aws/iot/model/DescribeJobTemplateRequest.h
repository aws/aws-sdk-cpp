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
namespace IoT
{
namespace Model
{

  /**
   */
  class DescribeJobTemplateRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DescribeJobTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeJobTemplate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateId() const { return m_jobTemplateId; }
    inline bool JobTemplateIdHasBeenSet() const { return m_jobTemplateIdHasBeenSet; }
    template<typename JobTemplateIdT = Aws::String>
    void SetJobTemplateId(JobTemplateIdT&& value) { m_jobTemplateIdHasBeenSet = true; m_jobTemplateId = std::forward<JobTemplateIdT>(value); }
    template<typename JobTemplateIdT = Aws::String>
    DescribeJobTemplateRequest& WithJobTemplateId(JobTemplateIdT&& value) { SetJobTemplateId(std::forward<JobTemplateIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobTemplateId;
    bool m_jobTemplateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
