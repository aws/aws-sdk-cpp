/**
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
    AWS_CLEANROOMS_API MembershipProtectedQueryResultConfiguration();
    AWS_CLEANROOMS_API MembershipProtectedQueryResultConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MembershipProtectedQueryResultConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration for protected query results.</p>
     */
    inline const MembershipProtectedQueryOutputConfiguration& GetOutputConfiguration() const{ return m_outputConfiguration; }

    /**
     * <p>Configuration for protected query results.</p>
     */
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }

    /**
     * <p>Configuration for protected query results.</p>
     */
    inline void SetOutputConfiguration(const MembershipProtectedQueryOutputConfiguration& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = value; }

    /**
     * <p>Configuration for protected query results.</p>
     */
    inline void SetOutputConfiguration(MembershipProtectedQueryOutputConfiguration&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::move(value); }

    /**
     * <p>Configuration for protected query results.</p>
     */
    inline MembershipProtectedQueryResultConfiguration& WithOutputConfiguration(const MembershipProtectedQueryOutputConfiguration& value) { SetOutputConfiguration(value); return *this;}

    /**
     * <p>Configuration for protected query results.</p>
     */
    inline MembershipProtectedQueryResultConfiguration& WithOutputConfiguration(MembershipProtectedQueryOutputConfiguration&& value) { SetOutputConfiguration(std::move(value)); return *this;}


    /**
     * <p>The unique ARN for an IAM role that is used by Clean Rooms to write protected
     * query results to the result location, given by the member who can receive
     * results.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The unique ARN for an IAM role that is used by Clean Rooms to write protected
     * query results to the result location, given by the member who can receive
     * results.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The unique ARN for an IAM role that is used by Clean Rooms to write protected
     * query results to the result location, given by the member who can receive
     * results.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The unique ARN for an IAM role that is used by Clean Rooms to write protected
     * query results to the result location, given by the member who can receive
     * results.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The unique ARN for an IAM role that is used by Clean Rooms to write protected
     * query results to the result location, given by the member who can receive
     * results.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The unique ARN for an IAM role that is used by Clean Rooms to write protected
     * query results to the result location, given by the member who can receive
     * results.</p>
     */
    inline MembershipProtectedQueryResultConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The unique ARN for an IAM role that is used by Clean Rooms to write protected
     * query results to the result location, given by the member who can receive
     * results.</p>
     */
    inline MembershipProtectedQueryResultConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The unique ARN for an IAM role that is used by Clean Rooms to write protected
     * query results to the result location, given by the member who can receive
     * results.</p>
     */
    inline MembershipProtectedQueryResultConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    MembershipProtectedQueryOutputConfiguration m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
