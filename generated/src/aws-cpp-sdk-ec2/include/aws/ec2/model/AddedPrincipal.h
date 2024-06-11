/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/PrincipalType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a principal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AddedPrincipal">AWS
   * API Reference</a></p>
   */
  class AddedPrincipal
  {
  public:
    AWS_EC2_API AddedPrincipal();
    AWS_EC2_API AddedPrincipal(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AddedPrincipal& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of principal.</p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }
    inline AddedPrincipal& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}
    inline AddedPrincipal& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }
    inline AddedPrincipal& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}
    inline AddedPrincipal& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}
    inline AddedPrincipal& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service permission.</p>
     */
    inline const Aws::String& GetServicePermissionId() const{ return m_servicePermissionId; }
    inline bool ServicePermissionIdHasBeenSet() const { return m_servicePermissionIdHasBeenSet; }
    inline void SetServicePermissionId(const Aws::String& value) { m_servicePermissionIdHasBeenSet = true; m_servicePermissionId = value; }
    inline void SetServicePermissionId(Aws::String&& value) { m_servicePermissionIdHasBeenSet = true; m_servicePermissionId = std::move(value); }
    inline void SetServicePermissionId(const char* value) { m_servicePermissionIdHasBeenSet = true; m_servicePermissionId.assign(value); }
    inline AddedPrincipal& WithServicePermissionId(const Aws::String& value) { SetServicePermissionId(value); return *this;}
    inline AddedPrincipal& WithServicePermissionId(Aws::String&& value) { SetServicePermissionId(std::move(value)); return *this;}
    inline AddedPrincipal& WithServicePermissionId(const char* value) { SetServicePermissionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }
    inline AddedPrincipal& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline AddedPrincipal& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline AddedPrincipal& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}
  private:

    PrincipalType m_principalType;
    bool m_principalTypeHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_servicePermissionId;
    bool m_servicePermissionIdHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
