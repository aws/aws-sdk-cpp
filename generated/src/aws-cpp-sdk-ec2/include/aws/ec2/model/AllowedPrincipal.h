/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/PrincipalType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllowedPrincipal">AWS
   * API Reference</a></p>
   */
  class AllowedPrincipal
  {
  public:
    AWS_EC2_API AllowedPrincipal();
    AWS_EC2_API AllowedPrincipal(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AllowedPrincipal& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of principal.</p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }

    /**
     * <p>The type of principal.</p>
     */
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }

    /**
     * <p>The type of principal.</p>
     */
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }

    /**
     * <p>The type of principal.</p>
     */
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }

    /**
     * <p>The type of principal.</p>
     */
    inline AllowedPrincipal& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}

    /**
     * <p>The type of principal.</p>
     */
    inline AllowedPrincipal& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline AllowedPrincipal& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline AllowedPrincipal& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the principal.</p>
     */
    inline AllowedPrincipal& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}


    /**
     * <p>The ID of the service permission.</p>
     */
    inline const Aws::String& GetServicePermissionId() const{ return m_servicePermissionId; }

    /**
     * <p>The ID of the service permission.</p>
     */
    inline bool ServicePermissionIdHasBeenSet() const { return m_servicePermissionIdHasBeenSet; }

    /**
     * <p>The ID of the service permission.</p>
     */
    inline void SetServicePermissionId(const Aws::String& value) { m_servicePermissionIdHasBeenSet = true; m_servicePermissionId = value; }

    /**
     * <p>The ID of the service permission.</p>
     */
    inline void SetServicePermissionId(Aws::String&& value) { m_servicePermissionIdHasBeenSet = true; m_servicePermissionId = std::move(value); }

    /**
     * <p>The ID of the service permission.</p>
     */
    inline void SetServicePermissionId(const char* value) { m_servicePermissionIdHasBeenSet = true; m_servicePermissionId.assign(value); }

    /**
     * <p>The ID of the service permission.</p>
     */
    inline AllowedPrincipal& WithServicePermissionId(const Aws::String& value) { SetServicePermissionId(value); return *this;}

    /**
     * <p>The ID of the service permission.</p>
     */
    inline AllowedPrincipal& WithServicePermissionId(Aws::String&& value) { SetServicePermissionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service permission.</p>
     */
    inline AllowedPrincipal& WithServicePermissionId(const char* value) { SetServicePermissionId(value); return *this;}


    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags.</p>
     */
    inline AllowedPrincipal& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline AllowedPrincipal& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline AllowedPrincipal& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline AllowedPrincipal& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the service.</p>
     */
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline AllowedPrincipal& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline AllowedPrincipal& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline AllowedPrincipal& WithServiceId(const char* value) { SetServiceId(value); return *this;}

  private:

    PrincipalType m_principalType;
    bool m_principalTypeHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_servicePermissionId;
    bool m_servicePermissionIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
