/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{
  class AssociateServiceRoleToAccountResult
  {
  public:
    AWS_GREENGRASS_API AssociateServiceRoleToAccountResult();
    AWS_GREENGRASS_API AssociateServiceRoleToAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API AssociateServiceRoleToAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The time when the service role was associated with the account.
     */
    inline const Aws::String& GetAssociatedAt() const{ return m_associatedAt; }

    /**
     * The time when the service role was associated with the account.
     */
    inline void SetAssociatedAt(const Aws::String& value) { m_associatedAt = value; }

    /**
     * The time when the service role was associated with the account.
     */
    inline void SetAssociatedAt(Aws::String&& value) { m_associatedAt = std::move(value); }

    /**
     * The time when the service role was associated with the account.
     */
    inline void SetAssociatedAt(const char* value) { m_associatedAt.assign(value); }

    /**
     * The time when the service role was associated with the account.
     */
    inline AssociateServiceRoleToAccountResult& WithAssociatedAt(const Aws::String& value) { SetAssociatedAt(value); return *this;}

    /**
     * The time when the service role was associated with the account.
     */
    inline AssociateServiceRoleToAccountResult& WithAssociatedAt(Aws::String&& value) { SetAssociatedAt(std::move(value)); return *this;}

    /**
     * The time when the service role was associated with the account.
     */
    inline AssociateServiceRoleToAccountResult& WithAssociatedAt(const char* value) { SetAssociatedAt(value); return *this;}

  private:

    Aws::String m_associatedAt;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
