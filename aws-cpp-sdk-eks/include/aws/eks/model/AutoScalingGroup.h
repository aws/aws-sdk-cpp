/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An Auto Scaling group that is associated with an Amazon EKS managed node
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AutoScalingGroup">AWS
   * API Reference</a></p>
   */
  class AutoScalingGroup
  {
  public:
    AWS_EKS_API AutoScalingGroup();
    AWS_EKS_API AutoScalingGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AutoScalingGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Auto Scaling group associated with an Amazon EKS managed node
     * group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Auto Scaling group associated with an Amazon EKS managed node
     * group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Auto Scaling group associated with an Amazon EKS managed node
     * group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Auto Scaling group associated with an Amazon EKS managed node
     * group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Auto Scaling group associated with an Amazon EKS managed node
     * group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Auto Scaling group associated with an Amazon EKS managed node
     * group.</p>
     */
    inline AutoScalingGroup& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group associated with an Amazon EKS managed node
     * group.</p>
     */
    inline AutoScalingGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group associated with an Amazon EKS managed node
     * group.</p>
     */
    inline AutoScalingGroup& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
