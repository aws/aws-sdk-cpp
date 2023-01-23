/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
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
namespace IdentityStore
{
namespace Model
{

  /**
   * <p>An object containing the identifier of a group member.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/MemberId">AWS
   * API Reference</a></p>
   */
  class MemberId
  {
  public:
    AWS_IDENTITYSTORE_API MemberId();
    AWS_IDENTITYSTORE_API MemberId(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API MemberId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object containing the identifiers of resources that can be members.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>An object containing the identifiers of resources that can be members.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>An object containing the identifiers of resources that can be members.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>An object containing the identifiers of resources that can be members.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>An object containing the identifiers of resources that can be members.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>An object containing the identifiers of resources that can be members.</p>
     */
    inline MemberId& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>An object containing the identifiers of resources that can be members.</p>
     */
    inline MemberId& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>An object containing the identifiers of resources that can be members.</p>
     */
    inline MemberId& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
