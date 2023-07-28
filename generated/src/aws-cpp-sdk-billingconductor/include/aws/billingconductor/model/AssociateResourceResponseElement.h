﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/AssociateResourceError.h>
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
   * <p>A resource association result for a percentage custom line
   * item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/AssociateResourceResponseElement">AWS
   * API Reference</a></p>
   */
  class AssociateResourceResponseElement
  {
  public:
    AWS_BILLINGCONDUCTOR_API AssociateResourceResponseElement();
    AWS_BILLINGCONDUCTOR_API AssociateResourceResponseElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API AssociateResourceResponseElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource ARN that was associated to the custom line item.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The resource ARN that was associated to the custom line item.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The resource ARN that was associated to the custom line item.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The resource ARN that was associated to the custom line item.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The resource ARN that was associated to the custom line item.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The resource ARN that was associated to the custom line item.</p>
     */
    inline AssociateResourceResponseElement& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The resource ARN that was associated to the custom line item.</p>
     */
    inline AssociateResourceResponseElement& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The resource ARN that was associated to the custom line item.</p>
     */
    inline AssociateResourceResponseElement& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>An <code>AssociateResourceError</code> that will populate if the resource
     * association fails.</p>
     */
    inline const AssociateResourceError& GetError() const{ return m_error; }

    /**
     * <p>An <code>AssociateResourceError</code> that will populate if the resource
     * association fails.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>An <code>AssociateResourceError</code> that will populate if the resource
     * association fails.</p>
     */
    inline void SetError(const AssociateResourceError& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>An <code>AssociateResourceError</code> that will populate if the resource
     * association fails.</p>
     */
    inline void SetError(AssociateResourceError&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>An <code>AssociateResourceError</code> that will populate if the resource
     * association fails.</p>
     */
    inline AssociateResourceResponseElement& WithError(const AssociateResourceError& value) { SetError(value); return *this;}

    /**
     * <p>An <code>AssociateResourceError</code> that will populate if the resource
     * association fails.</p>
     */
    inline AssociateResourceResponseElement& WithError(AssociateResourceError&& value) { SetError(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AssociateResourceError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
