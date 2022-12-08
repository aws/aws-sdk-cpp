/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class GetSubscriberRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API GetSubscriberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSubscriber"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>GetSubscriber</code> API request.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>GetSubscriber</code> API request.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>GetSubscriber</code> API request.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>GetSubscriber</code> API request.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>GetSubscriber</code> API request.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>GetSubscriber</code> API request.</p>
     */
    inline GetSubscriberRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>GetSubscriber</code> API request.</p>
     */
    inline GetSubscriberRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>GetSubscriber</code> API request.</p>
     */
    inline GetSubscriberRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
