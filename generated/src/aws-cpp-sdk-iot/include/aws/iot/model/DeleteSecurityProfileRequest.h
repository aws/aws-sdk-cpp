/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class DeleteSecurityProfileRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DeleteSecurityProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSecurityProfile"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the security profile to be deleted.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }

    /**
     * <p>The name of the security profile to be deleted.</p>
     */
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }

    /**
     * <p>The name of the security profile to be deleted.</p>
     */
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }

    /**
     * <p>The name of the security profile to be deleted.</p>
     */
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }

    /**
     * <p>The name of the security profile to be deleted.</p>
     */
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }

    /**
     * <p>The name of the security profile to be deleted.</p>
     */
    inline DeleteSecurityProfileRequest& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}

    /**
     * <p>The name of the security profile to be deleted.</p>
     */
    inline DeleteSecurityProfileRequest& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the security profile to be deleted.</p>
     */
    inline DeleteSecurityProfileRequest& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}


    /**
     * <p>The expected version of the security profile. A new version is generated
     * whenever the security profile is updated. If you specify a value that is
     * different from the actual version, a <code>VersionConflictException</code> is
     * thrown.</p>
     */
    inline long long GetExpectedVersion() const{ return m_expectedVersion; }

    /**
     * <p>The expected version of the security profile. A new version is generated
     * whenever the security profile is updated. If you specify a value that is
     * different from the actual version, a <code>VersionConflictException</code> is
     * thrown.</p>
     */
    inline bool ExpectedVersionHasBeenSet() const { return m_expectedVersionHasBeenSet; }

    /**
     * <p>The expected version of the security profile. A new version is generated
     * whenever the security profile is updated. If you specify a value that is
     * different from the actual version, a <code>VersionConflictException</code> is
     * thrown.</p>
     */
    inline void SetExpectedVersion(long long value) { m_expectedVersionHasBeenSet = true; m_expectedVersion = value; }

    /**
     * <p>The expected version of the security profile. A new version is generated
     * whenever the security profile is updated. If you specify a value that is
     * different from the actual version, a <code>VersionConflictException</code> is
     * thrown.</p>
     */
    inline DeleteSecurityProfileRequest& WithExpectedVersion(long long value) { SetExpectedVersion(value); return *this;}

  private:

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet = false;

    long long m_expectedVersion;
    bool m_expectedVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
