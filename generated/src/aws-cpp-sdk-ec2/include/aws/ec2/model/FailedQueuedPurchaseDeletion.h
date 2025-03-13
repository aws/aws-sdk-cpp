/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/DeleteQueuedReservedInstancesError.h>
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
   * <p>Describes a Reserved Instance whose queued purchase was not
   * deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FailedQueuedPurchaseDeletion">AWS
   * API Reference</a></p>
   */
  class FailedQueuedPurchaseDeletion
  {
  public:
    AWS_EC2_API FailedQueuedPurchaseDeletion() = default;
    AWS_EC2_API FailedQueuedPurchaseDeletion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FailedQueuedPurchaseDeletion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The error.</p>
     */
    inline const DeleteQueuedReservedInstancesError& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = DeleteQueuedReservedInstancesError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = DeleteQueuedReservedInstancesError>
    FailedQueuedPurchaseDeletion& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline const Aws::String& GetReservedInstancesId() const { return m_reservedInstancesId; }
    inline bool ReservedInstancesIdHasBeenSet() const { return m_reservedInstancesIdHasBeenSet; }
    template<typename ReservedInstancesIdT = Aws::String>
    void SetReservedInstancesId(ReservedInstancesIdT&& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = std::forward<ReservedInstancesIdT>(value); }
    template<typename ReservedInstancesIdT = Aws::String>
    FailedQueuedPurchaseDeletion& WithReservedInstancesId(ReservedInstancesIdT&& value) { SetReservedInstancesId(std::forward<ReservedInstancesIdT>(value)); return *this;}
    ///@}
  private:

    DeleteQueuedReservedInstancesError m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_reservedInstancesId;
    bool m_reservedInstancesIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
