/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedJobS3OutputConfigurationInput.h>
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
   * <p>Contains configurations for protected job results.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MembershipProtectedJobOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class MembershipProtectedJobOutputConfiguration
  {
  public:
    AWS_CLEANROOMS_API MembershipProtectedJobOutputConfiguration();
    AWS_CLEANROOMS_API MembershipProtectedJobOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MembershipProtectedJobOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the configuration to write the job results to S3.</p>
     */
    inline const ProtectedJobS3OutputConfigurationInput& GetS3() const{ return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    inline void SetS3(const ProtectedJobS3OutputConfigurationInput& value) { m_s3HasBeenSet = true; m_s3 = value; }
    inline void SetS3(ProtectedJobS3OutputConfigurationInput&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }
    inline MembershipProtectedJobOutputConfiguration& WithS3(const ProtectedJobS3OutputConfigurationInput& value) { SetS3(value); return *this;}
    inline MembershipProtectedJobOutputConfiguration& WithS3(ProtectedJobS3OutputConfigurationInput&& value) { SetS3(std::move(value)); return *this;}
    ///@}
  private:

    ProtectedJobS3OutputConfigurationInput m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
