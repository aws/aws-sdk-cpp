﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/MembershipProtectedQueryOutputConfiguration.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Contains configurations for protected query results.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MembershipProtectedQueryResultConfiguration">AWS
   * API Reference</a></p>
   */
  class MembershipProtectedQueryResultConfiguration
  {
  public:
    AWS_CLEANROOMS_API MembershipProtectedQueryResultConfiguration() = default;
    AWS_CLEANROOMS_API MembershipProtectedQueryResultConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MembershipProtectedQueryResultConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration for protected query results.</p>
     */
    inline const MembershipProtectedQueryOutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
    template<typename OutputConfigurationT = MembershipProtectedQueryOutputConfiguration>
    void SetOutputConfiguration(OutputConfigurationT&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::forward<OutputConfigurationT>(value); }
    template<typename OutputConfigurationT = MembershipProtectedQueryOutputConfiguration>
    MembershipProtectedQueryResultConfiguration& WithOutputConfiguration(OutputConfigurationT&& value) { SetOutputConfiguration(std::forward<OutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for an IAM role that is used by Clean Rooms to write protected
     * query results to the result location, given by the member who can receive
     * results.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    MembershipProtectedQueryResultConfiguration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    MembershipProtectedQueryOutputConfiguration m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
