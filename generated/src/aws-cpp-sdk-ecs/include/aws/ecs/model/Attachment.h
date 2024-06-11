﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Attachment
  {
  public:
    AWS_ECS_API Attachment();
    AWS_ECS_API Attachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Attachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the attachment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Attachment& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Attachment& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Attachment& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the attachment, such as <code>ElasticNetworkInterface</code>,
     * <code>Service Connect</code>, and <code>AmazonElasticBlockStorage</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline Attachment& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline Attachment& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline Attachment& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the attachment. Valid values are <code>PRECREATED</code>,
     * <code>CREATED</code>, <code>ATTACHING</code>, <code>ATTACHED</code>,
     * <code>DETACHING</code>, <code>DETACHED</code>, <code>DELETED</code>, and
     * <code>FAILED</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline Attachment& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline Attachment& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline Attachment& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the attachment.</p> <p>For elastic network interfaces, this
     * includes the network interface ID, the MAC address, the subnet ID, and the
     * private IPv4 address.</p> <p>For Service Connect services, this includes
     * <code>portName</code>, <code>clientAliases</code>, <code>discoveryName</code>,
     * and <code>ingressPortOverride</code>.</p> <p>For Elastic Block Storage, this
     * includes <code>roleArn</code>, <code>deleteOnTermination</code>,
     * <code>volumeName</code>, <code>volumeId</code>, and <code>statusReason</code>
     * (only when the attachment fails to create or attach).</p>
     */
    inline const Aws::Vector<KeyValuePair>& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const Aws::Vector<KeyValuePair>& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(Aws::Vector<KeyValuePair>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline Attachment& WithDetails(const Aws::Vector<KeyValuePair>& value) { SetDetails(value); return *this;}
    inline Attachment& WithDetails(Aws::Vector<KeyValuePair>&& value) { SetDetails(std::move(value)); return *this;}
    inline Attachment& AddDetails(const KeyValuePair& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }
    inline Attachment& AddDetails(KeyValuePair&& value) { m_detailsHasBeenSet = true; m_details.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
