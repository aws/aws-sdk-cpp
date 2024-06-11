﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TrustProviderType.h>
#include <aws/ec2/model/UserTrustProviderType.h>
#include <aws/ec2/model/DeviceTrustProviderType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Condensed information about a trust provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessTrustProviderCondensed">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessTrustProviderCondensed
  {
  public:
    AWS_EC2_API VerifiedAccessTrustProviderCondensed();
    AWS_EC2_API VerifiedAccessTrustProviderCondensed(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessTrustProviderCondensed& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the trust provider.</p>
     */
    inline const Aws::String& GetVerifiedAccessTrustProviderId() const{ return m_verifiedAccessTrustProviderId; }
    inline bool VerifiedAccessTrustProviderIdHasBeenSet() const { return m_verifiedAccessTrustProviderIdHasBeenSet; }
    inline void SetVerifiedAccessTrustProviderId(const Aws::String& value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId = value; }
    inline void SetVerifiedAccessTrustProviderId(Aws::String&& value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId = std::move(value); }
    inline void SetVerifiedAccessTrustProviderId(const char* value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId.assign(value); }
    inline VerifiedAccessTrustProviderCondensed& WithVerifiedAccessTrustProviderId(const Aws::String& value) { SetVerifiedAccessTrustProviderId(value); return *this;}
    inline VerifiedAccessTrustProviderCondensed& WithVerifiedAccessTrustProviderId(Aws::String&& value) { SetVerifiedAccessTrustProviderId(std::move(value)); return *this;}
    inline VerifiedAccessTrustProviderCondensed& WithVerifiedAccessTrustProviderId(const char* value) { SetVerifiedAccessTrustProviderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of trust provider.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline VerifiedAccessTrustProviderCondensed& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline VerifiedAccessTrustProviderCondensed& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline VerifiedAccessTrustProviderCondensed& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of trust provider (user- or device-based).</p>
     */
    inline const TrustProviderType& GetTrustProviderType() const{ return m_trustProviderType; }
    inline bool TrustProviderTypeHasBeenSet() const { return m_trustProviderTypeHasBeenSet; }
    inline void SetTrustProviderType(const TrustProviderType& value) { m_trustProviderTypeHasBeenSet = true; m_trustProviderType = value; }
    inline void SetTrustProviderType(TrustProviderType&& value) { m_trustProviderTypeHasBeenSet = true; m_trustProviderType = std::move(value); }
    inline VerifiedAccessTrustProviderCondensed& WithTrustProviderType(const TrustProviderType& value) { SetTrustProviderType(value); return *this;}
    inline VerifiedAccessTrustProviderCondensed& WithTrustProviderType(TrustProviderType&& value) { SetTrustProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of user-based trust provider.</p>
     */
    inline const UserTrustProviderType& GetUserTrustProviderType() const{ return m_userTrustProviderType; }
    inline bool UserTrustProviderTypeHasBeenSet() const { return m_userTrustProviderTypeHasBeenSet; }
    inline void SetUserTrustProviderType(const UserTrustProviderType& value) { m_userTrustProviderTypeHasBeenSet = true; m_userTrustProviderType = value; }
    inline void SetUserTrustProviderType(UserTrustProviderType&& value) { m_userTrustProviderTypeHasBeenSet = true; m_userTrustProviderType = std::move(value); }
    inline VerifiedAccessTrustProviderCondensed& WithUserTrustProviderType(const UserTrustProviderType& value) { SetUserTrustProviderType(value); return *this;}
    inline VerifiedAccessTrustProviderCondensed& WithUserTrustProviderType(UserTrustProviderType&& value) { SetUserTrustProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device-based trust provider.</p>
     */
    inline const DeviceTrustProviderType& GetDeviceTrustProviderType() const{ return m_deviceTrustProviderType; }
    inline bool DeviceTrustProviderTypeHasBeenSet() const { return m_deviceTrustProviderTypeHasBeenSet; }
    inline void SetDeviceTrustProviderType(const DeviceTrustProviderType& value) { m_deviceTrustProviderTypeHasBeenSet = true; m_deviceTrustProviderType = value; }
    inline void SetDeviceTrustProviderType(DeviceTrustProviderType&& value) { m_deviceTrustProviderTypeHasBeenSet = true; m_deviceTrustProviderType = std::move(value); }
    inline VerifiedAccessTrustProviderCondensed& WithDeviceTrustProviderType(const DeviceTrustProviderType& value) { SetDeviceTrustProviderType(value); return *this;}
    inline VerifiedAccessTrustProviderCondensed& WithDeviceTrustProviderType(DeviceTrustProviderType&& value) { SetDeviceTrustProviderType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_verifiedAccessTrustProviderId;
    bool m_verifiedAccessTrustProviderIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TrustProviderType m_trustProviderType;
    bool m_trustProviderTypeHasBeenSet = false;

    UserTrustProviderType m_userTrustProviderType;
    bool m_userTrustProviderTypeHasBeenSet = false;

    DeviceTrustProviderType m_deviceTrustProviderType;
    bool m_deviceTrustProviderTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
