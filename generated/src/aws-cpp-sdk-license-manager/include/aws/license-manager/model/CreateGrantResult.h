/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/GrantStatus.h>
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
namespace LicenseManager
{
namespace Model
{
  class CreateGrantResult
  {
  public:
    AWS_LICENSEMANAGER_API CreateGrantResult();
    AWS_LICENSEMANAGER_API CreateGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API CreateGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Grant ARN.</p>
     */
    inline const Aws::String& GetGrantArn() const{ return m_grantArn; }

    /**
     * <p>Grant ARN.</p>
     */
    inline void SetGrantArn(const Aws::String& value) { m_grantArn = value; }

    /**
     * <p>Grant ARN.</p>
     */
    inline void SetGrantArn(Aws::String&& value) { m_grantArn = std::move(value); }

    /**
     * <p>Grant ARN.</p>
     */
    inline void SetGrantArn(const char* value) { m_grantArn.assign(value); }

    /**
     * <p>Grant ARN.</p>
     */
    inline CreateGrantResult& WithGrantArn(const Aws::String& value) { SetGrantArn(value); return *this;}

    /**
     * <p>Grant ARN.</p>
     */
    inline CreateGrantResult& WithGrantArn(Aws::String&& value) { SetGrantArn(std::move(value)); return *this;}

    /**
     * <p>Grant ARN.</p>
     */
    inline CreateGrantResult& WithGrantArn(const char* value) { SetGrantArn(value); return *this;}


    /**
     * <p>Grant status.</p>
     */
    inline const GrantStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Grant status.</p>
     */
    inline void SetStatus(const GrantStatus& value) { m_status = value; }

    /**
     * <p>Grant status.</p>
     */
    inline void SetStatus(GrantStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Grant status.</p>
     */
    inline CreateGrantResult& WithStatus(const GrantStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Grant status.</p>
     */
    inline CreateGrantResult& WithStatus(GrantStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Grant version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Grant version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>Grant version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>Grant version.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>Grant version.</p>
     */
    inline CreateGrantResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Grant version.</p>
     */
    inline CreateGrantResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Grant version.</p>
     */
    inline CreateGrantResult& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_grantArn;

    GrantStatus m_status;

    Aws::String m_version;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
