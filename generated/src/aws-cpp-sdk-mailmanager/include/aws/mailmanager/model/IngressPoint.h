/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/IngressPointStatus.h>
#include <aws/mailmanager/model/IngressPointType.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The structure of an ingress endpoint resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressPoint">AWS
   * API Reference</a></p>
   */
  class IngressPoint
  {
  public:
    AWS_MAILMANAGER_API IngressPoint() = default;
    AWS_MAILMANAGER_API IngressPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A user friendly name for the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetIngressPointName() const { return m_ingressPointName; }
    inline bool IngressPointNameHasBeenSet() const { return m_ingressPointNameHasBeenSet; }
    template<typename IngressPointNameT = Aws::String>
    void SetIngressPointName(IngressPointNameT&& value) { m_ingressPointNameHasBeenSet = true; m_ingressPointName = std::forward<IngressPointNameT>(value); }
    template<typename IngressPointNameT = Aws::String>
    IngressPoint& WithIngressPointName(IngressPointNameT&& value) { SetIngressPointName(std::forward<IngressPointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetIngressPointId() const { return m_ingressPointId; }
    inline bool IngressPointIdHasBeenSet() const { return m_ingressPointIdHasBeenSet; }
    template<typename IngressPointIdT = Aws::String>
    void SetIngressPointId(IngressPointIdT&& value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId = std::forward<IngressPointIdT>(value); }
    template<typename IngressPointIdT = Aws::String>
    IngressPoint& WithIngressPointId(IngressPointIdT&& value) { SetIngressPointId(std::forward<IngressPointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the ingress endpoint resource.</p>
     */
    inline IngressPointStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(IngressPointStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline IngressPoint& WithStatus(IngressPointStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of ingress endpoint resource.</p>
     */
    inline IngressPointType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(IngressPointType value) { m_typeHasBeenSet = true; m_type = value; }
    inline IngressPoint& WithType(IngressPointType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The DNS A Record that identifies your ingress endpoint. Configure your DNS
     * Mail Exchange (MX) record with this value to route emails to Mail Manager. </p>
     */
    inline const Aws::String& GetARecord() const { return m_aRecord; }
    inline bool ARecordHasBeenSet() const { return m_aRecordHasBeenSet; }
    template<typename ARecordT = Aws::String>
    void SetARecord(ARecordT&& value) { m_aRecordHasBeenSet = true; m_aRecord = std::forward<ARecordT>(value); }
    template<typename ARecordT = Aws::String>
    IngressPoint& WithARecord(ARecordT&& value) { SetARecord(std::forward<ARecordT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ingressPointName;
    bool m_ingressPointNameHasBeenSet = false;

    Aws::String m_ingressPointId;
    bool m_ingressPointIdHasBeenSet = false;

    IngressPointStatus m_status{IngressPointStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    IngressPointType m_type{IngressPointType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_aRecord;
    bool m_aRecordHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
