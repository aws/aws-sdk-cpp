/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{

  /**
   * <p>Summary information about a traffic distribution group user.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TrafficDistributionGroupUserSummary">AWS
   * API Reference</a></p>
   */
  class TrafficDistributionGroupUserSummary
  {
  public:
    AWS_CONNECT_API TrafficDistributionGroupUserSummary();
    AWS_CONNECT_API TrafficDistributionGroupUserSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TrafficDistributionGroupUserSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline TrafficDistributionGroupUserSummary& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline TrafficDistributionGroupUserSummary& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the user. This can be the ID or the ARN of the user.</p>
     */
    inline TrafficDistributionGroupUserSummary& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
