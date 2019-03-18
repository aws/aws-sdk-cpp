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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/KeyValuePair.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>An object representing a container instance or task attachment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Attachment">AWS API
   * Reference</a></p>
   */
  class AWS_ECS_API Attachment
  {
  public:
    Attachment();
    Attachment(Aws::Utils::Json::JsonView jsonValue);
    Attachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the attachment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the attachment.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the attachment.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the attachment.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the attachment.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the attachment.</p>
     */
    inline Attachment& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the attachment.</p>
     */
    inline Attachment& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the attachment.</p>
     */
    inline Attachment& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of the attachment, such as <code>ElasticNetworkInterface</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the attachment, such as <code>ElasticNetworkInterface</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the attachment, such as <code>ElasticNetworkInterface</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the attachment, such as <code>ElasticNetworkInterface</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the attachment, such as <code>ElasticNetworkInterface</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the attachment, such as <code>ElasticNetworkInterface</code>.</p>
     */
    inline Attachment& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the attachment, such as <code>ElasticNetworkInterface</code>.</p>
     */
    inline Attachment& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the attachment, such as <code>ElasticNetworkInterface</code>.</p>
     */
    inline Attachment& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p> The status of the attachment. Valid values are <code>PRECREATED</code>,
     * <code>CREATED</code>, <code>ATTACHING</code>, <code>ATTACHED</code>,
     * <code>DETACHING</code>, <code>DETACHED</code>, and <code>DELETED</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the attachment. Valid values are <code>PRECREATED</code>,
     * <code>CREATED</code>, <code>ATTACHING</code>, <code>ATTACHED</code>,
     * <code>DETACHING</code>, <code>DETACHED</code>, and <code>DELETED</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the attachment. Valid values are <code>PRECREATED</code>,
     * <code>CREATED</code>, <code>ATTACHING</code>, <code>ATTACHED</code>,
     * <code>DETACHING</code>, <code>DETACHED</code>, and <code>DELETED</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the attachment. Valid values are <code>PRECREATED</code>,
     * <code>CREATED</code>, <code>ATTACHING</code>, <code>ATTACHED</code>,
     * <code>DETACHING</code>, <code>DETACHED</code>, and <code>DELETED</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the attachment. Valid values are <code>PRECREATED</code>,
     * <code>CREATED</code>, <code>ATTACHING</code>, <code>ATTACHED</code>,
     * <code>DETACHING</code>, <code>DETACHED</code>, and <code>DELETED</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> The status of the attachment. Valid values are <code>PRECREATED</code>,
     * <code>CREATED</code>, <code>ATTACHING</code>, <code>ATTACHED</code>,
     * <code>DETACHING</code>, <code>DETACHED</code>, and <code>DELETED</code>.</p>
     */
    inline Attachment& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the attachment. Valid values are <code>PRECREATED</code>,
     * <code>CREATED</code>, <code>ATTACHING</code>, <code>ATTACHED</code>,
     * <code>DETACHING</code>, <code>DETACHED</code>, and <code>DELETED</code>.</p>
     */
    inline Attachment& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> The status of the attachment. Valid values are <code>PRECREATED</code>,
     * <code>CREATED</code>, <code>ATTACHING</code>, <code>ATTACHED</code>,
     * <code>DETACHING</code>, <code>DETACHED</code>, and <code>DELETED</code>.</p>
     */
    inline Attachment& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Details of the attachment. For elastic network interfaces, this includes the
     * network interface ID, the MAC address, the subnet ID, and the private IPv4
     * address.</p>
     */
    inline const Aws::Vector<KeyValuePair>& GetDetails() const{ return m_details; }

    /**
     * <p>Details of the attachment. For elastic network interfaces, this includes the
     * network interface ID, the MAC address, the subnet ID, and the private IPv4
     * address.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>Details of the attachment. For elastic network interfaces, this includes the
     * network interface ID, the MAC address, the subnet ID, and the private IPv4
     * address.</p>
     */
    inline void SetDetails(const Aws::Vector<KeyValuePair>& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>Details of the attachment. For elastic network interfaces, this includes the
     * network interface ID, the MAC address, the subnet ID, and the private IPv4
     * address.</p>
     */
    inline void SetDetails(Aws::Vector<KeyValuePair>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>Details of the attachment. For elastic network interfaces, this includes the
     * network interface ID, the MAC address, the subnet ID, and the private IPv4
     * address.</p>
     */
    inline Attachment& WithDetails(const Aws::Vector<KeyValuePair>& value) { SetDetails(value); return *this;}

    /**
     * <p>Details of the attachment. For elastic network interfaces, this includes the
     * network interface ID, the MAC address, the subnet ID, and the private IPv4
     * address.</p>
     */
    inline Attachment& WithDetails(Aws::Vector<KeyValuePair>&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>Details of the attachment. For elastic network interfaces, this includes the
     * network interface ID, the MAC address, the subnet ID, and the private IPv4
     * address.</p>
     */
    inline Attachment& AddDetails(const KeyValuePair& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }

    /**
     * <p>Details of the attachment. For elastic network interfaces, this includes the
     * network interface ID, the MAC address, the subnet ID, and the private IPv4
     * address.</p>
     */
    inline Attachment& AddDetails(KeyValuePair&& value) { m_detailsHasBeenSet = true; m_details.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<KeyValuePair> m_details;
    bool m_detailsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
