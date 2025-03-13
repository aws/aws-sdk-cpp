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
    AWS_EC2_API AddedPrincipal() = default;
    AWS_EC2_API AddedPrincipal(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AddedPrincipal& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of principal.</p>
     */
    inline PrincipalType GetPrincipalType() const { return m_principalType; }
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
    inline void SetPrincipalType(PrincipalType value) { m_principalTypeHasBeenSet = true; m_principalType = value; }
    inline AddedPrincipal& WithPrincipalType(PrincipalType value) { SetPrincipalType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline const Aws::String& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = Aws::String>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::String>
    AddedPrincipal& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service permission.</p>
     */
    inline const Aws::String& GetServicePermissionId() const { return m_servicePermissionId; }
    inline bool ServicePermissionIdHasBeenSet() const { return m_servicePermissionIdHasBeenSet; }
    template<typename ServicePermissionIdT = Aws::String>
    void SetServicePermissionId(ServicePermissionIdT&& value) { m_servicePermissionIdHasBeenSet = true; m_servicePermissionId = std::forward<ServicePermissionIdT>(value); }
    template<typename ServicePermissionIdT = Aws::String>
    AddedPrincipal& WithServicePermissionId(ServicePermissionIdT&& value) { SetServicePermissionId(std::forward<ServicePermissionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    AddedPrincipal& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}
  private:

    PrincipalType m_principalType{PrincipalType::NOT_SET};
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
