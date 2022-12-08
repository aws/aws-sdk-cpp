/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53
{
namespace Model
{

  /**
   */
  class CreateCidrCollectionRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API CreateCidrCollectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCidrCollection"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the account that can be used to reference the
     * collection from other API calls.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A unique identifier for the account that can be used to reference the
     * collection from other API calls.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A unique identifier for the account that can be used to reference the
     * collection from other API calls.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A unique identifier for the account that can be used to reference the
     * collection from other API calls.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A unique identifier for the account that can be used to reference the
     * collection from other API calls.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A unique identifier for the account that can be used to reference the
     * collection from other API calls.</p>
     */
    inline CreateCidrCollectionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A unique identifier for the account that can be used to reference the
     * collection from other API calls.</p>
     */
    inline CreateCidrCollectionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the account that can be used to reference the
     * collection from other API calls.</p>
     */
    inline CreateCidrCollectionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A client-specific token that allows requests to be securely retried so that
     * the intended outcome will only occur once, retries receive a similar response,
     * and there are no additional edge cases to handle.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A client-specific token that allows requests to be securely retried so that
     * the intended outcome will only occur once, retries receive a similar response,
     * and there are no additional edge cases to handle.</p>
     */
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

    /**
     * <p>A client-specific token that allows requests to be securely retried so that
     * the intended outcome will only occur once, retries receive a similar response,
     * and there are no additional edge cases to handle.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A client-specific token that allows requests to be securely retried so that
     * the intended outcome will only occur once, retries receive a similar response,
     * and there are no additional edge cases to handle.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

    /**
     * <p>A client-specific token that allows requests to be securely retried so that
     * the intended outcome will only occur once, retries receive a similar response,
     * and there are no additional edge cases to handle.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A client-specific token that allows requests to be securely retried so that
     * the intended outcome will only occur once, retries receive a similar response,
     * and there are no additional edge cases to handle.</p>
     */
    inline CreateCidrCollectionRequest& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A client-specific token that allows requests to be securely retried so that
     * the intended outcome will only occur once, retries receive a similar response,
     * and there are no additional edge cases to handle.</p>
     */
    inline CreateCidrCollectionRequest& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>A client-specific token that allows requests to be securely retried so that
     * the intended outcome will only occur once, retries receive a similar response,
     * and there are no additional edge cases to handle.</p>
     */
    inline CreateCidrCollectionRequest& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
