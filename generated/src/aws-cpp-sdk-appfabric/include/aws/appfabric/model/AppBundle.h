/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AppFabric
{
namespace Model
{

  /**
   * <p>Contains information about an app bundle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/AppBundle">AWS
   * API Reference</a></p>
   */
  class AppBundle
  {
  public:
    AWS_APPFABRIC_API AppBundle();
    AWS_APPFABRIC_API AppBundle(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API AppBundle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle.</p>
     */
    inline AppBundle& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle.</p>
     */
    inline AppBundle& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle.</p>
     */
    inline AppBundle& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the application data.</p>
     */
    inline const Aws::String& GetCustomerManagedKeyArn() const{ return m_customerManagedKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the application data.</p>
     */
    inline bool CustomerManagedKeyArnHasBeenSet() const { return m_customerManagedKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the application data.</p>
     */
    inline void SetCustomerManagedKeyArn(const Aws::String& value) { m_customerManagedKeyArnHasBeenSet = true; m_customerManagedKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the application data.</p>
     */
    inline void SetCustomerManagedKeyArn(Aws::String&& value) { m_customerManagedKeyArnHasBeenSet = true; m_customerManagedKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the application data.</p>
     */
    inline void SetCustomerManagedKeyArn(const char* value) { m_customerManagedKeyArnHasBeenSet = true; m_customerManagedKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the application data.</p>
     */
    inline AppBundle& WithCustomerManagedKeyArn(const Aws::String& value) { SetCustomerManagedKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the application data.</p>
     */
    inline AppBundle& WithCustomerManagedKeyArn(Aws::String&& value) { SetCustomerManagedKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the application data.</p>
     */
    inline AppBundle& WithCustomerManagedKeyArn(const char* value) { SetCustomerManagedKeyArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_customerManagedKeyArn;
    bool m_customerManagedKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
