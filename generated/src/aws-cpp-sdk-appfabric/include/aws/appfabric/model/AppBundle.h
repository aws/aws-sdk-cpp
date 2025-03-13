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
    AWS_APPFABRIC_API AppBundle() = default;
    AWS_APPFABRIC_API AppBundle(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API AppBundle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AppBundle& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Key Management Service (KMS) key used
     * to encrypt the application data.</p>
     */
    inline const Aws::String& GetCustomerManagedKeyArn() const { return m_customerManagedKeyArn; }
    inline bool CustomerManagedKeyArnHasBeenSet() const { return m_customerManagedKeyArnHasBeenSet; }
    template<typename CustomerManagedKeyArnT = Aws::String>
    void SetCustomerManagedKeyArn(CustomerManagedKeyArnT&& value) { m_customerManagedKeyArnHasBeenSet = true; m_customerManagedKeyArn = std::forward<CustomerManagedKeyArnT>(value); }
    template<typename CustomerManagedKeyArnT = Aws::String>
    AppBundle& WithCustomerManagedKeyArn(CustomerManagedKeyArnT&& value) { SetCustomerManagedKeyArn(std::forward<CustomerManagedKeyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_customerManagedKeyArn;
    bool m_customerManagedKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
