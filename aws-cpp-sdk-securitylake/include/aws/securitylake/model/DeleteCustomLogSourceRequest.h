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
namespace Http
{
    class URI;
} //namespace Http
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class DeleteCustomLogSourceRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API DeleteCustomLogSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCustomLogSource"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;

    AWS_SECURITYLAKE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The custom source name for the custome log source.</p>
     */
    inline const Aws::String& GetCustomSourceName() const{ return m_customSourceName; }

    /**
     * <p>The custom source name for the custome log source.</p>
     */
    inline bool CustomSourceNameHasBeenSet() const { return m_customSourceNameHasBeenSet; }

    /**
     * <p>The custom source name for the custome log source.</p>
     */
    inline void SetCustomSourceName(const Aws::String& value) { m_customSourceNameHasBeenSet = true; m_customSourceName = value; }

    /**
     * <p>The custom source name for the custome log source.</p>
     */
    inline void SetCustomSourceName(Aws::String&& value) { m_customSourceNameHasBeenSet = true; m_customSourceName = std::move(value); }

    /**
     * <p>The custom source name for the custome log source.</p>
     */
    inline void SetCustomSourceName(const char* value) { m_customSourceNameHasBeenSet = true; m_customSourceName.assign(value); }

    /**
     * <p>The custom source name for the custome log source.</p>
     */
    inline DeleteCustomLogSourceRequest& WithCustomSourceName(const Aws::String& value) { SetCustomSourceName(value); return *this;}

    /**
     * <p>The custom source name for the custome log source.</p>
     */
    inline DeleteCustomLogSourceRequest& WithCustomSourceName(Aws::String&& value) { SetCustomSourceName(std::move(value)); return *this;}

    /**
     * <p>The custom source name for the custome log source.</p>
     */
    inline DeleteCustomLogSourceRequest& WithCustomSourceName(const char* value) { SetCustomSourceName(value); return *this;}

  private:

    Aws::String m_customSourceName;
    bool m_customSourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
