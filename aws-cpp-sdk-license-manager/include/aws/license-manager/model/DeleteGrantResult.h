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
  class DeleteGrantResult
  {
  public:
    AWS_LICENSEMANAGER_API DeleteGrantResult();
    AWS_LICENSEMANAGER_API DeleteGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API DeleteGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DeleteGrantResult& WithGrantArn(const Aws::String& value) { SetGrantArn(value); return *this;}

    /**
     * <p>Grant ARN.</p>
     */
    inline DeleteGrantResult& WithGrantArn(Aws::String&& value) { SetGrantArn(std::move(value)); return *this;}

    /**
     * <p>Grant ARN.</p>
     */
    inline DeleteGrantResult& WithGrantArn(const char* value) { SetGrantArn(value); return *this;}


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
    inline DeleteGrantResult& WithStatus(const GrantStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Grant status.</p>
     */
    inline DeleteGrantResult& WithStatus(GrantStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline DeleteGrantResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Grant version.</p>
     */
    inline DeleteGrantResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Grant version.</p>
     */
    inline DeleteGrantResult& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_grantArn;

    GrantStatus m_status;

    Aws::String m_version;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
