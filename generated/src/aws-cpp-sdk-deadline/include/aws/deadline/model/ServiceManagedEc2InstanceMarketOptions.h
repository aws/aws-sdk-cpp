/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/Ec2MarketType.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details of the Amazon EC2 instance market options for a service managed
   * fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ServiceManagedEc2InstanceMarketOptions">AWS
   * API Reference</a></p>
   */
  class ServiceManagedEc2InstanceMarketOptions
  {
  public:
    AWS_DEADLINE_API ServiceManagedEc2InstanceMarketOptions();
    AWS_DEADLINE_API ServiceManagedEc2InstanceMarketOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API ServiceManagedEc2InstanceMarketOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon EC2 instance type.</p>
     */
    inline const Ec2MarketType& GetType() const{ return m_type; }

    /**
     * <p>The Amazon EC2 instance type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The Amazon EC2 instance type.</p>
     */
    inline void SetType(const Ec2MarketType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The Amazon EC2 instance type.</p>
     */
    inline void SetType(Ec2MarketType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The Amazon EC2 instance type.</p>
     */
    inline ServiceManagedEc2InstanceMarketOptions& WithType(const Ec2MarketType& value) { SetType(value); return *this;}

    /**
     * <p>The Amazon EC2 instance type.</p>
     */
    inline ServiceManagedEc2InstanceMarketOptions& WithType(Ec2MarketType&& value) { SetType(std::move(value)); return *this;}

  private:

    Ec2MarketType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
