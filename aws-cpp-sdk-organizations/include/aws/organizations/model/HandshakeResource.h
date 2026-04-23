/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/HandshakeResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/model/HandshakeResource.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains additional data that is needed to process a handshake.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/HandshakeResource">AWS
   * API Reference</a></p>
   */
  class AWS_ORGANIZATIONS_API HandshakeResource
  {
  public:
    HandshakeResource();
    HandshakeResource(Aws::Utils::Json::JsonView jsonValue);
    HandshakeResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The information that is passed to the other party in the handshake. The
     * format of the value string must match the requirements of the specified
     * type.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The information that is passed to the other party in the handshake. The
     * format of the value string must match the requirements of the specified
     * type.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The information that is passed to the other party in the handshake. The
     * format of the value string must match the requirements of the specified
     * type.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The information that is passed to the other party in the handshake. The
     * format of the value string must match the requirements of the specified
     * type.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The information that is passed to the other party in the handshake. The
     * format of the value string must match the requirements of the specified
     * type.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The information that is passed to the other party in the handshake. The
     * format of the value string must match the requirements of the specified
     * type.</p>
     */
    inline HandshakeResource& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The information that is passed to the other party in the handshake. The
     * format of the value string must match the requirements of the specified
     * type.</p>
     */
    inline HandshakeResource& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The information that is passed to the other party in the handshake. The
     * format of the value string must match the requirements of the specified
     * type.</p>
     */
    inline HandshakeResource& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The type of information being passed, specifying how the value is to be
     * interpreted by the other party:</p> <ul> <li> <p> <code>ACCOUNT</code> -
     * Specifies an AWS account ID number.</p> </li> <li> <p> <code>ORGANIZATION</code>
     * - Specifies an organization ID number.</p> </li> <li> <p> <code>EMAIL</code> -
     * Specifies the email address that is associated with the account that receives
     * the handshake. </p> </li> <li> <p> <code>OWNER_EMAIL</code> - Specifies the
     * email address associated with the master account. Included as information about
     * an organization. </p> </li> <li> <p> <code>OWNER_NAME</code> - Specifies the
     * name associated with the master account. Included as information about an
     * organization. </p> </li> <li> <p> <code>NOTES</code> - Additional text provided
     * by the handshake initiator and intended for the recipient to read.</p> </li>
     * </ul>
     */
    inline const HandshakeResourceType& GetType() const{ return m_type; }

    /**
     * <p>The type of information being passed, specifying how the value is to be
     * interpreted by the other party:</p> <ul> <li> <p> <code>ACCOUNT</code> -
     * Specifies an AWS account ID number.</p> </li> <li> <p> <code>ORGANIZATION</code>
     * - Specifies an organization ID number.</p> </li> <li> <p> <code>EMAIL</code> -
     * Specifies the email address that is associated with the account that receives
     * the handshake. </p> </li> <li> <p> <code>OWNER_EMAIL</code> - Specifies the
     * email address associated with the master account. Included as information about
     * an organization. </p> </li> <li> <p> <code>OWNER_NAME</code> - Specifies the
     * name associated with the master account. Included as information about an
     * organization. </p> </li> <li> <p> <code>NOTES</code> - Additional text provided
     * by the handshake initiator and intended for the recipient to read.</p> </li>
     * </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of information being passed, specifying how the value is to be
     * interpreted by the other party:</p> <ul> <li> <p> <code>ACCOUNT</code> -
     * Specifies an AWS account ID number.</p> </li> <li> <p> <code>ORGANIZATION</code>
     * - Specifies an organization ID number.</p> </li> <li> <p> <code>EMAIL</code> -
     * Specifies the email address that is associated with the account that receives
     * the handshake. </p> </li> <li> <p> <code>OWNER_EMAIL</code> - Specifies the
     * email address associated with the master account. Included as information about
     * an organization. </p> </li> <li> <p> <code>OWNER_NAME</code> - Specifies the
     * name associated with the master account. Included as information about an
     * organization. </p> </li> <li> <p> <code>NOTES</code> - Additional text provided
     * by the handshake initiator and intended for the recipient to read.</p> </li>
     * </ul>
     */
    inline void SetType(const HandshakeResourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of information being passed, specifying how the value is to be
     * interpreted by the other party:</p> <ul> <li> <p> <code>ACCOUNT</code> -
     * Specifies an AWS account ID number.</p> </li> <li> <p> <code>ORGANIZATION</code>
     * - Specifies an organization ID number.</p> </li> <li> <p> <code>EMAIL</code> -
     * Specifies the email address that is associated with the account that receives
     * the handshake. </p> </li> <li> <p> <code>OWNER_EMAIL</code> - Specifies the
     * email address associated with the master account. Included as information about
     * an organization. </p> </li> <li> <p> <code>OWNER_NAME</code> - Specifies the
     * name associated with the master account. Included as information about an
     * organization. </p> </li> <li> <p> <code>NOTES</code> - Additional text provided
     * by the handshake initiator and intended for the recipient to read.</p> </li>
     * </ul>
     */
    inline void SetType(HandshakeResourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of information being passed, specifying how the value is to be
     * interpreted by the other party:</p> <ul> <li> <p> <code>ACCOUNT</code> -
     * Specifies an AWS account ID number.</p> </li> <li> <p> <code>ORGANIZATION</code>
     * - Specifies an organization ID number.</p> </li> <li> <p> <code>EMAIL</code> -
     * Specifies the email address that is associated with the account that receives
     * the handshake. </p> </li> <li> <p> <code>OWNER_EMAIL</code> - Specifies the
     * email address associated with the master account. Included as information about
     * an organization. </p> </li> <li> <p> <code>OWNER_NAME</code> - Specifies the
     * name associated with the master account. Included as information about an
     * organization. </p> </li> <li> <p> <code>NOTES</code> - Additional text provided
     * by the handshake initiator and intended for the recipient to read.</p> </li>
     * </ul>
     */
    inline HandshakeResource& WithType(const HandshakeResourceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of information being passed, specifying how the value is to be
     * interpreted by the other party:</p> <ul> <li> <p> <code>ACCOUNT</code> -
     * Specifies an AWS account ID number.</p> </li> <li> <p> <code>ORGANIZATION</code>
     * - Specifies an organization ID number.</p> </li> <li> <p> <code>EMAIL</code> -
     * Specifies the email address that is associated with the account that receives
     * the handshake. </p> </li> <li> <p> <code>OWNER_EMAIL</code> - Specifies the
     * email address associated with the master account. Included as information about
     * an organization. </p> </li> <li> <p> <code>OWNER_NAME</code> - Specifies the
     * name associated with the master account. Included as information about an
     * organization. </p> </li> <li> <p> <code>NOTES</code> - Additional text provided
     * by the handshake initiator and intended for the recipient to read.</p> </li>
     * </ul>
     */
    inline HandshakeResource& WithType(HandshakeResourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>When needed, contains an additional array of <code>HandshakeResource</code>
     * objects.</p>
     */
    inline const Aws::Vector<HandshakeResource>& GetResources() const{ return m_resources; }

    /**
     * <p>When needed, contains an additional array of <code>HandshakeResource</code>
     * objects.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>When needed, contains an additional array of <code>HandshakeResource</code>
     * objects.</p>
     */
    inline void SetResources(const Aws::Vector<HandshakeResource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>When needed, contains an additional array of <code>HandshakeResource</code>
     * objects.</p>
     */
    inline void SetResources(Aws::Vector<HandshakeResource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>When needed, contains an additional array of <code>HandshakeResource</code>
     * objects.</p>
     */
    inline HandshakeResource& WithResources(const Aws::Vector<HandshakeResource>& value) { SetResources(value); return *this;}

    /**
     * <p>When needed, contains an additional array of <code>HandshakeResource</code>
     * objects.</p>
     */
    inline HandshakeResource& WithResources(Aws::Vector<HandshakeResource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>When needed, contains an additional array of <code>HandshakeResource</code>
     * objects.</p>
     */
    inline HandshakeResource& AddResources(const HandshakeResource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>When needed, contains an additional array of <code>HandshakeResource</code>
     * objects.</p>
     */
    inline HandshakeResource& AddResources(HandshakeResource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet;

    HandshakeResourceType m_type;
    bool m_typeHasBeenSet;

    Aws::Vector<HandshakeResource> m_resources;
    bool m_resourcesHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
