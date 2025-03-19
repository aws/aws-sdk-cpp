/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/SubscriberType.h>
#include <aws/ce/model/SubscriberStatus.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The recipient of <code>AnomalySubscription</code> notifications.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/Subscriber">AWS API
   * Reference</a></p>
   */
  class Subscriber
  {
  public:
    AWS_COSTEXPLORER_API Subscriber() = default;
    AWS_COSTEXPLORER_API Subscriber(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Subscriber& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email address or SNS Amazon Resource Name (ARN). This depends on the
     * <code>Type</code>. </p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    Subscriber& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification delivery channel. </p>
     */
    inline SubscriberType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SubscriberType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Subscriber& WithType(SubscriberType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the subscriber accepts the notifications. </p>
     */
    inline SubscriberStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SubscriberStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Subscriber& WithStatus(SubscriberStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    SubscriberType m_type{SubscriberType::NOT_SET};
    bool m_typeHasBeenSet = false;

    SubscriberStatus m_status{SubscriberStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
