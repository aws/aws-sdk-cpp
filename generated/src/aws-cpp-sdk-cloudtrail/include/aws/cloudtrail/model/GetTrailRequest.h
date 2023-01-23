/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class GetTrailRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API GetTrailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTrail"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name or the Amazon Resource Name (ARN) of the trail for which you want to
     * retrieve settings information.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the trail for which you want to
     * retrieve settings information.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the trail for which you want to
     * retrieve settings information.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the trail for which you want to
     * retrieve settings information.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the trail for which you want to
     * retrieve settings information.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the trail for which you want to
     * retrieve settings information.</p>
     */
    inline GetTrailRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the trail for which you want to
     * retrieve settings information.</p>
     */
    inline GetTrailRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name or the Amazon Resource Name (ARN) of the trail for which you want to
     * retrieve settings information.</p>
     */
    inline GetTrailRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
