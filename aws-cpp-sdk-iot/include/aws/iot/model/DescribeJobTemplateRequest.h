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
    AWS_IOT_API DescribeJobTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeJobTemplate"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline const Aws::String& GetJobTemplateId() const{ return m_jobTemplateId; }

    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline bool JobTemplateIdHasBeenSet() const { return m_jobTemplateIdHasBeenSet; }

    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline void SetJobTemplateId(const Aws::String& value) { m_jobTemplateIdHasBeenSet = true; m_jobTemplateId = value; }

    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline void SetJobTemplateId(Aws::String&& value) { m_jobTemplateIdHasBeenSet = true; m_jobTemplateId = std::move(value); }

    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline void SetJobTemplateId(const char* value) { m_jobTemplateIdHasBeenSet = true; m_jobTemplateId.assign(value); }

    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline DescribeJobTemplateRequest& WithJobTemplateId(const Aws::String& value) { SetJobTemplateId(value); return *this;}

    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline DescribeJobTemplateRequest& WithJobTemplateId(Aws::String&& value) { SetJobTemplateId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the job template.</p>
     */
    inline DescribeJobTemplateRequest& WithJobTemplateId(const char* value) { SetJobTemplateId(value); return *this;}

  private:

    Aws::String m_jobTemplateId;
    bool m_jobTemplateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
