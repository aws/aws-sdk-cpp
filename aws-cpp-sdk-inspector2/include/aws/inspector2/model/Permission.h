/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Operation.h>
#include <aws/inspector2/model/Service.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Contains information on the permissions an account has within Amazon
   * Inspector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Permission">AWS
   * API Reference</a></p>
   */
  class Permission
  {
  public:
    AWS_INSPECTOR2_API Permission();
    AWS_INSPECTOR2_API Permission(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Permission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operations that can be performed with the given permissions.</p>
     */
    inline const Operation& GetOperation() const{ return m_operation; }

    /**
     * <p>The operations that can be performed with the given permissions.</p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>The operations that can be performed with the given permissions.</p>
     */
    inline void SetOperation(const Operation& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The operations that can be performed with the given permissions.</p>
     */
    inline void SetOperation(Operation&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The operations that can be performed with the given permissions.</p>
     */
    inline Permission& WithOperation(const Operation& value) { SetOperation(value); return *this;}

    /**
     * <p>The operations that can be performed with the given permissions.</p>
     */
    inline Permission& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}


    /**
     * <p>The services that the permissions allow an account to perform the given
     * operations for.</p>
     */
    inline const Service& GetService() const{ return m_service; }

    /**
     * <p>The services that the permissions allow an account to perform the given
     * operations for.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The services that the permissions allow an account to perform the given
     * operations for.</p>
     */
    inline void SetService(const Service& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The services that the permissions allow an account to perform the given
     * operations for.</p>
     */
    inline void SetService(Service&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The services that the permissions allow an account to perform the given
     * operations for.</p>
     */
    inline Permission& WithService(const Service& value) { SetService(value); return *this;}

    /**
     * <p>The services that the permissions allow an account to perform the given
     * operations for.</p>
     */
    inline Permission& WithService(Service&& value) { SetService(std::move(value)); return *this;}

  private:

    Operation m_operation;
    bool m_operationHasBeenSet = false;

    Service m_service;
    bool m_serviceHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
