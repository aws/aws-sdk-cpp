/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>

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
   * <p>Represents which scan types are automatically enabled for new members of your
   * Amazon Inspector organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AutoEnable">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR2_API AutoEnable
  {
  public:
    AutoEnable();
    AutoEnable(Aws::Utils::Json::JsonView jsonValue);
    AutoEnable& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents whether Amazon EC2 scans are automatically enabled for new members
     * of your Amazon Inspector organization.</p>
     */
    inline bool GetEc2() const{ return m_ec2; }

    /**
     * <p>Represents whether Amazon EC2 scans are automatically enabled for new members
     * of your Amazon Inspector organization.</p>
     */
    inline bool Ec2HasBeenSet() const { return m_ec2HasBeenSet; }

    /**
     * <p>Represents whether Amazon EC2 scans are automatically enabled for new members
     * of your Amazon Inspector organization.</p>
     */
    inline void SetEc2(bool value) { m_ec2HasBeenSet = true; m_ec2 = value; }

    /**
     * <p>Represents whether Amazon EC2 scans are automatically enabled for new members
     * of your Amazon Inspector organization.</p>
     */
    inline AutoEnable& WithEc2(bool value) { SetEc2(value); return *this;}


    /**
     * <p>Represents whether Amazon ECR scans are automatically enabled for new members
     * of your Amazon Inspector organization.</p>
     */
    inline bool GetEcr() const{ return m_ecr; }

    /**
     * <p>Represents whether Amazon ECR scans are automatically enabled for new members
     * of your Amazon Inspector organization.</p>
     */
    inline bool EcrHasBeenSet() const { return m_ecrHasBeenSet; }

    /**
     * <p>Represents whether Amazon ECR scans are automatically enabled for new members
     * of your Amazon Inspector organization.</p>
     */
    inline void SetEcr(bool value) { m_ecrHasBeenSet = true; m_ecr = value; }

    /**
     * <p>Represents whether Amazon ECR scans are automatically enabled for new members
     * of your Amazon Inspector organization.</p>
     */
    inline AutoEnable& WithEcr(bool value) { SetEcr(value); return *this;}

  private:

    bool m_ec2;
    bool m_ec2HasBeenSet;

    bool m_ecr;
    bool m_ecrHasBeenSet;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
