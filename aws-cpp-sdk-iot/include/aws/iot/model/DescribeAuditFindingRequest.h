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
  class AWS_IOT_API DescribeAuditFindingRequest : public IoTRequest
  {
  public:
    DescribeAuditFindingRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<DescribeAuditFindingRequest> Clone() const
    {
      return Aws::MakeUnique<DescribeAuditFindingRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAuditFinding"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for a single audit finding. You can use this identifier
     * to apply mitigation actions to the finding.</p>
     */
    inline const Aws::String& GetFindingId() const{ return m_findingId; }

    /**
     * <p>A unique identifier for a single audit finding. You can use this identifier
     * to apply mitigation actions to the finding.</p>
     */
    inline bool FindingIdHasBeenSet() const { return m_findingIdHasBeenSet; }

    /**
     * <p>A unique identifier for a single audit finding. You can use this identifier
     * to apply mitigation actions to the finding.</p>
     */
    inline void SetFindingId(const Aws::String& value) { m_findingIdHasBeenSet = true; m_findingId = value; }

    /**
     * <p>A unique identifier for a single audit finding. You can use this identifier
     * to apply mitigation actions to the finding.</p>
     */
    inline void SetFindingId(Aws::String&& value) { m_findingIdHasBeenSet = true; m_findingId = std::move(value); }

    /**
     * <p>A unique identifier for a single audit finding. You can use this identifier
     * to apply mitigation actions to the finding.</p>
     */
    inline void SetFindingId(const char* value) { m_findingIdHasBeenSet = true; m_findingId.assign(value); }

    /**
     * <p>A unique identifier for a single audit finding. You can use this identifier
     * to apply mitigation actions to the finding.</p>
     */
    inline DescribeAuditFindingRequest& WithFindingId(const Aws::String& value) { SetFindingId(value); return *this;}

    /**
     * <p>A unique identifier for a single audit finding. You can use this identifier
     * to apply mitigation actions to the finding.</p>
     */
    inline DescribeAuditFindingRequest& WithFindingId(Aws::String&& value) { SetFindingId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a single audit finding. You can use this identifier
     * to apply mitigation actions to the finding.</p>
     */
    inline DescribeAuditFindingRequest& WithFindingId(const char* value) { SetFindingId(value); return *this;}

  private:

    Aws::String m_findingId;
    bool m_findingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
