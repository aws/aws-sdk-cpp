/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/AssociateResourceErrorReason.h>
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
namespace BillingConductor
{
namespace Model
{

  /**
   * <p> A representation of a resource association error. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/AssociateResourceError">AWS
   * API Reference</a></p>
   */
  class AssociateResourceError
  {
  public:
    AWS_BILLINGCONDUCTOR_API AssociateResourceError();
    AWS_BILLINGCONDUCTOR_API AssociateResourceError(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API AssociateResourceError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The reason why the resource association failed. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p> The reason why the resource association failed. </p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p> The reason why the resource association failed. </p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p> The reason why the resource association failed. </p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p> The reason why the resource association failed. </p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p> The reason why the resource association failed. </p>
     */
    inline AssociateResourceError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p> The reason why the resource association failed. </p>
     */
    inline AssociateResourceError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p> The reason why the resource association failed. </p>
     */
    inline AssociateResourceError& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p> A static error code that's used to classify the type of failure. </p>
     */
    inline const AssociateResourceErrorReason& GetReason() const{ return m_reason; }

    /**
     * <p> A static error code that's used to classify the type of failure. </p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p> A static error code that's used to classify the type of failure. </p>
     */
    inline void SetReason(const AssociateResourceErrorReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p> A static error code that's used to classify the type of failure. </p>
     */
    inline void SetReason(AssociateResourceErrorReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p> A static error code that's used to classify the type of failure. </p>
     */
    inline AssociateResourceError& WithReason(const AssociateResourceErrorReason& value) { SetReason(value); return *this;}

    /**
     * <p> A static error code that's used to classify the type of failure. </p>
     */
    inline AssociateResourceError& WithReason(AssociateResourceErrorReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    AssociateResourceErrorReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
