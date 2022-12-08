/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
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
namespace SecurityLake
{
namespace Model
{
  class DeleteCustomLogSourceResult
  {
  public:
    AWS_SECURITYLAKE_API DeleteCustomLogSourceResult();
    AWS_SECURITYLAKE_API DeleteCustomLogSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API DeleteCustomLogSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The location of the partition in the Security Lake S3 bucket.</p>
     */
    inline const Aws::String& GetCustomDataLocation() const{ return m_customDataLocation; }

    /**
     * <p>The location of the partition in the Security Lake S3 bucket.</p>
     */
    inline void SetCustomDataLocation(const Aws::String& value) { m_customDataLocation = value; }

    /**
     * <p>The location of the partition in the Security Lake S3 bucket.</p>
     */
    inline void SetCustomDataLocation(Aws::String&& value) { m_customDataLocation = std::move(value); }

    /**
     * <p>The location of the partition in the Security Lake S3 bucket.</p>
     */
    inline void SetCustomDataLocation(const char* value) { m_customDataLocation.assign(value); }

    /**
     * <p>The location of the partition in the Security Lake S3 bucket.</p>
     */
    inline DeleteCustomLogSourceResult& WithCustomDataLocation(const Aws::String& value) { SetCustomDataLocation(value); return *this;}

    /**
     * <p>The location of the partition in the Security Lake S3 bucket.</p>
     */
    inline DeleteCustomLogSourceResult& WithCustomDataLocation(Aws::String&& value) { SetCustomDataLocation(std::move(value)); return *this;}

    /**
     * <p>The location of the partition in the Security Lake S3 bucket.</p>
     */
    inline DeleteCustomLogSourceResult& WithCustomDataLocation(const char* value) { SetCustomDataLocation(value); return *this;}

  private:

    Aws::String m_customDataLocation;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
