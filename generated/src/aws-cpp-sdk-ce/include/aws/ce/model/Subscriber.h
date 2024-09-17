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
    AWS_COSTEXPLORER_API Subscriber();
    AWS_COSTEXPLORER_API Subscriber(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Subscriber& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email address or SNS Amazon Resource Name (ARN). This depends on the
     * <code>Type</code>. </p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline Subscriber& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline Subscriber& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline Subscriber& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification delivery channel. </p>
     */
    inline const SubscriberType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SubscriberType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SubscriberType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Subscriber& WithType(const SubscriberType& value) { SetType(value); return *this;}
    inline Subscriber& WithType(SubscriberType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the subscriber accepts the notifications. </p>
     */
    inline const SubscriberStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SubscriberStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SubscriberStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Subscriber& WithStatus(const SubscriberStatus& value) { SetStatus(value); return *this;}
    inline Subscriber& WithStatus(SubscriberStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    SubscriberType m_type;
    bool m_typeHasBeenSet = false;

    SubscriberStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
