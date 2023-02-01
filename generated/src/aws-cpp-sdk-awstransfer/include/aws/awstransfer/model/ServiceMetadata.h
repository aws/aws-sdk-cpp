/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/UserDetails.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>A container object for the session details that are associated with a
   * workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ServiceMetadata">AWS
   * API Reference</a></p>
   */
  class ServiceMetadata
  {
  public:
    AWS_TRANSFER_API ServiceMetadata();
    AWS_TRANSFER_API ServiceMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ServiceMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Server ID (<code>ServerId</code>), Session ID (<code>SessionId</code>)
     * and user (<code>UserName</code>) make up the <code>UserDetails</code>.</p>
     */
    inline const UserDetails& GetUserDetails() const{ return m_userDetails; }

    /**
     * <p>The Server ID (<code>ServerId</code>), Session ID (<code>SessionId</code>)
     * and user (<code>UserName</code>) make up the <code>UserDetails</code>.</p>
     */
    inline bool UserDetailsHasBeenSet() const { return m_userDetailsHasBeenSet; }

    /**
     * <p>The Server ID (<code>ServerId</code>), Session ID (<code>SessionId</code>)
     * and user (<code>UserName</code>) make up the <code>UserDetails</code>.</p>
     */
    inline void SetUserDetails(const UserDetails& value) { m_userDetailsHasBeenSet = true; m_userDetails = value; }

    /**
     * <p>The Server ID (<code>ServerId</code>), Session ID (<code>SessionId</code>)
     * and user (<code>UserName</code>) make up the <code>UserDetails</code>.</p>
     */
    inline void SetUserDetails(UserDetails&& value) { m_userDetailsHasBeenSet = true; m_userDetails = std::move(value); }

    /**
     * <p>The Server ID (<code>ServerId</code>), Session ID (<code>SessionId</code>)
     * and user (<code>UserName</code>) make up the <code>UserDetails</code>.</p>
     */
    inline ServiceMetadata& WithUserDetails(const UserDetails& value) { SetUserDetails(value); return *this;}

    /**
     * <p>The Server ID (<code>ServerId</code>), Session ID (<code>SessionId</code>)
     * and user (<code>UserName</code>) make up the <code>UserDetails</code>.</p>
     */
    inline ServiceMetadata& WithUserDetails(UserDetails&& value) { SetUserDetails(std::move(value)); return *this;}

  private:

    UserDetails m_userDetails;
    bool m_userDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
