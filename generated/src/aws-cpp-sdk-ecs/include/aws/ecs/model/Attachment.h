/**
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
    AWS_ECS_API Attachment() = default;
    AWS_ECS_API Attachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Attachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the attachment.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Attachment& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the attachment, such as <code>ElasticNetworkInterface</code>,
     * <code>Service Connect</code>, and <code>AmazonElasticBlockStorage</code>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    Attachment& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the attachment. Valid values are <code>PRECREATED</code>,
     * <code>CREATED</code>, <code>ATTACHING</code>, <code>ATTACHED</code>,
     * <code>DETACHING</code>, <code>DETACHED</code>, <code>DELETED</code>, and
     * <code>FAILED</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Attachment& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
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
    inline const Aws::Vector<KeyValuePair>& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = Aws::Vector<KeyValuePair>>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = Aws::Vector<KeyValuePair>>
    Attachment& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    template<typename DetailsT = KeyValuePair>
    Attachment& AddDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details.emplace_back(std::forward<DetailsT>(value)); return *this; }
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
