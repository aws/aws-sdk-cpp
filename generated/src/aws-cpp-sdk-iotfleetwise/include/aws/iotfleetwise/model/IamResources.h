﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>The IAM resource that enables Amazon Web Services IoT FleetWise edge agent
   * software to send data to Amazon Timestream. </p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles.html">IAM
   * roles</a> in the <i>Identity and Access Management User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/IamResources">AWS
   * API Reference</a></p>
   */
  class IamResources
  {
  public:
    AWS_IOTFLEETWISE_API IamResources() = default;
    AWS_IOTFLEETWISE_API IamResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API IamResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM resource that allows Amazon Web
     * Services IoT FleetWise to send data to Amazon Timestream. For example,
     * <code>arn:aws:iam::123456789012:role/SERVICE-ROLE-ARN</code>. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    IamResources& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
